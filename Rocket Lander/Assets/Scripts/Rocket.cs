using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;
using UnityEngine.UI;
using System;


[System.Serializable]
public class Rocket : MonoBehaviour
{
    //from json
    public float gravity;
    public float rocketMass;
    public float thrustForce;
    public float turningForce;
    public float fuel;

    public static int success = 0;
    public static int fails = 0;

    public Text scoreText, fuelText, endingText;

    private string jsonString;

    public static bool isWasted = false; 
    public static bool isLanding = false; 
    public static bool splashOnce = false;

    public new Rigidbody2D rigidbody2D;


    private void LoadGameData()
    {
        string filePath = Path.Combine(Application.streamingAssetsPath, "rocketAttributes.json");

        if (File.Exists(filePath))
        {
            // Read the json from the file into a string
            // string filePath = System.IO.Path.Combine(Application.streamingAssetsPath, "rocketAttributes");
            string dataAsJson = File.ReadAllText(filePath);
            // Pass the json to JsonUtility, and tell it to create a GameData object from it
            // GameData loadedData = JsonUtility.FromJson<GameData>(dataAsJson);
            JsonUtility.FromJsonOverwrite(dataAsJson, this);
            // Retrieve the allRoundData property of loadedData
            //allRoundData = loadedData.allRoundData;
            Debug.Log(dataAsJson);
        }
        else
        {
            Debug.Log("Cannot load game data!");
             gravity = 0.1f;
             rocketMass = 0.5f;
             thrustForce = 0.5f;
             turningForce = 2.0f;
             fuel = 20.0f;
        }

    }


    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
        Debug.Log(Application.dataPath);

        LoadGameData();


        //jsonString = File.ReadAllText(Application.dataPath + "/Resources/rocketAttributes.json");
        
        ////string path = System.IO.Path.Combine(Application.streamingAssetsPath, "rocketAttributes");
        ////jsonString = File.ReadAllText(path);

        //Debug.Log(jsonString);
        //JsonUtility.FromJsonOverwrite(jsonString, this);

        //Debug.Log(jsonString);
        //Resources.Load("rocketAttributes");

        isWasted = false;
        splashOnce = false;
        isLanding = false;

        rigidbody2D.gravityScale = gravity;
        rigidbody2D.mass = rocketMass;
        rigidbody2D.drag = thrustForce;
        rigidbody2D.angularDrag = turningForce;

        Debug.Log(fuel);

        endingText.text = "";
        UpdateUI();
    }

    void Splash()
    {
        if (splashOnce == false && isLanding == false)
        {
            //isLanding = true;
            splashOnce = true;
            isWasted = true;
            Invoke("Die", 0.2f);
        }
    }

    void Die()
    {
        fails++;
        endingText.text = "BOOOOM !";
        Invoke("RestartLevel", 1.5f);
        Debug.Log("die collision");
    }

    public void RestartLevel()
    {     
        int scene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(scene, LoadSceneMode.Single);
       // Application.LoadLevel(Application.loadedLevel);
    }

    public void RestartScore()
    {
        success = 0;
        fails = 0;
    }

    void Land()
    {
        isLanding = false;
        splashOnce = true;
        endingText.color = Color.magenta;
        endingText.text = "GREAT !";
        success++;
        Debug.Log("Score = " + success);
        Invoke("RestartLevel", 2.0f);
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        
        Debug.Log(collision.gameObject.tag);
        if (collision.gameObject.tag != "landingspace")
        {
            if (splashOnce == false && isLanding == false)
            {
                Splash();
            }
        }
    }
  
    void UpdateUI()
    {
        scoreText.text = "Success: " + success + " Fails: " + fails + " \nTotal: " + (success + fails).ToString();
        fuelText.text = "fuel: " + fuel;
    }

    void Update()
    {
        //Debug.Log(gameObject.tag);

        if (fuel < 0.0f)
        {
            isWasted = true;
        }
        fuel -= Time.deltaTime;

        if (isLanding == true && splashOnce == false)
        {
            Land();
        }
        else if (isWasted)
        {
            Splash();
        }

        UpdateUI();

    }
}
