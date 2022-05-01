using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIManager : MonoBehaviour
{
    [SerializeField] protected Slider sensitivitySlider;
    [SerializeField] protected Slider smoothRotationSlider;
                     
    [SerializeField] protected TextMeshProUGUI[] highNames;
    [SerializeField] protected TextMeshProUGUI[] highWaves;

    protected Vector3Int gameType;
    public int GTMode { set { gameType.x = value; ActuScoreList(); } }
    public int GTDifficulty { set { gameType.y = value; ActuScoreList(); } }
    protected List<GameOption> gTOptions = new List<GameOption>();
    public int GTOptions { set { gameType.z = value; ActuScoreList(); } }


    public void CloseAllTexts(GameObject g)
    {
        foreach (TextMeshProUGUI t in g.GetComponentsInChildren<TextMeshProUGUI>())
        {
            t.gameObject.SetActive(false);
        }
    }

    public void ActuScoreList()
    {
        int i = 0;
        while (DataManager.InstanceDataManager.highscores[i].gameType != gameType && i < 96) i++;

        if (DataManager.InstanceDataManager.highscores[i].gameType == gameType)
        {
            for (int j = 0; j < 5; j++)
            {
                highNames[j].text = DataManager.InstanceDataManager.highscores[i].names[j];
                highWaves[j].text = "" + DataManager.InstanceDataManager.highscores[i].waves[j];
            }
        }
        else Debug.Log("Invalid game type");
    }

    public void GTChooseOption(int option)
    {
        if (!gTOptions.Contains((GameOption)option)) { gTOptions.Add((GameOption)option); }
        else { gTOptions.Remove((GameOption)option); }
        GTOptions = DataManager.InstanceDataManager.OptionsToInt(gTOptions);
    }
}
