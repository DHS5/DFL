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
    [HideInInspector] public GameMode gameMode = global::GameMode.DEFENDERS;
    /// <summary>
    /// Game Mode property
    /// </summary>
    public int GameMode
    {
        set 
        { 
            switch (value)
            {
                case 1:
                    gameMode = global::GameMode.DEFENDERS;
                    break;
                case 2:
                    gameMode = global::GameMode.ZOMBIE;
                    break;
                default:
                    gameMode = global::GameMode.NONE;
                    break;
            }
        }
    }

    [Tooltip("Difficulty to pass to the GameManager")]
    [HideInInspector] public int difficulty = 1;
    /// <summary>
    /// Difficulty property
    /// </summary>
    public int Difficulty
    {
        set { if (value > 0) difficulty = value; }
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
