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

// Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator/SmartMesh
struct SmartMesh_t1508871033;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_t4224666065;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t723286955;

#include "codegen/il2cpp-codegen.h"

// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator/SmartMesh::.ctor()
extern "C"  void SmartMesh__ctor_m2236595522 (SmartMesh_t1508871033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator/SmartMesh::Set(UnityEngine.Vector3[],UnityEngine.Vector2[],UnityEngine.Color32[],Spine.ExposedList`1<Spine.Attachment>,Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>)
extern "C"  void SmartMesh_Set_m1167493596 (SmartMesh_t1508871033 * __this, Vector3U5BU5D_t215400611* ___verts0, Vector2U5BU5D_t4024180168* ___uvs1, Color32U5BU5D_t2960766953* ___colors2, ExposedList_1_t4224666065 * ___attachments3, ExposedList_1_t723286955 * ___instructions4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator/SmartMesh::StructureDoesntMatch(Spine.ExposedList`1<Spine.Attachment>,Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>)
extern "C"  bool SmartMesh_StructureDoesntMatch_m77370725 (SmartMesh_t1508871033 * __this, ExposedList_1_t4224666065 * ___attachments0, ExposedList_1_t723286955 * ___instructions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
