using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic; 
using LitJson;

public class ScoreBoardController : MonoBehaviour {

	string address = "http://192.168.0.9:3000";

	public static ScoreBoardController instance;

	Transform[] cards = new Transform[10];

	public int score = 0;
	int idx;

//	class Score{
//		string name;
//		int score;
//	}

	// Use this for initialization
	void Start () {
		instance = this;
		Refresh ();
		gameObject.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void show(){
		gameObject.SetActive (true);
		GET (address);
	}

	public WWW GET(string url)
	{
		WWW www = new WWW (url);
		StartCoroutine (GetWaitForRequest (www));
		return www; 
	}


	public WWW POST(string url, Dictionary<string,string> post)
	{
		WWWForm form = new WWWForm();
		foreach(KeyValuePair<string,string> post_arg in post)
		{
			form.AddField(post_arg.Key, post_arg.Value);
		}
		WWW www = new WWW(url, form);

		StartCoroutine(PostWaitForRequest(www));
		return www; 
	}

	IEnumerator GetWaitForRequest(WWW www)
	{
		yield return www;

		// check for errors
		if (www.error == null)
		{
			Debug.Log ("Score : " + score);
			Debug.Log("WWW Ok!: " + www.text);
			JsonData json = JsonMapper.ToObject (www.text);
			int i = 0;
			int j = 0;
			bool check = false;
			if (score > 0) {
				while (j < json.Count && i < 10) {
					if (int.Parse (json [j] ["score"].ToString ()) < score) {
						if (!check) {
							NameInput (i, score);
							idx = i;
							i++;
							check = true;
							transform.FindChild ("NewScore").gameObject.SetActive(true);
						} else {
							CardInput (json, i, j);
							i++;
							j++;
						}
					} else {
						CardInput (json, i, j);
						i++;
						j++;
					}
				}
				if (j == 10 && !check) {
					transform.FindChild ("CloseButton").gameObject.SetActive(true);
				}
					
			} 
			else {
				while (i < json.Count) {
					cards [i].FindChild ("Name").GetComponent<Text> ().text = json [j] ["name"].ToString ();
					cards [i].FindChild ("Score").GetComponent<Text> ().text = json [j] ["score"].ToString ();
					i++;
					j++;
				}
				transform.FindChild ("CloseButton").gameObject.SetActive(true);
			}

		} else {
			Debug.Log("WWW Error: "+ www.error);
			transform.FindChild ("CloseButton").gameObject.SetActive(true);
		}    
	}

	IEnumerator PostWaitForRequest(WWW www)
	{
		yield return www;

		// check for errors
		if (www.error == null)
		{
			Debug.Log("WWW Post Ok!: " + www.text);
			Refresh ();
			GameController.instance.Go2Menu ();
		} else {
			Debug.Log("WWW Post Error: "+ www.error);
			Refresh ();
			GameController.instance.Go2Menu ();
		}    
	}

	void NameInput(int i, int score){
		cards[i].FindChild ("InputName").gameObject.SetActive (true);
		cards[i].FindChild ("Name").gameObject.SetActive (false);
		cards[i].FindChild ("Score").GetComponent<Text> ().text = "" + score;
	}

	void CardInput(JsonData json, int i, int j){
		cards [i].FindChild ("Name").GetComponent<Text> ().text = json [j] ["name"].ToString ();
		cards [i].FindChild ("Score").GetComponent<Text> ().text = json [j] ["score"].ToString ();
	}

	public void Send(){
		Dictionary<string, string> dic = new Dictionary<string, string>();
		string name = cards [idx].FindChild ("InputName").GetComponent<InputField>().text;
		if(name == ""){
//			transform.FindChild ("NewScore").FindChild ("Text").GetComponent<Text> ().text = "이름을 입력하세요!";
			return;
		}
		dic.Add ("name", name);
		dic.Add ("score", ""+score);
		POST (address, dic);

	}


	public void Close(){
		gameObject.SetActive (false);
		if (GameController.instance.state != GameController.eGameState.non) {
			GameController.instance.Go2Menu ();
		}
		Refresh ();
	}

	void Refresh(){
		Debug.Log ("Refresh");
		score = 0;
		for (int i = 0; i < 10; i++) {
			cards [i] = transform.GetChild (i);
			Transform cardInput = cards [i].FindChild ("InputName");
			cardInput.GetComponent<InputField> ().text = "";
			cardInput.gameObject.SetActive (false);
			cards [i].FindChild ("Name").gameObject.SetActive (true);
		}
		transform.FindChild ("CloseButton").gameObject.SetActive (false);
		transform.FindChild ("NewScore").gameObject.SetActive (false);
		gameObject.SetActive (false);

	}

}

