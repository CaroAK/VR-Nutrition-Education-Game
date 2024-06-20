using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointBarScript : MonoBehaviour
{
    public Slider slider;

    public void SetMaxPoints(int points) {
        slider.maxValue = points;
        slider.value = points;
    }

    public void SetPoints(int points)
    {
        Debug.Log("Points Added");
        slider.value = points;
    }
}
