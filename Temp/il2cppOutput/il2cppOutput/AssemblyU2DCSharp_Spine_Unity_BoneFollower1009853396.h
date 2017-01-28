#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// System.String
struct String_t;
// Spine.Bone
struct Bone_t1650489600;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.BoneFollower
struct  BoneFollower_t1009853396  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonRenderer Spine.Unity.BoneFollower::skeletonRenderer
	SkeletonRenderer_t3766155010 * ___skeletonRenderer_2;
	// System.String Spine.Unity.BoneFollower::boneName
	String_t* ___boneName_3;
	// System.Boolean Spine.Unity.BoneFollower::followZPosition
	bool ___followZPosition_4;
	// System.Boolean Spine.Unity.BoneFollower::followBoneRotation
	bool ___followBoneRotation_5;
	// System.Boolean Spine.Unity.BoneFollower::followSkeletonFlip
	bool ___followSkeletonFlip_6;
	// System.Boolean Spine.Unity.BoneFollower::initializeOnAwake
	bool ___initializeOnAwake_7;
	// System.Boolean Spine.Unity.BoneFollower::valid
	bool ___valid_8;
	// Spine.Bone Spine.Unity.BoneFollower::bone
	Bone_t1650489600 * ___bone_9;
	// UnityEngine.Transform Spine.Unity.BoneFollower::skeletonTransform
	Transform_t1659122786 * ___skeletonTransform_10;

public:
	inline static int32_t get_offset_of_skeletonRenderer_2() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___skeletonRenderer_2)); }
	inline SkeletonRenderer_t3766155010 * get_skeletonRenderer_2() const { return ___skeletonRenderer_2; }
	inline SkeletonRenderer_t3766155010 ** get_address_of_skeletonRenderer_2() { return &___skeletonRenderer_2; }
	inline void set_skeletonRenderer_2(SkeletonRenderer_t3766155010 * value)
	{
		___skeletonRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_2, value);
	}

	inline static int32_t get_offset_of_boneName_3() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___boneName_3)); }
	inline String_t* get_boneName_3() const { return ___boneName_3; }
	inline String_t** get_address_of_boneName_3() { return &___boneName_3; }
	inline void set_boneName_3(String_t* value)
	{
		___boneName_3 = value;
		Il2CppCodeGenWriteBarrier(&___boneName_3, value);
	}

	inline static int32_t get_offset_of_followZPosition_4() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___followZPosition_4)); }
	inline bool get_followZPosition_4() const { return ___followZPosition_4; }
	inline bool* get_address_of_followZPosition_4() { return &___followZPosition_4; }
	inline void set_followZPosition_4(bool value)
	{
		___followZPosition_4 = value;
	}

	inline static int32_t get_offset_of_followBoneRotation_5() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___followBoneRotation_5)); }
	inline bool get_followBoneRotation_5() const { return ___followBoneRotation_5; }
	inline bool* get_address_of_followBoneRotation_5() { return &___followBoneRotation_5; }
	inline void set_followBoneRotation_5(bool value)
	{
		___followBoneRotation_5 = value;
	}

	inline static int32_t get_offset_of_followSkeletonFlip_6() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___followSkeletonFlip_6)); }
	inline bool get_followSkeletonFlip_6() const { return ___followSkeletonFlip_6; }
	inline bool* get_address_of_followSkeletonFlip_6() { return &___followSkeletonFlip_6; }
	inline void set_followSkeletonFlip_6(bool value)
	{
		___followSkeletonFlip_6 = value;
	}

	inline static int32_t get_offset_of_initializeOnAwake_7() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___initializeOnAwake_7)); }
	inline bool get_initializeOnAwake_7() const { return ___initializeOnAwake_7; }
	inline bool* get_address_of_initializeOnAwake_7() { return &___initializeOnAwake_7; }
	inline void set_initializeOnAwake_7(bool value)
	{
		___initializeOnAwake_7 = value;
	}

	inline static int32_t get_offset_of_valid_8() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___valid_8)); }
	inline bool get_valid_8() const { return ___valid_8; }
	inline bool* get_address_of_valid_8() { return &___valid_8; }
	inline void set_valid_8(bool value)
	{
		___valid_8 = value;
	}

	inline static int32_t get_offset_of_bone_9() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___bone_9)); }
	inline Bone_t1650489600 * get_bone_9() const { return ___bone_9; }
	inline Bone_t1650489600 ** get_address_of_bone_9() { return &___bone_9; }
	inline void set_bone_9(Bone_t1650489600 * value)
	{
		___bone_9 = value;
		Il2CppCodeGenWriteBarrier(&___bone_9, value);
	}

	inline static int32_t get_offset_of_skeletonTransform_10() { return static_cast<int32_t>(offsetof(BoneFollower_t1009853396, ___skeletonTransform_10)); }
	inline Transform_t1659122786 * get_skeletonTransform_10() const { return ___skeletonTransform_10; }
	inline Transform_t1659122786 ** get_address_of_skeletonTransform_10() { return &___skeletonTransform_10; }
	inline void set_skeletonTransform_10(Transform_t1659122786 * value)
	{
		___skeletonTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonTransform_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
