using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentManager : MonoBehaviour
{
    [Tooltip("Singleton Instance of the GameManager")]
    [SerializeField] private GameManager gameManager;

    [SerializeField] private Material[] skyboxes;
    [SerializeField] private GameObject[] directionnalLights;

    private int renderStyleNumber = 0;



    public void GenerateEnvironment()
    {
        if (gameManager.gameMode == GameMode.ZOMBIE)
        {
            renderStyleNumber = 1;
            RenderSettings.ambientIntensity = 0.1f;
        }
        RenderSettings.skybox = skyboxes[renderStyleNumber];
        Instantiate(directionnalLights[renderStyleNumber], new Vector3(0, 0, 0), Quaternion.Euler(50, -30, 0));


        if (gameManager.options.Contains(GameOption.FOG))
        {
            RenderSettings.fog = true;
        }
    }
}
