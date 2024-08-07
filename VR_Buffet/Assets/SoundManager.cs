using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioSource Src;
    public AudioClip SelectClip;
    public AudioClip UnselectClip;
    public AudioClip FinishClip;

    public void PlaySelectSound()
    {
        Src.clip = SelectClip;
        Src.Play();
    }

    public void PlayUnselectSound()
    {
        Src.clip = UnselectClip;
        Src.Play();
    }

    public void PlayFinishSound()
    {
        Src.clip = FinishClip;
        Src.Play();
    }
}