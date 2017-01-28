#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t1530399696;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t2211567523;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t3019178762;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t807872303;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t3744150404;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.Unity.DoubleBuffered`1<Spine.Unity.SkeletonRenderer/SmartMesh>
struct DoubleBuffered_1_t2301498939;
// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction
struct Instruction_t629699354;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer>
struct ExposedList_1_t1435450047;
// Spine.ExposedList`1<UnityEngine.Material>
struct ExposedList_1_t950565469;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t1629107544;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonRenderer
struct  SkeletonRenderer_t3766155010  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnRebuild
	SkeletonRendererDelegate_t1530399696 * ___OnRebuild_2;
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::skeletonDataAsset
	SkeletonDataAsset_t2211567523 * ___skeletonDataAsset_3;
	// System.String Spine.Unity.SkeletonRenderer::initialSkinName
	String_t* ___initialSkinName_4;
	// System.String[] Spine.Unity.SkeletonRenderer::separatorSlotNames
	StringU5BU5D_t4054002952* ___separatorSlotNames_5;
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.SkeletonRenderer::separatorSlots
	List_1_t3019178762 * ___separatorSlots_6;
	// System.Single Spine.Unity.SkeletonRenderer::zSpacing
	float ___zSpacing_7;
	// System.Boolean Spine.Unity.SkeletonRenderer::renderMeshes
	bool ___renderMeshes_8;
	// System.Boolean Spine.Unity.SkeletonRenderer::immutableTriangles
	bool ___immutableTriangles_9;
	// System.Boolean Spine.Unity.SkeletonRenderer::pmaVertexColors
	bool ___pmaVertexColors_10;
	// System.Boolean Spine.Unity.SkeletonRenderer::calculateNormals
	bool ___calculateNormals_11;
	// System.Boolean Spine.Unity.SkeletonRenderer::calculateTangents
	bool ___calculateTangents_12;
	// System.Boolean Spine.Unity.SkeletonRenderer::logErrors
	bool ___logErrors_13;
	// System.Boolean Spine.Unity.SkeletonRenderer::disableRenderingOnOverride
	bool ___disableRenderingOnOverride_14;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customMaterialOverride
	Dictionary_2_t807872303 * ___customMaterialOverride_15;
	// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customSlotMaterials
	Dictionary_2_t3744150404 * ___customSlotMaterials_16;
	// UnityEngine.MeshRenderer Spine.Unity.SkeletonRenderer::meshRenderer
	MeshRenderer_t2804666580 * ___meshRenderer_17;
	// UnityEngine.MeshFilter Spine.Unity.SkeletonRenderer::meshFilter
	MeshFilter_t3839065225 * ___meshFilter_18;
	// System.Boolean Spine.Unity.SkeletonRenderer::valid
	bool ___valid_19;
	// Spine.Skeleton Spine.Unity.SkeletonRenderer::skeleton
	Skeleton_t2209335561 * ___skeleton_20;
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.SkeletonRenderer/SmartMesh> Spine.Unity.SkeletonRenderer::doubleBufferedMesh
	DoubleBuffered_1_t2301498939 * ___doubleBufferedMesh_21;
	// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction Spine.Unity.SkeletonRenderer::currentInstructions
	Instruction_t629699354 * ___currentInstructions_22;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer> Spine.Unity.SkeletonRenderer::submeshes
	ExposedList_1_t1435450047 * ___submeshes_23;
	// Spine.ExposedList`1<UnityEngine.Material> Spine.Unity.SkeletonRenderer::submeshMaterials
	ExposedList_1_t950565469 * ___submeshMaterials_24;
	// UnityEngine.Material[] Spine.Unity.SkeletonRenderer::sharedMaterials
	MaterialU5BU5D_t170856778* ___sharedMaterials_25;
	// System.Single[] Spine.Unity.SkeletonRenderer::tempVertices
	SingleU5BU5D_t2316563989* ___tempVertices_26;
	// UnityEngine.Vector3[] Spine.Unity.SkeletonRenderer::vertices
	Vector3U5BU5D_t215400611* ___vertices_27;
	// UnityEngine.Color32[] Spine.Unity.SkeletonRenderer::colors
	Color32U5BU5D_t2960766953* ___colors_28;
	// UnityEngine.Vector2[] Spine.Unity.SkeletonRenderer::uvs
	Vector2U5BU5D_t4024180168* ___uvs_29;
	// UnityEngine.Vector3[] Spine.Unity.SkeletonRenderer::normals
	Vector3U5BU5D_t215400611* ___normals_30;
	// UnityEngine.Vector4[] Spine.Unity.SkeletonRenderer::tangents
	Vector4U5BU5D_t701588350* ___tangents_31;
	// UnityEngine.Vector2[] Spine.Unity.SkeletonRenderer::tempTanBuffer
	Vector2U5BU5D_t4024180168* ___tempTanBuffer_32;
	// Spine.Unity.SkeletonRenderer/InstructionDelegate Spine.Unity.SkeletonRenderer::generateMeshOverride
	InstructionDelegate_t1629107544 * ___generateMeshOverride_33;

