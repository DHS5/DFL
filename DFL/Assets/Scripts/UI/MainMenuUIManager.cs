using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenuUIManager : MonoBehaviour
{

    /// <summary>
    /// Game Mode property
    /// </summary>
    public int Mode
    {
        set { DataManager.InstanceDataManager.gameMode = (GameMode)value; }
    }

    /// <summary>
    /// Difficulty property
    /// </summary>
    public int Difficulty
    {
        set { DataManager.InstanceDataManager.difficulty = (GameDifficulty)value; }
    }

    public void LaunchGame()
    {
        SceneManager.LoadScene(1);
    }
}
