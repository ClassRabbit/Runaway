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
// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction
struct Instruction_t629699354;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonRenderer/SmartMesh
struct  SmartMesh_t2976236219  : public Il2CppObject
{
public:
	// UnityEngine.Mesh Spine.Unity.SkeletonRenderer/SmartMesh::mesh
	Mesh_t4241756145 * ___mesh_0;
	// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction Spine.Unity.SkeletonRenderer/SmartMesh::instructionUsed
	Instruction_t629699354 * ___instructionUsed_1;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(SmartMesh_t2976236219, ___mesh_0)); }
	inline Mesh_t4241756145 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t4241756145 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t4241756145 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_0, value);
	}

	inline static int32_t get_offset_of_instructionUsed_1() { return static_cast<int32_t>(offsetof(SmartMesh_t2976236219, ___instructionUsed_1)); }
	inline Instruction_t629699354 * get_instructionUsed_1() const { return ___instructionUsed_1; }
	inline Instruction_t629699354 ** get_address_of_instructionUsed_1() { return &___instructionUsed_1; }
	inline void set_instructionUsed_1(Instruction_t629699354 * value)
	{
		___instructionUsed_1 = value;
		Il2CppCodeGenWriteBarrier(&___instructionUsed_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
