#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t2211567523;
// System.String
struct String_t;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.Unity.MeshGeneration.ISimpleMeshGenerator
struct ISimpleMeshGenerator_t1368828227;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t4020151189;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic3186046376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonGraphic
struct  SkeletonGraphic_t438418661  : public MaskableGraphic_t3186046376
{
public:
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonGraphic::skeletonDataAsset
	SkeletonDataAsset_t2211567523 * ___skeletonDataAsset_28;
	// System.String Spine.Unity.SkeletonGraphic::initialSkinName
	String_t* ___initialSkinName_29;
	// System.String Spine.Unity.SkeletonGraphic::startingAnimation
	String_t* ___startingAnimation_30;
	// System.Boolean Spine.Unity.SkeletonGraphic::startingLoop
	bool ___startingLoop_31;
	// System.Single Spine.Unity.SkeletonGraphic::timeScale
	float ___timeScale_32;
	// System.Boolean Spine.Unity.SkeletonGraphic::freeze
	bool ___freeze_33;
	// Spine.Skeleton Spine.Unity.SkeletonGraphic::skeleton
	Skeleton_t2209335561 * ___skeleton_34;
	// Spine.AnimationState Spine.Unity.SkeletonGraphic::state
	AnimationState_t964829161 * ___state_35;
	// Spine.Unity.MeshGeneration.ISimpleMeshGenerator Spine.Unity.SkeletonGraphic::spineMeshGenerator
	Il2CppObject * ___spineMeshGenerator_36;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateLocal
	UpdateBonesDelegate_t4020151189 * ___UpdateLocal_37;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateWorld
	UpdateBonesDelegate_t4020151189 * ___UpdateWorld_38;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateComplete
	UpdateBonesDelegate_t4020151189 * ___UpdateComplete_39;

public:
	inline static int32_t get_offset_of_skeletonDataAsset_28() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___skeletonDataAsset_28)); }
	inline SkeletonDataAsset_t2211567523 * get_skeletonDataAsset_28() const { return ___skeletonDataAsset_28; }
	inline SkeletonDataAsset_t2211567523 ** get_address_of_skeletonDataAsset_28() { return &___skeletonDataAsset_28; }
	inline void set_skeletonDataAsset_28(SkeletonDataAsset_t2211567523 * value)
	{
		___skeletonDataAsset_28 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonDataAsset_28, value);
	}

	inline static int32_t get_offset_of_initialSkinName_29() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___initialSkinName_29)); }
	inline String_t* get_initialSkinName_29() const { return ___initialSkinName_29; }
	inline String_t** get_address_of_initialSkinName_29() { return &___initialSkinName_29; }
	inline void set_initialSkinName_29(String_t* value)
	{
		___initialSkinName_29 = value;
		Il2CppCodeGenWriteBarrier(&___initialSkinName_29, value);
	}

	inline static int32_t get_offset_of_startingAnimation_30() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___startingAnimation_30)); }
	inline String_t* get_startingAnimation_30() const { return ___startingAnimation_30; }
	inline String_t** get_address_of_startingAnimation_30() { return &___startingAnimation_30; }
	inline void set_startingAnimation_30(String_t* value)
	{
		___startingAnimation_30 = value;
		Il2CppCodeGenWriteBarrier(&___startingAnimation_30, value);
	}

	inline static int32_t get_offset_of_startingLoop_31() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___startingLoop_31)); }
	inline bool get_startingLoop_31() const { return ___startingLoop_31; }
	inline bool* get_address_of_startingLoop_31() { return &___startingLoop_31; }
	inline void set_startingLoop_31(bool value)
	{
		___startingLoop_31 = value;
	}

	inline static int32_t get_offset_of_timeScale_32() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___timeScale_32)); }
	inline float get_timeScale_32() const { return ___timeScale_32; }
	inline float* get_address_of_timeScale_32() { return &___timeScale_32; }
	inline void set_timeScale_32(float value)
	{
		___timeScale_32 = value;
	}

	inline static int32_t get_offset_of_freeze_33() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___freeze_33)); }
	inline bool get_freeze_33() const { return ___freeze_33; }
	inline bool* get_address_of_freeze_33() { return &___freeze_33; }
	inline void set_freeze_33(bool value)
	{
		___freeze_33 = value;
	}

	inline static int32_t get_offset_of_skeleton_34() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___skeleton_34)); }
	inline Skeleton_t2209335561 * get_skeleton_34() const { return ___skeleton_34; }
	inline Skeleton_t2209335561 ** get_address_of_skeleton_34() { return &___skeleton_34; }
	inline void set_skeleton_34(Skeleton_t2209335561 * value)
	{
		___skeleton_34 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_34, value);
	}

	inline static int32_t get_offset_of_state_35() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___state_35)); }
	inline AnimationState_t964829161 * get_state_35() const { return ___state_35; }
	inline AnimationState_t964829161 ** get_address_of_state_35() { return &___state_35; }
	inline void set_state_35(AnimationState_t964829161 * value)
	{
		___state_35 = value;
		Il2CppCodeGenWriteBarrier(&___state_35, value);
	}

	inline static int32_t get_offset_of_spineMeshGenerator_36() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___spineMeshGenerator_36)); }
	inline Il2CppObject * get_spineMeshGenerator_36() const { return ___spineMeshGenerator_36; }
	inline Il2CppObject ** get_address_of_spineMeshGenerator_36() { return &___spineMeshGenerator_36; }
	inline void set_spineMeshGenerator_36(Il2CppObject * value)
	{
		___spineMeshGenerator_36 = value;
		Il2CppCodeGenWriteBarrier(&___spineMeshGenerator_36, value);
	}

	inline static int32_t get_offset_of_UpdateLocal_37() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___UpdateLocal_37)); }
	inline UpdateBonesDelegate_t4020151189 * get_UpdateLocal_37() const { return ___UpdateLocal_37; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of_UpdateLocal_37() { return &___UpdateLocal_37; }
	inline void set_UpdateLocal_37(UpdateBonesDelegate_t4020151189 * value)
	{
		___UpdateLocal_37 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateLocal_37, value);
	}

	inline static int32_t get_offset_of_UpdateWorld_38() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___UpdateWorld_38)); }
	inline UpdateBonesDelegate_t4020151189 * get_UpdateWorld_38() const { return ___UpdateWorld_38; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of_UpdateWorld_38() { return &___UpdateWorld_38; }
	inline void set_UpdateWorld_38(UpdateBonesDelegate_t4020151189 * value)
	{
		___UpdateWorld_38 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateWorld_38, value);
	}

	inline static int32_t get_offset_of_UpdateComplete_39() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t438418661, ___UpdateComplete_39)); }
	inline UpdateBonesDelegate_t4020151189 * get_UpdateComplete_39() const { return ___UpdateComplete_39; }
	inline UpdateBonesDelegate_t4020151189 ** get_address_of_UpdateComplete_39() { return &___UpdateComplete_39; }
	inline void set_UpdateComplete_39(UpdateBonesDelegate_t4020151189 * value)
	{
		___UpdateComplete_39 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateComplete_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
