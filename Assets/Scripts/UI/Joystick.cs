﻿using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class Joystick : MonoBehaviour, IDragHandler, IPointerUpHandler, IPointerDownHandler {

	private Image bgImg;
	private Image joystickImg;
	private Vector3 inputVector;

	void Start()
	{
		bgImg = GetComponent<Image>();
		joystickImg = transform.GetChild(0).GetComponent<Image>();
	}

	public virtual void OnDrag(PointerEventData ped)
	{
		//Debug.Log("Joystick >> OnDrag()");

		Vector2 pos;
		if (RectTransformUtility.ScreenPointToLocalPointInRectangle(bgImg.rectTransform, ped.position, ped.pressEventCamera, out pos))
		{
			pos.x = (pos.x / bgImg.rectTransform.sizeDelta.x);
			pos.y = (pos.y / bgImg.rectTransform.sizeDelta.y);

			inputVector = new Vector3(pos.x * 2 + 1, pos.y * 2 - 1, 0);
			inputVector = (inputVector.magnitude > 1.0f) ? inputVector.normalized : inputVector;

			joystickImg.rectTransform.anchoredPosition = new Vector3(inputVector.x * (bgImg.rectTransform.sizeDelta.x / 3),
																	 inputVector.y * (bgImg.rectTransform.sizeDelta.y / 3));
		}
	}

	public virtual void OnPointerDown(PointerEventData ped)
	{
		OnDrag(ped);
	}

	public virtual void OnPointerUp(PointerEventData ped)
	{
		inputVector = Vector3.zero;
		joystickImg.rectTransform.anchoredPosition = Vector3.zero;
	}

	public float GetHorizontalValue()
	{
		return inputVector.x;
	}

	public float GetVerticalValue()
	{
		return inputVector.y;
	}
}
