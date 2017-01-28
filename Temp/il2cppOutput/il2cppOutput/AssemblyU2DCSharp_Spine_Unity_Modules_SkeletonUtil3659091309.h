#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonUtilitySubmeshRenderer
struct  SkeletonUtilitySubmeshRenderer_t3659091309  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Mesh Spine.Unity.Modules.SkeletonUtilitySubmeshRenderer::mesh
	Mesh_t4241756145 * ___mesh_2;
	// System.Int32 Spine.Unity.Modules.SkeletonUtilitySubmeshRenderer::submeshIndex
	int32_t ___submeshIndex_3;
	// UnityEngine.Material Spine.Unity.Modules.SkeletonUtilitySubmeshRenderer::hiddenPassMaterial
	Material_t3870600107 * ___hiddenPassMaterial_4;
	// UnityEngine.Renderer Spine.Unity.Modules.SkeletonUtilitySubmeshRenderer::cachedRenderer
	Renderer_t3076687687 * ___cachedRenderer_5;
	// UnityEngine.MeshFilter Spine.Unity.Modules.SkeletonUtilitySubmeshRenderer::filter
	MeshFilter_t3839065225 * ___filter_6;
	// UnityEngine.Material[] Spine.Unity.Modules.SkeletonUtilitySubmeshRenderer::sharedMaterials
	MaterialU5BU5D_t170856778* ___sharedMaterials_7;

public:
	inline static int32_t get_offset_of_mesh_2() { return static_cast<int32_t>(offsetof(SkeletonUtilitySubmeshRenderer_t3659091309, ___mesh_2)); }
	inline Mesh_t4241756145 * get_mesh_2() const { return ___mesh_2; }
	inline Mesh_t4241756145 ** get_address_of_mesh_2() { return &___mesh_2; }
	inline void set_mesh_2(Mesh_t4241756145 * value)
	{
		___mesh_2 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_2, value);
	}

	inline static int32_t get_offset_of_submeshIndex_3() { return static_cast<int32_t>(offsetof(SkeletonUtilitySubmeshRenderer_t3659091309, ___submeshIndex_3)); }
	inline int32_t get_submeshIndex_3() const { return ___submeshIndex_3; }
	inline int32_t* get_address_of_submeshIndex_3() { return &___submeshIndex_3; }
	inline void set_submeshIndex_3(int32_t value)
	{
		___submeshIndex_3 = value;
	}

	inline static int32_t get_offset_of_hiddenPassMaterial_4() { return static_cast<int32_t>(offsetof(SkeletonUtilitySubmeshRenderer_t3659091309, ___hiddenPassMaterial_4)); }
	inline Material_t3870600107 * get_hiddenPassMaterial_4() const { return ___hiddenPassMaterial_4; }
	inline Material_t3870600107 ** get_address_of_hiddenPassMaterial_4() { return &___hiddenPassMaterial_4; }
	inline void set_hiddenPassMaterial_4(Material_t3870600107 * value)
	{
		___hiddenPassMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___hiddenPassMaterial_4, value);
	}

	inline static int32_t get_offset_of_cachedRenderer_5() { return static_cast<int32_t>(offsetof(SkeletonUtilitySubmeshRenderer_t3659091309, ___cachedRenderer_5)); }
	inline Renderer_t3076687687 * get_cachedRenderer_5() const { return ___cachedRenderer_5; }
	inline Renderer_t3076687687 ** get_address_of_cachedRenderer_5() { return &___cachedRenderer_5; }
	inline void set_cachedRenderer_5(Renderer_t3076687687 * value)
	{
		___cachedRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRenderer_5, value);
	}

	inline static int32_t get_offset_of_filter_6() { return static_cast<int32_t>(offsetof(SkeletonUtilitySubmeshRenderer_t3659091309, ___filter_6)); }
	inline MeshFilter_t3839065225 * get_filter_6() const { return ___filter_6; }
	inline MeshFilter_t3839065225 ** get_address_of_filter_6() { return &___filter_6; }
	inline void set_filter_6(MeshFilter_t3839065225 * value)
	{
		___filter_6 = value;
		Il2CppCodeGenWriteBarrier(&___filter_6, value);
	}

	inline static int32_t get_offset_of_sharedMaterials_7() { return static_cast<int32_t>(offsetof(SkeletonUtilitySubmeshRenderer_t3659091309, ___sharedMaterials_7)); }
	inline MaterialU5BU5D_t170856778* get_sharedMaterials_7() const { return ___sharedMaterials_7; }
	inline MaterialU5BU5D_t170856778** get_address_of_sharedMaterials_7() { return &___sharedMaterials_7; }
	inline void set_sharedMaterials_7(MaterialU5BU5D_t170856778* value)
	{
		___sharedMaterials_7 = value;
		Il2CppCodeGenWriteBarrier(&___sharedMaterials_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
