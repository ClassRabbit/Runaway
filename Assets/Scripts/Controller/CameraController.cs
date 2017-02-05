using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

	//enum eCameraStage
	//{
	//	stage_1 = 0,
	//	stage_2
	//}

	public GameObject character;
	public GameObject character2;
	public static CameraController instance;

	Transform characterTransform;
	Vector3 startPosition;
	Vector3 endPosition;
	//eCameraStage stage;

	void Start()
	{
		characterTransform = character.transform;
		startPosition = characterTransform.position;
		endPosition = character2.transform.position;
		//stage = eCameraStage.stage_1;

		instance = this;
	}


	void Update()
	{
		Vector3 position = characterTransform.position;
		position.y = position.y + 2;
		if (position.x < startPosition.x + 5)
		{
			position.x = startPosition.x + 5;
		}
		if (position.y < startPosition.y - 0.5f)
		{
			position.y = startPosition.y - 0.5f;
		}
		if (position.x > endPosition.x - 5)
		{
			position.x = endPosition.x - 5;
		}
		transform.position = Vector3.Lerp(transform.position, position, 2f * Time.deltaTime);
		transform.Translate(0, 0, -10); 
	}

	public void FocusCharacter()
	{
		startPosition = characterTransform.position;
		Vector3 position = characterTransform.position;
		position.y = position.y + 2;
		transform.position = position;
	}
}