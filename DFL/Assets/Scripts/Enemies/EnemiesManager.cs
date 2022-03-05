using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Manages the semi-random spawn position of the enemies
/// </summary>
public class EnemiesManager : MonoBehaviour
{
    [Tooltip("Script of the field")]
    public Field fieldScript;

    [Tooltip("Current mode of play")]
    public string gameMode;


    [Tooltip("List of the Wingmen's prefabs")]
    [SerializeField] private GameObject[] wingmenPrefabs;
    [Tooltip("List of the Bigmen's prefabs")]
    [SerializeField] private GameObject[] linemenPrefabs;

    [Tooltip("Wave number (--> difficulty)")]
    private int waveNumber = 0;

    // Zones of the field
    private GameObject centerZone;
    private GameObject leftZone;
    private GameObject rightZone;

    /// <summary>
    /// Stops all enemies
    /// </summary>
    public void StopEnemies()
    {
        for (int i = 0; i < fieldScript.enemies.Count; i++)
        {
            fieldScript.enemies[i].GetComponent<Enemy>().Stop();
        }
    }
    /// <summary>
    /// Resumes all enemies
    /// </summary>
    public void ResumeEnemies()
    {
        for (int i = 0; i < fieldScript.enemies.Count; i++)
        {
            fieldScript.enemies[i].GetComponent<Enemy>().Resume();
        }
    }

    /// <summary>
    /// Starts the chase for all the enemies on the field
    /// </summary>
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
        // Increment the wave number
        waveNumber++;
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
    /// Instantiate an enemy given a certain category
    /// </summary>
    /// <param name="enemyPrefabs">List of enemy prefabs (category)</param>
    /// <param name="pos">Position of the zone in which create the enemy</param>
    /// <param name="xScale">X scale of the zone</param>
    /// <param name="zScale">Z scale of the zone</param>
    /// <param name="sizeMultiplier">Size multiplier with which create the enemy</param>
    private void CreateEnemy(GameObject[] enemyPrefabs, Vector3 pos, float xScale, float zScale, float sizeMultiplier)
    {
        // Game Object of the enemy
        GameObject enemy;
        //
        int difficulty = Mathf.Clamp(waveNumber, 0, enemyPrefabs.Length+1) - 1;
        // Gets a random position and size and Instantiate the new Bigman
        Vector3 randomPosition = new Vector3(Random.Range(-xScale, xScale), 0, Random.Range(-zScale, zScale));
        enemy = Instantiate(enemyPrefabs[Random.Range(0, difficulty)], pos + randomPosition, Quaternion.identity);
        //enemy = Instantiate(enemyPrefabs[enemyPrefabs.Length-1], pos + randomPosition, Quaternion.identity);
        enemy.GetComponent<Defender>().enemy = enemy;
        enemy.GetComponent<Defender>().Size *= Random.Range(1 - sizeMultiplier, 1 + sizeMultiplier);
        // Fill the enemies list of the field
        fieldScript.enemies.Add(enemy);
    }


    /// <summary>
    /// Generates a defender wave given the difficulty
    /// (11 defenders, 5 in the center, 3 on each side)
    /// The position and size of the enemies are random
    /// </summary>
    private void DefendersWave()
    {        
        // Spawn in the center zone
        Vector3 center = centerZone.transform.position;
        float xScale = centerZone.transform.localScale.x / 2;
        float zScale = centerZone.transform.localScale.z / 2;
        // 5 Linemen in the center
        for (int i = 0; i < 5; i++)
        {
            CreateEnemy(linemenPrefabs, center, xScale, zScale, 0.1f);
        }

        // Spawn in the left zone
        Vector3 left = leftZone.transform.position;
        xScale = leftZone.transform.localScale.x / 2;
        zScale = leftZone.transform.localScale.z / 2;
        // 3 Wingmen on the left
        for (int i = 0; i < 3; i++)
        {
            CreateEnemy(wingmenPrefabs, left, xScale, zScale, 0.1f);
        }

        // Spawn in the right zone
        Vector3 right = rightZone.transform.position;
        xScale = rightZone.transform.localScale.x / 2;
        zScale = rightZone.transform.localScale.z / 2;
        // 3 Wingmen on the right
        for (int i = 0; i < 3; i++)
        {
            CreateEnemy(wingmenPrefabs, right, xScale, zScale, 0.1f);
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
