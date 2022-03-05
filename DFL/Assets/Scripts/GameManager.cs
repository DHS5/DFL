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


    private void Awake()
    {
        InstanceGameManager = this;
    }


    private void Start()
    {
        gameOn = true;
        
        player.GetComponent<PlayerController>().freeze = false;
    }


    private void Update()
    {
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


        if (gameOver)
        {
            player.GetComponent<PlayerController>().freeze = true;
            enemiesManager.StopEnemies();
        }
    }



}
