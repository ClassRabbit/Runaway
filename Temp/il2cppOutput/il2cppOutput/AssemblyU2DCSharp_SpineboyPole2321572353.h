#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t3721178561;
// Spine.Unity.Modules.SkeletonRenderSeparator
struct SkeletonRenderSeparator_t3234766824;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpineboyPole
struct  SpineboyPole_t2321572353  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonAnimation SpineboyPole::skeletonAnimation
	SkeletonAnimation_t3721178561 * ___skeletonAnimation_4;
	// Spine.Unity.Modules.SkeletonRenderSeparator SpineboyPole::separator
	SkeletonRenderSeparator_t3234766824 * ___separator_5;
	// System.String SpineboyPole::run
	String_t* ___run_6;
	// System.String SpineboyPole::pole
	String_t* ___pole_7;
	// System.Single SpineboyPole::startX
	float ___startX_8;
	// System.Single SpineboyPole::endX
	float ___endX_9;

public:
	inline static int32_t get_offset_of_skeletonAnimation_4() { return static_cast<int32_t>(offsetof(SpineboyPole_t2321572353, ___skeletonAnimation_4)); }
	inline SkeletonAnimation_t3721178561 * get_skeletonAnimation_4() const { return ___skeletonAnimation_4; }
	inline SkeletonAnimation_t3721178561 ** get_address_of_skeletonAnimation_4() { return &___skeletonAnimation_4; }
	inline void set_skeletonAnimation_4(SkeletonAnimation_t3721178561 * value)
	{
		___skeletonAnimation_4 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_4, value);
	}

	inline static int32_t get_offset_of_separator_5() { return static_cast<int32_t>(offsetof(SpineboyPole_t2321572353, ___separator_5)); }
	inline SkeletonRenderSeparator_t3234766824 * get_separator_5() const { return ___separator_5; }
	inline SkeletonRenderSeparator_t3234766824 ** get_address_of_separator_5() { return &___separator_5; }
	inline void set_separator_5(SkeletonRenderSeparator_t3234766824 * value)
	{
		___separator_5 = value;
		Il2CppCodeGenWriteBarrier(&___separator_5, value);
	}

	inline static int32_t get_offset_of_run_6() { return static_cast<int32_t>(offsetof(SpineboyPole_t2321572353, ___run_6)); }
	inline String_t* get_run_6() const { return ___run_6; }
	inline String_t** get_address_of_run_6() { return &___run_6; }
	inline void set_run_6(String_t* value)
	{
		___run_6 = value;
		Il2CppCodeGenWriteBarrier(&___run_6, value);
	}

	inline static int32_t get_offset_of_pole_7() { return static_cast<int32_t>(offsetof(SpineboyPole_t2321572353, ___pole_7)); }
	inline String_t* get_pole_7() const { return ___pole_7; }
	inline String_t** get_address_of_pole_7() { return &___pole_7; }
	inline void set_pole_7(String_t* value)
	{
		___pole_7 = value;
		Il2CppCodeGenWriteBarrier(&___pole_7, value);
	}

	inline static int32_t get_offset_of_startX_8() { return static_cast<int32_t>(offsetof(SpineboyPole_t2321572353, ___startX_8)); }
	inline float get_startX_8() const { return ___startX_8; }
	inline float* get_address_of_startX_8() { return &___startX_8; }
	inline void set_startX_8(float value)
	{
		___startX_8 = value;
	}

	inline static int32_t get_offset_of_endX_9() { return static_cast<int32_t>(offsetof(SpineboyPole_t2321572353, ___endX_9)); }
	inline float get_endX_9() const { return ___endX_9; }
	inline float* get_address_of_endX_9() { return &___endX_9; }
	inline void set_endX_9(float value)
	{
		___endX_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
