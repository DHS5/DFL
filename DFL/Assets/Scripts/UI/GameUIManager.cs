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

    [Tooltip("Game UI screens\n" +
        "0 --> game screen\n" +
        "1 --> restart screen")]
    [SerializeField] private GameObject[] screens;
    [Tooltip("Wave number UI text")]
    [SerializeField] private TextMeshProUGUI[] waveNumberTexts;


    [Tooltip("UI components of the acceleration bar")]
    [SerializeField] private GameObject[] AccelerationBars;


    [SerializeField] private Animation accBarAnim;

    /// <summary>
    /// Gets the Game Managers
    /// </summary>
    private void Awake()
    {

    }

    /// <summary>
    /// Goes back to the menu
    /// </summary>
    public void BackToMenu()
    {
        SceneManager.LoadScene(0);
    }
    /// <summary>
    /// Restarts the game
    /// </summary>
    public void Restart()
    {
        SceneManager.LoadScene(1);
    }


    /// <summary>
    /// Actualize both wave texts
    /// </summary>
    /// <param name="wave"></param>
    public void ActuWaveNumber(int wave)
    {
        foreach (TextMeshProUGUI t in waveNumberTexts)
            t.text = wave.ToString();
    }

    /// <summary>
    /// Activates the restart screen and deactivates the game screen
    /// </summary>
    public void GameOver()
    {
        screens[0].SetActive(false);
        screens[1].SetActive(true);
    }


    public void AccBarAnim(float dechargeTime, float rechargeTime)
    {
        AccelerationBars[0].SetActive(false);

        accBarAnim.Stop();

        Keyframe[] keys = new Keyframe[3];
        keys[0] = new Keyframe(0.0f, 0.0f);
        keys[1] = new Keyframe(dechargeTime, AccelerationBars[0].GetComponent<RectTransform>().offsetMax.y / 2);
        keys[2] = new Keyframe(dechargeTime + rechargeTime, 0.0f);
        AnimationCurve curve = new AnimationCurve(keys);
        accBarAnim.clip.SetCurve("", typeof(RectTransform), "Charging Image : Anchored Position.y", curve);

        keys[1].value = AccelerationBars[0].GetComponent<RectTransform>().offsetMax.y;
        accBarAnim.clip.SetCurve("", typeof(RectTransform), "Charging Image : Size Delta.y", curve);

        accBarAnim.Play();

        Invoke(nameof(FullAccBar), dechargeTime + rechargeTime);
    }
    private void FullAccBar() { AccelerationBars[0].SetActive(true); }
}
