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
