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
    [SerializeField] AnimationClip jukeRightAnim;
    [Tooltip("")]
    [SerializeField] AnimationClip jukeLeftAnim;


    public bool isJuking = false;
    public float jukeSpeed = 0;


    private void DefaultAnim()
    {
        isJuking = false;
        cameraAnimation.clip = runAnim;
        cameraAnimation.Play();
    }

    public void Juke(float dir)
    {
        if (!isJuking && jukeSpeed * dir <= 0)
        {
            jukeSpeed = dir;
            isJuking = true;

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


    private void Start()
    {
        cameraAnimation = gameObject.GetComponent<Animation>();
    }
}
