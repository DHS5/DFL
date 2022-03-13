using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[System.Serializable]
public struct FieldMaterials
{
    public Material grass;
    public Material endzone1;
    public Material endzone2;
    public Material barriers;
    public Material goalpostBase;
    public Material goalpostMetal;
}

/// <summary>
/// Contains the different types of field and a method to generates one given a difficulty
/// </summary>
public class FieldManager : MonoBehaviour
{
    [Tooltip("Singleton Instance of the GameManager")]
    private GameManager gameManager;
    [Tooltip("Script of the EnemiesManager")]
    private EnemiesManager enemiesManager;
    [Tooltip("Script of the TeamManager")]
    private TeamManager teamManager;


    [Header("Nav Mesh Surface")]
    [Tooltip("Nav Mesh Surface of the current field")]
    [SerializeField] private NavMeshSurface surface;

    [Header("Environment prefabs")]
    [Tooltip("Prefab of the field")]
    [SerializeField] private GameObject fieldPrefab;
    [Tooltip("Prefab of the Stadium")]
    [SerializeField] private GameObject stadiumPrefab;


    [Header("List of field materials")]
    [Tooltip("List of the struct containing the materials to use on the field")]
    [SerializeField] private FieldMaterials[] fieldMaterialList;

    [Tooltip("Current field game object")]
    private GameObject field;
    [Tooltip("Current stadium game object")]
    private GameObject stadium;

    [Tooltip("Former field game object")]
    private GameObject formerField;
    [Tooltip("Former stadium game object")]
    private GameObject formerStadium;

    private Field fieldScript;
    private Field formerFieldScript;

    [Tooltip("Vector 3 containing the position of the actual field")]
    private Vector3 fieldPosition = new Vector3(0, 0, 0);
    [Tooltip("Vector 3 giving the distance between the position of 2 fields")]
    private Vector3 fieldDistance = new Vector3(0,0,289);

    /// <summary>
    /// Generates a random field
    /// </summary>
    public void GenerateField()
    {
        // If it's not the first field creation, keeps the former field and stadium
        if (field != null)
        {
            // Keeps the former field and stadium
            formerField = field;
            formerStadium = stadium;
            formerFieldScript = fieldScript;

            // Destroys the former black wall
            GameObject[] bw = GameObject.FindGameObjectsWithTag("BlackWall");
            for (int i = 0; i < bw.Length; i++)
                Destroy(bw[i]);
            //Destroy(GameObject.FindGameObjectWithTag("BlackWall"));

            // Actualizes the public field position
            fieldPosition += fieldDistance;
        }
        // ### Creation of the field and the stadium
        // ## Instantiation of the prefabs
        field =  Instantiate(fieldPrefab, fieldPosition, Quaternion.identity);
        stadium = Instantiate(stadiumPrefab, fieldPosition, Quaternion.identity);
        // ## Gets the field script
        fieldScript = field.GetComponent<Field>();
        // ## Gets random field's materials
        fieldScript.fieldMaterials = fieldMaterialList[Random.Range(0, fieldMaterialList.Length)];
        // ## Apply the materials on the field
        fieldScript.CreateField();
        // ## Actualization of the Nav Mesh
        surface.BuildNavMesh();

        // ### Management of the enemies
        // ## Gives the enemiesManager the fieldScript
        enemiesManager.fieldScript = fieldScript;
        // ## Gives the teamManager a enemies's clone
        teamManager.enemies = fieldScript.enemies;
        // ## Creates the enemy wave
        enemiesManager.EnemyWave();
    }

    /// <summary>
    /// Destroys the former field and stadium
    /// </summary>
    public void SuppField()
    {
        // Destroys the former field and stadium
        if (formerField != null) Destroy(formerField);
        if (formerFieldScript != null) formerFieldScript.SuppEnemies();
        if (formerStadium != null) Destroy(formerStadium);
    }

    /// <summary>
    /// Generate a first field
    /// </summary>
    private void Awake()
    {
        gameManager = GameManager.InstanceGameManager;
        enemiesManager = gameManager.enemiesManager;
        teamManager = gameManager.teamManager;
    }
}
