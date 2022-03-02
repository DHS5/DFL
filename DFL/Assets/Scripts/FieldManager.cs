using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
    [Tooltip("Prefab of the field")]
    [SerializeField] private GameObject fieldPrefab;

    [Tooltip("Prefab of the Stadium")]
    [SerializeField] private GameObject stadiumPrefab;

    [Tooltip("List of the struct containing the materials to use on the field")]
    [SerializeField] private FieldMaterials[] fieldMaterialList;

    GameObject field;
    GameObject stadium;
    Field fieldScript;

    /// <summary>
    /// Generates a field at the chosen position
    /// </summary>
    /// <param name="pos">Position of the new field in world space</param>
    public void GenerateField(Vector3 pos)
    {
        field =  Instantiate(fieldPrefab, pos, Quaternion.identity);
        stadium = Instantiate(stadiumPrefab, pos, Quaternion.identity);
        fieldScript = field.GetComponent<Field>();
        fieldScript.fieldMaterials = fieldMaterialList[1];
        fieldScript.CreateField();
    }

    private void Start()
    {
        GenerateField(new Vector3(0, 0, 0));
    }
}
