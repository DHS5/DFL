using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// GameMode
/// </summary>
public enum GameMode { NONE, ZOMBIE, DEFENDERS }



public class GameManager : MonoBehaviour
{
    /// <summary>
    /// Singleton Instance of GameManager
    /// </summary>
    public static GameManager InstanceGameManager { get; private set; }

    [Header("Game mode")]
    [Tooltip("Current game mode")]
    public GameMode gameMode;
    
    
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

    [Header("Player")]
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
        // Chooses the game mode
        ///gameMode = GameMode.DEFENDERS;

        // Generates the field
        fieldManager.GenerateField();
        // Unfreezes the player
        player.GetComponent<PlayerController>().freeze = false;
        // Makes the player chasable
        player.GetComponent<PlayerGameplay>().isChasable = true;
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
