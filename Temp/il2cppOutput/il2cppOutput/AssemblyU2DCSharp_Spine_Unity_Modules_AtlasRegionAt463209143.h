#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.AtlasAsset
struct AtlasAsset_t1266833143;
// Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair[]
struct SlotRegionPairU5BU5D_t504631864;
// Spine.Atlas
struct Atlas_t361685585;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.AtlasRegionAttacher
struct  AtlasRegionAttacher_t463209143  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.AtlasAsset Spine.Unity.Modules.AtlasRegionAttacher::atlasAsset
	AtlasAsset_t1266833143 * ___atlasAsset_2;
	// Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair[] Spine.Unity.Modules.AtlasRegionAttacher::attachments
	SlotRegionPairU5BU5D_t504631864* ___attachments_3;
	// Spine.Atlas Spine.Unity.Modules.AtlasRegionAttacher::atlas
	Atlas_t361685585 * ___atlas_4;

public:
	inline static int32_t get_offset_of_atlasAsset_2() { return static_cast<int32_t>(offsetof(AtlasRegionAttacher_t463209143, ___atlasAsset_2)); }
	inline AtlasAsset_t1266833143 * get_atlasAsset_2() const { return ___atlasAsset_2; }
	inline AtlasAsset_t1266833143 ** get_address_of_atlasAsset_2() { return &___atlasAsset_2; }
	inline void set_atlasAsset_2(AtlasAsset_t1266833143 * value)
	{
		___atlasAsset_2 = value;
		Il2CppCodeGenWriteBarrier(&___atlasAsset_2, value);
	}

	inline static int32_t get_offset_of_attachments_3() { return static_cast<int32_t>(offsetof(AtlasRegionAttacher_t463209143, ___attachments_3)); }
	inline SlotRegionPairU5BU5D_t504631864* get_attachments_3() const { return ___attachments_3; }
	inline SlotRegionPairU5BU5D_t504631864** get_address_of_attachments_3() { return &___attachments_3; }
	inline void set_attachments_3(SlotRegionPairU5BU5D_t504631864* value)
	{
		___attachments_3 = value;
		Il2CppCodeGenWriteBarrier(&___attachments_3, value);
	}

	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(AtlasRegionAttacher_t463209143, ___atlas_4)); }
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
