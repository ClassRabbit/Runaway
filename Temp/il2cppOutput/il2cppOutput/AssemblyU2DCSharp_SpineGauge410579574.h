#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// Spine.Animation
struct Animation_t3189667530;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpineGauge
struct  SpineGauge_t410579574  : public MonoBehaviour_t667441552
{
public:
	// System.Single SpineGauge::fillPercent
	float ___fillPercent_2;
	// System.String SpineGauge::fillAnimationName
	String_t* ___fillAnimationName_3;
	// Spine.Unity.SkeletonRenderer SpineGauge::skeletonRenderer
	SkeletonRenderer_t3766155010 * ___skeletonRenderer_4;
	// Spine.Animation SpineGauge::fillAnimation
	Animation_t3189667530 * ___fillAnimation_5;

public:
	inline static int32_t get_offset_of_fillPercent_2() { return static_cast<int32_t>(offsetof(SpineGauge_t410579574, ___fillPercent_2)); }
	inline float get_fillPercent_2() const { return ___fillPercent_2; }
	inline float* get_address_of_fillPercent_2() { return &___fillPercent_2; }
	inline void set_fillPercent_2(float value)
	{
		___fillPercent_2 = value;
	}

	inline static int32_t get_offset_of_fillAnimationName_3() { return static_cast<int32_t>(offsetof(SpineGauge_t410579574, ___fillAnimationName_3)); }
	inline String_t* get_fillAnimationName_3() const { return ___fillAnimationName_3; }
	inline String_t** get_address_of_fillAnimationName_3() { return &___fillAnimationName_3; }
	inline void set_fillAnimationName_3(String_t* value)
	{
		___fillAnimationName_3 = value;
		Il2CppCodeGenWriteBarrier(&___fillAnimationName_3, value);
	}

	inline static int32_t get_offset_of_skeletonRenderer_4() { return static_cast<int32_t>(offsetof(SpineGauge_t410579574, ___skeletonRenderer_4)); }
	inline SkeletonRenderer_t3766155010 * get_skeletonRenderer_4() const { return ___skeletonRenderer_4; }
	inline SkeletonRenderer_t3766155010 ** get_address_of_skeletonRenderer_4() { return &___skeletonRenderer_4; }
	inline void set_skeletonRenderer_4(SkeletonRenderer_t3766155010 * value)
	{
		___skeletonRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_4, value);
	}

	inline static int32_t get_offset_of_fillAnimation_5() { return static_cast<int32_t>(offsetof(SpineGauge_t410579574, ___fillAnimation_5)); }
	inline Animation_t3189667530 * get_fillAnimation_5() const { return ___fillAnimation_5; }
	inline Animation_t3189667530 ** get_address_of_fillAnimation_5() { return &___fillAnimation_5; }
	inline void set_fillAnimation_5(Animation_t3189667530 * value)
	{
		___fillAnimation_5 = value;
		Il2CppCodeGenWriteBarrier(&___fillAnimation_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
