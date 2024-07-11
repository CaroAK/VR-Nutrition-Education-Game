using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.VisualScripting;

public class PointBars : MonoBehaviour
{
    public Slider SliderLycopene;
    public Slider SliderLutein;
    public Slider SliderVite;
    public Slider SliderCarotene;
    public Slider SliderFiber;
    public Slider SliderSugar;
    public Slider SliderFat;
    public GameObject LimitMSG;
    public GameObject SugarMSG;
    public GameObject FatMSG;
    public int Weight = 0;
    public TMP_Text WeightText;
    public TMP_Text Plate;
    public List<string> PlateContents = new List<string>();
    [SerializeField] private ParticleSystem Confetti;
    public SoundManager soundManager;

    public void AddPoints(FoodItem item)
    {
        if (Weight + item.amt > 1000)
        {
            StartCoroutine(ShowLimitMessage());
            return;
        }


        SliderLycopene.value += item.lycopene;
        SliderLutein.value += item.lutein;
        SliderVite.value += item.vite;
        SliderCarotene.value += item.carotene;
        SliderFiber.value += item.fiber;
        SliderSugar.value += item.sugar;
        SliderFat.value += item.fat;

        //if (SliderSugar.value > 14)
        //{
        //    StartCoroutine(ShowSugarWarning());
        //}

        //if (SliderFat.value > 18)
        //{
        //    StartCoroutine(ShowFatWarning());
        //}

        Weight += item.amt;
        PlateContents.Add(item.foodName);
        UpdatePlate();
        soundManager.PlaySelectSound();

        if (Confetti != null)
        {
            StartCoroutine(CelebratePoints());
        }
    }

    private IEnumerator ShowLimitMessage()
    {
        LimitMSG.SetActive(true);
        yield return new WaitForSeconds(5);
        LimitMSG.SetActive(false);
    }

    private IEnumerator ShowFatWarning()
    {
        FatMSG.SetActive(true);
        yield return new WaitForSeconds(5);
        FatMSG.SetActive(false);
    }

    private IEnumerator ShowSugarWarning()
    {
        SugarMSG.SetActive(true);
        yield return new WaitForSeconds(5);
        SugarMSG.SetActive(false);
    }

    private void UpdatePlate()
    {
        WeightText.text = Weight + " g";
        Plate.text = "";
        foreach (string foodName in PlateContents)
        {
            Plate.text += foodName + "\n";
        }
    }

    public void RemoveItem(FoodItem item)
    {
        if (PlateContents.Contains(item.foodName))
        {
            SliderLycopene.value -= item.lycopene;
            SliderLutein.value -= item.lutein;
            SliderVite.value -= item.vite;
            SliderCarotene.value -= item.carotene;
            SliderFiber.value -= item.fiber;
            SliderSugar.value -= item.sugar;
            SliderFat.value -= item.fat;
            Weight -= item.amt;
            PlateContents.Remove(item.foodName);
            UpdatePlate();
            soundManager.PlayUnselectSound();
        }
    }

    public void AddPoints(int points)
    {
        SliderLutein.value += points;

        if (Confetti != null)
        {
            StartCoroutine(CelebratePoints());
        }
    }

    private IEnumerator CelebratePoints()
    {
        Confetti.gameObject.SetActive(true);
        Confetti.Play();

        yield return new WaitForSeconds(Confetti.main.duration);

        Confetti.Stop();
        Confetti.gameObject.SetActive(false);
    }
}
