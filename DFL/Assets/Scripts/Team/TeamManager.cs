using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// Manages the team effort of the attackers
/// </summary>
public class TeamManager : MonoBehaviour
{
    [Tooltip("Singleton Instance of the GameManager")]
    [SerializeField] private GameManager gameManager;
    [Tooltip("Field Manager of the game")]
    private FieldManager fieldManager;
    [Tooltip("Enemy Manager of the game")]
    private EnemiesManager enemiesManager;

    [Tooltip("")]
    [SerializeField] private GameObject player;

    [SerializeField] private GameObject[] attackersPrefabs;


    [Tooltip("List of the team's attackers currently free")]
    private List<GameObject> freeAttackers = new List<GameObject>();
    [Tooltip("List of the team's attackers currently busy")]
    private List<GameObject> busyAttackers = new List<GameObject>();
    [Tooltip("List of the enemies currently not taken care of")]
    [HideInInspector] public List<GameObject> enemies;

    private List<GameObject> enemiesToSupp = new List<GameObject>();
    private List<GameObject> enemiesToAdd = new List<GameObject>();


    [SerializeField] private float playerProtectionRadius;

    [SerializeField] private float teamReactivity;



    /// <summary>
    /// Add an enemy to the enemies list
    /// </summary>
    /// <param name="enemy">Enemy to add to the list</param>
    public void AddEnemy(GameObject enemy)
    {
        enemiesToAdd.Add(enemy);
    }

    /// <summary>
    /// Supp an enemy from the enemies list
    /// </summary>
    /// <param name="enemy">Enemy to supp from the list</param>
    public void SuppEnemy(GameObject enemy)
    {
        //
        enemiesToSupp.Add(enemy);
    }

    private void ActuEnemies()
    {
        foreach (GameObject e in enemiesToSupp)
        {
            enemies.Remove(e);
        }
        foreach (GameObject e in enemiesToAdd)
        {
            enemies.Add(e);
        }
    }

    public void FreeAttacker(GameObject a)
    {
        busyAttackers.Remove(a);
        freeAttackers.Add(a);
    }

    public void ClearAttackers()
    {
        foreach (GameObject a in freeAttackers) Destroy(a);
        foreach (GameObject a in busyAttackers) Destroy(a);
        freeAttackers.Clear();
        busyAttackers.Clear();
        enemies.Clear();
        enemiesToAdd.Clear();
        enemiesToSupp.Clear();
    }


    /// <summary>
    /// Instantiate an attacker from the attackers prefab list with a semi-random position
    /// </summary>
    private void InstantiateAttacker()
    {
        Vector3 playerPos = player.transform.position;
        Vector3 randomPos = new Vector3(Random.Range(-playerProtectionRadius / 2, playerProtectionRadius / 2), 0, Random.Range(5, playerProtectionRadius / 2)) + playerPos;
        GameObject attacker = Instantiate(attackersPrefabs[0], randomPos, Quaternion.identity);
        attacker.GetComponent<Attackers>().teamManager = this;
        attacker.GetComponent<Attackers>().player = player;
        attacker.GetComponent<Attackers>().playerProtectionRadius = playerProtectionRadius;
        freeAttackers.Add(attacker);
    }


    public void TeamCreation()
    {
        for (int i = 0; i < 5; i++)
        {
            InstantiateAttacker();
        }
    }


    /// <summary>
    /// Begins the player's protection
    /// </summary>
    public void BeginProtection()
    {
        ProtectPlayer();
    }

    private void ProtectPlayer()
    {
        foreach (GameObject e in enemies)
        {
            float toPlayerAngle = Vector3.Angle(player.transform.forward, e.transform.position - player.transform.position);
            if (Vector3.Distance(e.transform.position, player.transform.position) < playerProtectionRadius * ( 1 - toPlayerAngle/180))
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
        ActuEnemies();
        if (player.GetComponent<PlayerGameplay>().isChasable)
            Invoke(nameof(ProtectPlayer), teamReactivity);
    }


    /// <summary>
    /// Gets the GameManager Singleton
    /// </summary>
    private void Awake()
    {
        enemiesManager = gameManager.enemiesManager;
        fieldManager = gameManager.fieldManager;
    }
}
