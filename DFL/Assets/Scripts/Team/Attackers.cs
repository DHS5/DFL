using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Attackers : MonoBehaviour
{
    [Tooltip("")]
    [HideInInspector] public TeamManager teamManager;

    
    protected NavMeshAgent navMeshAgent;
    [HideInInspector] public GameObject player;

    [HideInInspector] public float playerProtectionRadius;
    
    
    [HideInInspector] public bool hasDefender = false;

    [HideInInspector] public GameObject target;


    private void Start()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
    }


    public virtual void TargetEnemy(GameObject enemy)
    {
        if (hasDefender)
        {
            teamManager.AddEnemy(target);
        }
        teamManager.SuppEnemy(enemy);
        hasDefender = true;
        target = enemy;
        BlockEnemy();
    }

    protected virtual void UnTarget()
    {
        hasDefender = false;
        teamManager.AddEnemy(target);
        teamManager.FreeAttacker(gameObject);
    }

    protected virtual void BlockEnemy()
    {

    }
}
