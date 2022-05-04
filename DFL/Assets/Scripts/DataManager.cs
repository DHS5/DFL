using System.Collections;
using System.Collections.Generic;
using LootLocker.Requests;
using LootLocker.Admin;
using UnityEngine;
using System.IO;
using System.Runtime.InteropServices;

/// <summary>
/// Struct containing a Vector3 representing the game type, a list of 5 names and a list of 5 wave numbers
/// </summary>
[System.Serializable]
public struct ScoreList
{
    public Vector3Int gameType;
    public string[] names;
    public int[] waves;
}

public struct LeaderBoard
{
    public List<string> names;
    public List<int> scores;
}


/// <summary>
/// Singleton Instance of DataManager
/// </summary>
public class DataManager : MonoBehaviour
{
    /// <summary>
    /// DataManager of the game
    /// </summary>
    public static DataManager InstanceDataManager { get; private set; }


    [Tooltip("Game Mode to pass to the GameManager")]
    [HideInInspector] public GameMode gameMode;

    [Tooltip("Difficulty to pass to the GameManager")]
    [HideInInspector] public GameDifficulty difficulty;

    [Tooltip("Game options to pass to the GameManager")]
    [HideInInspector] public List<GameOption> options = new List<GameOption>();

    [Tooltip("List of ScoreList with the highscores")]
    public ScoreList[] highscores = new ScoreList[96];

    [HideInInspector] public LeaderBoard[,,] leaderboards = new LeaderBoard[4, 3, 8];

    private int[] lb_ID = { 2909, 2911, 2912, 2913 };

    [HideInInspector] public string highName;
    [HideInInspector] public int highWave;
    [HideInInspector] public int highIndex;



    [HideInInspector] public float yMouseSensitivity;
    [HideInInspector] public float ySmoothRotation;


    [HideInInspector] public bool musicOn;
    [HideInInspector] public float musicVolume;
    [HideInInspector] public int musicNumber;
    [HideInInspector] public float musicTime;

    [HideInInspector] public bool soundOn;
    [HideInInspector] public float soundVolume;

    [HideInInspector] public bool loopOn;

#if UNITY_WEBGL
    [DllImport("__Internal")]
    private static extern void JS_FileSystem_Sync();
#endif


    /// <summary>
    /// Gets the Singleton Instance
    /// </summary>
    private void Awake()
    {
        if (InstanceDataManager != null)
        {
            Destroy(this);
            // Clears the options when starting the menu
            InstanceDataManager.options.Clear();
            return;
        }
        InstanceDataManager = this;
        DontDestroyOnLoad(gameObject);

        LoadHighscores();

        if (highscores[0].gameType != new Vector3Int(1, 0, 0)) InitHighscores();

        StartSession();
    }


    private void StartSession()
    {
        LootLockerSDKManager.StartGuestSession((response) =>
        {
            if (response.success) Debug.Log("success");
            else Debug.Log("failed");
        });
    }


    private string GametypeToMeta(GameMode GM, GameDifficulty GD, List<GameOption> GOs)
    {
        return (int) GM + "." + (int) GD / 2 + "." + OptionsToInt(GOs);
    }


    public void PostScore(GameMode GM, GameDifficulty GD, List<GameOption> GOs)
    {
        Debug.Log("gt meta : " + GametypeToMeta(GM, GD, GOs));
        LootLockerSDKManager.SubmitScore(highName, highWave, lb_ID[(int) GM], GametypeToMeta(GM, GD, GOs), (response) =>
        {
            if (response.success) Debug.Log("Successfully submitted");
            else Debug.Log("Failed to submit");
        });
    }

    public void LoadLeaderboards()
    {
        for (int i = 0; i < 4; i++)
        {
            LootLockerSDKManager.GetScoreList(lb_ID[i], 5, (response) =>
            {
                if (response.success)
                {
                    LootLockerLeaderboardMember[] scores = response.items;

                    for (int j = 0; j < scores.Length; j++)
                    {
                        string[] gt = scores[j].metadata.Split('.');
                        LeaderBoard l = leaderboards[lb_ID[i], int.Parse(gt[1]), int.Parse(gt[2])];
                        if (l.names.Count < 5)
                        {
                            l.names.Add(scores[j].member_id);
                            l.scores.Add(scores[j].score);
                        }
                    }


                    Debug.Log("Successfully loaded");
                }
                else Debug.Log("Failed to submit");
            });
        }
    }



    /// <summary>
    /// Initialize the highscore board
    /// </summary>
    private void InitHighscores()
    {
        ScoreList sl;
        int i = 0;
        for (int gm = 1; gm < 5; gm++)
            for (int gd = 0; gd < 3; gd++)
                for (int go = 0; go < 8; go++)
                {
                    sl.gameType = new Vector3Int(gm, gd, go);
                    sl.names = new string[] { "none", "none", "none", "none", "none" };
                    sl.waves = new int[] { 1, 1, 1, 1, 1 };
                    highscores[i] = sl;
                    i++;
                }
    }

    private void PrintHighscores()
    {
        for (int gm = 0; gm < 4; gm++)
            for (int gd = 0; gd < 3; gd++)
                for (int go = 0; go < 8; go++)
                    for (int i = 0; i < 5; i++)
                        Debug.Log(0);
    }


