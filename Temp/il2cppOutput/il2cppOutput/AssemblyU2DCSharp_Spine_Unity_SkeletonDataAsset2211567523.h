#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.AtlasAsset[]
struct AtlasAssetU5BU5D_t79606606;
// UnityEngine.TextAsset
struct TextAsset_t3836129977;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t274649809;
// Spine.SkeletonData
struct SkeletonData_t3387199699;
// Spine.AnimationStateData
struct AnimationStateData_t250640307;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonDataAsset
struct  SkeletonDataAsset_t2211567523  : public ScriptableObject_t2970544072
{
public:
	// Spine.Unity.AtlasAsset[] Spine.Unity.SkeletonDataAsset::atlasAssets
	AtlasAssetU5BU5D_t79606606* ___atlasAssets_2;
	// System.Single Spine.Unity.SkeletonDataAsset::scale
	float ___scale_3;
	// UnityEngine.TextAsset Spine.Unity.SkeletonDataAsset::skeletonJSON
	TextAsset_t3836129977 * ___skeletonJSON_4;
	// System.String[] Spine.Unity.SkeletonDataAsset::fromAnimation
	StringU5BU5D_t4054002952* ___fromAnimation_5;
	// System.String[] Spine.Unity.SkeletonDataAsset::toAnimation
	StringU5BU5D_t4054002952* ___toAnimation_6;
	// System.Single[] Spine.Unity.SkeletonDataAsset::duration
	SingleU5BU5D_t2316563989* ___duration_7;
	// System.Single Spine.Unity.SkeletonDataAsset::defaultMix
	float ___defaultMix_8;
	// UnityEngine.RuntimeAnimatorController Spine.Unity.SkeletonDataAsset::controller
	RuntimeAnimatorController_t274649809 * ___controller_9;
	// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::skeletonData
	SkeletonData_t3387199699 * ___skeletonData_10;
	// Spine.AnimationStateData Spine.Unity.SkeletonDataAsset::stateData
	AnimationStateData_t250640307 * ___stateData_11;

public:
	inline static int32_t get_offset_of_atlasAssets_2() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___atlasAssets_2)); }
	inline AtlasAssetU5BU5D_t79606606* get_atlasAssets_2() const { return ___atlasAssets_2; }
	inline AtlasAssetU5BU5D_t79606606** get_address_of_atlasAssets_2() { return &___atlasAssets_2; }
	inline void set_atlasAssets_2(AtlasAssetU5BU5D_t79606606* value)
	{
		___atlasAssets_2 = value;
		Il2CppCodeGenWriteBarrier(&___atlasAssets_2, value);
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___scale_3)); }
	inline float get_scale_3() const { return ___scale_3; }
	inline float* get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(float value)
	{
		___scale_3 = value;
	}

	inline static int32_t get_offset_of_skeletonJSON_4() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___skeletonJSON_4)); }
	inline TextAsset_t3836129977 * get_skeletonJSON_4() const { return ___skeletonJSON_4; }
	inline TextAsset_t3836129977 ** get_address_of_skeletonJSON_4() { return &___skeletonJSON_4; }
	inline void set_skeletonJSON_4(TextAsset_t3836129977 * value)
	{
		___skeletonJSON_4 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonJSON_4, value);
	}

	inline static int32_t get_offset_of_fromAnimation_5() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___fromAnimation_5)); }
	inline StringU5BU5D_t4054002952* get_fromAnimation_5() const { return ___fromAnimation_5; }
	inline StringU5BU5D_t4054002952** get_address_of_fromAnimation_5() { return &___fromAnimation_5; }
	inline void set_fromAnimation_5(StringU5BU5D_t4054002952* value)
	{
		___fromAnimation_5 = value;
		Il2CppCodeGenWriteBarrier(&___fromAnimation_5, value);
	}

	inline static int32_t get_offset_of_toAnimation_6() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___toAnimation_6)); }
	inline StringU5BU5D_t4054002952* get_toAnimation_6() const { return ___toAnimation_6; }
	inline StringU5BU5D_t4054002952** get_address_of_toAnimation_6() { return &___toAnimation_6; }
	inline void set_toAnimation_6(StringU5BU5D_t4054002952* value)
	{
		___toAnimation_6 = value;
		Il2CppCodeGenWriteBarrier(&___toAnimation_6, value);
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___duration_7)); }
	inline SingleU5BU5D_t2316563989* get_duration_7() const { return ___duration_7; }
	inline SingleU5BU5D_t2316563989** get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(SingleU5BU5D_t2316563989* value)
	{
		___duration_7 = value;
		Il2CppCodeGenWriteBarrier(&___duration_7, value);
	}

	inline static int32_t get_offset_of_defaultMix_8() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___defaultMix_8)); }
	inline float get_defaultMix_8() const { return ___defaultMix_8; }
	inline float* get_address_of_defaultMix_8() { return &___defaultMix_8; }
	inline void set_defaultMix_8(float value)
	{
		___defaultMix_8 = value;
	}

	inline static int32_t get_offset_of_controller_9() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___controller_9)); }
	inline RuntimeAnimatorController_t274649809 * get_controller_9() const { return ___controller_9; }
	inline RuntimeAnimatorController_t274649809 ** get_address_of_controller_9() { return &___controller_9; }
	inline void set_controller_9(RuntimeAnimatorController_t274649809 * value)
	{
		___controller_9 = value;
		Il2CppCodeGenWriteBarrier(&___controller_9, value);
	}

	inline static int32_t get_offset_of_skeletonData_10() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___skeletonData_10)); }
	inline SkeletonData_t3387199699 * get_skeletonData_10() const { return ___skeletonData_10; }
	inline SkeletonData_t3387199699 ** get_address_of_skeletonData_10() { return &___skeletonData_10; }
	inline void set_skeletonData_10(SkeletonData_t3387199699 * value)
	{
		___skeletonData_10 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonData_10, value);
	}

	inline static int32_t get_offset_of_stateData_11() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_t2211567523, ___stateData_11)); }
	inline AnimationStateData_t250640307 * get_stateData_11() const { return ___stateData_11; }
	inline AnimationStateData_t250640307 ** get_address_of_stateData_11() { return &___stateData_11; }
	inline void set_stateData_11(AnimationStateData_t250640307 * value)
	{
		___stateData_11 = value;
		Il2CppCodeGenWriteBarrier(&___stateData_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
