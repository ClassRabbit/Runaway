using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor(typeof(Ground))]
public class GroundEditor : Editor {

	class SelectPopup
	{
		public int value;
		public string[] arrayName;
		public int[] arrayValue;
		public GameObject etc;
	}

	public enum eSelectPopup
	{
		left = 0,
		middle,
		right,
		etc,
		Max
	}


	Ground ground;

	SelectPopup[] selectPopupInfo = null;


	#if UNITY_EDITOR

	void Awake()
	{
		//Debug.Log("Awake");
		ground = target as Ground;

		ground.leftTile = ground.transform.FindChild("LeftTile").gameObject;
		ground.middleTile = ground.transform.FindChild("MiddleTile").gameObject;
		ground.rightTile = ground.transform.FindChild("RightTile").gameObject;

		initSelectPopupInfo();
	}

	void initSelectPopupInfo()
	{
		if (selectPopupInfo != null)
		{
			//Debug.Log("initSelectPopupInfo return");
			return;
		}
		//Debug.Log("initSelectPopupInfo start");
		selectPopupInfo = new SelectPopup[(int)eSelectPopup.Max];


		for (int i = 0; i < selectPopupInfo.Length; i++)
		{
			selectPopupInfo[i] = new SelectPopup();
			selectPopupInfo[i].value = 0;
			selectPopupInfo[i].arrayValue = null;
			selectPopupInfo[i].arrayName = null;
		}

		selectPopupInfo[(int)eSelectPopup.etc].etc = ground.transform.FindChild("Etc").gameObject;
	}

	void OnEnable()
	{
		//Debug.Log("OnEnable");
		string[] spritePathArray = { "Tiles" };
		LoadTileSprite(spritePathArray[0], ref ground.leftSprite);
		LoadTileSprite(spritePathArray[0], ref ground.middleSprite);
		LoadTileSprite(spritePathArray[0], ref ground.rightSprite);
	

		initSelectPopupInfo();

		selectPopupInfo[(int)eSelectPopup.left].value = UpdateSpriteSelectCount(ground.leftSprite, ground.leftTile);
		selectPopupInfo[(int)eSelectPopup.middle].value = UpdateSpriteSelectCount(ground.middleSprite, ground.middleTile);
		selectPopupInfo[(int)eSelectPopup.right].value = UpdateSpriteSelectCount(ground.rightSprite, ground.rightTile);

		UpdateSpriteSetting(ref selectPopupInfo[(int)eSelectPopup.left], ground.leftSprite);
		UpdateSpriteSetting(ref selectPopupInfo[(int)eSelectPopup.middle], ground.middleSprite);
		UpdateSpriteSetting(ref selectPopupInfo[(int)eSelectPopup.right], ground.rightSprite);

		int etcCount = selectPopupInfo[(int)eSelectPopup.etc].etc.transform.childCount;
		selectPopupInfo[(int)eSelectPopup.etc].arrayName = new string[etcCount];
		selectPopupInfo[(int)eSelectPopup.etc].arrayValue = new int[etcCount];

		selectPopupInfo[(int)eSelectPopup.etc].value = -1;
		for (int i = 0; i < etcCount; i++)
		{
			if (selectPopupInfo[(int)eSelectPopup.etc].etc.transform.GetChild(i).gameObject.activeSelf)
			{
				selectPopupInfo[(int)eSelectPopup.etc].value = i;
			}
			selectPopupInfo[(int)eSelectPopup.etc].arrayName[i] =
				selectPopupInfo[(int)eSelectPopup.etc].etc.transform.GetChild(i).gameObject.name;
			selectPopupInfo[(int)eSelectPopup.etc].arrayValue[i] = i;
		}
	}

	void LoadTileSprite(string targetName, ref Sprite[] targetSpriteArray)
	{
		Object[] spriteObjects = Resources.LoadAll("Images/" + targetName, typeof(Sprite));

		//Debug.Log(targetName + "'s sprite size : " + spriteObjects.Length);
		targetSpriteArray = new Sprite[spriteObjects.Length];

		for (int i = 0; i < spriteObjects.Length; i++)
		{
			targetSpriteArray[i] = spriteObjects[i] as Sprite;
		}
	}

