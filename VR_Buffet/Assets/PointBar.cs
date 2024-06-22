using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointBar : MonoBehaviour
{
    public Slider slider;
    [SerializeField] private ParticleSystem confetti;

    public void SetMaxPoints(int points)
    {
        slider.maxValue = points;
        slider.value = points;
    }

    public void SetPoints(int points)
    {
        slider.value = points;
    }

    public void AddPoints(FoodItem foodItem)
    {
        int points = foodItem.lycopene;
        slider.value = slider.value + points;

        if (confetti != null)
        {
            StartCoroutine(CelebratePoints());
        }
    }

    private IEnumerator CelebratePoints()
    {
        confetti.gameObject.SetActive(true);
        confetti.Play();

        // Wait for the duration of the particle system's main duration or a fixed time
        yield return new WaitForSeconds(confetti.main.duration);

        confetti.Stop();
        confetti.gameObject.SetActive(false);
    }
}
