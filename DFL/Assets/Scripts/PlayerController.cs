using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Gives the user control of the player
/// The user can accelerate, decelerate, go on the sides and look on the sides (without changing the running orientation)
/// </summary>
public class PlayerController : MonoBehaviour
{
    [Tooltip("Body of the player")]
    [SerializeField]  private GameObject playerBody;

    [Tooltip("Camera attached to the player")]
    [SerializeField] private GameObject playerCamera;

    [Tooltip("Velocity of the player")]
    private Vector3 velocity;

    [Tooltip("Forward speed of the player")]
    [SerializeField] private float speed = 10f;

    [Tooltip("Side speed multiplier of the player")]
    [SerializeField] private float sideSpeedM = 5f;
    /// <summary>
    /// Side speed of the player
    /// </summary>
    private float SideSpeed
    {
        get { return Input.GetAxis("Horizontal") * sideSpeedM; }
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
            float acc = Input.GetAxis("Vertical");
            if (acc <= 0) return acc * accelerationM;
            else
            {
                if (canAccelerate) { Invoke(nameof(CantAccelerate), 2f); return acc * accelerationM; }
                else return 0;
            }
        }
        set { accelerationM = value; }
    }

    [Tooltip("Is the player able to accelerate")]
    private bool canAccelerate = true;

    /// <summary>
    /// Disable the player's acceleration during 10 seconds
    /// </summary>
    private void CantAccelerate()
    {
        canAccelerate = false;

        // Calls the CanAccelerate Method after 10 seconds
        Invoke(nameof(CanAccelerate), 10f);
    }
    /// <summary>
    /// Enable the player's acceleration
    /// </summary>
    private void CanAccelerate()
    {
        canAccelerate = true;
    }

    /// <summary>
    /// Called on the player's creation
    /// </summary>
    void Start()
    {

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
        transform.Translate(velocity);
    }
}
