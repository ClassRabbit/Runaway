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
// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride>
struct List_1_t3109896976;
// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride>
struct List_1_t3740439903;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonRendererCustomMaterials
struct  SkeletonRendererCustomMaterials_t2297186929  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonRenderer Spine.Unity.Modules.SkeletonRendererCustomMaterials::skeletonRenderer
	SkeletonRenderer_t3766155010 * ___skeletonRenderer_2;
	// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride> Spine.Unity.Modules.SkeletonRendererCustomMaterials::customSlotMaterials
	List_1_t3109896976 * ___customSlotMaterials_3;
	// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride> Spine.Unity.Modules.SkeletonRendererCustomMaterials::customMaterialOverrides
	List_1_t3740439903 * ___customMaterialOverrides_4;

public:
	inline static int32_t get_offset_of_skeletonRenderer_2() { return static_cast<int32_t>(offsetof(SkeletonRendererCustomMaterials_t2297186929, ___skeletonRenderer_2)); }
	inline SkeletonRenderer_t3766155010 * get_skeletonRenderer_2() const { return ___skeletonRenderer_2; }
	inline SkeletonRenderer_t3766155010 ** get_address_of_skeletonRenderer_2() { return &___skeletonRenderer_2; }
	inline void set_skeletonRenderer_2(SkeletonRenderer_t3766155010 * value)
	{
		___skeletonRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_2, value);
	}

	inline static int32_t get_offset_of_customSlotMaterials_3() { return static_cast<int32_t>(offsetof(SkeletonRendererCustomMaterials_t2297186929, ___customSlotMaterials_3)); }
	inline List_1_t3109896976 * get_customSlotMaterials_3() const { return ___customSlotMaterials_3; }
	inline List_1_t3109896976 ** get_address_of_customSlotMaterials_3() { return &___customSlotMaterials_3; }
	inline void set_customSlotMaterials_3(List_1_t3109896976 * value)
	{
		___customSlotMaterials_3 = value;
		Il2CppCodeGenWriteBarrier(&___customSlotMaterials_3, value);
	}

	inline static int32_t get_offset_of_customMaterialOverrides_4() { return static_cast<int32_t>(offsetof(SkeletonRendererCustomMaterials_t2297186929, ___customMaterialOverrides_4)); }
	inline List_1_t3740439903 * get_customMaterialOverrides_4() const { return ___customMaterialOverrides_4; }
	inline List_1_t3740439903 ** get_address_of_customMaterialOverrides_4() { return &___customMaterialOverrides_4; }
	inline void set_customMaterialOverrides_4(List_1_t3740439903 * value)
	{
		___customMaterialOverrides_4 = value;
		Il2CppCodeGenWriteBarrier(&___customMaterialOverrides_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
