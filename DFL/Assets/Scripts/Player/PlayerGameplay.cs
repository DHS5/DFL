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
    
    /// <summary>
    /// Called when the player collide with a trigger
    /// </summary>
    /// <param name="other">Collider of the trigger</param>
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("TunnelEnter"))
        {
            fieldManager.GenerateField();
        }
        if (other.gameObject.CompareTag("TunnelExit"))
        {
            fieldManager.SuppField();
        }
    }
}
