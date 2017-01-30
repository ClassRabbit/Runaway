using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor(typeof(Map))]
public class MapEditor : Editor {

	Map map;
	const float basePositionY = 155.0f;
	float tileWidth = 0;
	string groundName = "Ground ({0})";

	Transform leftWall = null;
	Transform rightWall = null;

	#if UNITY_EDITOR

	void Awake()
	{
		map = target as Map;
		tileWidth = 3f;
		initWall();
	}

	void initWall()
	{
		if (leftWall != null)
		{
			return;
		}

		leftWall = map.transform.FindChild("LeftWall").transform;
		rightWall = map.transform.FindChild("RightWall").transform;
	}

	void OnEnable()
	{
		UpdateGroundsMapInfo();
	}

	void UpdateGroundsMapInfo()
	{
		int count = map.groundsTarget.transform.childCount;
		map.groundsArray = new GameObject[count];

		for (int i = 0; i < count; i++)
		{
			map.groundsArray[i] = map.groundsTarget.transform.GetChild(i).gameObject;
		}

		UpdateGroundsPosition();

	}

	void UpdateGroundsPosition()
	{
		initWall();

		leftWall.localPosition = new Vector3(0, basePositionY, 0);

		int count = map.groundsTarget.transform.childCount;

		float extandValue = tileWidth * (count - 1);

		rightWall.localPosition = new Vector3(extandValue, basePositionY, 0);
	}

	public override void OnInspectorGUI()
	{
		base.OnInspectorGUI();

		EditorGUILayout.BeginVertical();
		GUILayout.Label("Ground Count : " + map.groundsTarget.transform.childCount);

		EditorGUILayout.BeginHorizontal();
		if (GUILayout.Button("Add"))
		{
			GameObject newGround = (GameObject)GameObject.Instantiate(map.groundPrefab);

			int count = map.groundsTarget.transform.childCount;

			newGround.transform.parent = map.groundsTarget.transform;
			newGround.transform.localPosition = new Vector3(tileWidth * count, basePositionY, 0);

			count++;
			newGround.name = string.Format(groundName, count);
			//newGround.tag = "Ground";

			Ground groundComponent = newGround.GetComponent<Ground>();
			groundComponent.groundPlaceName = map.gameObject.name;

			//Debug.Log("checkName /" + map.gameObject.name);

			UpdateGroundsMapInfo();
		}

		if (GUILayout.Button("Delete"))
		{
			int count = map.groundsTarget.transform.childCount;
			Debug.Log(count);

			Transform ground = map.groundsTarget.transform.GetChild(count - 1);

			if (ground != null)
			{
				DestroyImmediate(ground.gameObject);
			}

			UpdateGroundsMapInfo();
		}
		EditorGUILayout.EndHorizontal();
		EditorGUILayout.EndVertical();
	}

	#endif

}
