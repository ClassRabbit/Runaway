#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.SkeletonData
struct SkeletonData_t3387199699;
// System.Collections.Generic.Dictionary`2<Spine.AnimationStateData/AnimationPair,System.Single>
struct Dictionary_2_t1573854306;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.AnimationStateData
struct  AnimationStateData_t250640307  : public Il2CppObject
{
public:
	// Spine.SkeletonData Spine.AnimationStateData::skeletonData
	SkeletonData_t3387199699 * ___skeletonData_0;
	// System.Collections.Generic.Dictionary`2<Spine.AnimationStateData/AnimationPair,System.Single> Spine.AnimationStateData::animationToMixTime
	Dictionary_2_t1573854306 * ___animationToMixTime_1;
	// System.Single Spine.AnimationStateData::defaultMix
	float ___defaultMix_2;

public:
	inline static int32_t get_offset_of_skeletonData_0() { return static_cast<int32_t>(offsetof(AnimationStateData_t250640307, ___skeletonData_0)); }
	inline SkeletonData_t3387199699 * get_skeletonData_0() const { return ___skeletonData_0; }
	inline SkeletonData_t3387199699 ** get_address_of_skeletonData_0() { return &___skeletonData_0; }
	inline void set_skeletonData_0(SkeletonData_t3387199699 * value)
	{
		___skeletonData_0 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonData_0, value);
	}

	inline static int32_t get_offset_of_animationToMixTime_1() { return static_cast<int32_t>(offsetof(AnimationStateData_t250640307, ___animationToMixTime_1)); }
	inline Dictionary_2_t1573854306 * get_animationToMixTime_1() const { return ___animationToMixTime_1; }
	inline Dictionary_2_t1573854306 ** get_address_of_animationToMixTime_1() { return &___animationToMixTime_1; }
	inline void set_animationToMixTime_1(Dictionary_2_t1573854306 * value)
	{
		___animationToMixTime_1 = value;
		Il2CppCodeGenWriteBarrier(&___animationToMixTime_1, value);
	}

	inline static int32_t get_offset_of_defaultMix_2() { return static_cast<int32_t>(offsetof(AnimationStateData_t250640307, ___defaultMix_2)); }
	inline float get_defaultMix_2() const { return ___defaultMix_2; }
	inline float* get_address_of_defaultMix_2() { return &___defaultMix_2; }
	inline void set_defaultMix_2(float value)
	{
		___defaultMix_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
