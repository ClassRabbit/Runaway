using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor(typeof(NPCController))]
public class NPCEditor : Editor {

	string orcName = "Orc ({0})";
	NPCController controller;

	// Use this for initialization
	void Awake () {
		controller = target as NPCController;
	}

	#if UNITY_EDITOR

	public override void OnInspectorGUI()
	{
		base.OnInspectorGUI();

		if (GUILayout.Button("CreateOrc"))
		{
			CreateOrc();
		}

	}

	void CreateOrc()
	{
		GameObject newOrc = (GameObject)GameObject.Instantiate(controller.orcPrefab);

		int count = controller.transform.childCount;

		newOrc.transform.parent = controller.transform;

		count++;

		newOrc.name = string.Format(orcName, count);
		newOrc.transform.position = controller.transform.position;
	}

	#endif

}
