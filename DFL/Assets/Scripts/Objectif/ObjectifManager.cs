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
    private Queue<Objectif> objectives;
    [Tooltip("Current objectif for the player to go through")]
    private Objectif currentObjectif;


    // Zones
    private GameObject[] zones;

    private void GetZones()
    {
        zones[0] = gameManager.currentField.frontZone;
        zones[1] = gameManager.currentField.middleZone;
        zones[2] = gameManager.currentField.endZone;
    }


    public void NextObj()
    {
        currentObjectif = objectives.Dequeue();
    }


    public void GenerateObj()
    {
        // Gets the field zones
        GetZones();

        for (int i = 0; i < zones.Length; i++)
        {
            // Gets the zones position and scale info
            Vector3 zonePos = zones[i].transform.position;
            float xScale = zones[i].transform.localScale.x;
            float zScale = zones[i].transform.localScale.z;

            // Gets a random position in the current zone
            Vector3 randomPos = new Vector3(Random.Range(-xScale, xScale), 0, Random.Range(-zScale, zScale)) + zonePos;

            // Instantiate the objectif
            Objectif obj = Instantiate(objectifPrefab, randomPos, Quaternion.identity).GetComponent<Objectif>();
            obj.objectifManager = this;
        }
    }


    private void Update()
    {
       //if (player.transform.position.z > currentObjectif.gameObject.transform.position.z + 5)
       //{
       //    Debug.Log("Missed an objectif");
       //}
    }
}
