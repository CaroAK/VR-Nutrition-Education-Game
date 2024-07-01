using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PlateManager : MonoBehaviour
{
    public TextMeshProUGUI plate;

    public void AddToPlate(string food)
    {
        plate.text += food + "\n";
    }
}
