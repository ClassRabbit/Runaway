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

// Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh
struct SmartMesh_t2415772704;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction
struct SubmeshedMeshInstruction_t1095166029;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Subme1095166029.h"

// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::.ctor()
extern "C"  void SmartMesh__ctor_m2426150219 (SmartMesh_t2415772704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::Set(UnityEngine.Vector3[],UnityEngine.Vector2[],UnityEngine.Color32[],Spine.Unity.MeshGeneration.SubmeshedMeshInstruction)
extern "C"  void SmartMesh_Set_m2819399087 (SmartMesh_t2415772704 * __this, Vector3U5BU5D_t215400611* ___verts0, Vector2U5BU5D_t4024180168* ___uvs1, Color32U5BU5D_t2960766953* ___colors2, SubmeshedMeshInstruction_t1095166029 * ___instruction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::StructureDoesntMatch(Spine.Unity.MeshGeneration.SubmeshedMeshInstruction)
extern "C"  bool SmartMesh_StructureDoesntMatch_m991738336 (SmartMesh_t2415772704 * __this, SubmeshedMeshInstruction_t1095166029 * ___instructions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
