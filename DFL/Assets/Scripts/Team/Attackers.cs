using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attackers : MonoBehaviour
{
    [Tooltip("")]
    [HideInInspector] public TeamManager teamManager;
    
    
    [HideInInspector] public bool hasDefender = false;

    [HideInInspector] public GameObject target;


    public void TargetEnemy(GameObject enemy)
    {
        teamManager.SuppEnemy(enemy);
        hasDefender = true;
        target = enemy;
    }
}
