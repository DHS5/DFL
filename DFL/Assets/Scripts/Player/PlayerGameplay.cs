using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls the gameplay of the player
/// </summary>
public class PlayerGameplay : MonoBehaviour
{
    [Tooltip("Singleton Instance of the GameManager")]
    [SerializeField] private GameManager gameManager;


    [Tooltip("Whether the player is in a zone where he's chasable")]
    [HideInInspector] public bool isChasable = false;

    [Tooltip("Whether the player is invincible (bonus)")]
    [HideInInspector] public bool isInvincible = false;

    /// <summary>
    /// Called when the player collide with a trigger
    /// </summary>
    /// <param name="other">Collider of the trigger</param>
    private void OnTriggerEnter(Collider other)
    {
        // When the player enter the tunnel --> Generates a new field
        if (other.gameObject.CompareTag("TunnelEnter"))
        {
            // Deactivates the trigger (prevent from triggering several times)
            other.gameObject.SetActive(false);
            // Makes the player unchasable
            isChasable = false;

            gameManager.TunnelEnter();
        }

        // When the player quits the tunnel --> Destroys the former field
        if (other.gameObject.CompareTag("TunnelExit"))
        {
            // Deactivates the trigger (prevent from triggering several times)
            other.gameObject.SetActive(false);
            // Makes the player chasable
            isChasable = true;

            gameManager.TunnelExit();
        }
    }
    /// <summary>
    /// Called when the player collide with a colliding object
    /// </summary>
    /// <param name="collision">Collider of the colliding object</param>
    private void OnCollisionEnter(Collision collision)
    {
        // When the player collides with an enemy --> game over
        if (collision.gameObject.CompareTag("Enemy"))
        {
            Debug.Log("Dead by enemy");
            gameManager.gameOver = true;

        }
        // When the player collides with an obstacle --> game over
        if (collision.gameObject.CompareTag("Obstacle"))
        {
            Debug.Log("Dead by obstacle");
            gameManager.gameOver = true;
        }
    }

    /// <summary>
    /// 
    /// </summary>
    private void Awake()
    {
        
    }
}
