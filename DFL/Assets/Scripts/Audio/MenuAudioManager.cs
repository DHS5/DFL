using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuAudioManager : AudioManager
{
    protected override void Start()
    {
        base.Start();

        if (DataManager.InstanceDataManager != null && DataManager.InstanceDataManager.soundVolume != 0)
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

        musicNumber = DataManager.InstanceDataManager.musicNumber;
        PlayFromTime(musicNumber, DataManager.InstanceDataManager.musicTime);
        if (DataManager.InstanceDataManager.musicPaused) audioSource.Pause();
    }
}
