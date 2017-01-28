#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonAnimator/MixMode[]
struct MixModeU5BU5D_t213042809;
// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>
struct Dictionary_2_t3186930769;
// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>
struct Dictionary_2_t2106381709;
// UnityEngine.Animator
struct Animator_t2776330603;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t4020151189;

#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer3766155010.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonAnimator
struct  SkeletonAnimator_t3465797926  : public SkeletonRenderer_t3766155010
{
public:
	// Spine.Unity.SkeletonAnimator/MixMode[] Spine.Unity.SkeletonAnimator::layerMixModes
	MixModeU5BU5D_t213042809* ___layerMixModes_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation> Spine.Unity.SkeletonAnimator::animationTable
	Dictionary_2_t3186930769 * ___animationTable_35;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32> Spine.Unity.SkeletonAnimator::clipNameHashCodeTable
	Dictionary_2_t2106381709 * ___clipNameHashCodeTable_36;
	// UnityEngine.Animator Spine.Unity.SkeletonAnimator::animator
	Animator_t2776330603 * ___animator_37;
	// System.Single Spine.Unity.SkeletonAnimator::lastTime
	float ___lastTime_38;
	// Spine.ExposedList`1<Spine.Event> Spine.Unity.SkeletonAnimator::events
	ExposedList_1_t1740365586 * ___events_39;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateLocal
	UpdateBonesDelegate_t4020151189 * ____UpdateLocal_40;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateWorld
	UpdateBonesDelegate_t4020151189 * ____UpdateWorld_41;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateComplete
	UpdateBonesDelegate_t4020151189 * ____UpdateComplete_42;

public:
	inline static int32_t get_offset_of_layerMixModes_34() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ___layerMixModes_34)); }
	inline MixModeU5BU5D_t213042809* get_layerMixModes_34() const { return ___layerMixModes_34; }
	inline MixModeU5BU5D_t213042809** get_address_of_layerMixModes_34() { return &___layerMixModes_34; }
	inline void set_layerMixModes_34(MixModeU5BU5D_t213042809* value)
	{
		___layerMixModes_34 = value;
		Il2CppCodeGenWriteBarrier(&___layerMixModes_34, value);
	}

	inline static int32_t get_offset_of_animationTable_35() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ___animationTable_35)); }
	inline Dictionary_2_t3186930769 * get_animationTable_35() const { return ___animationTable_35; }
	inline Dictionary_2_t3186930769 ** get_address_of_animationTable_35() { return &___animationTable_35; }
	inline void set_animationTable_35(Dictionary_2_t3186930769 * value)
	{
		___animationTable_35 = value;
		Il2CppCodeGenWriteBarrier(&___animationTable_35, value);
	}

	inline static int32_t get_offset_of_clipNameHashCodeTable_36() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ___clipNameHashCodeTable_36)); }
	inline Dictionary_2_t2106381709 * get_clipNameHashCodeTable_36() const { return ___clipNameHashCodeTable_36; }
	inline Dictionary_2_t2106381709 ** get_address_of_clipNameHashCodeTable_36() { return &___clipNameHashCodeTable_36; }
	inline void set_clipNameHashCodeTable_36(Dictionary_2_t2106381709 * value)
	{
		___clipNameHashCodeTable_36 = value;
		Il2CppCodeGenWriteBarrier(&___clipNameHashCodeTable_36, value);
	}

	inline static int32_t get_offset_of_animator_37() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ___animator_37)); }
	inline Animator_t2776330603 * get_animator_37() const { return ___animator_37; }
	inline Animator_t2776330603 ** get_address_of_animator_37() { return &___animator_37; }
	inline void set_animator_37(Animator_t2776330603 * value)
	{
		___animator_37 = value;
		Il2CppCodeGenWriteBarrier(&___animator_37, value);
	}

	inline static int32_t get_offset_of_lastTime_38() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ___lastTime_38)); }
	inline float get_lastTime_38() const { return ___lastTime_38; }
	inline float* get_address_of_lastTime_38() { return &___lastTime_38; }
	inline void set_lastTime_38(float value)
	{
		___lastTime_38 = value;
	}

	inline static int32_t get_offset_of_events_39() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ___events_39)); }
	inline ExposedList_1_t1740365586 * get_events_39() const { return ___events_39; }
	inline ExposedList_1_t1740365586 ** get_address_of_events_39() { return &___events_39; }
	inline void set_events_39(ExposedList_1_t1740365586 * value)
	{
		___events_39 = value;
		Il2CppCodeGenWriteBarrier(&___events_39, value);
	}

	inline static int32_t get_offset_of__UpdateLocal_40() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ____UpdateLocal_40)); }
	inline UpdateBonesDelegate_t4020151189 * get__UpdateLocal_40() const { return ____UpdateLocal_40; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of__UpdateLocal_40() { return &____UpdateLocal_40; }
	inline void set__UpdateLocal_40(UpdateBonesDelegate_t4020151189 * value)
	{
		____UpdateLocal_40 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateLocal_40, value);
	}

	inline static int32_t get_offset_of__UpdateWorld_41() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ____UpdateWorld_41)); }
	inline UpdateBonesDelegate_t4020151189 * get__UpdateWorld_41() const { return ____UpdateWorld_41; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of__UpdateWorld_41() { return &____UpdateWorld_41; }
	inline void set__UpdateWorld_41(UpdateBonesDelegate_t4020151189 * value)
	{
		____UpdateWorld_41 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateWorld_41, value);
	}

	inline static int32_t get_offset_of__UpdateComplete_42() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t3465797926, ____UpdateComplete_42)); }
	inline UpdateBonesDelegate_t4020151189 * get__UpdateComplete_42() const { return ____UpdateComplete_42; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of__UpdateComplete_42() { return &____UpdateComplete_42; }
	inline void set__UpdateComplete_42(UpdateBonesDelegate_t4020151189 * value)
	{
		____UpdateComplete_42 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateComplete_42, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
