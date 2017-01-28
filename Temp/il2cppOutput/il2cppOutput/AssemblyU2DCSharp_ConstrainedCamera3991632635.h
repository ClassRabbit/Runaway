#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConstrainedCamera
struct  ConstrainedCamera_t3991632635  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform ConstrainedCamera::target
	Transform_t1659122786 * ___target_2;
	// UnityEngine.Vector3 ConstrainedCamera::offset
	Vector3_t4282066566  ___offset_3;
	// UnityEngine.Vector3 ConstrainedCamera::min
	Vector3_t4282066566  ___min_4;
	// UnityEngine.Vector3 ConstrainedCamera::max
	Vector3_t4282066566  ___max_5;
	// System.Single ConstrainedCamera::smoothing
	float ___smoothing_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t3991632635, ___target_2)); }
	inline Transform_t1659122786 * get_target_2() const { return ___target_2; }
	inline Transform_t1659122786 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t1659122786 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t3991632635, ___offset_3)); }
	inline Vector3_t4282066566  get_offset_3() const { return ___offset_3; }
	inline Vector3_t4282066566 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t4282066566  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_min_4() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t3991632635, ___min_4)); }
	inline Vector3_t4282066566  get_min_4() const { return ___min_4; }
	inline Vector3_t4282066566 * get_address_of_min_4() { return &___min_4; }
	inline void set_min_4(Vector3_t4282066566  value)
	{
		___min_4 = value;
	}

	inline static int32_t get_offset_of_max_5() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t3991632635, ___max_5)); }
	inline Vector3_t4282066566  get_max_5() const { return ___max_5; }
	inline Vector3_t4282066566 * get_address_of_max_5() { return &___max_5; }
	inline void set_max_5(Vector3_t4282066566  value)
	{
		___max_5 = value;
	}

	inline static int32_t get_offset_of_smoothing_6() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t3991632635, ___smoothing_6)); }
	inline float get_smoothing_6() const { return ___smoothing_6; }
	inline float* get_address_of_smoothing_6() { return &___smoothing_6; }
	inline void set_smoothing_6(float value)
	{
		___smoothing_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
