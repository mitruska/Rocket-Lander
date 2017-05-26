using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour {

    ParticleSystem explosion;
    bool activate = false;

    private void Start()
    {
        explosion = GetComponent<ParticleSystem>();
        activate = false;
    }

    void Update()
    {
        if (Rocket.isWasted == true && Rocket.isLanding == false)
        {
            if(activate == false)
            {
                activate = true;
                Debug.Log("Explosion !");
                explosion.Play();
            }
          
        }

    }
       
    
}
