using UnityEngine;
using System.Collections;

public class OrcController : MonoBehaviour {
	
	public bool lookRight = true;

	private Animator animator;

	void Start()
	{
		animator = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other)
	{
		Debug.Log("Collider");
		if (other.tag == "Player")
		{
			Attack();
		}
	}

	void Attack()
	{
		animator.SetTrigger("attack");
	}
}
