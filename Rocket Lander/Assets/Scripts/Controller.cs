using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controller : MonoBehaviour {

    public new Rigidbody2D rigidbody2D;
    public bool rIsPress = false;
    public bool lIsPress = false;
    public bool pIsPress = false;


    public void TurnRight()
    {
        rigidbody2D.MovePosition(rigidbody2D.position + new Vector2(0.1f, 0.0f));
        Debug.Log("Right Button");

        //float smooth = 2.0F;
        //float tiltAngle = 30.0F;

        //float tiltAroundZ = Input.GetAxis("Horizontal") * tiltAngle;
        //float tiltAroundX = Input.GetAxis("Vertical") * tiltAngle;
        //Quaternion target = Quaternion.Euler(tiltAroundX, 0, tiltAroundZ);
        //transform.rotation = Quaternion.Slerp(transform.rotation, target, Time.deltaTime * smooth);

        //rigidbody2D.AddTorque(10.0f);




    }

    public void TurnLeft()
    {
        rigidbody2D.MovePosition(rigidbody2D.position - new Vector2(0.1f, 0.0f));
        Debug.Log("Left Button");


    }

    public void Power()
    {
        rigidbody2D.MovePosition(rigidbody2D.position + new Vector2(0.0f, 0.01f));
        Debug.Log("Power Button");

      // rigidbody2D.AddForce(transform.up);

    }



    public void setRIsPress()
    {
        if (rIsPress)
        {
            rIsPress = false;
        }
        else
        {
            rIsPress = true;
        }
    }

        public void setLIsPress()
    {
        if (lIsPress)
        {
            lIsPress = false;
        }
        else
        {
            lIsPress = true;
        }

    }

    public void setPIsPress()
    {
        if (pIsPress)
        {
            pIsPress = false;
        }
        else
        {
            pIsPress = true;
        }

    }



    void Start () {
        rigidbody2D = GetComponent<Rigidbody2D>();
    }
	

	void Update () {

        if(rIsPress)
        {
            TurnRight();
        }

        if (lIsPress)
        {
            TurnLeft();
        }

        if (pIsPress)
        {
            Power();
        }


    }
}
