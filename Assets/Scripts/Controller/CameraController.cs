using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {
	//character라는 GameObject변수 선언
	public GameObject character;

	Transform characterTransfrom;

	void Start()
	{
		characterTransfrom = character.transform;
	}

	//void LateUpdate()
	//{
	//	transform.position = new Vector3(characterTransfrom.position.x, characterTransfrom.position.y + 1, transform.position.z);
	//}

	void Update()
	{
		transform.position = Vector3.Lerp(transform.position, characterTransfrom.position, 2f * Time.deltaTime);
		transform.Translate(0, 0, -10); //카메라를 원래 z축으로 이동
	}


}
