using UnityEngine;
using System.Collections;

public class Tile : MonoBehaviour {

	int _spriteIdx = 0;

	public UIAtlas atlas;

	public void changeImage()
	{
		UISlicedSprite sd = transform.GetComponent<UISlicedSprite>();
	}

	public int spriteIdx
	{
		get	{ return _spriteIdx; }

		set { _spriteIdx = value; }
	}
}
