using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fireworks : MonoBehaviour {

    ParticleSystem fireworks;

    private void Start()
    {
        fireworks = GetComponent<ParticleSystem>();
    }

    void Update()
    {
        //if (Rocket.isLanding)
        //{
           
        //    fireworks.Play();
        //}
        if (Rocket.splashOnce == true && Rocket.isLanding == true)
        {
            Debug.Log("Fireworks !");
            fireworks.Play();
        }
       
    }
}
