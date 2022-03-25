using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objectif : MonoBehaviour
{
    [Tooltip("Objectif Manager of the game")]
    [HideInInspector] public ObjectifManager objectifManager;


    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            objectifManager.NextObj();
        }
    }
}
