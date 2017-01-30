#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseController
struct  MouseController_t3353569793  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.LayerMask MouseController::ground
	LayerMask_t3236759763  ___ground_2;
	// UnityEngine.Vector3 MouseController::targetPosition
	Vector3_t4282066566  ___targetPosition_3;
	// System.Single MouseController::speed
	float ___speed_4;
	// System.Boolean MouseController::lookRight
	bool ___lookRight_5;
	// UnityEngine.Animator MouseController::animator
	Animator_t2776330603 * ___animator_6;

public:
	inline static int32_t get_offset_of_ground_2() { return static_cast<int32_t>(offsetof(MouseController_t3353569793, ___ground_2)); }
	inline LayerMask_t3236759763  get_ground_2() const { return ___ground_2; }
	inline LayerMask_t3236759763 * get_address_of_ground_2() { return &___ground_2; }
	inline void set_ground_2(LayerMask_t3236759763  value)
	{
		___ground_2 = value;
	}

	inline static int32_t get_offset_of_targetPosition_3() { return static_cast<int32_t>(offsetof(MouseController_t3353569793, ___targetPosition_3)); }
	inline Vector3_t4282066566  get_targetPosition_3() const { return ___targetPosition_3; }
	inline Vector3_t4282066566 * get_address_of_targetPosition_3() { return &___targetPosition_3; }
	inline void set_targetPosition_3(Vector3_t4282066566  value)
	{
		___targetPosition_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MouseController_t3353569793, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_lookRight_5() { return static_cast<int32_t>(offsetof(MouseController_t3353569793, ___lookRight_5)); }
	inline bool get_lookRight_5() const { return ___lookRight_5; }
	inline bool* get_address_of_lookRight_5() { return &___lookRight_5; }
	inline void set_lookRight_5(bool value)
	{
		___lookRight_5 = value;
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(MouseController_t3353569793, ___animator_6)); }
	inline Animator_t2776330603 * get_animator_6() const { return ___animator_6; }
	inline Animator_t2776330603 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t2776330603 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier(&___animator_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
