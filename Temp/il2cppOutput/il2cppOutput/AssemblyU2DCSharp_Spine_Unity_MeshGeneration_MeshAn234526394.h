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
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.MeshAndMaterials
struct  MeshAndMaterials_t234526394 
{
public:
	// UnityEngine.Mesh Spine.Unity.MeshGeneration.MeshAndMaterials::mesh
	Mesh_t4241756145 * ___mesh_0;
	// UnityEngine.Material[] Spine.Unity.MeshGeneration.MeshAndMaterials::materials
	MaterialU5BU5D_t170856778* ___materials_1;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshAndMaterials_t234526394, ___mesh_0)); }
	inline Mesh_t4241756145 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t4241756145 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t4241756145 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_0, value);
	}

	inline static int32_t get_offset_of_materials_1() { return static_cast<int32_t>(offsetof(MeshAndMaterials_t234526394, ___materials_1)); }
	inline MaterialU5BU5D_t170856778* get_materials_1() const { return ___materials_1; }
	inline MaterialU5BU5D_t170856778** get_address_of_materials_1() { return &___materials_1; }
	inline void set_materials_1(MaterialU5BU5D_t170856778* value)
	{
		___materials_1 = value;
		Il2CppCodeGenWriteBarrier(&___materials_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Spine.Unity.MeshGeneration.MeshAndMaterials
struct MeshAndMaterials_t234526394_marshaled_pinvoke
{
	Mesh_t4241756145 * ___mesh_0;
	MaterialU5BU5D_t170856778* ___materials_1;
};
// Native definition for marshalling of: Spine.Unity.MeshGeneration.MeshAndMaterials
struct MeshAndMaterials_t234526394_marshaled_com
{
	Mesh_t4241756145 * ___mesh_0;
	MaterialU5BU5D_t170856778* ___materials_1;
};
