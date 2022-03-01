using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Field : MonoBehaviour
{
    [Tooltip("Prefab of the field")]
    private GameObject fieldPrefab;
    
    [Tooltip("Struct containing a list of the materials to use on the field")]
    FieldMaterials fieldMaterials;

    [Tooltip("Position of the field in world space")]
    Vector3 fieldPosition;

    /// <summary>
    /// Field constructor
    /// </summary>
    /// <param name="matList">List of the field's materials</param>
    /// <param name="pos">Position of the field</param>
    public Field(GameObject fieldPref, FieldMaterials fieldMat, Vector3 pos)
    {
        fieldPrefab = fieldPref;
        fieldMaterials = fieldMat;
        fieldPosition = pos;

        GameObject field =  Instantiate(fieldPrefab, fieldPosition, Quaternion.identity);

        // Field's materials assignation
        GameObject[] fieldObjects = field.GetComponents<GameObject>();

        // ### Ground
        GameObject ground = fieldObjects[0];
        GameObject[] groundObjects = ground.GetComponents<GameObject>();
        // ## Grass
        groundObjects[0].GetComponent<MeshRenderer>().material = fieldMaterials.grass;
        // ## Endzones
        groundObjects[1].GetComponent<MeshRenderer>().material = fieldMaterials.endzone1;
        groundObjects[2].GetComponent<MeshRenderer>().material = fieldMaterials.endzone2;

        // ### Barriers
        GameObject barriers = fieldObjects[1];
        GameObject[] barrierObjects = barriers.GetComponents<GameObject>();
        // ## Barrier L & R
        barrierObjects[0].GetComponent<MeshRenderer>().material = fieldMaterials.barriers; // L
        barrierObjects[1].GetComponent<MeshRenderer>().material = fieldMaterials.barriers; // R

        // ### Goalposts
        GameObject goalpost1 = fieldObjects[2];
        GameObject[] goalpost1Objects = goalpost1.GetComponents<GameObject>();
        GameObject goalpost2 = fieldObjects[3];
        GameObject[] goalpost2Objects = goalpost2.GetComponents<GameObject>();
        // ## Goalpost 1
        goalpost1Objects[0].GetComponent<MeshRenderer>().material = fieldMaterials.goalpostBase;
        for (int i = 1; i < goalpost1Objects.Length; i++)
            goalpost1Objects[i].GetComponent<MeshRenderer>().material = fieldMaterials.goalpostMetal;
        // ## Goalpost 2
        goalpost2Objects[0].GetComponent<MeshRenderer>().material = fieldMaterials.goalpostBase;
        for (int i = 1; i < goalpost2Objects.Length; i++)
            goalpost2Objects[i].GetComponent<MeshRenderer>().material = fieldMaterials.goalpostMetal;
    }
}
