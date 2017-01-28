#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.Modules.SkeletonRagdoll2D
struct SkeletonRagdoll2D_t1262458094;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RaggedySpineboy
struct  RaggedySpineboy_t938186132  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.LayerMask RaggedySpineboy::groundMask
	LayerMask_t3236759763  ___groundMask_2;
	// System.Single RaggedySpineboy::restoreDuration
	float ___restoreDuration_3;
	// UnityEngine.Vector2 RaggedySpineboy::launchVelocity
	Vector2_t4282066565  ___launchVelocity_4;
	// Spine.Unity.Modules.SkeletonRagdoll2D RaggedySpineboy::ragdoll
	SkeletonRagdoll2D_t1262458094 * ___ragdoll_5;
	// UnityEngine.Collider2D RaggedySpineboy::naturalCollider
	Collider2D_t1552025098 * ___naturalCollider_6;

public:
	inline static int32_t get_offset_of_groundMask_2() { return static_cast<int32_t>(offsetof(RaggedySpineboy_t938186132, ___groundMask_2)); }
	inline LayerMask_t3236759763  get_groundMask_2() const { return ___groundMask_2; }
	inline LayerMask_t3236759763 * get_address_of_groundMask_2() { return &___groundMask_2; }
	inline void set_groundMask_2(LayerMask_t3236759763  value)
	{
		___groundMask_2 = value;
	}

	inline static int32_t get_offset_of_restoreDuration_3() { return static_cast<int32_t>(offsetof(RaggedySpineboy_t938186132, ___restoreDuration_3)); }
	inline float get_restoreDuration_3() const { return ___restoreDuration_3; }
	inline float* get_address_of_restoreDuration_3() { return &___restoreDuration_3; }
	inline void set_restoreDuration_3(float value)
	{
		___restoreDuration_3 = value;
	}

	inline static int32_t get_offset_of_launchVelocity_4() { return static_cast<int32_t>(offsetof(RaggedySpineboy_t938186132, ___launchVelocity_4)); }
	inline Vector2_t4282066565  get_launchVelocity_4() const { return ___launchVelocity_4; }
	inline Vector2_t4282066565 * get_address_of_launchVelocity_4() { return &___launchVelocity_4; }
	inline void set_launchVelocity_4(Vector2_t4282066565  value)
	{
		___launchVelocity_4 = value;
	}

	inline static int32_t get_offset_of_ragdoll_5() { return static_cast<int32_t>(offsetof(RaggedySpineboy_t938186132, ___ragdoll_5)); }
	inline SkeletonRagdoll2D_t1262458094 * get_ragdoll_5() const { return ___ragdoll_5; }
	inline SkeletonRagdoll2D_t1262458094 ** get_address_of_ragdoll_5() { return &___ragdoll_5; }
	inline void set_ragdoll_5(SkeletonRagdoll2D_t1262458094 * value)
	{
		___ragdoll_5 = value;
		Il2CppCodeGenWriteBarrier(&___ragdoll_5, value);
	}

	inline static int32_t get_offset_of_naturalCollider_6() { return static_cast<int32_t>(offsetof(RaggedySpineboy_t938186132, ___naturalCollider_6)); }
	inline Collider2D_t1552025098 * get_naturalCollider_6() const { return ___naturalCollider_6; }
	inline Collider2D_t1552025098 ** get_address_of_naturalCollider_6() { return &___naturalCollider_6; }
	inline void set_naturalCollider_6(Collider2D_t1552025098 * value)
	{
		___naturalCollider_6 = value;
		Il2CppCodeGenWriteBarrier(&___naturalCollider_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
