using UnityEngine;
using Spine.Unity;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public static PlayerController instance;

	public Rigidbody2D rb2D { get; set; }

	//플레이어 이동 방향
	public Vector3 moveVector { get; set; }

	//플레이어 이동 속도
	public float moveSpeed;
	public float jumpForce;

	//조이스틱 스크립트
	public Joystick joystick;
	public LayerMask groundLayer;

	SkeletonAnimation skeletonAnimation;

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

		//Debug.Log(joystick.GetHorizontalValue());

		//direction.x = joystick.GetHorizontalValue();
		//direction.y = joystick.GetVerticalValue();

		if (joystick.GetHorizontalValue() < 0)
		{
			//Debug.Log("Left");
			direction.x = -1;
			skeletonAnimation.skeleton.FlipX = false;
			skeletonAnimation.AnimationName = "02_walk";
			//skeletonAnimation.state.SetAnimation(1, "02_walk", true);

		}
		else if (joystick.GetHorizontalValue() > 0)
		{
			//Debug.Log("Right");
			direction.x = 1;
			skeletonAnimation.skeleton.FlipX = true;
			skeletonAnimation.AnimationName = "02_walk";
			//skeletonAnimation.state.SetAnimation(1, "02_walk", true);
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
		skeletonAnimation.state.SetAnimation(2, "03_fight", false);
	}

	public void Hit()
	{
		skeletonAnimation.state.SetAnimation(3, "04_hit", false);
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
		if (IsGrounded())
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

}
