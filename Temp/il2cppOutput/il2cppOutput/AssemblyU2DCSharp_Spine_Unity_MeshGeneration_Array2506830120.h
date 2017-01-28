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
// Spine.Unity.DoubleBufferedMesh
struct DoubleBufferedMesh_t286773167;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Array2793983610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator
struct  ArraysSimpleMeshGenerator_t2506830120  : public ArraysMeshGenerator_t2793983610
{
public:
	// System.Single Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::scale
	float ___scale_10;
	// UnityEngine.Mesh Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::lastGeneratedMesh
	Mesh_t4241756145 * ___lastGeneratedMesh_11;
	// Spine.Unity.DoubleBufferedMesh Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::doubleBufferedMesh
	DoubleBufferedMesh_t286773167 * ___doubleBufferedMesh_12;
	// System.Int32[] Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::triangles
	Int32U5BU5D_t3230847821* ___triangles_13;
	// System.Single Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::<ZSpacing>k__BackingField
	float ___U3CZSpacingU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_scale_10() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t2506830120, ___scale_10)); }
	inline float get_scale_10() const { return ___scale_10; }
	inline float* get_address_of_scale_10() { return &___scale_10; }
	inline void set_scale_10(float value)
	{
		___scale_10 = value;
	}

	inline static int32_t get_offset_of_lastGeneratedMesh_11() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t2506830120, ___lastGeneratedMesh_11)); }
	inline Mesh_t4241756145 * get_lastGeneratedMesh_11() const { return ___lastGeneratedMesh_11; }
	inline Mesh_t4241756145 ** get_address_of_lastGeneratedMesh_11() { return &___lastGeneratedMesh_11; }
	inline void set_lastGeneratedMesh_11(Mesh_t4241756145 * value)
	{
		___lastGeneratedMesh_11 = value;
		Il2CppCodeGenWriteBarrier(&___lastGeneratedMesh_11, value);
	}

	inline static int32_t get_offset_of_doubleBufferedMesh_12() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t2506830120, ___doubleBufferedMesh_12)); }
	inline DoubleBufferedMesh_t286773167 * get_doubleBufferedMesh_12() const { return ___doubleBufferedMesh_12; }
	inline DoubleBufferedMesh_t286773167 ** get_address_of_doubleBufferedMesh_12() { return &___doubleBufferedMesh_12; }
	inline void set_doubleBufferedMesh_12(DoubleBufferedMesh_t286773167 * value)
	{
		___doubleBufferedMesh_12 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedMesh_12, value);
	}

	inline static int32_t get_offset_of_triangles_13() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t2506830120, ___triangles_13)); }
	inline Int32U5BU5D_t3230847821* get_triangles_13() const { return ___triangles_13; }
	inline Int32U5BU5D_t3230847821** get_address_of_triangles_13() { return &___triangles_13; }
	inline void set_triangles_13(Int32U5BU5D_t3230847821* value)
	{
		___triangles_13 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_13, value);
	}

	inline static int32_t get_offset_of_U3CZSpacingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t2506830120, ___U3CZSpacingU3Ek__BackingField_14)); }
	inline float get_U3CZSpacingU3Ek__BackingField_14() const { return ___U3CZSpacingU3Ek__BackingField_14; }
	inline float* get_address_of_U3CZSpacingU3Ek__BackingField_14() { return &___U3CZSpacingU3Ek__BackingField_14; }
	inline void set_U3CZSpacingU3Ek__BackingField_14(float value)
	{
		___U3CZSpacingU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
