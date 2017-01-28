#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator/SmartMesh>
struct DoubleBuffered_1_t834133753;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t723286955;
// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_t4224666065;
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

// Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator
struct  ArraysSubmeshSetMeshGenerator_t2045020741  : public ArraysMeshGenerator_t2793983610
{
public:
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator/SmartMesh> Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::doubleBufferedSmartMesh
	DoubleBuffered_1_t834133753 * ___doubleBufferedSmartMesh_10;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction> Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::currentInstructions
	ExposedList_1_t723286955 * ___currentInstructions_11;
	// Spine.ExposedList`1<Spine.Attachment> Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::attachmentBuffer
	ExposedList_1_t4224666065 * ___attachmentBuffer_12;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer> Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::submeshBuffers
	ExposedList_1_t1435450047 * ___submeshBuffers_13;
	// UnityEngine.Material[] Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::sharedMaterials
	MaterialU5BU5D_t170856778* ___sharedMaterials_14;
	// System.Single Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::<ZSpacing>k__BackingField
	float ___U3CZSpacingU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_doubleBufferedSmartMesh_10() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t2045020741, ___doubleBufferedSmartMesh_10)); }
	inline DoubleBuffered_1_t834133753 * get_doubleBufferedSmartMesh_10() const { return ___doubleBufferedSmartMesh_10; }
	inline DoubleBuffered_1_t834133753 ** get_address_of_doubleBufferedSmartMesh_10() { return &___doubleBufferedSmartMesh_10; }
	inline void set_doubleBufferedSmartMesh_10(DoubleBuffered_1_t834133753 * value)
	{
		___doubleBufferedSmartMesh_10 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedSmartMesh_10, value);
	}

	inline static int32_t get_offset_of_currentInstructions_11() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t2045020741, ___currentInstructions_11)); }
	inline ExposedList_1_t723286955 * get_currentInstructions_11() const { return ___currentInstructions_11; }
	inline ExposedList_1_t723286955 ** get_address_of_currentInstructions_11() { return &___currentInstructions_11; }
	inline void set_currentInstructions_11(ExposedList_1_t723286955 * value)
	{
		___currentInstructions_11 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstructions_11, value);
	}

	inline static int32_t get_offset_of_attachmentBuffer_12() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t2045020741, ___attachmentBuffer_12)); }
	inline ExposedList_1_t4224666065 * get_attachmentBuffer_12() const { return ___attachmentBuffer_12; }
	inline ExposedList_1_t4224666065 ** get_address_of_attachmentBuffer_12() { return &___attachmentBuffer_12; }
	inline void set_attachmentBuffer_12(ExposedList_1_t4224666065 * value)
	{
		___attachmentBuffer_12 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentBuffer_12, value);
	}

	inline static int32_t get_offset_of_submeshBuffers_13() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t2045020741, ___submeshBuffers_13)); }
	inline ExposedList_1_t1435450047 * get_submeshBuffers_13() const { return ___submeshBuffers_13; }
	inline ExposedList_1_t1435450047 ** get_address_of_submeshBuffers_13() { return &___submeshBuffers_13; }
	inline void set_submeshBuffers_13(ExposedList_1_t1435450047 * value)
	{
		___submeshBuffers_13 = value;
		Il2CppCodeGenWriteBarrier(&___submeshBuffers_13, value);
	}

	inline static int32_t get_offset_of_sharedMaterials_14() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t2045020741, ___sharedMaterials_14)); }
	inline MaterialU5BU5D_t170856778* get_sharedMaterials_14() const { return ___sharedMaterials_14; }
	inline MaterialU5BU5D_t170856778** get_address_of_sharedMaterials_14() { return &___sharedMaterials_14; }
	inline void set_sharedMaterials_14(MaterialU5BU5D_t170856778* value)
	{
		___sharedMaterials_14 = value;
		Il2CppCodeGenWriteBarrier(&___sharedMaterials_14, value);
	}

	inline static int32_t get_offset_of_U3CZSpacingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t2045020741, ___U3CZSpacingU3Ek__BackingField_15)); }
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
