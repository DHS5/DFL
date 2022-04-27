using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameAudioManager : AudioManager
{
    private void Start()
    {
        if (DataManager.InstanceDataManager != null)
        {
            musicOn = DataManager.InstanceDataManager.musicOn; musicToggle.isOn = musicOn;
            musicVolume = DataManager.InstanceDataManager.musicVolume; musicSlider.value = musicVolume;

            soundOn = DataManager.InstanceDataManager.soundOn; soundToggle.isOn = soundOn;
            soundVolume = DataManager.InstanceDataManager.soundVolume; soundSlider.value = soundVolume;
        }
        else
        {
            musicOn = musicToggle.isOn; DataManager.InstanceDataManager.musicOn = musicOn;
            musicVolume = musicSlider.value; DataManager.InstanceDataManager.musicVolume = musicVolume;

            soundOn = soundToggle.isOn; DataManager.InstanceDataManager.soundOn = soundOn;
            soundVolume = soundSlider.value; DataManager.InstanceDataManager.soundVolume = soundVolume;
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


    public void MuteSound()
    {
        foreach (AudioSource a in FindObjectsOfType<AudioSource>())
        {
            if (!a.CompareTag("AudioManager"))
            {
                a.mute = true;
            }
        }
    }

    public void UnmuteSound()
    {
        foreach (AudioSource a in FindObjectsOfType<AudioSource>())
        {
            if (!a.CompareTag("AudioManager"))
            {
                a.mute = false;
            }
        }
    }



}
