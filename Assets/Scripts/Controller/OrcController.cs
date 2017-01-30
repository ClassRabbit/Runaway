using UnityEngine;
using System.Collections;

public class OrcController : MonoBehaviour {

	enum eOrcState
	{
		idle=0,
		left,
		right
	}
	
	public bool lookRight = true;
	public bool isIdle = true;
	public Rigidbody2D rb2D { get; set; }

	Animator animator;
	float moveSpeed;
	eOrcState state;
	Vector3 basePosition;
	Vector3 patrolPosition;

	void Start()
	{
		animator = GetComponent<Animator>();
		rb2D = GetComponent<Rigidbody2D>();
		moveSpeed=20;
		basePosition = transform.position;
		Debug.Log("base x : " + basePosition.x);
		patrolPosition = transform.GetChild(1).position;
		Debug.Log("patrol x : " + patrolPosition.x);
		if (isIdle)
		{
			state = eOrcState.idle;
		}
		else 
		{
			state = eOrcState.right;
		}
	}
	
	// Update is called once per frame
	void Update () {
		//Debug.Log("base x : " + basePosition.x);
		//Debug.Log("patrol x : " + patrolPosition.x);
		//Debug.Log("transform x : " + transform.position.x);
		//Debug.Log("state : " + state);
		if (state == eOrcState.left && transform.position.x <= basePosition.x)
		{
			Flip();
			state = eOrcState.right;
		}
		else if (state == eOrcState.right && transform.position.x >= patrolPosition.x)
		{
			Flip();
			state = eOrcState.left;
		}
		Move();
		EaseVelocity();
	}

	void Move()
	{
		if (state == eOrcState.idle)
		{
			return;
		}
		else if (state == eOrcState.left)
		{
			Vector3 direction = Vector3.zero;
			direction.x = -1;
			rb2D.AddForce(direction * moveSpeed);
			animator.SetFloat("speed", 2);
		}
		else 
		{
			Vector3 direction = Vector3.zero;
			direction.x = 1;
			rb2D.AddForce(direction * moveSpeed);
			animator.SetFloat("speed", 2);

		}
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
		PlayerController.instance.Hit();
	}

	public void EaseVelocity()
	{
		Vector3 easeVelocity = rb2D.velocity;
		easeVelocity.x *= 0.75f;
		//easeVelocity.y *= 0.75f;
		easeVelocity.y *= 1.0f;
		easeVelocity.z = 0.0f;
		rb2D.velocity = easeVelocity;
	}

	public void Flip()
	{
		var s = transform.localScale;
		s.x *= -1;
		transform.localScale = s;
		lookRight = !lookRight;
	}
}
