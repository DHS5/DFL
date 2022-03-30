using System.Collections;
using System.Collections.Generic;
using UnityEngine;



/// <summary>
/// Singleton Instance of DataManager
/// </summary>
public class DataManager : MonoBehaviour
{
    /// <summary>
    /// DataManager of the game
    /// </summary>
    public static DataManager InstanceDataManager { get; private set; }


    [Tooltip("Game Mode to pass to the GameManager")]
    [HideInInspector] public GameMode gameMode;
    
    [Tooltip("Difficulty to pass to the GameManager")]
    [HideInInspector] public GameDifficulty difficulty;

    [Tooltip("Game options to pass to the GameManager")]
    [HideInInspector] public List<GameOption> options = new List<GameOption>();



    /// <summary>
    /// Gets the Singleton Instance
    /// </summary>
    private void Start()
    {
        if (InstanceDataManager != null)
        {
            Destroy(this);
            // Clears the options when starting the menu
            InstanceDataManager.options.Clear();
            return;
        }
        InstanceDataManager = this;
        DontDestroyOnLoad(gameObject);
    }




    /// <summary>
    /// Class used to save the best scores and players's informations
    /// </summary>
    [System.Serializable]
    class SaveData
    {
        
    }
}