	int UpdateSpriteSelectCount(Sprite[] spriteArray, GameObject gameObject)
	{
		int count = 0;

		try
		{
			foreach (Sprite sprite in spriteArray)
			{
				if (gameObject != null)
				{
					//Debug.Log("not break");
					if (gameObject.GetComponent<SpriteRenderer>().sprite.name.Equals(sprite.name))
					{
						//Debug.Log("break");
						break;
					}
				}
				count++;
			}
		}
		catch (UnityException e)
		{
			Debug.LogWarning(e);
		}

		//Debug.Log("count : " + count);
		return count;

	}

	void UpdateSpriteSetting(ref SelectPopup selectPopup, Sprite[] sprites)
	{
		int count = sprites.Length;

		selectPopup.arrayName = new string[count];
		selectPopup.arrayValue = new int[count];

		for (int i = 0; i < count; i++)
		{
			selectPopup.arrayName[i] = sprites[i].name;
			selectPopup.arrayValue[i] = i;
		}

	}

	public override void OnInspectorGUI()
	{
		base.OnInspectorGUI();
		//Debug.Log("OnInspectorGUI");
		EditorGUILayout.BeginVertical();
		EditorGUILayout.Space();
		EditorGUILayout.EndVertical();

		SetSelectSpritePopup(ref selectPopupInfo[(int)eSelectPopup.left],
		                     ground.leftTile, ground.leftSprite);
		SetSelectSpritePopup(ref selectPopupInfo[(int)eSelectPopup.middle],
		                     ground.middleTile, ground.middleSprite);
		SetSelectSpritePopup(ref selectPopupInfo[(int)eSelectPopup.right],
		                     ground.rightTile, ground.rightSprite);

		if (GUILayout.Button("CreateEtc"))
		{
			CreateEtc();
		}

		EditorGUILayout.BeginHorizontal();
		if (GUILayout.Button("CreateDummy"))
		{
			CreateDummy();
		}

		EditorGUILayout.EndHorizontal();

	}

	void CreateDummy()
	{
		Debug.Log(ground.transform.position);

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int random = Random.Range(1, 5);

				GameObject gameObject = new GameObject();
				gameObject.name = "Tile (" + ((i*3) + j) + ")";

				SpriteRenderer spriteRenderer = gameObject.AddComponent<SpriteRenderer>();
				Sprite spriteObject = Resources.Load("Images/Tiles/basic" + random, typeof(Sprite)) as Sprite;
				spriteRenderer.sprite = spriteObject;

				gameObject.transform.position = new Vector3(ground.transform.position.x + (j-1) , ground.transform.position.y - (i+1),
															ground.transform.position.z);

				Transform dummy = ground.transform.FindChild("Dummy");
				gameObject.transform.parent = dummy;
			}
		}
	}


	void CreateEtc()
	{
		GameObject gameObject = new GameObject();
		gameObject.name = "EtcObject";

		SpriteRenderer spriteRenderer = gameObject.AddComponent<SpriteRenderer>();
		Sprite spriteObject = Resources.Load("Images/Flowers/flower1", typeof(Sprite)) as Sprite;
		if (spriteObject.Equals(null))
		{
			Debug.Log("isNull");
			//return;
		}
		spriteRenderer.sprite = spriteObject;

		Transform etc = ground.transform.FindChild("Etc");
		gameObject.transform.parent = etc;

		gameObject.transform.position = new Vector3(etc.position.x, etc.position.y, etc.position.z);

	}

	void SetSelectSpritePopup(ref SelectPopup selectPopup, GameObject gameObject, Sprite[] sprites)
	{
		int checkSelect = selectPopup.value;
		//Debug.Log("checkSelect : " + checkSelect);

		EditorGUILayout.BeginHorizontal();
		GUILayout.Label(gameObject.name);

		if (selectPopup.arrayName == null || selectPopup.arrayValue == null)
		{
			gameObject.GetComponent<SpriteRenderer>().sprite = sprites[selectPopup.value];
			return;
		}

		selectPopup.value = EditorGUILayout.IntPopup(selectPopup.value, selectPopup.arrayName,
		                                             selectPopup.arrayValue);
		EditorGUILayout.EndHorizontal();

		if (checkSelect != selectPopup.value)
		{
			gameObject.GetComponent<SpriteRenderer>().sprite = sprites[selectPopup.value];
		}
	}


	#endif
}
