using UnityEngine;
using System.Collections;

public class Portal : MonoBehaviour {

	public GameObject moveTarget;
	GameObject character;

	void OnTriggerEnter2D(Collider2D other)
	{
		if (other.tag == "Player")
		{
			//other.transform.position = moveTarget.transform.position;
			character = other.gameObject;
			GameController.instance.NextStage(this);


		}
	}


	public void moveCharacter()
	{
		character.transform.position = moveTarget.transform.position;
		CameraController.instance.FocusCharacter();
	}
}
