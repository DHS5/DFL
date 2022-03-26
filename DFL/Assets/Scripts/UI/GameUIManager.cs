using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class GameUIManager : MonoBehaviour
{
    [Tooltip("Singleton Instance of the GameManager")]
    [SerializeField] private GameManager gameManager;

    [Tooltip("Wave number UI text")]
    [SerializeField] private TextMeshProUGUI waveNumberText;

    /// <summary>
    /// Gets the Game Managers
    /// </summary>
    private void Awake()
    {
        
    }


    public void BackToMenu()
    {
        SceneManager.LoadScene(0);
    }


    public void ActuWaveNumber(int wave)
    {
        waveNumberText.text = wave.ToString();
    }
}
