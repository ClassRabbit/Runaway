using UnityEngine;
using System.Collections;
using System.Diagnostics;
using Debug = UnityEngine.Debug;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

    public enum eGameState
    {
        run=0,
        finish,
        non,
		stage,
		success
    }

	public GameObject UI;
	public GameObject Map;
	public GameObject Map2;


	public static GameController instance;

	Transform Menu;
	Transform stageImage;
    public eGameState state;
	Portal portal;
	int score = 0;
	int killCount = 0;
	Text KillCountText;
	Text TimeText;
	Stopwatch stopwatch;

	void Start()
	{
		instance = this;
		Menu = UI.transform.FindChild("Menu");
		stageImage = UI.transform.FindChild("Game").transform.FindChild("StageImage");
		stageImage.gameObject.SetActive(false);
        state = eGameState.non;
		stopwatch = new Stopwatch ();
		TimeText = UI.transform.FindChild ("Game").FindChild ("TimeText").GetComponent<Text>();
		KillCountText = UI.transform.FindChild ("Game").FindChild ("KillCountText").GetComponent<Text>();
	}

    private void Update()
    {
		TimeText.text = "Time : " + stopwatch.Elapsed;
		KillCountText.text = "Kill : " + killCount;
		if (state == eGameState.finish) {
			if (Input.GetButtonDown ("Fire1")) {
				state = eGameState.non;
				EndGame ();
			}
		} else if (state == eGameState.stage) {
			if (Input.GetButtonDown ("Fire1")) {
				state = eGameState.run;
				portal.moveCharacter ();
				StartCoroutine (FadeOutStageImage ());
			}
		} else if (state == eGameState.success) {
			if (Input.GetButtonDown ("Fire1")) {
				ScoreSum ();
				ScoreBoardController.instance.show ();
			}
		}
    }

	void ScoreSum(){
		int timeScore = 1500 - (int)(stopwatch.ElapsedMilliseconds/1000);
		int killScore = killCount * 100;
		score = timeScore + killScore;
		ScoreBoardController.instance.score = score;
		Debug.Log ("Score : " + score);
//		Debug.Log ("KillCount : " + killCount);
//		Debug.Log ("Time : " + stopwatch.ToString ());
//		Debug.Log ("Time : " + stopwatch.Elapsed);
//		Debug.Log ("Time : " + stopwatch.ElapsedMilliseconds);
	}

    public void StartGame()
	{
        Transform Game = UI.transform.FindChild("Game");
        Transform successImage = Game.FindChild("SuccessImage");
        Transform failImage = Game.FindChild("FailImage");

        successImage.gameObject.SetActive(false);
        failImage.gameObject.SetActive(false);

        StartCoroutine(FadeOut());

        state = eGameState.run;
		stopwatch.Start ();
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
		Menu.FindChild ("StartButton").gameObject.SetActive (false);
		Menu.FindChild ("ScoreButton").gameObject.SetActive (false);
		CanvasGroup canvasGroup = Menu.GetComponent<CanvasGroup>();
		while (canvasGroup.alpha < 1)
		{
			canvasGroup.alpha += Time.deltaTime / 2;
			yield return null;
		}
		//canvasGroup.interactable = true;
		GameRefresh();
		Menu.FindChild ("StartButton").gameObject.SetActive (true);
		Menu.FindChild ("ScoreButton").gameObject.SetActive (true);
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
		Transform NPC2 = Map2.transform.FindChild("NPC");

		PlayerController.instance.Refresh();
		CameraController.instance.FocusCharacter();

		score = 0;
		killCount = 0;
		stopwatch.Reset ();
		state = eGameState.non;

		for (int i = 0; i < Hearts.childCount; i++)
		{
			Hearts.GetChild(i).gameObject.SetActive(true);
		}

		for (int i = 0; i < NPC.childCount; i++)
		{
			NPC.GetChild(i).gameObject.SetActive(true);
		}

		for (int i = 0; i < NPC2.childCount; i++)
		{
			NPC2.GetChild(i).gameObject.SetActive(true);
		}
	}

    public void ResultFail()
    {
		stopwatch.Stop ();

        Transform Game = UI.transform.FindChild("Game");
        //Transform successImage = Game.FindChild("SuccessImage");
        Transform failImage = Game.FindChild("FailImage");

        failImage.gameObject.SetActive(true);

        state = eGameState.finish;
    }

    public void ResultSuccess()
    {
		stopwatch.Stop ();

        Transform Game = UI.transform.FindChild("Game");
        Transform successImage = Game.FindChild("SuccessImage");
        //Transform failImage = Game.FindChild("FailImage");

        successImage.gameObject.SetActive(true);

//        state = eGameState.finish;
		state = eGameState.success;
    }

	public void NextStage(Portal portal)
	{
		this.portal = portal;
		StartCoroutine(FadeInStageImage());
	}


	IEnumerator FadeInStageImage()
	{
		stageImage.gameObject.SetActive(true);
		CanvasGroup canvasGroup = stageImage.GetComponent<CanvasGroup>();
		while (canvasGroup.alpha < 1)
		{
			canvasGroup.alpha += Time.deltaTime / 2;
			yield return null;
		}
		state = eGameState.stage;
		yield return null;
	}

	IEnumerator FadeOutStageImage()
	{
		CanvasGroup canvasGroup = stageImage.GetComponent<CanvasGroup>();
		while (canvasGroup.alpha > 0)
		{
			canvasGroup.alpha -= Time.deltaTime / 2;
			yield return null;
		}
		//canvasGroup.interactable = false;
		stageImage.gameObject.SetActive(false);
		yield return null;
	}

	public void Go2Menu(){
//		state = eGameState.non;
		EndGame ();
	}

	public void KillOrc(){
		killCount++;
	}
}
