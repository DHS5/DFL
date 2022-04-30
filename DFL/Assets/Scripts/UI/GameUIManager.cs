using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class GameUIManager : UIManager
{
    [Tooltip("Singleton Instance of the GameManager")]
    [SerializeField] private GameManager gameManager;

    [Tooltip("Game UI screens\n" +
        "0 --> game screen\n" +
        "1 --> restart screen\n" +
        "2 --> settings screen")]
    [SerializeField] private GameObject[] screens;
    [Tooltip("Wave number UI text")]
    [SerializeField] private TextMeshProUGUI[] waveNumberTexts;


    [Tooltip("UI components of the acceleration bar")]
    [SerializeField] private GameObject[] accelerationBars;
    [Tooltip("UI components of the bonus bar")]
    [SerializeField] private GameObject bonusBar;
    [Tooltip("UI components of the life bonuses")]
    [SerializeField] private GameObject[] lifeBonuses;


    [SerializeField] private Animation accBarAnim;
    [SerializeField] private Animation bonusBarAnim;

    private float bonusBarSize;


    /// <summary>
    /// Gets the Game Managers
    /// </summary>
    private void Awake()
    {
        bonusBarSize = bonusBar.GetComponent<RectTransform>().rect.height;
    }

    private void Start()
    {
        if (DataManager.InstanceDataManager != null)
        {
            sensitivitySlider.value = DataManager.InstanceDataManager.yMouseSensitivity;
            smoothRotationSlider.value = DataManager.InstanceDataManager.ySmoothRotation;
        }

        gameType = new Vector3Int(1, 0, 0);
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
        {
            if (wave < 10) t.text = "0";
            else t.text = "";
            t.text += wave.ToString();
        }
    }

    /// <summary>
    /// Activates the restart screen and deactivates the game screen
    /// </summary>
    public void GameOver()
    {
        screens[0].SetActive(false);
        screens[1].SetActive(true);
    }


    public void SettingsScreen(bool state)
    {
        screens[2].SetActive(state);
    }


    /// <summary>
    /// Constructs and plays the acceleration bar animation
    /// </summary>
    /// <param name="dechargeTime"></param>
    /// <param name="rechargeTime"></param>
    public void AccBarAnim(float dechargeTime, float rechargeTime)
    {
        accelerationBars[0].SetActive(false);

        accBarAnim.Stop();

        Keyframe[] keys = new Keyframe[3];
        keys[0] = new Keyframe(0.0f, 0.0f);
        keys[1] = new Keyframe(dechargeTime, -accelerationBars[0].GetComponent<RectTransform>().rect.height / 2);
        keys[2] = new Keyframe(dechargeTime + rechargeTime, 0.0f);
        keys[0].outTangent = -accelerationBars[0].GetComponent<RectTransform>().rect.height / (2 * dechargeTime);
        keys[1].inTangent = -accelerationBars[0].GetComponent<RectTransform>().rect.height / (2 * dechargeTime);
        keys[1].outTangent = accelerationBars[0].GetComponent<RectTransform>().rect.height / (2 * rechargeTime);
        keys[2].inTangent = accelerationBars[0].GetComponent<RectTransform>().rect.height / (2 * rechargeTime);
        AnimationCurve curve = new AnimationCurve(keys);
        accBarAnim.clip.SetCurve("", typeof(RectTransform), "m_AnchoredPosition.y", curve);
        
        keys[1].value = -accelerationBars[0].GetComponent<RectTransform>().rect.height;
        keys[0].outTangent = -accelerationBars[0].GetComponent<RectTransform>().rect.height / dechargeTime;
        keys[1].inTangent = -accelerationBars[0].GetComponent<RectTransform>().rect.height / dechargeTime;
        keys[1].outTangent = accelerationBars[0].GetComponent<RectTransform>().rect.height / rechargeTime;
        keys[2].inTangent = accelerationBars[0].GetComponent<RectTransform>().rect.height / rechargeTime;
        curve = new AnimationCurve(keys);
        accBarAnim.clip.SetCurve("", typeof(RectTransform), "m_SizeDelta.y", curve);

        accBarAnim.Play();

        Invoke(nameof(FullAccBar), dechargeTime + rechargeTime);
    }
    /// <summary>
    /// Makes the acceleration bar full
    /// </summary>
    private void FullAccBar() { accelerationBars[0].SetActive(true); }



    public void BonusBarAnim(float bonusTime, Color color)
    {
        bonusBarAnim.Stop();

        bonusBar.GetComponent<Image>().color = color;
        bonusBar.SetActive(true);

        AnimationClip clip = new AnimationClip();
        clip.legacy = true;

        Keyframe[] keys = new Keyframe[2];
        keys[0] = new Keyframe(0.0f, 0.0f);
        keys[1] = new Keyframe(bonusTime, -bonusBarSize / 2);
        keys[0].outTangent = -bonusBarSize / (2 * bonusTime);
        keys[1].inTangent = -bonusBarSize / (2 * bonusTime);
        AnimationCurve curve = new AnimationCurve(keys);
        clip.SetCurve("", typeof(RectTransform), "m_AnchoredPosition.y", curve);

        keys[1].value = -bonusBarSize;
        keys[0].outTangent = -bonusBarSize / bonusTime;
        keys[1].inTangent = -bonusBarSize / bonusTime;
        curve = new AnimationCurve(keys);
        clip.SetCurve("", typeof(RectTransform), "m_SizeDelta.y", curve);
        
        bonusBarAnim.AddClip(clip, "clip");
        bonusBarAnim.Play("clip");

        Invoke(nameof(EndBonus), bonusTime);
    }
    /// <summary>
    /// Makes the bonus bar disappear
    /// </summary>
    private void EndBonus()
    { 
        bonusBar.SetActive(false);
    }


    public void ModifyLife(bool plus, int lifeNumber)
    {
        lifeBonuses[lifeNumber].SetActive(plus);
    }
}
