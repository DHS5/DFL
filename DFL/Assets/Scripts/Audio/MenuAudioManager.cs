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
            MusicOn = DataManager.InstanceDataManager.musicOn; musicToggle.isOn = musicOn;
            MusicVolume = DataManager.InstanceDataManager.musicVolume; musicSlider.value = musicVolume;

            SoundOn = DataManager.InstanceDataManager.soundOn; soundToggle.isOn = soundOn;
            SoundVolume = DataManager.InstanceDataManager.soundVolume; soundSlider.value = soundVolume;
        }
        else
        {
            MusicOn = musicToggle.isOn; DataManager.InstanceDataManager.musicOn = musicOn;
            MusicVolume = musicSlider.value; DataManager.InstanceDataManager.musicVolume = musicVolume;

            SoundOn = soundToggle.isOn; DataManager.InstanceDataManager.soundOn = soundOn;
            SoundVolume = soundSlider.value; DataManager.InstanceDataManager.soundVolume = soundVolume;
        }

        MusicNumber = DataManager.InstanceDataManager.musicNumber;
        PlayFromTime(musicNumber, DataManager.InstanceDataManager.musicTime);
    }
}
