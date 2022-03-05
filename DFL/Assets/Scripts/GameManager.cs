using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    /// <summary>
    /// Singleton Instance of GameManager
    /// </summary>
    public static GameManager InstanceGameManager;

    [Tooltip("Whether the game is running")]
    public bool gameOn = false;
    private bool gameOnLate = false;
    [Tooltip("Whether the game is over")]
    public bool gameOver = false;


    [Tooltip("Field Manager of the game")]
    [SerializeField] private FieldManager fieldManager;
    [Tooltip("Enemies Manager of the game")]
    [SerializeField] private EnemiesManager enemiesManager;

    [Tooltip("Player Game Object")]
    [SerializeField] private GameObject player;


    /// <summary>
    /// Instantiate the Singleton
    /// </summary>
    private void Awake()
    {
        InstanceGameManager = this;
    }


    /// <summary>
    /// Starts the game
    /// </summary>
    private void Start()
    {
        // Game is on
        gameOn = true;

        // Generates the field
        fieldManager.GenerateField();
        // Unfreeze the player
        player.GetComponent<PlayerController>().freeze = false;
        // Activates the enemies
        enemiesManager.BeginChase();
    }


    /// <summary>
    /// Checks if the game is on and whether the game is over
    /// </summary>
    private void Update()
    {
        // Checks if the game is on
        if (!gameOn && gameOnLate)
        {
            player.GetComponent<PlayerController>().freeze = true;
            enemiesManager.StopEnemies();
            gameOnLate = false;
        }
        else if (gameOn && !gameOnLate)
        {
            player.GetComponent<PlayerController>().freeze = false;
            enemiesManager.ResumeEnemies();
            gameOnLate = true;
        }

        // Checks if the game is over
        if (gameOver)
        {
            player.GetComponent<PlayerController>().freeze = true;
            enemiesManager.StopEnemies();
        }
    }



}
