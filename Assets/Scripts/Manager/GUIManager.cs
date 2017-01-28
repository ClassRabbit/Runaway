using UnityEngine;
using Spine.Unity;
using System.Collections;

public class GUIManager : MonoBehaviour {

	public GameObject userCharacter;

	void Start()
	{
		SkeletonAnimation skeletonAnimation = userCharacter.GetComponent<SkeletonAnimation>();
		skeletonAnimation.AnimationName = "";
	}
}
