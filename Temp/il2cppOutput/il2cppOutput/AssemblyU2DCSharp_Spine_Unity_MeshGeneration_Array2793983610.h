#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.ArraysMeshGenerator
struct  ArraysMeshGenerator_t2793983610  : public Il2CppObject
{
public:
	// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::addNormals
	bool ___addNormals_0;
	// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::addTangents
	bool ___addTangents_1;
	// System.Single[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::attachmentVertexBuffer
	SingleU5BU5D_t2316563989* ___attachmentVertexBuffer_2;
	// UnityEngine.Vector3[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshVertices
	Vector3U5BU5D_t215400611* ___meshVertices_3;
	// UnityEngine.Color32[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshColors32
	Color32U5BU5D_t2960766953* ___meshColors32_4;
	// UnityEngine.Vector2[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshUVs
	Vector2U5BU5D_t4024180168* ___meshUVs_5;
	// UnityEngine.Vector3[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshNormals
	Vector3U5BU5D_t215400611* ___meshNormals_6;
	// UnityEngine.Vector4[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshTangents
	Vector4U5BU5D_t701588350* ___meshTangents_7;
	// UnityEngine.Vector2[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::tempTanBuffer
	Vector2U5BU5D_t4024180168* ___tempTanBuffer_8;
	// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::<PremultiplyVertexColors>k__BackingField
	bool ___U3CPremultiplyVertexColorsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_addNormals_0() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___addNormals_0)); }
	inline bool get_addNormals_0() const { return ___addNormals_0; }
	inline bool* get_address_of_addNormals_0() { return &___addNormals_0; }
	inline void set_addNormals_0(bool value)
	{
		___addNormals_0 = value;
	}

	inline static int32_t get_offset_of_addTangents_1() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___addTangents_1)); }
	inline bool get_addTangents_1() const { return ___addTangents_1; }
	inline bool* get_address_of_addTangents_1() { return &___addTangents_1; }
	inline void set_addTangents_1(bool value)
	{
		___addTangents_1 = value;
	}

	inline static int32_t get_offset_of_attachmentVertexBuffer_2() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___attachmentVertexBuffer_2)); }
	inline SingleU5BU5D_t2316563989* get_attachmentVertexBuffer_2() const { return ___attachmentVertexBuffer_2; }
	inline SingleU5BU5D_t2316563989** get_address_of_attachmentVertexBuffer_2() { return &___attachmentVertexBuffer_2; }
	inline void set_attachmentVertexBuffer_2(SingleU5BU5D_t2316563989* value)
	{
		___attachmentVertexBuffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentVertexBuffer_2, value);
	}

	inline static int32_t get_offset_of_meshVertices_3() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___meshVertices_3)); }
	inline Vector3U5BU5D_t215400611* get_meshVertices_3() const { return ___meshVertices_3; }
	inline Vector3U5BU5D_t215400611** get_address_of_meshVertices_3() { return &___meshVertices_3; }
	inline void set_meshVertices_3(Vector3U5BU5D_t215400611* value)
	{
		___meshVertices_3 = value;
		Il2CppCodeGenWriteBarrier(&___meshVertices_3, value);
	}

	inline static int32_t get_offset_of_meshColors32_4() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___meshColors32_4)); }
	inline Color32U5BU5D_t2960766953* get_meshColors32_4() const { return ___meshColors32_4; }
	inline Color32U5BU5D_t2960766953** get_address_of_meshColors32_4() { return &___meshColors32_4; }
	inline void set_meshColors32_4(Color32U5BU5D_t2960766953* value)
	{
		___meshColors32_4 = value;
		Il2CppCodeGenWriteBarrier(&___meshColors32_4, value);
	}

	inline static int32_t get_offset_of_meshUVs_5() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___meshUVs_5)); }
	inline Vector2U5BU5D_t4024180168* get_meshUVs_5() const { return ___meshUVs_5; }
	inline Vector2U5BU5D_t4024180168** get_address_of_meshUVs_5() { return &___meshUVs_5; }
	inline void set_meshUVs_5(Vector2U5BU5D_t4024180168* value)
	{
		___meshUVs_5 = value;
		Il2CppCodeGenWriteBarrier(&___meshUVs_5, value);
	}

	inline static int32_t get_offset_of_meshNormals_6() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___meshNormals_6)); }
	inline Vector3U5BU5D_t215400611* get_meshNormals_6() const { return ___meshNormals_6; }
	inline Vector3U5BU5D_t215400611** get_address_of_meshNormals_6() { return &___meshNormals_6; }
	inline void set_meshNormals_6(Vector3U5BU5D_t215400611* value)
	{
		___meshNormals_6 = value;
		Il2CppCodeGenWriteBarrier(&___meshNormals_6, value);
	}

	inline static int32_t get_offset_of_meshTangents_7() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___meshTangents_7)); }
	inline Vector4U5BU5D_t701588350* get_meshTangents_7() const { return ___meshTangents_7; }
	inline Vector4U5BU5D_t701588350** get_address_of_meshTangents_7() { return &___meshTangents_7; }
	inline void set_meshTangents_7(Vector4U5BU5D_t701588350* value)
	{
		___meshTangents_7 = value;
		Il2CppCodeGenWriteBarrier(&___meshTangents_7, value);
	}

	inline static int32_t get_offset_of_tempTanBuffer_8() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___tempTanBuffer_8)); }
	inline Vector2U5BU5D_t4024180168* get_tempTanBuffer_8() const { return ___tempTanBuffer_8; }
	inline Vector2U5BU5D_t4024180168** get_address_of_tempTanBuffer_8() { return &___tempTanBuffer_8; }
	inline void set_tempTanBuffer_8(Vector2U5BU5D_t4024180168* value)
	{
		___tempTanBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&___tempTanBuffer_8, value);
	}

	inline static int32_t get_offset_of_U3CPremultiplyVertexColorsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t2793983610, ___U3CPremultiplyVertexColorsU3Ek__BackingField_9)); }
	inline bool get_U3CPremultiplyVertexColorsU3Ek__BackingField_9() const { return ___U3CPremultiplyVertexColorsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CPremultiplyVertexColorsU3Ek__BackingField_9() { return &___U3CPremultiplyVertexColorsU3Ek__BackingField_9; }
	inline void set_U3CPremultiplyVertexColorsU3Ek__BackingField_9(bool value)
	{
		___U3CPremultiplyVertexColorsU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
