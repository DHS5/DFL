using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

/// <summary>
/// Gives the user control of the player
/// The user can accelerate, decelerate, go on the sides and look on the sides (without changing the running orientation)
/// </summary>
public class PlayerController : MonoBehaviour
{
    [Tooltip("Controls the gameplay of the player")]
    [SerializeField] private PlayerGameplay playerGameplayScript;


    [Tooltip("Whether the player is freezed")]
    public bool freeze = true;
    

    [Tooltip("Body of the player")]
    [SerializeField]  private GameObject playerBody;
    [Tooltip("Camera attached to the player")]
    [SerializeField] private GameObject playerCamera;

    [Tooltip("Post-Processing effect of the acceleration")]
    [SerializeField] private GameObject cameraAccPostProcess;
    private Volume accPPVolume;

    [Tooltip("")]
    [SerializeField] CameraAnimator cameraAnimator;

    [Tooltip("Velocity of the player")]
    private Vector3 velocity;
    [Tooltip("Forward speed of the player")]
    [SerializeField] private float speed = 12f;
    [Tooltip("Side speed multiplier of the player")]
    [SerializeField] private float sideSpeedM = 5f;
    /// <summary>
    /// Side speed of the player
    /// </summary>
    private float SideSpeed
    {
        get
        {
            // Calculate the side speed
            float ss = Input.GetAxis("Horizontal") * sideSpeedM * (speed / (speed + Acceleration));
            // If already juking, prevent a second juke or a juke to the other side immediately
            if (cameraAnimator.isJuking)
            {
                if (cameraAnimator.jukeSpeed >= 0)
                    ss = Mathf.Clamp(ss, 0, Mathf.Abs(ss));
                else ss = Mathf.Clamp(ss, -Mathf.Abs(ss), 0);
            }

            // Juke on a big side speed
            if (Mathf.Abs(ss) > 9) cameraAnimator.Juke(ss);
            // Else juke speed is null
            else cameraAnimator.jukeSpeed = 0;

            // Returns the side speed
            return ss;
        }
        set { sideSpeedM = value; }
    }
    [Tooltip("Acceleration multiplier of the player")]
    [SerializeField] private float accelerationM = 5f;
    /// <summary>
    /// Acceleration of the player (can be negative)
    /// </summary>
    private float Acceleration
    {
        get
        {
            if (!freeze && playerGameplayScript.isChasable)
            {
                float acc = Input.GetAxis("Vertical");
                if (acc <= 0)
                {
                    // No sprint
                    cameraAnimator.EndSprint();
                    // Returns the acceleration
                    return acc * accelerationM;
                }
                else if (canAccelerate)
                {
                    // Deactivates the acceleration
                    Invoke(nameof(CantAccelerate), accelerationTime);
                    // Sprint animation
                    cameraAnimator.Sprint();
                    // Returns the acceleration
                    return acc * accelerationM;
                }
            }
            // No sprint
            cameraAnimator.EndSprint();
            
            return 0;
        }
        set { accelerationM = value; }
    }
    [Tooltip("Is the player able to accelerate")]
    private bool canAccelerate = true;
    [Tooltip("Seconds accelerating")]
    [SerializeField] private float accelerationTime = 3f;
    [Tooltip("Seconds waiting to accelerate")]
    [SerializeField] private float waitToAccelerateTime = 8f;

    /// <summary>
    /// Disable the player's acceleration during waitToAccelerateTime seconds
    /// </summary>
    private void CantAccelerate()
    {
        // Prevent the method of being called several times
        if (canAccelerate)
        {
            canAccelerate = false;

            // Calls the CanAccelerate Method after waitToAccelerateTime seconds
            Invoke(nameof(CanAccelerate), waitToAccelerateTime);
        }
    }
    /// <summary>
    /// Enable the player's acceleration
    /// </summary>
    private void CanAccelerate()
    {
        canAccelerate = true;
    }


    /// <summary>
    /// Update the physics parameters
    /// </summary>
    private void Update()
    {
        velocity = Vector3.forward * (speed + Acceleration) * Time.deltaTime + Vector3.right * SideSpeed * Time.deltaTime;
    }
    /// <summary>
    /// Update the player's movements
    /// </summary>
    void LateUpdate()
    {
        if (!freeze)
            transform.Translate(velocity);
    }

    private void Start()
    {
        accPPVolume = cameraAccPostProcess.GetComponent<Volume>();
    }
}
