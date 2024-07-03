using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.VisualScripting;

public class PointBars : MonoBehaviour
{
    public Slider slider_lycopene;
    public Slider slider_lutein;
    public Slider slider_vite;
    public Slider slider_carotene;
    public Slider slider_fiber;
    public Slider slider_sugar;
    public Slider slider_fat;
    public int weight = 0;
    public TMP_Text weightText;
    public TMP_Text plate;
    public ArrayList plateContents = new ArrayList();
    [SerializeField] private ParticleSystem confetti;


    public void AddPoints(FoodItem item)
    {
        if (slider_lycopene != null)
        {
            slider_lycopene.value = slider_lycopene.value + item.lycopene;
        }
        if (slider_lutein != null)
        {
            slider_lutein.value += slider_lutein.value + item.lutein;
        }
        if (slider_vite != null)
        {
            slider_vite.value += item.vite;
        }
        if (slider_carotene != null)
        {
            slider_carotene.value += item.carotene;
        }
        if (slider_fiber != null)
        {
            slider_fiber.value += item.fiber;
        }
        if (slider_sugar != null)
        {
            slider_sugar.value += item.sugar;
        }
        if (slider_fat != null)
        {
            slider_fat.value += item.fat;
        }
        weight += item.amt;
        weightText.text = weight + " g";
        plateContents.Add(item.foodName);
        MakePlate();


        if (confetti != null)
        {
            StartCoroutine(CelebratePoints());
        }
    }

    private void MakePlate()
    {
        plate.text = "";
        foreach (string foodName in plateContents)
        {
            plate.text += foodName + "\n";
        }
    }

    public void RemoveItem(FoodItem item)
    {
        if (plateContents.Contains(item.foodName)) {
            if (slider_lycopene != null)
            {
                slider_lycopene.value -= item.lycopene;
            }
            if (slider_lutein != null)
            {
                slider_lutein.value -= item.lutein;
            }
            if (slider_vite != null)
            {
                slider_vite.value -= item.vite;
            }
            if (slider_carotene != null)
            {
                slider_carotene.value -= item.carotene;
            }
            if (slider_fiber != null)
            {
                slider_fiber.value -= item.fiber;
            }
            if (slider_sugar != null)
            {
                slider_sugar.value -= item.sugar;
            }
            if (slider_fat != null)
            {
                slider_fat.value -= item.fat;
            }
            weight -= item.amt;
            weightText.text = weight + " g";
            plateContents.Remove(item.foodName);
            MakePlate();
        }
    }

    public void AddPoints(int points)
    {
        slider_lutein.value += points;

        if (confetti != null)
        {
            StartCoroutine(CelebratePoints());
        }
    }

    private IEnumerator CelebratePoints()
    {
        confetti.gameObject.SetActive(true);
        confetti.Play();

        yield return new WaitForSeconds(confetti.main.duration);

        confetti.Stop();
        confetti.gameObject.SetActive(false);
    }
}
