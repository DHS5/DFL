using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Field : MonoBehaviour
{
    [Tooltip("Prefab of the field")]
    [SerializeField] private GameObject fieldPrefab;
    
    [Tooltip("List of the materials to use on the field")]
    List<Material> materialList;

    [Tooltip("Position of the field")]
    Vector3 fieldPosition;

    /// <summary>
    /// Field constructor
    /// </summary>
    /// <param name="matList">List of the field's materials</param>
    /// <param name="pos">Position of the field</param>
    public Field(List<Material> matList, Vector3 pos)
    {
        materialList = matList;
        fieldPosition = pos;

        GameObject field =  Instantiate(fieldPrefab, fieldPosition, Quaternion.identity);


    }
}
