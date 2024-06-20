using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointBar : MonoBehaviour
{
    public Slider slider;

    public void SetMaxPoints(int points)
    {
        slider.maxValue = points;
        slider.value = points;
    }

    public void SetPoints(int points)
    {
        slider.value = points;
    }

    public void AddPoints(int points)
    {
        slider.value = slider.value + points;
    }
}
