using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


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
    /// <summary>
    /// Game Mode property
    /// </summary>
    public int Mode
    {
        set { gameMode = (GameMode) value; }
    }

    [Tooltip("Difficulty to pass to the GameManager")]
    [HideInInspector] public GameDifficulty difficulty;
    /// <summary>
    /// Difficulty property
    /// </summary>
    public int Difficulty
    {
        set { difficulty = (GameDifficulty) value; }
    }


    /// <summary>
    /// Gets the Singleton Instance
    /// </summary>
    private void Start()
    {
        if (InstanceDataManager != null)
        {
            Destroy(this);
            return;
        }
        InstanceDataManager = this;
        DontDestroyOnLoad(gameObject);

        gameMode = global::GameMode.DEFENDERS;
    }


    public void LaunchGame()
    {
        SceneManager.LoadScene(1);
    }



    /// <summary>
    /// Class used to save the best scores and players's informations
    /// </summary>
    [System.Serializable]
    class SaveData
    {
        
    }
}
