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
// Spine.Unity.Modules.CustomSkin/SkinPair[]
struct SkinPairU5BU5D_t2030596320;
// Spine.Skin
struct Skin_t1650992057;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.CustomSkin
struct  CustomSkin_t3376942026  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonDataAsset Spine.Unity.Modules.CustomSkin::skinSource
	SkeletonDataAsset_t2211567523 * ___skinSource_2;
	// Spine.Unity.Modules.CustomSkin/SkinPair[] Spine.Unity.Modules.CustomSkin::skinItems
	SkinPairU5BU5D_t2030596320* ___skinItems_3;
	// Spine.Skin Spine.Unity.Modules.CustomSkin::customSkin
	Skin_t1650992057 * ___customSkin_4;
	// Spine.Unity.SkeletonRenderer Spine.Unity.Modules.CustomSkin::skeletonRenderer
	SkeletonRenderer_t3766155010 * ___skeletonRenderer_5;

public:
	inline static int32_t get_offset_of_skinSource_2() { return static_cast<int32_t>(offsetof(CustomSkin_t3376942026, ___skinSource_2)); }
	inline SkeletonDataAsset_t2211567523 * get_skinSource_2() const { return ___skinSource_2; }
	inline SkeletonDataAsset_t2211567523 ** get_address_of_skinSource_2() { return &___skinSource_2; }
	inline void set_skinSource_2(SkeletonDataAsset_t2211567523 * value)
	{
		___skinSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___skinSource_2, value);
	}

	inline static int32_t get_offset_of_skinItems_3() { return static_cast<int32_t>(offsetof(CustomSkin_t3376942026, ___skinItems_3)); }
	inline SkinPairU5BU5D_t2030596320* get_skinItems_3() const { return ___skinItems_3; }
	inline SkinPairU5BU5D_t2030596320** get_address_of_skinItems_3() { return &___skinItems_3; }
	inline void set_skinItems_3(SkinPairU5BU5D_t2030596320* value)
	{
		___skinItems_3 = value;
		Il2CppCodeGenWriteBarrier(&___skinItems_3, value);
	}

	inline static int32_t get_offset_of_customSkin_4() { return static_cast<int32_t>(offsetof(CustomSkin_t3376942026, ___customSkin_4)); }
	inline Skin_t1650992057 * get_customSkin_4() const { return ___customSkin_4; }
	inline Skin_t1650992057 ** get_address_of_customSkin_4() { return &___customSkin_4; }
	inline void set_customSkin_4(Skin_t1650992057 * value)
	{
		___customSkin_4 = value;
		Il2CppCodeGenWriteBarrier(&___customSkin_4, value);
	}

	inline static int32_t get_offset_of_skeletonRenderer_5() { return static_cast<int32_t>(offsetof(CustomSkin_t3376942026, ___skeletonRenderer_5)); }
	inline SkeletonRenderer_t3766155010 * get_skeletonRenderer_5() const { return ___skeletonRenderer_5; }
	inline SkeletonRenderer_t3766155010 ** get_address_of_skeletonRenderer_5() { return &___skeletonRenderer_5; }
	inline void set_skeletonRenderer_5(SkeletonRenderer_t3766155010 * value)
	{
		___skeletonRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
