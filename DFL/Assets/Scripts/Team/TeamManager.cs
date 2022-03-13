using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// Manages the team effort of the attackers
/// </summary>
public class TeamManager : MonoBehaviour
{
    [Tooltip("Singleton Instance of the GameManager")]
    private GameManager gameManager;
    [Tooltip("Field Manager of the game")]
    private FieldManager fieldManager;
    [Tooltip("Enemy Manager of the game")]
    private EnemiesManager enemiesManager;

    [Tooltip("")]
    [SerializeField] private GameObject player;


    [Tooltip("List of the team's attackers currently free")]
    private List<GameObject> freeAttackers;
    [Tooltip("List of the team's attackers currently busy")]
    private List<GameObject> busyAttackers;
    [Tooltip("List of the enemies currently not taken care of")]
    [HideInInspector] public List<GameObject> enemies;


    [SerializeField] private float playerProtectionRadius;

    [SerializeField] private float teamReactivity;

    /// <summary>
    /// Gets the GameManager Singleton
    /// </summary>
    private void Awake()
    {
        gameManager = GameManager.InstanceGameManager;
        enemiesManager = gameManager.enemiesManager;
        fieldManager = gameManager.fieldManager;
    }


    /// <summary>
    /// Add an enemy to the enemies list
    /// </summary>
    /// <param name="enemy">Enemy to add to the list</param>
    public void AddEnemy(GameObject enemy)
    {
        enemies.Add(enemy);
    }

    /// <summary>
    /// Supp an enemy from the enemies list
    /// </summary>
    /// <param name="enemy">Enemy to supp from the list</param>
    public void SuppEnemy(GameObject enemy)
    {
        enemies.Remove(enemy);
    }


    private void ProtectPlayer()
    {
        foreach (GameObject e in enemies)
        {
            if (Vector3.Distance(e.transform.position, player.transform.position) < playerProtectionRadius)
            {
                if (freeAttackers.Count > 0)
                {
                    float minDist = float.PositiveInfinity;
                    GameObject betterAttacker = null;
                    foreach (GameObject a in freeAttackers)
                    {
                        if (Vector3.Distance(a.transform.position, e.transform.position) < minDist)
                        {
                            minDist = Vector3.Distance(a.transform.position, e.transform.position);
                            betterAttacker = a;
                        }
                    }
                    betterAttacker.GetComponent<Attackers>().TargetEnemy(e);
                    busyAttackers.Add(betterAttacker);
                    freeAttackers.Remove(betterAttacker);
                }
                else
                {
                    float minDist = playerProtectionRadius*2;
                    GameObject betterAttacker = null;
                    foreach (GameObject a in busyAttackers)
                    {
                        if (Vector3.Distance(a.GetComponent<Attackers>().target.transform.position, player.transform.position) > playerProtectionRadius &&
                            Vector3.Distance(a.transform.position, e.transform.position) < minDist)
                        {
                            minDist = Vector3.Distance(a.transform.position, e.transform.position);
                            betterAttacker = a;
                        }
                    }
                    if (betterAttacker != null) { betterAttacker.GetComponent<Attackers>().TargetEnemy(e); }
                }
            }
        }
    }
}
