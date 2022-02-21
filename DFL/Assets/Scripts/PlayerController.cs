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
    [SerializeField]
    private GameObject playerBody;

    [Tooltip("Camera attached to the player")]
    [SerializeField]
    private GameObject playerCamera;

    [Tooltip("Rigidbody of the player")]
    private Rigidbody playerRigidbody;

    [Tooltip("Velocity of the player")]
    private Vector3 velocity;

    [Tooltip("Horizontal speed of the player")]
    private float speed;

    /// <summary>
    /// Called on the player's creation
    /// </summary>
    void Start()
    {
        // Get the rigidbody component of the player
        playerRigidbody = GetComponent<Rigidbody>();

        speed = 1f;
    }

    private void Update()
    {
        velocity = Vector3.forward * speed * Time.deltaTime;
    }

    // Update is called once per frame
    void LateUpdate()
    {
        playerRigidbody.AddForce(velocity, ForceMode.Force);
    }
}
