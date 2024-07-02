using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InformationDisplays : MonoBehaviour
{
    public void ActivateGameObject(GameObject obj)
    {
        if (obj != null)
        {
            obj.SetActive(true);
        }
        print("hovered");
    }

    public void DeactivateGameObject(GameObject obj)
    {
        if (obj != null)
        {
            obj.SetActive(false);
        }
    }
}
