using UnityEngine;
using System.Collections;

public class Tile : MonoBehaviour {

	int _spriteIdx = 0;

	public int spriteIdx
	{
		get	{ return _spriteIdx; }

		set { _spriteIdx = value; }
	}
}
