using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleManager : MonoBehaviour
{
    [Tooltip("Singleton Instance of the GameManager")]
    [SerializeField] private GameManager gameManager;


    [Tooltip("Prefabs of the obstacles")]
    [SerializeField] private List<GameObject> obstaclePrefabs = new List<GameObject>();


    private GameObject fieldZone;


    [SerializeField] private int obstaclesLimit;

    /// <summary>
    /// Gets the field zone
    /// </summary>
    private void GetZone()
    {
        fieldZone = gameManager.currentField.fieldZone;
    }


    /// <summary>
    /// Generates obstacles all over the field
    /// </summary>
    /// <param name="number">Number of obstacles to generate</param>
    public void GenerateObstacles(int number)
    {
        // Gets the current field zone
        GetZone();
        
        Vector3 randomPos;
        Quaternion randomOrientation;
        Vector3 fieldPos = fieldZone.transform.position;
        float xScale = fieldZone.transform.localScale.x / 2;
        float zScale = fieldZone.transform.localScale.z / 2;

        number = Mathf.Clamp(number, 0, obstaclesLimit);

        for (int i = 0; i < number; i++)
        {
            randomPos = new Vector3(Random.Range(-xScale, xScale), 0, Random.Range(-zScale, zScale)) + fieldPos;
            randomOrientation = Quaternion.Euler(0, Random.Range(0, 180), 0);
            GameObject obs = Instantiate(obstaclePrefabs[Random.Range(0, obstaclePrefabs.Count)], randomPos, randomOrientation);
        }
    }
}
