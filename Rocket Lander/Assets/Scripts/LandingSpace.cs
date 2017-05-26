using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LandingSpace : MonoBehaviour
{
    private void Start()
    {
        fireworks = GetComponent<ParticleSystem>();
    }

    ParticleSystem fireworks;
    void OnTriggerEnter2D(Collider2D collision)
    {

        Debug.Log(collision.gameObject.tag);
        if (Rocket.splashOnce == false)
        {
            if (collision.gameObject.tag == "checkpoint")
            {
                Rocket.isLanding = true;
                fireworks.Play();

            }
            else
            {
                Rocket.isWasted = true;
            }
        }
    }

}
