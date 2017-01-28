#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityConst3501047718.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonUtilityEyeConstraint
struct  SkeletonUtilityEyeConstraint_t1100357451  : public SkeletonUtilityConstraint_t3501047718
{
public:
	// UnityEngine.Transform[] Spine.Unity.Modules.SkeletonUtilityEyeConstraint::eyes
	TransformU5BU5D_t3792884695* ___eyes_4;
	// System.Single Spine.Unity.Modules.SkeletonUtilityEyeConstraint::radius
	float ___radius_5;
	// UnityEngine.Transform Spine.Unity.Modules.SkeletonUtilityEyeConstraint::target
	Transform_t1659122786 * ___target_6;
	// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonUtilityEyeConstraint::targetPosition
	Vector3_t4282066566  ___targetPosition_7;
	// System.Single Spine.Unity.Modules.SkeletonUtilityEyeConstraint::speed
	float ___speed_8;
	// UnityEngine.Vector3[] Spine.Unity.Modules.SkeletonUtilityEyeConstraint::origins
	Vector3U5BU5D_t215400611* ___origins_9;
	// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonUtilityEyeConstraint::centerPoint
	Vector3_t4282066566  ___centerPoint_10;

public:
	inline static int32_t get_offset_of_eyes_4() { return static_cast<int32_t>(offsetof(SkeletonUtilityEyeConstraint_t1100357451, ___eyes_4)); }
	inline TransformU5BU5D_t3792884695* get_eyes_4() const { return ___eyes_4; }
	inline TransformU5BU5D_t3792884695** get_address_of_eyes_4() { return &___eyes_4; }
	inline void set_eyes_4(TransformU5BU5D_t3792884695* value)
	{
		___eyes_4 = value;
		Il2CppCodeGenWriteBarrier(&___eyes_4, value);
	}

	inline static int32_t get_offset_of_radius_5() { return static_cast<int32_t>(offsetof(SkeletonUtilityEyeConstraint_t1100357451, ___radius_5)); }
	inline float get_radius_5() const { return ___radius_5; }
	inline float* get_address_of_radius_5() { return &___radius_5; }
	inline void set_radius_5(float value)
	{
		___radius_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(SkeletonUtilityEyeConstraint_t1100357451, ___target_6)); }
	inline Transform_t1659122786 * get_target_6() const { return ___target_6; }
	inline Transform_t1659122786 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(Transform_t1659122786 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier(&___target_6, value);
	}

	inline static int32_t get_offset_of_targetPosition_7() { return static_cast<int32_t>(offsetof(SkeletonUtilityEyeConstraint_t1100357451, ___targetPosition_7)); }
	inline Vector3_t4282066566  get_targetPosition_7() const { return ___targetPosition_7; }
	inline Vector3_t4282066566 * get_address_of_targetPosition_7() { return &___targetPosition_7; }
	inline void set_targetPosition_7(Vector3_t4282066566  value)
	{
		___targetPosition_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(SkeletonUtilityEyeConstraint_t1100357451, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_origins_9() { return static_cast<int32_t>(offsetof(SkeletonUtilityEyeConstraint_t1100357451, ___origins_9)); }
	inline Vector3U5BU5D_t215400611* get_origins_9() const { return ___origins_9; }
	inline Vector3U5BU5D_t215400611** get_address_of_origins_9() { return &___origins_9; }
	inline void set_origins_9(Vector3U5BU5D_t215400611* value)
	{
		___origins_9 = value;
		Il2CppCodeGenWriteBarrier(&___origins_9, value);
	}

	inline static int32_t get_offset_of_centerPoint_10() { return static_cast<int32_t>(offsetof(SkeletonUtilityEyeConstraint_t1100357451, ___centerPoint_10)); }
	inline Vector3_t4282066566  get_centerPoint_10() const { return ___centerPoint_10; }
	inline Vector3_t4282066566 * get_address_of_centerPoint_10() { return &___centerPoint_10; }
	inline void set_centerPoint_10(Vector3_t4282066566  value)
	{
		___centerPoint_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
