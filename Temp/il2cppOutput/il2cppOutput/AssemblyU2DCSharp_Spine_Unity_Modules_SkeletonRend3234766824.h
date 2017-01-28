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
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;
// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonPartsRenderer>
struct List_1_t735126156;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t1322387783;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonRenderSeparator
struct  SkeletonRenderSeparator_t3234766824  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonRenderer Spine.Unity.Modules.SkeletonRenderSeparator::skeletonRenderer
	SkeletonRenderer_t3766155010 * ___skeletonRenderer_3;
	// UnityEngine.MeshRenderer Spine.Unity.Modules.SkeletonRenderSeparator::mainMeshRenderer
	MeshRenderer_t2804666580 * ___mainMeshRenderer_4;
	// System.Boolean Spine.Unity.Modules.SkeletonRenderSeparator::copyPropertyBlock
	bool ___copyPropertyBlock_5;
	// System.Boolean Spine.Unity.Modules.SkeletonRenderSeparator::copyMeshRendererFlags
	bool ___copyMeshRendererFlags_6;
	// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonPartsRenderer> Spine.Unity.Modules.SkeletonRenderSeparator::partsRenderers
	List_1_t735126156 * ___partsRenderers_7;
	// UnityEngine.MaterialPropertyBlock Spine.Unity.Modules.SkeletonRenderSeparator::copiedBlock
	MaterialPropertyBlock_t1322387783 * ___copiedBlock_8;

public:
	inline static int32_t get_offset_of_skeletonRenderer_3() { return static_cast<int32_t>(offsetof(SkeletonRenderSeparator_t3234766824, ___skeletonRenderer_3)); }
	inline SkeletonRenderer_t3766155010 * get_skeletonRenderer_3() const { return ___skeletonRenderer_3; }
	inline SkeletonRenderer_t3766155010 ** get_address_of_skeletonRenderer_3() { return &___skeletonRenderer_3; }
	inline void set_skeletonRenderer_3(SkeletonRenderer_t3766155010 * value)
	{
		___skeletonRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_3, value);
	}

	inline static int32_t get_offset_of_mainMeshRenderer_4() { return static_cast<int32_t>(offsetof(SkeletonRenderSeparator_t3234766824, ___mainMeshRenderer_4)); }
	inline MeshRenderer_t2804666580 * get_mainMeshRenderer_4() const { return ___mainMeshRenderer_4; }
	inline MeshRenderer_t2804666580 ** get_address_of_mainMeshRenderer_4() { return &___mainMeshRenderer_4; }
	inline void set_mainMeshRenderer_4(MeshRenderer_t2804666580 * value)
	{
		___mainMeshRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainMeshRenderer_4, value);
	}

	inline static int32_t get_offset_of_copyPropertyBlock_5() { return static_cast<int32_t>(offsetof(SkeletonRenderSeparator_t3234766824, ___copyPropertyBlock_5)); }
	inline bool get_copyPropertyBlock_5() const { return ___copyPropertyBlock_5; }
	inline bool* get_address_of_copyPropertyBlock_5() { return &___copyPropertyBlock_5; }
	inline void set_copyPropertyBlock_5(bool value)
	{
		___copyPropertyBlock_5 = value;
	}

	inline static int32_t get_offset_of_copyMeshRendererFlags_6() { return static_cast<int32_t>(offsetof(SkeletonRenderSeparator_t3234766824, ___copyMeshRendererFlags_6)); }
	inline bool get_copyMeshRendererFlags_6() const { return ___copyMeshRendererFlags_6; }
	inline bool* get_address_of_copyMeshRendererFlags_6() { return &___copyMeshRendererFlags_6; }
	inline void set_copyMeshRendererFlags_6(bool value)
	{
		___copyMeshRendererFlags_6 = value;
	}

	inline static int32_t get_offset_of_partsRenderers_7() { return static_cast<int32_t>(offsetof(SkeletonRenderSeparator_t3234766824, ___partsRenderers_7)); }
	inline List_1_t735126156 * get_partsRenderers_7() const { return ___partsRenderers_7; }
	inline List_1_t735126156 ** get_address_of_partsRenderers_7() { return &___partsRenderers_7; }
	inline void set_partsRenderers_7(List_1_t735126156 * value)
	{
		___partsRenderers_7 = value;
		Il2CppCodeGenWriteBarrier(&___partsRenderers_7, value);
	}

	inline static int32_t get_offset_of_copiedBlock_8() { return static_cast<int32_t>(offsetof(SkeletonRenderSeparator_t3234766824, ___copiedBlock_8)); }
	inline MaterialPropertyBlock_t1322387783 * get_copiedBlock_8() const { return ___copiedBlock_8; }
	inline MaterialPropertyBlock_t1322387783 ** get_address_of_copiedBlock_8() { return &___copiedBlock_8; }
	inline void set_copiedBlock_8(MaterialPropertyBlock_t1322387783 * value)
	{
		___copiedBlock_8 = value;
		Il2CppCodeGenWriteBarrier(&___copiedBlock_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
