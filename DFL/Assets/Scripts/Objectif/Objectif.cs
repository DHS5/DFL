using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objectif : MonoBehaviour
{
    [Tooltip("Objectif Manager of the game")]
    [HideInInspector] public ObjectifManager objectifManager;


    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other);
        if (other.gameObject.CompareTag("Player"))
        {
            objectifManager.NextObj();
        }
    }
}
