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


    /// <summary>
    /// Removes or adds a game option
    /// </summary>
    /// <param name="b">True --> Add / False --> Remove</param>
    /// <param name="option">Game option to add/remove</param>
    public void ChooseOption(int option)
    {
        if (!DataManager.InstanceDataManager.options.Contains((GameOption)option)) { DataManager.InstanceDataManager.options.Add((GameOption)option); Debug.Log("yes"); }
        else { DataManager.InstanceDataManager.options.Remove((GameOption)option); Debug.Log("no"); }
    }


    /// <summary>
    /// Load the game's scene
    /// </summary>
    public void LaunchGame()
    {
        SceneManager.LoadScene(1);
    }
}