public:
	inline static int32_t get_offset_of_OnRebuild_2() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___OnRebuild_2)); }
	inline SkeletonRendererDelegate_t1530399696 * get_OnRebuild_2() const { return ___OnRebuild_2; }
	inline SkeletonRendererDelegate_t1530399696 ** get_address_of_OnRebuild_2() { return &___OnRebuild_2; }
	inline void set_OnRebuild_2(SkeletonRendererDelegate_t1530399696 * value)
	{
		___OnRebuild_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnRebuild_2, value);
	}

	inline static int32_t get_offset_of_skeletonDataAsset_3() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___skeletonDataAsset_3)); }
	inline SkeletonDataAsset_t2211567523 * get_skeletonDataAsset_3() const { return ___skeletonDataAsset_3; }
	inline SkeletonDataAsset_t2211567523 ** get_address_of_skeletonDataAsset_3() { return &___skeletonDataAsset_3; }
	inline void set_skeletonDataAsset_3(SkeletonDataAsset_t2211567523 * value)
	{
		___skeletonDataAsset_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonDataAsset_3, value);
	}

	inline static int32_t get_offset_of_initialSkinName_4() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___initialSkinName_4)); }
	inline String_t* get_initialSkinName_4() const { return ___initialSkinName_4; }
	inline String_t** get_address_of_initialSkinName_4() { return &___initialSkinName_4; }
	inline void set_initialSkinName_4(String_t* value)
	{
		___initialSkinName_4 = value;
		Il2CppCodeGenWriteBarrier(&___initialSkinName_4, value);
	}

	inline static int32_t get_offset_of_separatorSlotNames_5() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___separatorSlotNames_5)); }
	inline StringU5BU5D_t4054002952* get_separatorSlotNames_5() const { return ___separatorSlotNames_5; }
	inline StringU5BU5D_t4054002952** get_address_of_separatorSlotNames_5() { return &___separatorSlotNames_5; }
	inline void set_separatorSlotNames_5(StringU5BU5D_t4054002952* value)
	{
		___separatorSlotNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___separatorSlotNames_5, value);
	}

	inline static int32_t get_offset_of_separatorSlots_6() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___separatorSlots_6)); }
	inline List_1_t3019178762 * get_separatorSlots_6() const { return ___separatorSlots_6; }
	inline List_1_t3019178762 ** get_address_of_separatorSlots_6() { return &___separatorSlots_6; }
	inline void set_separatorSlots_6(List_1_t3019178762 * value)
	{
		___separatorSlots_6 = value;
		Il2CppCodeGenWriteBarrier(&___separatorSlots_6, value);
	}

	inline static int32_t get_offset_of_zSpacing_7() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___zSpacing_7)); }
	inline float get_zSpacing_7() const { return ___zSpacing_7; }
	inline float* get_address_of_zSpacing_7() { return &___zSpacing_7; }
	inline void set_zSpacing_7(float value)
	{
		___zSpacing_7 = value;
	}

	inline static int32_t get_offset_of_renderMeshes_8() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___renderMeshes_8)); }
	inline bool get_renderMeshes_8() const { return ___renderMeshes_8; }
	inline bool* get_address_of_renderMeshes_8() { return &___renderMeshes_8; }
	inline void set_renderMeshes_8(bool value)
	{
		___renderMeshes_8 = value;
	}

	inline static int32_t get_offset_of_immutableTriangles_9() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___immutableTriangles_9)); }
	inline bool get_immutableTriangles_9() const { return ___immutableTriangles_9; }
	inline bool* get_address_of_immutableTriangles_9() { return &___immutableTriangles_9; }
	inline void set_immutableTriangles_9(bool value)
	{
		___immutableTriangles_9 = value;
	}

	inline static int32_t get_offset_of_pmaVertexColors_10() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___pmaVertexColors_10)); }
	inline bool get_pmaVertexColors_10() const { return ___pmaVertexColors_10; }
	inline bool* get_address_of_pmaVertexColors_10() { return &___pmaVertexColors_10; }
	inline void set_pmaVertexColors_10(bool value)
	{
		___pmaVertexColors_10 = value;
	}

	inline static int32_t get_offset_of_calculateNormals_11() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___calculateNormals_11)); }
	inline bool get_calculateNormals_11() const { return ___calculateNormals_11; }
	inline bool* get_address_of_calculateNormals_11() { return &___calculateNormals_11; }
	inline void set_calculateNormals_11(bool value)
	{
		___calculateNormals_11 = value;
	}

	inline static int32_t get_offset_of_calculateTangents_12() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___calculateTangents_12)); }
	inline bool get_calculateTangents_12() const { return ___calculateTangents_12; }
	inline bool* get_address_of_calculateTangents_12() { return &___calculateTangents_12; }
	inline void set_calculateTangents_12(bool value)
	{
		___calculateTangents_12 = value;
	}

	inline static int32_t get_offset_of_logErrors_13() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___logErrors_13)); }
	inline bool get_logErrors_13() const { return ___logErrors_13; }
	inline bool* get_address_of_logErrors_13() { return &___logErrors_13; }
	inline void set_logErrors_13(bool value)
	{
		___logErrors_13 = value;
	}

	inline static int32_t get_offset_of_disableRenderingOnOverride_14() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___disableRenderingOnOverride_14)); }
	inline bool get_disableRenderingOnOverride_14() const { return ___disableRenderingOnOverride_14; }
	inline bool* get_address_of_disableRenderingOnOverride_14() { return &___disableRenderingOnOverride_14; }
	inline void set_disableRenderingOnOverride_14(bool value)
	{
		___disableRenderingOnOverride_14 = value;
	}

	inline static int32_t get_offset_of_customMaterialOverride_15() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___customMaterialOverride_15)); }
	inline Dictionary_2_t807872303 * get_customMaterialOverride_15() const { return ___customMaterialOverride_15; }
	inline Dictionary_2_t807872303 ** get_address_of_customMaterialOverride_15() { return &___customMaterialOverride_15; }
	inline void set_customMaterialOverride_15(Dictionary_2_t807872303 * value)
	{
		___customMaterialOverride_15 = value;
		Il2CppCodeGenWriteBarrier(&___customMaterialOverride_15, value);
	}

	inline static int32_t get_offset_of_customSlotMaterials_16() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___customSlotMaterials_16)); }
	inline Dictionary_2_t3744150404 * get_customSlotMaterials_16() const { return ___customSlotMaterials_16; }
	inline Dictionary_2_t3744150404 ** get_address_of_customSlotMaterials_16() { return &___customSlotMaterials_16; }
	inline void set_customSlotMaterials_16(Dictionary_2_t3744150404 * value)
	{
		___customSlotMaterials_16 = value;
		Il2CppCodeGenWriteBarrier(&___customSlotMaterials_16, value);
	}

	inline static int32_t get_offset_of_meshRenderer_17() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___meshRenderer_17)); }
	inline MeshRenderer_t2804666580 * get_meshRenderer_17() const { return ___meshRenderer_17; }
	inline MeshRenderer_t2804666580 ** get_address_of_meshRenderer_17() { return &___meshRenderer_17; }
	inline void set_meshRenderer_17(MeshRenderer_t2804666580 * value)
	{
		___meshRenderer_17 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_17, value);
	}

	inline static int32_t get_offset_of_meshFilter_18() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___meshFilter_18)); }
	inline MeshFilter_t3839065225 * get_meshFilter_18() const { return ___meshFilter_18; }
	inline MeshFilter_t3839065225 ** get_address_of_meshFilter_18() { return &___meshFilter_18; }
	inline void set_meshFilter_18(MeshFilter_t3839065225 * value)
	{
		___meshFilter_18 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_18, value);
	}

	inline static int32_t get_offset_of_valid_19() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___valid_19)); }
	inline bool get_valid_19() const { return ___valid_19; }
	inline bool* get_address_of_valid_19() { return &___valid_19; }
	inline void set_valid_19(bool value)
	{
		___valid_19 = value;
	}

	inline static int32_t get_offset_of_skeleton_20() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___skeleton_20)); }
	inline Skeleton_t2209335561 * get_skeleton_20() const { return ___skeleton_20; }
	inline Skeleton_t2209335561 ** get_address_of_skeleton_20() { return &___skeleton_20; }
	inline void set_skeleton_20(Skeleton_t2209335561 * value)
	{
		___skeleton_20 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_20, value);
	}

	inline static int32_t get_offset_of_doubleBufferedMesh_21() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___doubleBufferedMesh_21)); }
	inline DoubleBuffered_1_t2301498939 * get_doubleBufferedMesh_21() const { return ___doubleBufferedMesh_21; }
	inline DoubleBuffered_1_t2301498939 ** get_address_of_doubleBufferedMesh_21() { return &___doubleBufferedMesh_21; }
	inline void set_doubleBufferedMesh_21(DoubleBuffered_1_t2301498939 * value)
	{
		___doubleBufferedMesh_21 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedMesh_21, value);
	}

	inline static int32_t get_offset_of_currentInstructions_22() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___currentInstructions_22)); }
	inline Instruction_t629699354 * get_currentInstructions_22() const { return ___currentInstructions_22; }
	inline Instruction_t629699354 ** get_address_of_currentInstructions_22() { return &___currentInstructions_22; }
	inline void set_currentInstructions_22(Instruction_t629699354 * value)
	{
		___currentInstructions_22 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstructions_22, value);
	}

	inline static int32_t get_offset_of_submeshes_23() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___submeshes_23)); }
	inline ExposedList_1_t1435450047 * get_submeshes_23() const { return ___submeshes_23; }
	inline ExposedList_1_t1435450047 ** get_address_of_submeshes_23() { return &___submeshes_23; }
	inline void set_submeshes_23(ExposedList_1_t1435450047 * value)
	{
		___submeshes_23 = value;
		Il2CppCodeGenWriteBarrier(&___submeshes_23, value);
	}

	inline static int32_t get_offset_of_submeshMaterials_24() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___submeshMaterials_24)); }
	inline ExposedList_1_t950565469 * get_submeshMaterials_24() const { return ___submeshMaterials_24; }
	inline ExposedList_1_t950565469 ** get_address_of_submeshMaterials_24() { return &___submeshMaterials_24; }
	inline void set_submeshMaterials_24(ExposedList_1_t950565469 * value)
	{
		___submeshMaterials_24 = value;
		Il2CppCodeGenWriteBarrier(&___submeshMaterials_24, value);
	}

	inline static int32_t get_offset_of_sharedMaterials_25() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___sharedMaterials_25)); }
	inline MaterialU5BU5D_t170856778* get_sharedMaterials_25() const { return ___sharedMaterials_25; }
	inline MaterialU5BU5D_t170856778** get_address_of_sharedMaterials_25() { return &___sharedMaterials_25; }
	inline void set_sharedMaterials_25(MaterialU5BU5D_t170856778* value)
	{
		___sharedMaterials_25 = value;
		Il2CppCodeGenWriteBarrier(&___sharedMaterials_25, value);
	}

	inline static int32_t get_offset_of_tempVertices_26() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___tempVertices_26)); }
	inline SingleU5BU5D_t2316563989* get_tempVertices_26() const { return ___tempVertices_26; }
	inline SingleU5BU5D_t2316563989** get_address_of_tempVertices_26() { return &___tempVertices_26; }
	inline void set_tempVertices_26(SingleU5BU5D_t2316563989* value)
	{
		___tempVertices_26 = value;
		Il2CppCodeGenWriteBarrier(&___tempVertices_26, value);
	}

	inline static int32_t get_offset_of_vertices_27() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___vertices_27)); }
	inline Vector3U5BU5D_t215400611* get_vertices_27() const { return ___vertices_27; }
	inline Vector3U5BU5D_t215400611** get_address_of_vertices_27() { return &___vertices_27; }
	inline void set_vertices_27(Vector3U5BU5D_t215400611* value)
	{
		___vertices_27 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_27, value);
	}

	inline static int32_t get_offset_of_colors_28() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___colors_28)); }
	inline Color32U5BU5D_t2960766953* get_colors_28() const { return ___colors_28; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_28() { return &___colors_28; }
	inline void set_colors_28(Color32U5BU5D_t2960766953* value)
	{
		___colors_28 = value;
		Il2CppCodeGenWriteBarrier(&___colors_28, value);
	}

	inline static int32_t get_offset_of_uvs_29() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___uvs_29)); }
	inline Vector2U5BU5D_t4024180168* get_uvs_29() const { return ___uvs_29; }
	inline Vector2U5BU5D_t4024180168** get_address_of_uvs_29() { return &___uvs_29; }
	inline void set_uvs_29(Vector2U5BU5D_t4024180168* value)
	{
		___uvs_29 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_29, value);
	}

	inline static int32_t get_offset_of_normals_30() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___normals_30)); }
	inline Vector3U5BU5D_t215400611* get_normals_30() const { return ___normals_30; }
	inline Vector3U5BU5D_t215400611** get_address_of_normals_30() { return &___normals_30; }
	inline void set_normals_30(Vector3U5BU5D_t215400611* value)
	{
		___normals_30 = value;
		Il2CppCodeGenWriteBarrier(&___normals_30, value);
	}

	inline static int32_t get_offset_of_tangents_31() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___tangents_31)); }
	inline Vector4U5BU5D_t701588350* get_tangents_31() const { return ___tangents_31; }
	inline Vector4U5BU5D_t701588350** get_address_of_tangents_31() { return &___tangents_31; }
	inline void set_tangents_31(Vector4U5BU5D_t701588350* value)
	{
		___tangents_31 = value;
		Il2CppCodeGenWriteBarrier(&___tangents_31, value);
	}

	inline static int32_t get_offset_of_tempTanBuffer_32() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___tempTanBuffer_32)); }
	inline Vector2U5BU5D_t4024180168* get_tempTanBuffer_32() const { return ___tempTanBuffer_32; }
	inline Vector2U5BU5D_t4024180168** get_address_of_tempTanBuffer_32() { return &___tempTanBuffer_32; }
	inline void set_tempTanBuffer_32(Vector2U5BU5D_t4024180168* value)
	{
		___tempTanBuffer_32 = value;
		Il2CppCodeGenWriteBarrier(&___tempTanBuffer_32, value);
	}

	inline static int32_t get_offset_of_generateMeshOverride_33() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t3766155010, ___generateMeshOverride_33)); }
	inline InstructionDelegate_t1629107544 * get_generateMeshOverride_33() const { return ___generateMeshOverride_33; }
	inline InstructionDelegate_t1629107544 ** get_address_of_generateMeshOverride_33() { return &___generateMeshOverride_33; }
	inline void set_generateMeshOverride_33(InstructionDelegate_t1629107544 * value)
	{
		___generateMeshOverride_33 = value;
		Il2CppCodeGenWriteBarrier(&___generateMeshOverride_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
