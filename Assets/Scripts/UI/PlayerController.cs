using UnityEngine;
using Spine.Unity;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public Rigidbody2D rb2D { get; set; }

	//플레이어 이동 방향
	public Vector3 moveVector { get; set; }

	//플레이어 이동 속도
	public float moveSpeed;

	//조이스틱 스크립트
	public Joystick joystick;

	SkeletonAnimation skeletonAnimation;

	void Start()
	{
		//메모리 정리
		System.GC.Collect();

		skeletonAnimation = GetComponent<SkeletonAnimation>();

		rb2D = GetComponent<Rigidbody2D>();
		skeletonAnimation.skeleton.FlipX = true;

		//플레이어 이동 방향 초기화
		moveVector = new Vector3(0, 0, 0);
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

		Debug.Log(joystick.GetHorizontalValue());

		//direction.x = joystick.GetHorizontalValue();
		//direction.y = joystick.GetVerticalValue();
		direction.y = 0;

		if (joystick.GetHorizontalValue() < 0)
		{
			Debug.Log("Left");
			direction.x = -1;
			skeletonAnimation.skeleton.FlipX = false;
			skeletonAnimation.AnimationName = "02_walk";

		}
		else if (joystick.GetHorizontalValue() > 0)
		{
			Debug.Log("Right");
			direction.x = 1;
			skeletonAnimation.skeleton.FlipX = true;
			skeletonAnimation.AnimationName = "02_walk";
		}
		else {
			skeletonAnimation.AnimationName = "01_idle";
		}

		//if (direction.magnitude > 1)
		//	direction.Normalize();

		return direction;
	}

	public void Move()
	{
		rb2D.AddForce(moveVector * moveSpeed);
	}

	public void EaseVelocity()
	{
		Vector3 easeVelocity = rb2D.velocity;
		easeVelocity.x *= 0.75f;
		easeVelocity.y *= 0.75f;
		//easeVelocity.y *= 0.0f;
		easeVelocity.z = 0.0f;
		rb2D.velocity = easeVelocity;
	}
}