    /// <summary>
    /// Return an int being the index for the highscores 3rd arg given the game options
    /// </summary>
    /// <param name="GOs">Game Options list</param>
    /// <returns></returns>
    public int OptionsToInt(List<GameOption> GOs)
    {
        if (GOs.Count == 0) return 0;
        if (GOs.Count == 1) return (int)GOs[0] + 1;
        if (GOs.Count == 3) return 7;
        else
        {
            if (GOs.Contains(GameOption.BONUS) && GOs.Contains(GameOption.OBSTACLE)) return 4;
            if (GOs.Contains(GameOption.BONUS) && GOs.Contains(GameOption.FOG)) return 5;
            if (GOs.Contains(GameOption.FOG) && GOs.Contains(GameOption.OBSTACLE)) return 6;
        }
        return 0;
    }


    /// <summary>
    /// Add a score in a list
    /// </summary>
    /// <param name="list">List of scores</param>
    /// <param name="index">Index at which add the score</param>
    /// <param name="value">Score to add</param>
    private void AddName(string[] list, int index, string value)
    {
        string tmp;
        for (int i = 0; i < 4 - index; i++)
        {
            tmp = list[index + i];
            list[index + i] = value;
            value = tmp;
        }
    }
    /// <summary>
    /// Add a score in a list
    /// </summary>
    /// <param name="list">List of scores</param>
    /// <param name="index">Index at which add the score</param>
    /// <param name="value">Score to add</param>
    private void AddWave(int[] list, int index, int value)
    {
        int tmp;
        for (int i = 0; i < 4 - index; i++)
        {
            tmp = list[index + i];
            list[index + i] = value;
            value = tmp;
        }
    }


    /// <summary>
    /// Enters a new score in the highscores if it's in the top 5
    /// </summary>
    /// <param name="GM">Game Mode</param>
    /// <param name="GD">Game Difficulty</param>
    /// <param name="GOs">Game Options list</param>
    /// <param name="name">Name of the player</param>
    /// <param name="wave">Wave reached by the player</param>
    /// <returns>1 if it's a highscore, else 0</returns>
    public int IsNewHighscore(GameMode GM, GameDifficulty GD, List<GameOption> GOs, string name, int wave)
    {
        int i = 0;
        Vector3Int gameType = new Vector3Int((int)GM, (int)GD / 2, OptionsToInt(GOs));

        while (highscores[i].gameType != gameType && i < 96) i++;

        if (highscores[i].gameType == gameType)
        {
            for (int j = 0; j < 5; j++)
                if (highscores[i].waves[j] < wave)
                {
                    return i;
                }
        }
        else Debug.Log("Invalid game type");

        return -1;
    }


    /// <summary>
    /// Enters a new score in the highscores if it's in the top 5
    /// </summary>
    /// <param name="GM">Game Mode</param>
    /// <param name="GD">Game Difficulty</param>
    /// <param name="GOs">Game Options list</param>
    /// <param name="name">Name of the player</param>
    /// <param name="wave">Wave reached by the player</param>
    /// <returns>1 if it's a highscore, else 0</returns>
    public int NewScore(GameMode GM, GameDifficulty GD, List<GameOption> GOs, string name, int wave)
    {
        int i = 0;
        Vector3Int gameType = new Vector3Int((int)GM, (int)GD / 2, OptionsToInt(GOs));

        while (highscores[i].gameType != gameType && i < 96) i++;

        if (highscores[i].gameType == gameType)
        {
            for (int j = 0; j < 5; j++)
                if (highscores[i].waves[j] < wave)
                {
                    AddName(highscores[i].names, j, name);
                    AddWave(highscores[i].waves, j, wave);
                    return 1;
                }
        }
        else Debug.Log("Invalid game type");

        return 0;
    }


    public void NewHighscore()
    {
        if (highName == "") highName = "Anonym";
        for (int j = 0; j < 5; j++)
            if (highscores[highIndex].waves[j] < highWave)
            {
                AddName(highscores[highIndex].names, j, highName);
                AddWave(highscores[highIndex].waves, j, highWave);
                SaveHighscores();
                return;
            }
    }





    /// <summary>
    /// Class used to save the best scores and players's informations
    /// </summary>
    [System.Serializable]
    class SaveData
    {
        public ScoreList[] highscores;
    }


    public void SaveHighscores()
    {
        SaveData data = new SaveData();
        data.highscores = highscores;

        string json = JsonUtility.ToJson(data);

        File.WriteAllText(Application.persistentDataPath + "/savefile.json", json);

        

        if (Application.platform == RuntimePlatform.WebGLPlayer)
            JS_FileSystem_Sync();
    }

    /// <summary>
    /// Load the game record from the corresponding file
    /// </summary>
    public void LoadHighscores()
    {
        string path = Application.persistentDataPath + "/savefile.json";
        if (File.Exists(path))
        {
            string json = File.ReadAllText(path);
            SaveData data = JsonUtility.FromJson<SaveData>(json);

            highscores = data.highscores;
        }
    }
}
