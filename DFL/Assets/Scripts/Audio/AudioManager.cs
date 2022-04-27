using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class AudioManager : MonoBehaviour
{
    [SerializeField] protected Toggle musicToggle;
    [SerializeField] protected Slider musicSlider;

    [SerializeField] protected Toggle soundToggle;
    [SerializeField] protected Slider soundSlider;


    protected bool musicOn;
    public bool MusicOn
    {
        get { return musicOn; }
        set { musicOn = value; DataManager.InstanceDataManager.musicOn = value; }
    }
    protected float musicVolume;
    public float MusicVolume
    {
        get { return musicVolume; }
        set { musicVolume = value; DataManager.InstanceDataManager.musicVolume = value; }
    }

    protected bool soundOn;
    public bool SoundOn
    {
        get { return soundOn; }
        set { soundOn = value; DataManager.InstanceDataManager.soundOn = value; }
    }
    protected float soundVolume;
    public float SoundVolume
    {
        get { return soundVolume; }
        set { soundVolume = value; DataManager.InstanceDataManager.soundVolume = value; }
    }
}
