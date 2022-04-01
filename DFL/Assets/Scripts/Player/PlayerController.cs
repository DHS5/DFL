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
    [Header("Useful scripts")]
    [Tooltip("Controls the gameplay of the player")]
    private PlayerGameplay playerGameplay;
    [Tooltip("Animator script of the camera")]
    [SerializeField] CameraAnimator cameraAnimator;


    [Tooltip("Whether the player is freezed")]
    [HideInInspector] public bool freeze = true;


    [Header("Useful game objects")]
    [Tooltip("Body of the player")]
    [SerializeField]  private GameObject playerBody;
    [Tooltip("Camera attached to the player")]
    [SerializeField] private GameObject playerCamera;
    [Tooltip("Rigidbody of the player")]
    private Rigidbody playerRigidbody;

    

    [Tooltip("Velocity of the player")]
    [HideInInspector] public Vector3 velocity;
    [Header("Controller variables of the player")]
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
            if (!freeze && playerGameplay.isChasable)
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

    [Tooltip("Whether the player can jump")]
    private bool canJump = true;
    [Tooltip("Vector3 containing the jump's power")]
    private Vector3 jumpPower;
    [Tooltip("Height the player is reaching when jumping")]
    [SerializeField] private float jumpHeight;
    [Tooltip("Gravity multiplier")]
    private float gravityScale = 10f;


    // Bonus attribute of the player (changed by the bonus)
    [HideInInspector] public float bonusSpeed = 0f;

    [HideInInspector] public Vector3 bonusJump = new Vector3(0,0,0);

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
    /// Makes the player jump
    /// </summary>
    private void Jump()
    {
        canJump = false;
        playerRigidbody.AddForce(jumpPower, ForceMode.Impulse);
    }


    /// <summary>
    /// Detects a collision with the ground to know if the player can jump
    /// </summary>
    /// <param name="collision">Collider of the colliding game object</param>
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
            canJump = true;
    }

    /// <summary>
    /// Update the physics parameters
    /// </summary>
    private void Update()
    {
        velocity = Vector3.forward * (speed + Acceleration) * Time.deltaTime + Vector3.right * SideSpeed * Time.deltaTime;
        if (!playerGameplay.isChasable) velocity *= 2;
    }


    /// <summary>
    /// Update the player's movements
    /// </summary>
    void LateUpdate()
    {
        if (!freeze)
        {
            // Makes the player run
            transform.Translate(velocity);

            // Makes the player jump
            if (Input.GetKeyDown(KeyCode.Space) && canJump)
            {
                canJump = false;
                Jump();
            }
        }        
    }


    /// <summary>
    /// Keeps the gravity scale the same given the FPS
    /// </summary>
    private void FixedUpdate()
    {
        // Increase the gravity
        playerRigidbody.AddForce(Physics.gravity * gravityScale);
    }


    private void Start()
    {
        playerGameplay = GetComponent<PlayerGameplay>();
        playerRigidbody = GetComponent<Rigidbody>();

        // Calculates the jump power to reach a precise height
        jumpPower = new Vector3(0, Mathf.Sqrt(jumpHeight * -2 * (Physics.gravity.y * gravityScale)), 0);
    }
}
