using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Manages the animations of the camera
/// </summary>
public class CameraAnimator : MonoBehaviour
{
    Animation cameraAnimation;
    [Tooltip("")]
    [SerializeField] AnimationClip runAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip sprintAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip jukeRightAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip jukeLeftAnim;


    public bool isJuking = false;
    public float jukeSpeed = 0;
    private bool isDefault = true;
    public bool isSprinting = false;


    public void DefaultAnim()
    {
        if (!isDefault)
        {
            isJuking = false;
            isSprinting = false;
            isDefault = true;
            cameraAnimation.clip = runAnim;
            cameraAnimation.Play();
        }
    }

    public void Juke(float dir)
    {
        if (!isJuking && jukeSpeed * dir <= 0)
        {
            jukeSpeed = dir;
            isJuking = true;
            isDefault = false;

            if (dir > 0)
            {
                cameraAnimation.clip = jukeRightAnim;
                cameraAnimation.Play();
            }
            else if (dir < 0)
            {
                cameraAnimation.clip = jukeLeftAnim;
                cameraAnimation.Play();
            }

            float animTime = cameraAnimation.clip.length;
            Invoke(nameof(DefaultAnim), animTime);
            
        }
        
    }

    public void Sprint()
    {
        if (!isSprinting)
        {
            isDefault = false;
            isSprinting = true;
            cameraAnimation.clip = sprintAnim;
            cameraAnimation.Play();
        }
    }


    private void Start()
    {
        cameraAnimation = gameObject.GetComponent<Animation>();
    }

    private void Update()
    {
        if (!isSprinting && !isJuking && !isDefault)
        {
            isDefault = true;
            cameraAnimation.clip = runAnim;
            cameraAnimation.Play();
        }
    }
}
