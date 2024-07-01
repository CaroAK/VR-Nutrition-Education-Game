using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
    public Text plate;
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
        plate.text += item.foodName;


        if (confetti != null)
        {
            StartCoroutine(CelebratePoints());
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
