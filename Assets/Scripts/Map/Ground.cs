using UnityEngine;
using System.Collections.Generic;

public class Ground : MonoBehaviour {

	public enum ePosition
	{
		left = 0,
		middle,
		right
	}

	string _groundPlaceName = string.Empty;

	public Sprite[] leftSprite;
	public Sprite[] middleSprite;
	public Sprite[] rightSprite;

	//public List<GameObject> Tiles = new List<GameObject>();
	public GameObject leftTile;
	public GameObject middleTile;
	public GameObject rightTile;

	public string groundPlaceName
	{
		get { return _groundPlaceName; }

		set { _groundPlaceName = value; }
	}
}
