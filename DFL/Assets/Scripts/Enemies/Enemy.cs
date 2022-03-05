using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

/// <summary>
/// Abstract class defining the base methods and properties of an enemy
/// </summary>
public abstract class Enemy : MonoBehaviour
{
    [Tooltip("Game Object of the enemy")]
    public GameObject enemy;

    //[Tooltip("Singleton Instance of the GameManager")]
    //private GameManager gameManager = GameManager.InstanceGameManager;

    [Tooltip("Nav Mesh Agent of the enemy")]
    [SerializeField] protected NavMeshAgent navMeshAgent;
    [Tooltip("Game Object of the player")]
    [SerializeField] protected GameObject player;

    [Tooltip("Level of intelligence of the enemy (anticipation of the future position)")]
    [SerializeField] protected int intelligence;
    [Tooltip("Level of reactivity of the enemy (time between new destination's settings)")]
    [SerializeField] protected float reactivity;
    [Tooltip("Reactivity multiplier")] 
    private float reactivityM;
    [Tooltip("Attack speed multiplier")]
    [SerializeField] protected float attackSpeedM;
    [Tooltip("Whether the enemy is in attack speed")]
    private bool attackSpeed = false;

    [Tooltip("Radius around the enemy in which the player gets the enemy's attention")]
    [SerializeField] protected float attentionRadius;
    [Tooltip("Radius around the enemy in which the player activates the enemy's chase")]
    [SerializeField] protected float chaseRadius;
    [Tooltip("Radius around the enemy in which the player activates the enemy's attack")]
    [SerializeField] protected float attackRadius;

    [Tooltip("Size of the enemy")]
    [SerializeField] protected float size;
    public float Size
    {
        get { return size; }
        set
        {
            size = value;
            enemy.transform.localScale *= size;
        }
    }

    [Tooltip("Destination of the enemy (on the nav mesh)")]
    protected Vector3 destination;

    /// <summary>
    /// Stops the enemy
    /// </summary>
    public void Stop()
    {
        navMeshAgent.isStopped = true;
    }
    /// <summary>
    /// Resumes the enemy
    /// </summary>
    public void Resume()
    {
        navMeshAgent.isStopped = false;
    }


    public void ChasePlayer()
    {
        // Checks if the player is chasable
        if (player.GetComponent<PlayerGameplay>().isChasable)
        {
            // Gets the player's position
            Vector3 playerPosition = player.transform.position;
            // Gets the player's direction
            Vector3 playerDirection = player.transform.forward.normalized;
            // Gets the direction to the player
            Vector3 toPlayerDirection = (playerPosition - transform.position).normalized;
            // Gets the distance between the player and the enemy
            float distance = Vector3.Distance(playerPosition, transform.position);

            // Sets the reactivity time to normal
            reactivityM = 1f;

            // If the player is in the attention radius
            if (distance <= attentionRadius)
            {
                // Gets the angle between the enemy's and the player's directions
                float toPlayerAngle = Vector3.Angle(transform.forward, toPlayerDirection);

                // If the enemy is close enough --> go directly to the player
                if (distance <= chaseRadius || toPlayerAngle > 90)
                {
                    destination = player.transform.position;
                    // Increase the reactivity time
                    reactivityM = 0.5f;
                    // If the enemy is in position to attack
                    if (distance <= attackRadius)
                    {
                        if (!attackSpeed)
                        {
                            // Increase the speed
                            attackSpeed = true;
                            navMeshAgent.speed *= attackSpeedM;
                            Invoke(nameof(NormalSpeed), 0.1f * attackRadius);
                        }
                        // Sets the reactivity time to 0
                        reactivityM = 0f;
                    }
                }

                // The enemy tries to anticipate the player's future position given his intelligence
                else
                    destination = playerPosition + playerDirection * intelligence;


                // Sets the agent's destination
                navMeshAgent.SetDestination(destination);
            }

            // Invoke recursively the method given the enemy's reactivity
            Invoke(nameof(ChasePlayer), reactivity * reactivityM);
        }
    }

    /// <summary>
    /// Method to get the attack speed back to normal
    /// </summary>
    private void NormalSpeed() { navMeshAgent.speed /= attackSpeedM; attackSpeed = false; }

    /// <summary>
    /// Gets the player Game Object
    /// </summary>
    protected void Awake()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }
}
