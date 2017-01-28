#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonUtility
struct SkeletonUtility_t43096937;
// Spine.Bone
struct Bone_t1650489600;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityBone_3772442675.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonUtilityBone
struct  SkeletonUtilityBone_t1973204173  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Spine.Unity.SkeletonUtilityBone::valid
	bool ___valid_2;
	// Spine.Unity.SkeletonUtility Spine.Unity.SkeletonUtilityBone::skeletonUtility
	SkeletonUtility_t43096937 * ___skeletonUtility_3;
	// Spine.Bone Spine.Unity.SkeletonUtilityBone::bone
	Bone_t1650489600 * ___bone_4;
	// Spine.Unity.SkeletonUtilityBone/Mode Spine.Unity.SkeletonUtilityBone::mode
	int32_t ___mode_5;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::zPosition
	bool ___zPosition_6;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::position
	bool ___position_7;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::rotation
	bool ___rotation_8;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::scale
	bool ___scale_9;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::flip
	bool ___flip_10;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::flipX
	bool ___flipX_11;
	// System.Single Spine.Unity.SkeletonUtilityBone::overrideAlpha
	float ___overrideAlpha_12;
	// System.String Spine.Unity.SkeletonUtilityBone::boneName
	String_t* ___boneName_13;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::parentReference
	Transform_t1659122786 * ___parentReference_14;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::transformLerpComplete
	bool ___transformLerpComplete_15;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::cachedTransform
	Transform_t1659122786 * ___cachedTransform_16;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::skeletonTransform
	Transform_t1659122786 * ___skeletonTransform_17;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::disableInheritScaleWarning
	bool ___disableInheritScaleWarning_18;

public:
	inline static int32_t get_offset_of_valid_2() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___valid_2)); }
	inline bool get_valid_2() const { return ___valid_2; }
	inline bool* get_address_of_valid_2() { return &___valid_2; }
	inline void set_valid_2(bool value)
	{
		___valid_2 = value;
	}

	inline static int32_t get_offset_of_skeletonUtility_3() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___skeletonUtility_3)); }
	inline SkeletonUtility_t43096937 * get_skeletonUtility_3() const { return ___skeletonUtility_3; }
	inline SkeletonUtility_t43096937 ** get_address_of_skeletonUtility_3() { return &___skeletonUtility_3; }
	inline void set_skeletonUtility_3(SkeletonUtility_t43096937 * value)
	{
		___skeletonUtility_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonUtility_3, value);
	}

	inline static int32_t get_offset_of_bone_4() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___bone_4)); }
	inline Bone_t1650489600 * get_bone_4() const { return ___bone_4; }
	inline Bone_t1650489600 ** get_address_of_bone_4() { return &___bone_4; }
	inline void set_bone_4(Bone_t1650489600 * value)
	{
		___bone_4 = value;
		Il2CppCodeGenWriteBarrier(&___bone_4, value);
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_zPosition_6() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___zPosition_6)); }
	inline bool get_zPosition_6() const { return ___zPosition_6; }
	inline bool* get_address_of_zPosition_6() { return &___zPosition_6; }
	inline void set_zPosition_6(bool value)
	{
		___zPosition_6 = value;
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___position_7)); }
	inline bool get_position_7() const { return ___position_7; }
	inline bool* get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(bool value)
	{
		___position_7 = value;
	}

	inline static int32_t get_offset_of_rotation_8() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___rotation_8)); }
	inline bool get_rotation_8() const { return ___rotation_8; }
	inline bool* get_address_of_rotation_8() { return &___rotation_8; }
	inline void set_rotation_8(bool value)
	{
		___rotation_8 = value;
	}

	inline static int32_t get_offset_of_scale_9() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___scale_9)); }
	inline bool get_scale_9() const { return ___scale_9; }
	inline bool* get_address_of_scale_9() { return &___scale_9; }
	inline void set_scale_9(bool value)
	{
		___scale_9 = value;
	}

	inline static int32_t get_offset_of_flip_10() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___flip_10)); }
	inline bool get_flip_10() const { return ___flip_10; }
	inline bool* get_address_of_flip_10() { return &___flip_10; }
	inline void set_flip_10(bool value)
	{
		___flip_10 = value;
	}

	inline static int32_t get_offset_of_flipX_11() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___flipX_11)); }
	inline bool get_flipX_11() const { return ___flipX_11; }
	inline bool* get_address_of_flipX_11() { return &___flipX_11; }
	inline void set_flipX_11(bool value)
	{
		___flipX_11 = value;
	}

	inline static int32_t get_offset_of_overrideAlpha_12() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___overrideAlpha_12)); }
	inline float get_overrideAlpha_12() const { return ___overrideAlpha_12; }
	inline float* get_address_of_overrideAlpha_12() { return &___overrideAlpha_12; }
	inline void set_overrideAlpha_12(float value)
	{
		___overrideAlpha_12 = value;
	}

	inline static int32_t get_offset_of_boneName_13() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___boneName_13)); }
	inline String_t* get_boneName_13() const { return ___boneName_13; }
	inline String_t** get_address_of_boneName_13() { return &___boneName_13; }
	inline void set_boneName_13(String_t* value)
	{
		___boneName_13 = value;
		Il2CppCodeGenWriteBarrier(&___boneName_13, value);
	}

	inline static int32_t get_offset_of_parentReference_14() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___parentReference_14)); }
	inline Transform_t1659122786 * get_parentReference_14() const { return ___parentReference_14; }
	inline Transform_t1659122786 ** get_address_of_parentReference_14() { return &___parentReference_14; }
	inline void set_parentReference_14(Transform_t1659122786 * value)
	{
		___parentReference_14 = value;
		Il2CppCodeGenWriteBarrier(&___parentReference_14, value);
	}

	inline static int32_t get_offset_of_transformLerpComplete_15() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___transformLerpComplete_15)); }
	inline bool get_transformLerpComplete_15() const { return ___transformLerpComplete_15; }
	inline bool* get_address_of_transformLerpComplete_15() { return &___transformLerpComplete_15; }
	inline void set_transformLerpComplete_15(bool value)
	{
		___transformLerpComplete_15 = value;
	}

	inline static int32_t get_offset_of_cachedTransform_16() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___cachedTransform_16)); }
	inline Transform_t1659122786 * get_cachedTransform_16() const { return ___cachedTransform_16; }
	inline Transform_t1659122786 ** get_address_of_cachedTransform_16() { return &___cachedTransform_16; }
	inline void set_cachedTransform_16(Transform_t1659122786 * value)
	{
		___cachedTransform_16 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_16, value);
	}

	inline static int32_t get_offset_of_skeletonTransform_17() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___skeletonTransform_17)); }
	inline Transform_t1659122786 * get_skeletonTransform_17() const { return ___skeletonTransform_17; }
	inline Transform_t1659122786 ** get_address_of_skeletonTransform_17() { return &___skeletonTransform_17; }
	inline void set_skeletonTransform_17(Transform_t1659122786 * value)
	{
		___skeletonTransform_17 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonTransform_17, value);
	}

	inline static int32_t get_offset_of_disableInheritScaleWarning_18() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1973204173, ___disableInheritScaleWarning_18)); }
	inline bool get_disableInheritScaleWarning_18() const { return ___disableInheritScaleWarning_18; }
	inline bool* get_address_of_disableInheritScaleWarning_18() { return &___disableInheritScaleWarning_18; }
	inline void set_disableInheritScaleWarning_18(bool value)
	{
		___disableInheritScaleWarning_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
