using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System;



[System.Serializable]
public class Rocket : MonoBehaviour
{
    //public static Rocket rocket;
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

    [Serializable]
    public class PlayerData
    {
        public int success = 0;
        public int fails = 0;
    }

    //private void Awake ()
    //{
    //    if (rocket == null)
    //    {
    //        DontDestroyOnLoad(gameObject);
    //        rocket = this;
    //    }
    //    //else if (rocket != this)
    //    //{
    //    //    Destroy(gameObject);
    //    //}
    //}

    private void LoadGameData ()
    {
        string filePath = Path.Combine(Application.streamingAssetsPath, "rocketAttributes.json");

        if (File.Exists(filePath))
        {
            // string filePath = System.IO.Path.Combine(Application.streamingAssetsPath, "rocketAttributes");
            string dataAsJson = File.ReadAllText(filePath);
            JsonUtility.FromJsonOverwrite(dataAsJson, this);
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

    public void LoadScore()
    {
        if (File.Exists(Application.persistentDataPath + "/score.dat"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + "/score.dat", FileMode.Open);
            PlayerData data = (PlayerData)bf.Deserialize(file);

            success = data.success;
            fails = data.fails;

            file.Close();
        }
    }


    public void SaveScore()
    {

        //try
        //{
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file;
            if (!File.Exists(Application.persistentDataPath + "/score.dat"))
            {
                file = File.Create(Application.persistentDataPath + "/score.dat");
            }
            else
            {
                file = File.OpenWrite(Application.persistentDataPath + "/score.dat");
            }

            PlayerData data = new PlayerData();
            data.success = success;
            data.fails = fails;

            bf.Serialize(file, data);
            file.Close();
        //}
        //catch (Exception) { };
    }


    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
        Debug.Log(Application.dataPath);

        LoadGameData();
        LoadScore();

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

    public void RestartLevel()
    {
        SaveScore();
        int scene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(scene, LoadSceneMode.Single);
        // Application.LoadLevel(Application.loadedLevel);
    }

    void Die()
    {
        fails++;
        endingText.text = "BOOOOM !";
        Invoke("RestartLevel", 2.0f);
        Debug.Log("die collision");
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

    void Splash()
    {
        if (splashOnce == false && isLanding == false)
        {
            splashOnce = true;
            isWasted = true;
            Invoke("Die", 0.2f);
        }
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
        if (fuel < 0.0f)
            fuelText.text = "NO POWER !";
        else
            fuelText.text = "Fuel: " + fuel;
    }

    void Update()
    {
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
