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
// Spine.AnimationState/StartEndDelegate
struct StartEndDelegate_t3416038005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spineboy
struct  Spineboy_t2351289001  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonAnimation Spineboy::skeletonAnimation
	SkeletonAnimation_t3721178561 * ___skeletonAnimation_2;

public:
	inline static int32_t get_offset_of_skeletonAnimation_2() { return static_cast<int32_t>(offsetof(Spineboy_t2351289001, ___skeletonAnimation_2)); }
	inline SkeletonAnimation_t3721178561 * get_skeletonAnimation_2() const { return ___skeletonAnimation_2; }
	inline SkeletonAnimation_t3721178561 ** get_address_of_skeletonAnimation_2() { return &___skeletonAnimation_2; }
	inline void set_skeletonAnimation_2(SkeletonAnimation_t3721178561 * value)
	{
		___skeletonAnimation_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_2, value);
	}
};

struct Spineboy_t2351289001_StaticFields
{
public:
	// Spine.AnimationState/StartEndDelegate Spineboy::<>f__am$cache1
	StartEndDelegate_t3416038005 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(Spineboy_t2351289001_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline StartEndDelegate_t3416038005 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline StartEndDelegate_t3416038005 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(StartEndDelegate_t3416038005 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
