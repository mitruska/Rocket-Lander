using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;

[System.Serializable]
public class Rocket : MonoBehaviour
{
   // Parametry takie jak grawitacja, ilość paliwa, siła ciągu, siła przechylania i masa rakiety wczytywane z pliku w formacie JSON
   // Ilość prób i sukcesów zapisywana i zachowywana nawet po wyłączeniu aplikacji

    public Vector2 power;
    public static int success = 0;
    public static int fails = 0;

    //from json
    public float gravity;
    public float fuel;
    public float rocketMass;
    public float thrustForce;  
    public float turningForce;
   
    public static bool isWasted = false;  //lack of fuel
    public bool splashOnce = false;
    public bool newGame = false;

    public new Rigidbody2D rigidbody2D;

    private string jsonString;

    public void Load(string savedData)
    {  
        JsonUtility.FromJsonOverwrite(savedData, this);
    }

    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
        jsonString = File.ReadAllText(Application.dataPath + "/Resources/rocketAttributes.json");
      //  Debug.Log(jsonString);
        Load(jsonString);
      //  Debug.Log(fuel);
        isWasted = false;
        splashOnce = true;

        rigidbody2D.gravityScale = this.gravity;
        Debug.Log(rigidbody2D.gravityScale);
        rigidbody2D.drag = thrustForce;
        rigidbody2D.angularDrag = turningForce;
    }


    void Splash()
    {
        Invoke("Die", 0.2f);
    }

    void Die()
    {
        isWasted = true;
        fails++;
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
            success++;
            Debug.Log("Score = " + success);
            Invoke("RestartLevel", 0.5f);
        }
        else
        {
            Splash();
        }

    }

    //public void TurnRight()
    //{
    //    //rigidbody2D.MovePosition(rigidbody2D.position + new Vector2(0.1f, 0.0f));
    //    //Debug.Log("Right Button");

    //    //float smooth = 2.0F;
    //    //float tiltAngle = 30.0F;

    //    //float tiltAroundZ = Input.GetAxis("Horizontal") * tiltAngle;
    //    //float tiltAroundX = Input.GetAxis("Vertical") * tiltAngle;
    //    //Quaternion target = Quaternion.Euler(tiltAroundX, 0, tiltAroundZ);
    //    //transform.rotation = Quaternion.Slerp(transform.rotation, target, Time.deltaTime * smooth);

    //    //rigidbody2D.AddTorque(10.0f);

       


    //}

    //public void TurnLeft()
    //{
    //    rigidbody2D.MovePosition(rigidbody2D.position - new Vector2(0.1f, 0.0f));
    //    Debug.Log("Left Button");

      
    //}

    //public void Power()
    //{
    //   // rigidbody2D.MovePosition(rigidbody2D.position + new Vector2(0.0f, 1.0f));
    //    Debug.Log("Power Button");

    //    rigidbody2D.AddForce(transform.up * thrustForce);

    //    fuel--;
    //    rocketMass--;
    //}


    // Update is called once per frame
    void Update()
    {
        fuel--;
        rocketMass--;

    }
}
