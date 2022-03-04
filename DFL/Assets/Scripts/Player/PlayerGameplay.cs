using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls the gameplay of the player
/// </summary>
public class PlayerGameplay : MonoBehaviour
{
    [Tooltip("Field Manager of the game")]
    [SerializeField] private FieldManager fieldManager;

    [Tooltip("Enemy Manager of the game")]
    [SerializeField] private EnemiesManager enemiesManager;

    [Tooltip("Whether the player is in a zone where he's chasable")]
    public bool isChasable = true;
    
    /// <summary>
    /// Called when the player collide with a trigger
    /// </summary>
    /// <param name="other">Collider of the trigger</param>
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("TunnelEnter"))
        {
            fieldManager.GenerateField();
            isChasable = false;
        }
        if (other.gameObject.CompareTag("TunnelExit"))
        {
            fieldManager.SuppField();
            isChasable = true;
            enemiesManager.BeginChase();
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            Debug.Log("Dead");
        }
    }
}
