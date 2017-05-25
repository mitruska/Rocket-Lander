using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LandingSpace : MonoBehaviour {

    void OnTriggerEnter2D(Collider2D collision)
    {
        Rocket.isLanding = true;
    }

    void FixedUpdate () {

        
    }
}
