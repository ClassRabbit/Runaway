#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.Unity.MeshGeneration.ArraysMeshGenerator
struct ArraysMeshGenerator_t2793983610;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer>
struct ExposedList_1_t1435450047;
// Spine.Unity.MeshGeneration.SubmeshInstruction[]
struct SubmeshInstructionU5BU5D_t2859174660;
// Spine.Skeleton
struct Skeleton_t2209335561;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::.ctor()
extern "C"  void ArraysMeshGenerator__ctor_m2920990260 (ArraysMeshGenerator_t2793983610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::get_PremultiplyVertexColors()
extern "C"  bool ArraysMeshGenerator_get_PremultiplyVertexColors_m2173277072 (ArraysMeshGenerator_t2793983610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::set_PremultiplyVertexColors(System.Boolean)
extern "C"  void ArraysMeshGenerator_set_PremultiplyVertexColors_m4070169927 (ArraysMeshGenerator_t2793983610 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::get_AddNormals()
extern "C"  bool ArraysMeshGenerator_get_AddNormals_m1870987416 (ArraysMeshGenerator_t2793983610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::set_AddNormals(System.Boolean)
extern "C"  void ArraysMeshGenerator_set_AddNormals_m42095567 (ArraysMeshGenerator_t2793983610 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::get_AddTangents()
extern "C"  bool ArraysMeshGenerator_get_AddTangents_m1226616708 (ArraysMeshGenerator_t2793983610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::set_AddTangents(System.Boolean)
extern "C"  void ArraysMeshGenerator_set_AddTangents_m2619956795 (ArraysMeshGenerator_t2793983610 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::TryAddNormalsTo(UnityEngine.Mesh,System.Int32)
extern "C"  void ArraysMeshGenerator_TryAddNormalsTo_m3347834056 (ArraysMeshGenerator_t2793983610 * __this, Mesh_t4241756145 * ___mesh0, int32_t ___targetVertexCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::EnsureSize(System.Int32,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&,UnityEngine.Color32[]&)
extern "C"  bool ArraysMeshGenerator_EnsureSize_m2934786490 (Il2CppObject * __this /* static, unused */, int32_t ___targetVertexCount0, Vector3U5BU5D_t215400611** ___vertices1, Vector2U5BU5D_t4024180168** ___uvs2, Color32U5BU5D_t2960766953** ___colors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::EnsureTriangleBuffersSize(Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer>,System.Int32,Spine.Unity.MeshGeneration.SubmeshInstruction[])
extern "C"  bool ArraysMeshGenerator_EnsureTriangleBuffersSize_m2273925646 (Il2CppObject * __this /* static, unused */, ExposedList_1_t1435450047 * ___submeshBuffers0, int32_t ___targetSubmeshCount1, SubmeshInstructionU5BU5D_t2859174660* ___instructionItems2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::FillVerts(Spine.Skeleton,System.Int32,System.Int32,System.Single,System.Boolean,UnityEngine.Vector3[],UnityEngine.Vector2[],UnityEngine.Color32[],System.Int32&,System.Single[]&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Boolean)
extern "C"  void ArraysMeshGenerator_FillVerts_m2669771114 (Il2CppObject * __this /* static, unused */, Skeleton_t2209335561 * ___skeleton0, int32_t ___startSlot1, int32_t ___endSlot2, float ___zSpacing3, bool ___pmaColors4, Vector3U5BU5D_t215400611* ___verts5, Vector2U5BU5D_t4024180168* ___uvs6, Color32U5BU5D_t2960766953* ___colors7, int32_t* ___vertexIndex8, SingleU5BU5D_t2316563989** ___tempVertBuffer9, Vector3_t4282066566 * ___boundsMin10, Vector3_t4282066566 * ___boundsMax11, bool ___renderMeshes12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::FillTriangles(System.Int32[]&,Spine.Skeleton,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void ArraysMeshGenerator_FillTriangles_m877837554 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821** ___triangleBuffer0, Skeleton_t2209335561 * ___skeleton1, int32_t ___triangleCount2, int32_t ___firstVertex3, int32_t ___startSlot4, int32_t ___endSlot5, bool ___isLastSubmesh6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::FillTrianglesQuads(System.Int32[]&,System.Int32&,System.Int32&,System.Int32,System.Int32,System.Boolean)
extern "C"  void ArraysMeshGenerator_FillTrianglesQuads_m2854729258 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821** ___triangleBuffer0, int32_t* ___storedTriangleCount1, int32_t* ___storedFirstVertex2, int32_t ___instructionsFirstVertex3, int32_t ___instructionTriangleCount4, bool ___isLastSubmesh5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Spine.Unity.MeshGeneration.ArraysMeshGenerator::ToBounds(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Bounds_t2711641849  ArraysMeshGenerator_ToBounds_m1571046811 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___boundsMin0, Vector3_t4282066566  ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::SolveTangents2DEnsureSize(UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Int32)
extern "C"  void ArraysMeshGenerator_SolveTangents2DEnsureSize_m4137525859 (Il2CppObject * __this /* static, unused */, Vector4U5BU5D_t701588350** ___tangentBuffer0, Vector2U5BU5D_t4024180168** ___tempTanBuffer1, int32_t ___vertexCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::SolveTangents2DTriangles(UnityEngine.Vector2[],System.Int32[],System.Int32,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32)
extern "C"  void ArraysMeshGenerator_SolveTangents2DTriangles_m3522333974 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t4024180168* ___tempTanBuffer0, Int32U5BU5D_t3230847821* ___triangles1, int32_t ___triangleCount2, Vector3U5BU5D_t215400611* ___vertices3, Vector2U5BU5D_t4024180168* ___uvs4, int32_t ___vertexCount5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::SolveTangents2DBuffer(UnityEngine.Vector4[],UnityEngine.Vector2[],System.Int32)
extern "C"  void ArraysMeshGenerator_SolveTangents2DBuffer_m3725871264 (Il2CppObject * __this /* static, unused */, Vector4U5BU5D_t701588350* ___tangents0, Vector2U5BU5D_t4024180168* ___tempTanBuffer1, int32_t ___vertexCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
