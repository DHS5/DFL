using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

/// <summary>
/// Manages the animations of the camera
/// </summary>
public class CameraAnimator : MonoBehaviour
{
    
    Animation cameraAnimation;
    [Header("Animations")]
    [Tooltip("Animation Run")]
    [SerializeField] AnimationClip runAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip sprintAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip jukeRightAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip jukeLeftAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip spinRightAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip spinLeftAnim;

    [Header("Post Processing")]
    [Tooltip("Post-Processing effect of the acceleration")]
    [SerializeField] private GameObject cameraAccPostProcess;
    private Volume accPPVolume;


    [HideInInspector] public bool isJuking = false;
    [HideInInspector] public float jukeSpeed = 0;
    private bool isDefault = true;
    private bool isSprinting = false;
    [HideInInspector] public bool isSpining = false;


    /// <summary>
    /// Plays the default run animation
    /// </summary>
    public void DefaultAnim()
    {
        if (!isDefault && !isSpining)
        {
            isJuking = false;
            isSprinting = false;
            isSpining = false;
            isDefault = true;
            jukeSpeed = 0f;
            cameraAnimation.clip = runAnim;
            cameraAnimation.Play();
        }
    }

    /// <summary>
    /// Plays the juke animation on the side given by dir
    /// </summary>
    /// <param name="dir">Direction of the juke (-1 : left / 1 : right)</param>
    public void Juke(float dir)
    {
        if (!isJuking && jukeSpeed * dir <= 0 && !isSpining)
        {
            jukeSpeed = dir;
            isJuking = true;
            isDefault = false;

            cameraAnimation.clip = (dir > 0 ? jukeRightAnim : jukeLeftAnim);
            cameraAnimation.Play();

            float animTime = cameraAnimation.clip.length;
            Invoke(nameof(DefaultAnim), animTime);
        }
    }

    /// <summary>
    /// Plays the sprint animation
    /// </summary>
    public void Sprint()
    {
        accPPVolume.weight = Mathf.Lerp(cameraAccPostProcess.GetComponent<Volume>().weight, 1, 0.005f);
        if (!isSprinting)
        {
            isDefault = false;
            isSprinting = true;
            cameraAnimation.clip = sprintAnim;
            cameraAnimation.Play();
        }
    }

    /// <summary>
    /// Ends the sprint animation
    /// </summary>
    public void EndSprint()
    {
        if (accPPVolume.weight > 0.01f)
            accPPVolume.weight = Mathf.Lerp(cameraAccPostProcess.GetComponent<Volume>().weight, 0, 0.01f);

        if (isSprinting)
        {
            isSprinting = false;
            DefaultAnim();
        }
    }

    public void Spin(float dir)
    {
        if (!isSpining)
        {
            Debug.Log("Spin");
            isSpining = true;
            isDefault = false;

            cameraAnimation.clip = (dir > 0 ? spinRightAnim : spinLeftAnim);
            cameraAnimation.Play();

            float animTime = cameraAnimation.clip.length;
            Invoke(nameof(EndSpin), animTime);
        }
    }
    private void EndSpin()
    {
        isSpining = false;
        DefaultAnim();
    }

    /// <summary>
    /// Gets the animation and the post processing volume
    /// </summary>
    private void Start()
    {
        cameraAnimation = gameObject.GetComponent<Animation>();
        accPPVolume = cameraAccPostProcess.GetComponent<Volume>();
    }
}
