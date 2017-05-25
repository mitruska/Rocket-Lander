using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;
using UnityEngine.UI;

[System.Serializable]
public class Rocket : MonoBehaviour
{
    //from json
    public float gravity;
    public float rocketMass;
    public float thrustForce;
    public float turningForce;
    public float fuel;

    public Vector2 power;
    public static int success = 0;
    public static int fails = 0;

    public Text scoreText, fuelText;

    private string jsonString;

    public static bool isWasted = false; 
    public static bool isLanding = false; 
    public bool splashOnce = true;
    public bool newGame = false;

    public new Rigidbody2D rigidbody2D;
   
    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
        jsonString = File.ReadAllText(Application.dataPath + "/Resources/rocketAttributes.json");
      //  Debug.Log(jsonString);
        Load(jsonString);
      //  Debug.Log(fuel);

        isWasted = false;
        splashOnce = true;
        isLanding = false;

        rigidbody2D.gravityScale = gravity;
        rigidbody2D.drag = thrustForce;
        rigidbody2D.angularDrag = turningForce;

        UpdateUI();
    }

    public void Load(string savedData)
    {
        JsonUtility.FromJsonOverwrite(savedData, this);
    }

    void Splash()
    {
        if (splashOnce)
        {
            isLanding = false;
            splashOnce = false;
            Invoke("Die", 0.2f);
        }
    }

    void Die()
    {
        isWasted = true;
        fails++;
        Invoke("RestartLevel", 1.5f);
        Debug.Log("die collision");
    }

    void RestartLevel()
    {     
        int scene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(scene, LoadSceneMode.Single);
    }

    void Land()
    {
        success++;
        Debug.Log("Score = " + success);
        isLanding = false;
        Invoke("RestartLevel", 0.5f);

    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag != "landingspace")
        {
            Splash();
        }
    }
  
    void UpdateUI()
    {
        scoreText.text = "score: " + success + "/" + (success + fails);
        fuelText.text = "fuel: " + fuel.ToString();
    }

    void Update()
    {
        UpdateUI();
        if (isLanding)
        {
            Land();
        }
        else if (isWasted)
        {
            Splash();
        }


    }
}
