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
[System.Serializable] public enum GameOption { BONUS = 0, OBSTACLE = 1, FOG = 2 }

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
    [Tooltip("Whether the game is over")]
    [HideInInspector] public bool gameOver = false;

    [Header("Game managers")]
    [Tooltip("Field Manager of the game")]
    public FieldManager fieldManager;
    [Tooltip("Environment Manager of the game")]
    public EnvironmentManager environmentManager;
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
    [Tooltip("Animator of the player")]
    [SerializeField] private Animator playerRunAnimator;

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

        // Generates the environment
        environmentManager.GenerateEnvironment();
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
        // Checks if the game is over
        if (gameOver)
        {
            playerRunAnimator.SetTrigger("Dead");
            player.GetComponent<PlayerController>().freeze = true;
            gameUIManager.GameOver();
            Invoke(nameof(GameOver), 0.75f);
        }

        // Pause the game on press P
        if (Input.GetKeyDown(KeyCode.P)) PauseGame();
    }


    public void PauseGame()
    {
        gameOn = false;

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

        gameUIManager.SettingsScreen(true);
    }
    public void UnpauseGame()
    {
        gameUIManager.SettingsScreen(false);
        Invoke(nameof(GameOn) , 1f);
    }
    private void GameOn()
    { 
        gameOn = true;

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

        player.GetComponentInChildren<FirstPersonCameraController>().LockCursor();
    }


    /// <summary>
    /// Called when the player loses
    /// </summary>
    private void GameOver()
    {
        // ### Player

        // Player freezes
        //player.GetComponent<PlayerController>().freeze = true;
        // Player animator stops
        //playerRunAnimator.SetTrigger("Dead");


        // ### Enemies

        // Enemies stop
        enemiesManager.StopEnemies();

        
        // ### Modes

        // If game mode = TEAM
        if (gameMode == GameMode.TEAM)
        {
            // Attackers stop
            teamManager.StopAttackers();
        }


        // ### Environment

        // Activate the stadium's camera
        fieldManager.StadiumCamera.gameObject.SetActive(true);

        
        // ### UI
        
        // Calls the UI restart screen
        //gameUIManager.GameOver();
    }


    /// <summary>
    /// Called when the player enters the tunnel
    /// </summary>
    public void TunnelEnter()
    {
        // ### Environment
        
        // Generates a new field
        currentField = fieldManager.GenerateField();
        // Increases the fog according to the difficulty
        if (difficulty == GameDifficulty.HARD) environmentManager.IncreaseFog(0.03f);
        else if (difficulty == GameDifficulty.NORMAL) environmentManager.IncreaseFog(0.01f);
        // Passes to night mode after wave 10 (if not zombie mode)
        if (gameMode != GameMode.ZOMBIE && enemiesManager.waveNumber == 9) environmentManager.BedTime();


        // ### Enemies

        // Generates an enemy wave
        enemiesManager.EnemyWave();


        // ### Modes
        /*
        // If game mode = ZOMBIE
        if (gameMode == GameMode.ZOMBIE)
        {
            // Puts the scene in a total dark
            environmentManager.ZombieEnterTunnel();
        }
        */

        // If game mode = TEAM
        if (gameMode == GameMode.TEAM)
        {
            // Clear the attackers
            teamManager.ClearAttackers();
            // Gives the teamManager an enemies's clone
            teamManager.enemies = new List<GameObject>(currentField.enemies);
        }


        // ### Options

        // If the option OBSTACLE is chosen
        if (options.Contains(GameOption.OBSTACLE))
        {
            // Destroys the active obstacles
            obstacleManager.DestroyObstacles();
            // Generates the obstacles
            obstacleManager.GenerateObstacles((enemiesManager.waveNumber + (int) difficulty) * 5);
        }

        // If the option BONUS is chosen
        if (options.Contains(GameOption.BONUS))
        {
            // Destroys the active bonus
            bonusManager.DestroyBonus();
            // Generates the bonus
            bonusManager.GenerateBonus();
        }
    }

    /// <summary>
    /// Called when the player exits the tunnel
    /// </summary>
    public void TunnelExit()
    {
        // ### Environment
        
        // Destroys the former field
        fieldManager.DestroyField();


        // ### Enemies

        // Starts the enemies's chase
        enemiesManager.BeginChase();


        // ### Modes

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

        /*
        // If game mode = ZOMBIE
        if (gameMode == GameMode.ZOMBIE)
        {
            // Activates the dark lightning
            environmentManager.ZombieExitTunnel();
        }
        */
    }
}
