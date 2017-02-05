using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {

    enum eGameState
    {
        run=0,
        finish,
        non,
		stage
    }

	public GameObject UI;
	public GameObject Map;

	public static GameController instance;

	Transform Menu;
	Transform stageImage;
    eGameState state;
	Portal portal;

	void Start()
	{
		instance = this;
		Menu = UI.transform.FindChild("Menu");
		stageImage = UI.transform.FindChild("Game").transform.FindChild("StageImage");
		stageImage.gameObject.SetActive(false);
        state = eGameState.non;
	}

    private void Update()
    {
        if (state == eGameState.finish)
        {
            if (Input.GetButtonDown("Fire1"))
            {
                state = eGameState.non;
                EndGame();
            }
        }
		else if (state == eGameState.stage)
		{
			if (Input.GetButtonDown("Fire1"))
			{
				state = eGameState.run;
				portal.moveCharacter();
				StartCoroutine(FadeOutStageImage());
			}
		}
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
		CameraController.instance.FocusCharacter();

		for (int i = 0; i < Hearts.childCount; i++)
		{
			Hearts.GetChild(i).gameObject.SetActive(true);
		}

		for (int i = 0; i < NPC.childCount; i++)
		{
			NPC.GetChild(i).gameObject.SetActive(true);
		}
	}

    public void ResultFail()
    {
        Transform Game = UI.transform.FindChild("Game");
        //Transform successImage = Game.FindChild("SuccessImage");
        Transform failImage = Game.FindChild("FailImage");

        failImage.gameObject.SetActive(true);

        state = eGameState.finish;
    }

    public void ResultSuccess()
    {
        Transform Game = UI.transform.FindChild("Game");
        Transform successImage = Game.FindChild("SuccessImage");
        //Transform failImage = Game.FindChild("FailImage");

        successImage.gameObject.SetActive(true);

        state = eGameState.finish;
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
}
