using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor(typeof(Sky))]
public class SkyEditor : Editor {

	Sky sky;
	string cloudName = "Cloud ({0})";

	void Awake()
	{
		sky = target as Sky;

	}

	public override void OnInspectorGUI()
	{
		base.OnInspectorGUI();


		if (GUILayout.Button("AddCloud"))
		{
			GameObject newCloud = (GameObject)GameObject.Instantiate(sky.cloudPrefab);

			int cloudCount = sky.transform.childCount;

			newCloud.transform.parent = sky.transform;

			newCloud.name = string.Format(cloudName, cloudCount+1);

			newCloud.transform.position = new Vector3(sky.transform.position.x, sky.transform.position.y, 
			                                          sky.transform.position.z);

		}
	}
}
