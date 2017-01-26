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
		Max
	}


	Ground ground;

	SelectPopup[] selectPopupInfo = null;


#if UNITY_EDITOR
	void Awake()
	{
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
			Debug.Log("initSelectPopupInfo return");
			return;
		}

		selectPopupInfo = new SelectPopup[(int)eSelectPopup.Max];


		for (int i = 0; i < selectPopupInfo.Length; i++)
		{
			selectPopupInfo[i] = new SelectPopup();
			selectPopupInfo[i].value = 0;
			selectPopupInfo[i].arrayValue = null;
			selectPopupInfo[i].arrayName = null;
		}
	}

	void OnEnable()
	{
		string[] spritePathArray = { "Tiles" };
		LoadTileSprite(spritePathArray[0], ref ground.leftSprite);
		LoadTileSprite(spritePathArray[0], ref ground.middleSprite);
		LoadTileSprite(spritePathArray[0], ref ground.rightSprite);
	

		initSelectPopupInfo();

		selectPopupInfo[(int)eSelectPopup.left].value = UpdateSpriteSelectCount(ground.leftSprite, ground.leftTile);
		selectPopupInfo[(int)eSelectPopup.middle].value = UpdateSpriteSelectCount(ground.middleSprite, ground.middleTile);
		selectPopupInfo[(int)eSelectPopup.right].value = UpdateSpriteSelectCount(ground.rightSprite, ground.rightTile);

		UpdateSpriteSetting(ref selectPopupInfo[(int)eSelectPopup.left], ground.leftSprite);

	}

	void LoadTileSprite(string targetName, ref Sprite[] targetSpriteArray)
	{
		Object[] spriteObjects = Resources.LoadAll("Images/" + targetName, typeof(Sprite));

		Debug.Log(targetName + "'s sprite size : " + spriteObjects.Length);
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
					if (gameObject.GetComponent<Renderer>().sharedMaterial.name.Equals(sprite.name))
					{
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

		Debug.Log("count : " + count);
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
		DrawDefaultInspector();

		EditorGUILayout.BeginHorizontal();
		GUILayout.Label("image");
		EditorGUILayout.EndHorizontal();

	}


#endif
}
