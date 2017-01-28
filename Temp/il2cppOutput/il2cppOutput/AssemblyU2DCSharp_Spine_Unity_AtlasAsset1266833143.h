#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t3836129977;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;
// Spine.Atlas
struct Atlas_t361685585;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.AtlasAsset
struct  AtlasAsset_t1266833143  : public ScriptableObject_t2970544072
{
public:
	// UnityEngine.TextAsset Spine.Unity.AtlasAsset::atlasFile
	TextAsset_t3836129977 * ___atlasFile_2;
	// UnityEngine.Material[] Spine.Unity.AtlasAsset::materials
	MaterialU5BU5D_t170856778* ___materials_3;
	// Spine.Atlas Spine.Unity.AtlasAsset::atlas
	Atlas_t361685585 * ___atlas_4;

public:
	inline static int32_t get_offset_of_atlasFile_2() { return static_cast<int32_t>(offsetof(AtlasAsset_t1266833143, ___atlasFile_2)); }
	inline TextAsset_t3836129977 * get_atlasFile_2() const { return ___atlasFile_2; }
	inline TextAsset_t3836129977 ** get_address_of_atlasFile_2() { return &___atlasFile_2; }
	inline void set_atlasFile_2(TextAsset_t3836129977 * value)
	{
		___atlasFile_2 = value;
		Il2CppCodeGenWriteBarrier(&___atlasFile_2, value);
	}

	inline static int32_t get_offset_of_materials_3() { return static_cast<int32_t>(offsetof(AtlasAsset_t1266833143, ___materials_3)); }
	inline MaterialU5BU5D_t170856778* get_materials_3() const { return ___materials_3; }
	inline MaterialU5BU5D_t170856778** get_address_of_materials_3() { return &___materials_3; }
	inline void set_materials_3(MaterialU5BU5D_t170856778* value)
	{
		___materials_3 = value;
		Il2CppCodeGenWriteBarrier(&___materials_3, value);
	}

	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(AtlasAsset_t1266833143, ___atlas_4)); }
	inline Atlas_t361685585 * get_atlas_4() const { return ___atlas_4; }
	inline Atlas_t361685585 ** get_address_of_atlas_4() { return &___atlas_4; }
	inline void set_atlas_4(Atlas_t361685585 * value)
	{
		___atlas_4 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
