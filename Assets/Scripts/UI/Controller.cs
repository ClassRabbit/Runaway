using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Controller : MonoBehaviour {

	public Image stick;
	private Vector3 originPos = Vector3.zero;

	// Use this for initialization
	void Start () {
		originPos = stick.transform.position;
	}

	public void OnDrag()
	{
		Touch touch = Input.GetTouch(0);
		if (stick != null)
		{
			stick.rectTransform.position = touch.position;
		}

		Vector3 direct = (originPos - new Vector3(touch.position.x, touch.position.y,
		                                          originPos.z)).normalized;

		float touchAreaRadius = Vector3.Distance(originPos, new Vector3(touch.position.x, touch.position.y,
																		originPos.z));
	}

	public void OnEndDrag()
	{
		if (stick != null)
		{
			stick.rectTransform.position = originPos;
		}
	}
}
