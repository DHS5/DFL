using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Field : MonoBehaviour
{   
    [Tooltip("Struct containing the materials to use on the field")]
    [HideInInspector] public FieldMaterials fieldMaterials;


    [Header("Prefab objects of the field")]
    [SerializeField] GameObject grass;
    [SerializeField] GameObject endzone1;
    [SerializeField] GameObject endzone2;

    [SerializeField] GameObject barrierL;
    [SerializeField] GameObject barrierR;

    [SerializeField] GameObject goalpost1Base;
    [SerializeField] GameObject[] goalpost1Metal;
    [SerializeField] GameObject goalpost2Base;
    [SerializeField] GameObject[] goalpost2Metal;


    [Header("Zones of the field")]
    public GameObject fieldZone;
    public GameObject centerZone;
    public GameObject leftZone;
    public GameObject rightZone;

    [Tooltip("List of the enemies on the field")]
    [HideInInspector] public List<GameObject> enemies;


    /// <summary>
    /// Sets all the materials of the new field
    /// </summary>
    public void CreateField()
    {
        // ### Ground
        // ## Grass
        grass.GetComponent<MeshRenderer>().material = fieldMaterials.grass;
        // ## Endzones
        endzone1.GetComponent<MeshRenderer>().material = fieldMaterials.endzone1;
        endzone2.GetComponent<MeshRenderer>().material = fieldMaterials.endzone2;

        // ### Barriers
        // ## Barrier L
        barrierL.GetComponent<MeshRenderer>().material = fieldMaterials.barriers;
        // ## Barrier R
        barrierR.GetComponent<MeshRenderer>().material = fieldMaterials.barriers;

        // ### Goalposts
        // ## Goalpost 1
        goalpost1Base.GetComponent<MeshRenderer>().material = fieldMaterials.goalpostBase;
        for (int i = 1; i < goalpost1Metal.Length; i++)
            goalpost1Metal[i].GetComponent<MeshRenderer>().material = fieldMaterials.goalpostMetal;
        // ## Goalpost 2
        goalpost2Base.GetComponent<MeshRenderer>().material = fieldMaterials.goalpostBase;
        for (int i = 1; i < goalpost2Metal.Length; i++)
            goalpost2Metal[i].GetComponent<MeshRenderer>().material = fieldMaterials.goalpostMetal;
    }

    /// <summary>
    /// Destroys all the enemies on the field
    /// </summary>
    public void SuppEnemies()
    {
        for (int i = 0; i < enemies.Count; i++)
            Destroy(enemies[i]);
    }
}
