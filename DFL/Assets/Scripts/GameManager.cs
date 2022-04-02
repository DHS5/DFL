using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;


/// <summary>
/// Game Mode
/// </summary>
[System.Serializable] public enum GameMode { NONE = 0, ZOMBIE = 2, DEFENDERS = 1, TEAM = 3, OBJECTIF = 4 }

/// <summary>
/// Game Difficulty
/// </summary>
[System.Serializable] public enum GameDifficulty { EASY = 0 , NORMAL = 2 , HARD = 4 }

/// <summary>
/// Game Option
/// </summary>
[System.Serializable] public enum GameOption { BONUS = 0, OBSTACLE = 1, DARK = 2 }

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
    [Tooltip("Current game options")]
    public List<GameOption> options = new List<GameOption>();
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
    [Tooltip("Objectif Manager of the game")]
    public ObjectifManager objectifManager;
    [Tooltip("Obstacle Manager of the game")]
    public ObstacleManager obstacleManager;
    [Tooltip("Bonus Manager of the game")]
    public BonusManager bonusManager;
    [Tooltip("Data Manager of the game")]
    [HideInInspector] public DataManager dataManager;
    [Tooltip("Current field of the game")]
    [HideInInspector] public Field currentField;

    [Header("Player")]
    [Tooltip("Player Game Object")]
    public GameObject player;



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
            // Gets the DataManager's infos
            gameMode = dataManager.gameMode;
            difficulty = dataManager.difficulty;
            options = dataManager.options;
        }

        // Generates the game
        TunnelEnter();

        // Unfreezes the player
        player.GetComponent<PlayerController>().freeze = false;
        // Makes the player chasable
        player.GetComponent<PlayerGameplay>().isChasable = true;

    }


    /// <summary>
    /// Checks if the game is on and whether the game is over
    /// </summary>
    private void Update()
    {
        // Checks if the game is on
        if (!gameOn && gameOnLate)
        {
            // Freezes the player
            player.GetComponent<PlayerController>().freeze = true;
            // Stops the enemies
            enemiesManager.StopEnemies();

            // If game mode = TEAM
            if (gameMode == GameMode.TEAM)
            {
                // Stops the attackers
                teamManager.StopAttackers();
            }

            gameOnLate = false;
        }
        else if (gameOn && !gameOnLate)
        {
            // Unfreezes the player
            player.GetComponent<PlayerController>().freeze = false;
            // Resumes the enemies
            enemiesManager.ResumeEnemies();

            // If game mode = TEAM
            if (gameMode == GameMode.TEAM)
            {
                // Resumes the attackers
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

            // Calls the restart UI screen
            gameUIManager.GameOver();
        }
    }

    /// <summary>
    /// Called when the player enters the tunnel
    /// </summary>
    public void TunnelEnter()
    {
        // Generates a new field
        fieldManager.GenerateField();
        // Gives the EnemiesManager the field script and calls an enemy wave
        enemiesManager.field = currentField;
        enemiesManager.EnemyWave();

        // If game mode = ZOMBIE
        if (gameMode == GameMode.ZOMBIE)
        {
            // Activates the zombie post processing volume at the end of the tunnel
            foreach (GameObject g in GameObject.FindGameObjectsWithTag("ZombieVolume"))
                g.GetComponent<Volume>().weight = 1;
        }

        // If game mode = TEAM
        if (gameMode == GameMode.TEAM)
        {
            // Clear the attackers
            teamManager.ClearAttackers();
            // Gives the teamManager an enemies's clone
            teamManager.enemies = new List<GameObject>(currentField.enemies);
        }

        // If the option OBSTACLE is chosen
        if (options.Contains(GameOption.OBSTACLE))
        {
            // Generates the obstacles
            obstacleManager.GenerateObstacles((enemiesManager.waveNumber + (int) difficulty) * 5);
        }

        // If the option BONUS is chosen
        if (options.Contains(GameOption.BONUS))
        {
            // Generates the bonus
            bonusManager.GenerateBonus();
        }
    }

    /// <summary>
    /// Called when the player exits the tunnel
    /// </summary>
    public void TunnelExit()
    {
        // Destroys the former field
        fieldManager.SuppField();
        // Starts the enemies's chase
        enemiesManager.BeginChase();

        // If game mode = TEAM
        if (gameMode == GameMode.TEAM)
        {
            // Creates a team and starts the player's protection
            teamManager.TeamCreation();
            teamManager.BeginProtection();
        }

        // If game mode = OBJECTIF
        if (gameMode == GameMode.OBJECTIF)
        {
            // Generates the objectives
            objectifManager.GenerateObj();
        }
    }
}
