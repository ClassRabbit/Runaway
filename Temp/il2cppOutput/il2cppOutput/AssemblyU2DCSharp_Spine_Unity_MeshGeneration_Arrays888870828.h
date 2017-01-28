#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t3019178762;
// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh>
struct DoubleBuffered_1_t1741035424;
// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction
struct SubmeshedMeshInstruction_t1095166029;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer>
struct ExposedList_1_t1435450047;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;

#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Array2793983610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator
struct  ArraysSubmeshedMeshGenerator_t888870828  : public ArraysMeshGenerator_t2793983610
{
public:
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::separators
	List_1_t3019178762 * ___separators_10;
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::doubleBufferedSmartMesh
	DoubleBuffered_1_t1741035424 * ___doubleBufferedSmartMesh_11;
	// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::currentInstructions
	SubmeshedMeshInstruction_t1095166029 * ___currentInstructions_12;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::submeshBuffers
	ExposedList_1_t1435450047 * ___submeshBuffers_13;
	// UnityEngine.Material[] Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::sharedMaterials
	MaterialU5BU5D_t170856778* ___sharedMaterials_14;
	// System.Single Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::<ZSpacing>k__BackingField
	float ___U3CZSpacingU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_separators_10() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t888870828, ___separators_10)); }
	inline List_1_t3019178762 * get_separators_10() const { return ___separators_10; }
	inline List_1_t3019178762 ** get_address_of_separators_10() { return &___separators_10; }
	inline void set_separators_10(List_1_t3019178762 * value)
	{
		___separators_10 = value;
		Il2CppCodeGenWriteBarrier(&___separators_10, value);
	}

	inline static int32_t get_offset_of_doubleBufferedSmartMesh_11() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t888870828, ___doubleBufferedSmartMesh_11)); }
	inline DoubleBuffered_1_t1741035424 * get_doubleBufferedSmartMesh_11() const { return ___doubleBufferedSmartMesh_11; }
	inline DoubleBuffered_1_t1741035424 ** get_address_of_doubleBufferedSmartMesh_11() { return &___doubleBufferedSmartMesh_11; }
	inline void set_doubleBufferedSmartMesh_11(DoubleBuffered_1_t1741035424 * value)
	{
		___doubleBufferedSmartMesh_11 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedSmartMesh_11, value);
	}

	inline static int32_t get_offset_of_currentInstructions_12() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t888870828, ___currentInstructions_12)); }
	inline SubmeshedMeshInstruction_t1095166029 * get_currentInstructions_12() const { return ___currentInstructions_12; }
	inline SubmeshedMeshInstruction_t1095166029 ** get_address_of_currentInstructions_12() { return &___currentInstructions_12; }
	inline void set_currentInstructions_12(SubmeshedMeshInstruction_t1095166029 * value)
	{
		___currentInstructions_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstructions_12, value);
	}

	inline static int32_t get_offset_of_submeshBuffers_13() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t888870828, ___submeshBuffers_13)); }
	inline ExposedList_1_t1435450047 * get_submeshBuffers_13() const { return ___submeshBuffers_13; }
	inline ExposedList_1_t1435450047 ** get_address_of_submeshBuffers_13() { return &___submeshBuffers_13; }
	inline void set_submeshBuffers_13(ExposedList_1_t1435450047 * value)
	{
		___submeshBuffers_13 = value;
		Il2CppCodeGenWriteBarrier(&___submeshBuffers_13, value);
	}

	inline static int32_t get_offset_of_sharedMaterials_14() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t888870828, ___sharedMaterials_14)); }
	inline MaterialU5BU5D_t170856778* get_sharedMaterials_14() const { return ___sharedMaterials_14; }
	inline MaterialU5BU5D_t170856778** get_address_of_sharedMaterials_14() { return &___sharedMaterials_14; }
	inline void set_sharedMaterials_14(MaterialU5BU5D_t170856778* value)
	{
		___sharedMaterials_14 = value;
		Il2CppCodeGenWriteBarrier(&___sharedMaterials_14, value);
	}

	inline static int32_t get_offset_of_U3CZSpacingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t888870828, ___U3CZSpacingU3Ek__BackingField_15)); }
	inline float get_U3CZSpacingU3Ek__BackingField_15() const { return ___U3CZSpacingU3Ek__BackingField_15; }
	inline float* get_address_of_U3CZSpacingU3Ek__BackingField_15() { return &___U3CZSpacingU3Ek__BackingField_15; }
	inline void set_U3CZSpacingU3Ek__BackingField_15(float value)
	{
		___U3CZSpacingU3Ek__BackingField_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
