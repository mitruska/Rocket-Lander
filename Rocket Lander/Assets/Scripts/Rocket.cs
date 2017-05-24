using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Rocket : MonoBehaviour
{

    public Vector2 power;
    public static int score = 0;
    public float thrustForce;  
    public float turningForce; 
    public float fuel;

    public static bool isWasted = false;
    public bool splashOnce = false;

    public new Rigidbody2D rigidbody2D;



    void Start()
    {
        isWasted = false;
        rigidbody2D = GetComponent<Rigidbody2D>();
        splashOnce = true;
    }


    void Splash()
    {
        Invoke("Die", 0.2f);
    }

    void Die()
    {
        isWasted = true;
        Invoke("RestartLevel", 0.5f);
        Debug.Log("die collision");
    }

    void RestartLevel()
    {     
        int scene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(scene, LoadSceneMode.Single);
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (isWasted)
        {
            return;
        }

        if (collision.gameObject.tag == "platform")
        {
            score++;
            Debug.Log("Score = " + score);
            Invoke("RestartLevel", 0.5f);
        }
        else
        {
            Splash();
        }

    }

    public void TurnRight()
    {
        rigidbody2D.MovePosition(rigidbody2D.position + new Vector2(0.1f, 0.0f));
        Debug.Log("Right Button");

    }

    public void TurnLeft()
    {
        rigidbody2D.MovePosition(rigidbody2D.position - new Vector2(0.1f, 0.0f));
        Debug.Log("Left Button");
    }

    public void Power()
    {
        rigidbody2D.MovePosition(rigidbody2D.position + new Vector2(0.0f, 1.0f));
        Debug.Log("Power Button");


    }


    // Update is called once per frame
    void Update()
    {
      

    }
}
