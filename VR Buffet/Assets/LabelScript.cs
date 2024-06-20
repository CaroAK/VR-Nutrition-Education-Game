using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LabelScript : MonoBehaviour
{
    public PointBarScript pointbar;

    public void Select()
    {
        Debug.Log("Added to plate");
        pointbar.SetPoints(5);
    }
}
