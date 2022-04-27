using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class AudioManager : MonoBehaviour
{
    protected AudioSource audioSource;
    
    [SerializeField] protected AudioClip[] musics;
    

    [SerializeField] protected Toggle musicToggle;
    [SerializeField] protected Slider musicSlider;

    [SerializeField] protected Toggle soundToggle;
    [SerializeField] protected Slider soundSlider;


    [Tooltip("Number of the music currently playing")]
    protected int musicNumber;
    public int MusicNumber
    {
        get { return musicNumber; }
        set { musicNumber = value; if (DataManager.InstanceDataManager != null) DataManager.InstanceDataManager.musicNumber = value; }
    }
    public bool MusicPaused
    {
        set { if (DataManager.InstanceDataManager != null) DataManager.InstanceDataManager.musicPaused = value; }
    }


    protected bool musicOn;
    public bool MusicOn
    {
        get { return musicOn; }
        set { musicOn = value; if (DataManager.InstanceDataManager != null) DataManager.InstanceDataManager.musicOn = value; }
    }
    protected float musicVolume;
    public float MusicVolume
    {
        get { return musicVolume; }
        set { musicVolume = value; if (DataManager.InstanceDataManager != null) DataManager.InstanceDataManager.musicVolume = value; }
    }

    protected bool soundOn;
    public bool SoundOn
    {
        get { return soundOn; }
        set { soundOn = value; if (DataManager.InstanceDataManager != null) DataManager.InstanceDataManager.soundOn = value; }
    }
    protected float soundVolume;
    public float SoundVolume
    {
        get { return soundVolume; }
        set { soundVolume = value; if (DataManager.InstanceDataManager != null) DataManager.InstanceDataManager.soundVolume = value; }
    }



    protected virtual void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }


    /// <summary>
    /// Plays the chosen clip from the beginning
    /// </summary>
    /// <param name="clipNumber">Number of the music clip</param>
    protected void PlayFromBeginning(int clipNumber)
    {
        audioSource.clip = musics[clipNumber];
        audioSource.time = 0f;
        audioSource.Play();
    }
    /// <summary>
    /// Plays the chosen clip from the chosen start time
    /// </summary>
    /// <param name="clipNumber">Number of the music clip</param>
    /// <param name="startTime">Start time of the music clip</param>
    protected void PlayFromTime(int clipNumber, float startTime)
    {
        audioSource.clip = musics[clipNumber];
        audioSource.time = startTime;
        audioSource.Play();
    }


    /// <summary>
    /// Plays the next music in the list
    /// </summary>
    public void NextMusic()
    {
        if (musicNumber == musics.Length - 1) MusicNumber = 0;
        else MusicNumber++;

        PlayFromBeginning(musicNumber);
    }
    /// <summary>
    /// Plays the previous music in the list
    /// </summary>
    public void PreviousMusic()
    {
        if (musicNumber == 0) MusicNumber = musics.Length;
        else MusicNumber--;

        PlayFromBeginning(musicNumber);
    }



    public void SceneChange()
    {
        if (DataManager.InstanceDataManager != null)
        {
            DataManager.InstanceDataManager.musicTime = audioSource.time;
        }
    }
}
