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
// Spine.Bone
struct Bone_t1650489600;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Goblins
struct  Goblins_t1859914588  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Goblins::girlSkin
	bool ___girlSkin_2;
	// Spine.Unity.SkeletonAnimation Goblins::skeletonAnimation
	SkeletonAnimation_t3721178561 * ___skeletonAnimation_3;
	// Spine.Bone Goblins::headBone
	Bone_t1650489600 * ___headBone_4;

public:
	inline static int32_t get_offset_of_girlSkin_2() { return static_cast<int32_t>(offsetof(Goblins_t1859914588, ___girlSkin_2)); }
	inline bool get_girlSkin_2() const { return ___girlSkin_2; }
	inline bool* get_address_of_girlSkin_2() { return &___girlSkin_2; }
	inline void set_girlSkin_2(bool value)
	{
		___girlSkin_2 = value;
	}

	inline static int32_t get_offset_of_skeletonAnimation_3() { return static_cast<int32_t>(offsetof(Goblins_t1859914588, ___skeletonAnimation_3)); }
	inline SkeletonAnimation_t3721178561 * get_skeletonAnimation_3() const { return ___skeletonAnimation_3; }
	inline SkeletonAnimation_t3721178561 ** get_address_of_skeletonAnimation_3() { return &___skeletonAnimation_3; }
	inline void set_skeletonAnimation_3(SkeletonAnimation_t3721178561 * value)
	{
		___skeletonAnimation_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_3, value);
	}

	inline static int32_t get_offset_of_headBone_4() { return static_cast<int32_t>(offsetof(Goblins_t1859914588, ___headBone_4)); }
	inline Bone_t1650489600 * get_headBone_4() const { return ___headBone_4; }
	inline Bone_t1650489600 ** get_address_of_headBone_4() { return &___headBone_4; }
	inline void set_headBone_4(Bone_t1650489600 * value)
	{
		___headBone_4 = value;
		Il2CppCodeGenWriteBarrier(&___headBone_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
