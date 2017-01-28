#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.AnimationState
struct AnimationState_t964829161;
// System.String
struct String_t;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t4020151189;

#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer3766155010.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonAnimation
struct  SkeletonAnimation_t3721178561  : public SkeletonRenderer_t3766155010
{
public:
	// Spine.AnimationState Spine.Unity.SkeletonAnimation::state
	AnimationState_t964829161 * ___state_34;
	// System.String Spine.Unity.SkeletonAnimation::_animationName
	String_t* ____animationName_35;
	// System.Boolean Spine.Unity.SkeletonAnimation::loop
	bool ___loop_36;
	// System.Single Spine.Unity.SkeletonAnimation::timeScale
	float ___timeScale_37;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateLocal
	UpdateBonesDelegate_t4020151189 * ____UpdateLocal_38;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateWorld
	UpdateBonesDelegate_t4020151189 * ____UpdateWorld_39;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateComplete
	UpdateBonesDelegate_t4020151189 * ____UpdateComplete_40;

public:
	inline static int32_t get_offset_of_state_34() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t3721178561, ___state_34)); }
	inline AnimationState_t964829161 * get_state_34() const { return ___state_34; }
	inline AnimationState_t964829161 ** get_address_of_state_34() { return &___state_34; }
	inline void set_state_34(AnimationState_t964829161 * value)
	{
		___state_34 = value;
		Il2CppCodeGenWriteBarrier(&___state_34, value);
	}

	inline static int32_t get_offset_of__animationName_35() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t3721178561, ____animationName_35)); }
	inline String_t* get__animationName_35() const { return ____animationName_35; }
	inline String_t** get_address_of__animationName_35() { return &____animationName_35; }
	inline void set__animationName_35(String_t* value)
	{
		____animationName_35 = value;
		Il2CppCodeGenWriteBarrier(&____animationName_35, value);
	}

	inline static int32_t get_offset_of_loop_36() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t3721178561, ___loop_36)); }
	inline bool get_loop_36() const { return ___loop_36; }
	inline bool* get_address_of_loop_36() { return &___loop_36; }
	inline void set_loop_36(bool value)
	{
		___loop_36 = value;
	}

	inline static int32_t get_offset_of_timeScale_37() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t3721178561, ___timeScale_37)); }
	inline float get_timeScale_37() const { return ___timeScale_37; }
	inline float* get_address_of_timeScale_37() { return &___timeScale_37; }
	inline void set_timeScale_37(float value)
	{
		___timeScale_37 = value;
	}

	inline static int32_t get_offset_of__UpdateLocal_38() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t3721178561, ____UpdateLocal_38)); }
	inline UpdateBonesDelegate_t4020151189 * get__UpdateLocal_38() const { return ____UpdateLocal_38; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of__UpdateLocal_38() { return &____UpdateLocal_38; }
	inline void set__UpdateLocal_38(UpdateBonesDelegate_t4020151189 * value)
	{
		____UpdateLocal_38 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateLocal_38, value);
	}

	inline static int32_t get_offset_of__UpdateWorld_39() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t3721178561, ____UpdateWorld_39)); }
	inline UpdateBonesDelegate_t4020151189 * get__UpdateWorld_39() const { return ____UpdateWorld_39; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of__UpdateWorld_39() { return &____UpdateWorld_39; }
	inline void set__UpdateWorld_39(UpdateBonesDelegate_t4020151189 * value)
	{
		____UpdateWorld_39 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateWorld_39, value);
	}

	inline static int32_t get_offset_of__UpdateComplete_40() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t3721178561, ____UpdateComplete_40)); }
	inline UpdateBonesDelegate_t4020151189 * get__UpdateComplete_40() const { return ____UpdateComplete_40; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of__UpdateComplete_40() { return &____UpdateComplete_40; }
	inline void set__UpdateComplete_40(UpdateBonesDelegate_t4020151189 * value)
	{
		____UpdateComplete_40 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateComplete_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
