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
    [SerializeField] private FieldMaterials[] fieldMaterialList;
}
