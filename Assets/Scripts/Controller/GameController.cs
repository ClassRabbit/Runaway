using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {

	public GameObject UI;
	public GameObject Map;

	public static GameController instance;

	Transform Menu;

	void Start()
	{
		instance = this;
		Menu = UI.transform.FindChild("Menu");
	}

	public void StartGame()
	{
		
		StartCoroutine(FadeOut());


	}

	IEnumerator FadeOut()
	{
		CanvasGroup canvasGroup = Menu.GetComponent<CanvasGroup>();
		while (canvasGroup.alpha > 0)
		{
			canvasGroup.alpha -= Time.deltaTime / 2;
			yield return null;
		}
		//canvasGroup.interactable = false;
		Menu.gameObject.SetActive(false);
		yield return null;
	}

	IEnumerator FadeIn()
	{
		
		Menu.gameObject.SetActive(true);
		CanvasGroup canvasGroup = Menu.GetComponent<CanvasGroup>();
		while (canvasGroup.alpha < 1)
		{
			canvasGroup.alpha += Time.deltaTime / 2;
			yield return null;
		}
		//canvasGroup.interactable = true;
		GameRefresh();
		yield return null;
	}

	public void EndGame()
	{
		StartCoroutine(FadeIn());
	}

	public void GameRefresh()
	{
		Transform Game = UI.transform.FindChild("Game");

		Transform Hearts = Game.FindChild("Hearts");
		Transform NPC = Map.transform.FindChild("NPC");

		PlayerController.instance.Refresh();

		for (int i = 0; i < Hearts.childCount; i++)
		{
			Hearts.GetChild(i).gameObject.SetActive(true);
		}

		for (int i = 0; i < NPC.childCount; i++)
		{
			NPC.GetChild(i).gameObject.SetActive(true);
		}
	}



}
