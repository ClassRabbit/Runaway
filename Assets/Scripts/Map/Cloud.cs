using UnityEngine;
using System.Collections;

public class Cloud : MonoBehaviour {

	public float speed = 1.0f;
	GameObject sky;

	float startPosition;
	float endPosition;

	void Start()
	{
		sky = transform.parent.gameObject;

		Transform skyTransform = sky.transform;
		float skyPositionX = skyTransform.position.x;
		float range = skyTransform.localScale.x;

		startPosition = skyPositionX + (range / 2);
		endPosition = skyPositionX - (range / 2);
	}

	void Update()
	{
		transform.Translate(-1 * speed * Time.deltaTime, 0, 0);
		if (transform.position.x <= endPosition)
		{
			ScrollEnd();
		}
	}

	void ScrollEnd()
	{
		transform.Translate(-1 * (endPosition - startPosition), 0, 0);
	}

}
