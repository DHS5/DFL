using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// GameMode
/// </summary>
[System.Serializable] public enum GameMode { NONE = 0, ZOMBIE = 2, DEFENDERS = 1, TEAM = 3, OBJECTIF = 4 }

/// <summary>
/// Game difficulty
/// </summary>
[System.Serializable] public enum GameDifficulty { EASY = 0 , NORMAL = 2 , HARD = 4 }


/// <summary>
/// Manages the whole game
/// </summary>
public class GameManager : MonoBehaviour
{
    /// <summary>
    /// Singleton Instance of GameManager
    /// </summary>
    public static GameManager InstanceGameManager { get; private set; }

    [Header("Game parameters")]
    [Tooltip("Current game mode")]
    public GameMode gameMode;
    [Tooltip("Current game difficulty")]
    public GameDifficulty difficulty;
    [Tooltip("Range of different enemies that can spawn in one wave")]
    [Range(0, 5)] public int enemiesRange;


    [Tooltip("Whether the game is running")]
    [HideInInspector] public bool gameOn = false;
    private bool gameOnLate = false;
    [Tooltip("Whether the game is over")]
    [HideInInspector] public bool gameOver = false;

    [Header("Game managers")]
    [Tooltip("Field Manager of the game")]
    public FieldManager fieldManager;
    [Tooltip("Enemies Manager of the game")]
    public EnemiesManager enemiesManager;
    [Tooltip("Team Manager of the game")]
    public TeamManager teamManager;
    [Tooltip("UI Manager of the game")]
    public GameUIManager gameUIManager;
    [Tooltip("Data Manager of the game")]
    [HideInInspector] public DataManager dataManager;

    [Header("Player")]
    [Tooltip("Player Game Object")]
    [SerializeField] private GameObject player;



    /// <summary>
    /// Instantiate the Singleton
    /// </summary>
    private void Awake()
    {
        InstanceGameManager = this;
        dataManager = DataManager.InstanceDataManager;
    }


    /// <summary>
    /// Starts the game
    /// </summary>
    private void Start()
    {
        // Game is on
        gameOn = true;
        // Gets the Game parameters from DataManager
        if (dataManager != null)
        {
            gameMode = dataManager.gameMode;
            difficulty = dataManager.difficulty;
        }

        // Generates the field
        fieldManager.GenerateField();
        // Unfreezes the player
        player.GetComponent<PlayerController>().freeze = false;
        // Makes the player chasable
        player.GetComponent<PlayerGameplay>().isChasable = true;

        // If game mode = TEAM
        if (gameMode == GameMode.TEAM)
        {
            teamManager.TeamCreation();
            teamManager.BeginProtection();
        }

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
            // If game mode = TEAM
            if (gameMode == GameMode.TEAM)
            {
                teamManager.StopAttackers();
            }
            gameOnLate = false;
        }
        else if (gameOn && !gameOnLate)
        {
            player.GetComponent<PlayerController>().freeze = false;
            enemiesManager.ResumeEnemies();
            // If game mode = TEAM
            if (gameMode == GameMode.TEAM)
            {
                teamManager.ResumeAttackers();
            }
            gameOnLate = true;
        }

        // Checks if the game is over
        if (gameOver)
        {
            player.GetComponent<PlayerController>().freeze = true;
            enemiesManager.StopEnemies();
            // If game mode = TEAM
            if (gameMode == GameMode.TEAM)
            {
                teamManager.StopAttackers();
            }
        }
    }



}
