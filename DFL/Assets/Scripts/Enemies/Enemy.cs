using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

/// <summary>
/// Abstract class defining the base methods and properties of an enemy
/// </summary>
public abstract class Enemy : MonoBehaviour
{
    [Tooltip("Prefab of the enemy")]
    [SerializeField] protected GameObject enemyPrefab;

    [Tooltip("Nav Mesh Agent of the enemy")]
    [SerializeField] protected NavMeshAgent navMeshAgent;
    [Tooltip("Game Object of the player")]
    [SerializeField] protected GameObject player;

    [Tooltip("Level of intelligence of the enemy")]
    [SerializeField] protected int intelligence;
    [Tooltip("Level of reactivity of the enemy")]
    [SerializeField] protected float reactivity;

    [Tooltip("Radius around the enemy in which the player gets the enemy's attention")]
    [SerializeField] protected float attentionRadius;
    [Tooltip("Radius around the enemy in which the player activates the enemy's chase")]
    [SerializeField] protected float chaseRadius;

    [Tooltip("Size of the enemy")]
    [SerializeField] protected float size;

    [Tooltip("Destination of the enemy (on the nav mesh)")]
    protected Vector3 destination;


    protected void ChasePlayer()
    {
        // Gets the player's position
        Vector3 playerPosition = player.transform.position;
        // Gets the player's direction
        Vector3 playerDirection = player.transform.forward;
        // Gets the direction to the player
        Vector3 toPlayerDirection = playerPosition - transform.position;
        // Gets the distance between the player and the enemy
        float distance = Vector3.Distance(playerPosition, transform.position);
        // Gets the angle between the enemy's and the player's directions
        float toPlayerAngle = Vector3.Angle(transform.forward, toPlayerDirection);

        // If the enemy is close enough --> go directly to the player
        if (distance <= chaseRadius || toPlayerAngle > 90)
            destination = player.transform.position;

        // The enemy tries to anticipate the player's future position given his intelligence
        else
            destination = playerPosition + playerDirection * intelligence;
        
        
        // Sets the agent's destination
        navMeshAgent.SetDestination(destination);
        // Invoke recursively the method given the enemy's reactivity
        Invoke(nameof(ChasePlayer), reactivity);
    }

    /// <summary>
    /// Instantiate the enemy on a semi-random location
    /// </summary>
    protected void Start()
    {
        
    }
}
