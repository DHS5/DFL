using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameAudioManager : AudioManager
{
    protected override void Start()
    {
        base.Start();
        
        if (DataManager.InstanceDataManager != null)
        {
            musicOn = DataManager.InstanceDataManager.musicOn; musicToggle.isOn = musicOn;
            musicVolume = DataManager.InstanceDataManager.musicVolume; musicSlider.value = musicVolume;

            soundOn = DataManager.InstanceDataManager.soundOn; soundToggle.isOn = soundOn;
            soundVolume = DataManager.InstanceDataManager.soundVolume; soundSlider.value = soundVolume;

            musicNumber = DataManager.InstanceDataManager.musicNumber;
            PlayFromTime(musicNumber, DataManager.InstanceDataManager.musicTime);
            if (DataManager.InstanceDataManager.musicPaused) audioSource.Pause();
        }
        else
        {
            musicOn = musicToggle.isOn;
            musicVolume = musicSlider.value;

            soundOn = soundToggle.isOn;
            soundVolume = soundSlider.value;

            musicNumber = 0;
            PlayFromBeginning(musicNumber);
        }
    }


    /// <summary>
    /// Puts the volume of all the sound audio sources to the desired volume
    /// </summary>
    public void ActuSoundVolume()
    {
        foreach (AudioSource a in FindObjectsOfType<AudioSource>())
        {
            if (!a.CompareTag("AudioManager"))
            {
                a.volume = soundVolume;
            }
        }
    }


    public void MuteSound(bool tmp)
    {
        foreach (AudioSource a in FindObjectsOfType<AudioSource>())
        {
            if (!a.CompareTag("AudioManager"))
            {
                a.mute = tmp;
            }
        }
    }
}
