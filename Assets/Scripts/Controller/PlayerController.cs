using UnityEngine;
using Spine.Unity;
using System.Collections;

public class PlayerController : MonoBehaviour {

	enum ePlayerDirection
	{
		left = 0,
		right,
		die
	}

	public static PlayerController instance;

	public Rigidbody2D rb2D { get; set; }

	public Vector3 moveVector { get; set; }

	public float moveSpeed;
	public float jumpForce;

	//조이스틱 스크립트
	public Joystick joystick;
	public LayerMask groundLayer;

	public GameObject hearts;

	SkeletonAnimation skeletonAnimation;
	ePlayerDirection playerDirection;
	int heartCount = 3;

	void Start()
	{
		instance = this;

		//메모리 정리
		System.GC.Collect();

		skeletonAnimation = GetComponent<SkeletonAnimation>();

		rb2D = GetComponent<Rigidbody2D>();
		skeletonAnimation.skeleton.FlipX = true;

		//플레이어 이동 방향 초기화
		moveVector = new Vector3(0, 0, 0);

		skeletonAnimation.state.SetAnimation(0, "01_idle", true);
		playerDirection = ePlayerDirection.right;
	}

	void Update()
	{
		//터치패드 입력 받기
		HandleInput();
	}

	void FixedUpdate()
	{
		//플레이어 이동
		Move();

		//플레이어 감속
		EaseVelocity();
	}

	public void HandleInput()
	{
		
		moveVector = PoolInput();
	}

	public Vector3 PoolInput()
	{
		Vector3 direction = Vector3.zero;

		if (playerDirection == ePlayerDirection.die)
		{
			return direction;
		}

		if (joystick.GetHorizontalValue() < 0)
		{
			//Debug.Log("Left");
			direction.x = -1;
			skeletonAnimation.skeleton.FlipX = false;
			skeletonAnimation.AnimationName = "02_walk";
			playerDirection = ePlayerDirection.left;

		}
		else if (joystick.GetHorizontalValue() > 0)
		{
			//Debug.Log("Right");
			direction.x = 1;
			skeletonAnimation.skeleton.FlipX = true;
			skeletonAnimation.AnimationName = "02_walk";
			playerDirection = ePlayerDirection.right;
		}
		else {
			skeletonAnimation.AnimationName = "01_idle";
			//skeletonAnimation.state.SetAnimation(0, "01_idle", true);
		}

		//if (direction.magnitude > 1)
		//	direction.Normalize();

		return direction;
	}

	public void Move()
	{
		rb2D.AddForce(moveVector * moveSpeed);
	}

	public void Attack()
	{
		if (playerDirection == ePlayerDirection.die)
		{
			return;
		}
		skeletonAnimation.state.SetAnimation(2, "03_fight", false);
		IsEnemy();
	}

	public void Hit()
	{
		skeletonAnimation.state.SetAnimation(3, "04_hit", false);
		heartCount--;
		if (heartCount >= 0)
		{
			Transform heart = hearts.transform.GetChild(2-heartCount);
			heart.gameObject.SetActive(false);
		}
		if (heartCount <= 0)
		{
			Debug.Log("gameover");
			skeletonAnimation.state.SetAnimation(4, "05_die", false).EndTime = 100;
			playerDirection = ePlayerDirection.die;
		}
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

	public void Jump()
	{
		if (IsGrounded() && playerDirection != ePlayerDirection.die)
		{
			rb2D.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
		}
	}

	bool IsGrounded()
	{
		if (Physics2D.Raycast(this.transform.position, Vector2.down, 0.2f, groundLayer.value))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void IsEnemy()
	{
		//Debug.Log(playerDirection);
		if (playerDirection == ePlayerDirection.right)
		{
			Vector3 vector = transform.position;
			vector.x += 0.7f;
			vector.y += 1;
			RaycastHit2D hit = Physics2D.Raycast(vector, Vector2.right, 0.5f);
			if (hit.collider != null)
			{
				Debug.Log(hit.collider.tag);
				Debug.Log(hit.collider.gameObject.transform.position);
				if (hit.collider.tag == "Orc")
				{
					Destroy(hit.collider.gameObject);
				}
			}
		}
		else 
		{
			Vector3 vector = transform.position;
			vector.x -= 0.7f;
			vector.y += 1;
			RaycastHit2D hit = Physics2D.Raycast(vector, Vector2.left, 0.5f);
			if (hit.collider != null)
			{
				Debug.Log(hit.collider.tag);
				Debug.Log(hit.collider.gameObject.transform.position);
				if (hit.collider.tag == "Orc")
				{
					Destroy(hit.collider.gameObject);
				}
			}
		}
		
	}
}
