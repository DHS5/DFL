using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectifManager : MonoBehaviour
{
    [Tooltip("Singleton Instance of the GameManager")]
    [SerializeField] private GameManager gameManager;

    [Tooltip("Game object of the player")]
    [SerializeField] private GameObject player;

    [Tooltip("Prefab of the objectif")]
    [SerializeField] private GameObject objectifPrefab;


    [Tooltip("Queue of objectives")]
    private Queue<Objectif> objectives = new Queue<Objectif>();
    [Tooltip("Current objectif for the player to go through")]
    private Objectif currentObjectif;


    // Zones
    private GameObject[] zones = new GameObject[3];

    private void GetZones()
    {
        zones[0] = gameManager.currentField.frontZone;
        zones[1] = gameManager.currentField.middleZone;
        zones[2] = gameManager.currentField.endZone;
    }


    public void NextObj()
    {
        // Destroys the previous objectif
        if (currentObjectif != null) Destroy(currentObjectif.gameObject);
        // Gets the next one
        if (objectives.Count > 0) currentObjectif = objectives.Dequeue();
    }


    public void GenerateObj()
    {
        Objectif obj;

        // Gets the field zones
        GetZones();

        for (int i = 0; i < zones.Length; i++)
        {
            // Gets the zones position and scale info
            Vector3 zonePos = zones[i].transform.position;
            float xScale = zones[i].transform.localScale.x/2;
            float zScale = zones[i].transform.localScale.z/2;

            // Gets a random position in the current zone
            Vector3 randomPos = new Vector3(Random.Range(-xScale, xScale), 0, Random.Range(-zScale, zScale)) + zonePos;

            // Instantiate the objectif
            obj = Instantiate(objectifPrefab, randomPos, Quaternion.identity).GetComponent<Objectif>();
            obj.objectifManager = this;
            objectives.Enqueue(obj);
        }

        // Gets the first objectif
        NextObj();
    }


    private void Update()
    {
        if (currentObjectif != null && player.transform.position.z > currentObjectif.gameObject.transform.position.z + 5)
        {
            Debug.Log("Missed an objectif");
            gameManager.gameOver = true;
        }
    }
}
