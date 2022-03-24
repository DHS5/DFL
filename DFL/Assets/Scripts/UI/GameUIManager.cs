using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

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


    public void ActuWaveNumber(int wave)
    {
        waveNumberText.text = wave.ToString();
    }
}
