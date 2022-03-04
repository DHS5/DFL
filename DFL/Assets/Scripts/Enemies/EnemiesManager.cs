using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Manages the semi-random spawn position of the enemies
/// </summary>
public class EnemiesManager : MonoBehaviour
{
    [Tooltip("List of the enemies's prefabs")]
    [SerializeField] private GameObject[] enemyPrefabs;

    [Tooltip("Script of the field")]
    public Field fieldScript;

    [Tooltip("Current mode of play")]
    public string gameMode;

    [Tooltip("Wave number (difficulty)")]
    private int waveNumber = 1;

    private GameObject centerZone;
    private GameObject leftZone;
    private GameObject rightZone;


    public void BeginChase()
    {
        for (int i = 0; i < fieldScript.enemies.Count; i++)
        {
            fieldScript.enemies[i].GetComponent<Enemy>().ChasePlayer();
        }
    }


    /// <summary>
    /// Generates an enemy wave given the mode
    /// </summary>
    public void EnemyWave()
    {
        // Gets the spawning zones
        GetZones();
        
        // Generates the enemy wave given the mode
        switch (gameMode)
        {
            case "Defenders":
                DefendersWave();
                break;
            case "Zombies":
                ZombiesWave();
                break;
            default:
                Debug.Log("No mode");
                break;
        }
    }

    /// <summary>
    /// Gets the field's zones
    /// </summary>
    private void GetZones()
    {
        centerZone = fieldScript.centerZone;
        leftZone = fieldScript.leftZone;
        rightZone = fieldScript.rightZone;
    }


    /// <summary>
    /// Generates a defender wave given the difficulty
    /// The position and size of the enemies are random
    /// </summary>
    private void DefendersWave()
    {
        // Game Object of the enemy
        GameObject enemy;
        // Size mulitplier range
        float sizeMult = 0.1f;
        
        // Spawn in the center zone
        Vector3 center = centerZone.transform.position;
        float xScale = centerZone.transform.localScale.x / 2;
        float zScale = centerZone.transform.localScale.z / 2;
        // 5 Bigmen in the center
        for (int i = 0; i < 5; i++)
        {
            // Gets a random position and size and Instantiate the new Bigman
            Vector3 randomPosition = new Vector3(Random.Range(-xScale, xScale), 0, Random.Range(-zScale, zScale));
            enemy = Instantiate(enemyPrefabs[Random.Range(0,enemyPrefabs.Length)], center + randomPosition, Quaternion.identity);
            enemy.GetComponent<Defender>().enemy = enemy;
            enemy.GetComponent<Defender>().Size *= Random.Range(1 - sizeMult, 1 + sizeMult);
            // Fill the enemies list of the field
            fieldScript.enemies.Add(enemy);
        }
            
    }

    /// <summary>
    /// Generates a zombie wave given the difficulty
    /// The position and size of the enemies are random
    /// </summary>
    private void ZombiesWave()
    {

    }
}
