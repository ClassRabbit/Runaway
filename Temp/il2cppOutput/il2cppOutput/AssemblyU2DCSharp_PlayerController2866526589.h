#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Joystick
struct Joystick_t3421498716;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t3721178561;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_2;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_3;
	// Joystick PlayerController::joystick
	Joystick_t3421498716 * ___joystick_4;
	// Spine.Unity.SkeletonAnimation PlayerController::skeletonAnimation
	SkeletonAnimation_t3721178561 * ___skeletonAnimation_5;
	// UnityEngine.Rigidbody2D PlayerController::<rb2D>k__BackingField
	Rigidbody2D_t1743771669 * ___U3Crb2DU3Ek__BackingField_6;
	// UnityEngine.Vector3 PlayerController::<moveVector>k__BackingField
	Vector3_t4282066566  ___U3CmoveVectorU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_jumpForce_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___jumpForce_3)); }
	inline float get_jumpForce_3() const { return ___jumpForce_3; }
	inline float* get_address_of_jumpForce_3() { return &___jumpForce_3; }
	inline void set_jumpForce_3(float value)
	{
		___jumpForce_3 = value;
	}

	inline static int32_t get_offset_of_joystick_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___joystick_4)); }
	inline Joystick_t3421498716 * get_joystick_4() const { return ___joystick_4; }
	inline Joystick_t3421498716 ** get_address_of_joystick_4() { return &___joystick_4; }
	inline void set_joystick_4(Joystick_t3421498716 * value)
	{
		___joystick_4 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_4, value);
	}

	inline static int32_t get_offset_of_skeletonAnimation_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___skeletonAnimation_5)); }
	inline SkeletonAnimation_t3721178561 * get_skeletonAnimation_5() const { return ___skeletonAnimation_5; }
	inline SkeletonAnimation_t3721178561 ** get_address_of_skeletonAnimation_5() { return &___skeletonAnimation_5; }
	inline void set_skeletonAnimation_5(SkeletonAnimation_t3721178561 * value)
	{
		___skeletonAnimation_5 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_5, value);
	}

	inline static int32_t get_offset_of_U3Crb2DU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___U3Crb2DU3Ek__BackingField_6)); }
	inline Rigidbody2D_t1743771669 * get_U3Crb2DU3Ek__BackingField_6() const { return ___U3Crb2DU3Ek__BackingField_6; }
	inline Rigidbody2D_t1743771669 ** get_address_of_U3Crb2DU3Ek__BackingField_6() { return &___U3Crb2DU3Ek__BackingField_6; }
	inline void set_U3Crb2DU3Ek__BackingField_6(Rigidbody2D_t1743771669 * value)
	{
		___U3Crb2DU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3Crb2DU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CmoveVectorU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___U3CmoveVectorU3Ek__BackingField_7)); }
	inline Vector3_t4282066566  get_U3CmoveVectorU3Ek__BackingField_7() const { return ___U3CmoveVectorU3Ek__BackingField_7; }
	inline Vector3_t4282066566 * get_address_of_U3CmoveVectorU3Ek__BackingField_7() { return &___U3CmoveVectorU3Ek__BackingField_7; }
	inline void set_U3CmoveVectorU3Ek__BackingField_7(Vector3_t4282066566  value)
	{
		___U3CmoveVectorU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
