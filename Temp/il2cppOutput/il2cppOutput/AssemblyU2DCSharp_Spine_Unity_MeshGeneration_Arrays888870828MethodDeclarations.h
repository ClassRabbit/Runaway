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

// Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator
struct ArraysSubmeshedMeshGenerator_t888870828;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t3019178762;
// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction
struct SubmeshedMeshInstruction_t1095166029;
// Spine.Skeleton
struct Skeleton_t2209335561;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_MeshAn234526394.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Subme1095166029.h"

// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::.ctor()
extern "C"  void ArraysSubmeshedMeshGenerator__ctor_m2684094482 (ArraysSubmeshedMeshGenerator_t888870828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::get_Separators()
extern "C"  List_1_t3019178762 * ArraysSubmeshedMeshGenerator_get_Separators_m2673055213 (ArraysSubmeshedMeshGenerator_t888870828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::get_ZSpacing()
extern "C"  float ArraysSubmeshedMeshGenerator_get_ZSpacing_m1873628248 (ArraysSubmeshedMeshGenerator_t888870828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::set_ZSpacing(System.Single)
extern "C"  void ArraysSubmeshedMeshGenerator_set_ZSpacing_m2667769491 (ArraysSubmeshedMeshGenerator_t888870828 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::GenerateInstruction(Spine.Skeleton)
extern "C"  SubmeshedMeshInstruction_t1095166029 * ArraysSubmeshedMeshGenerator_GenerateInstruction_m3266074122 (ArraysSubmeshedMeshGenerator_t888870828 * __this, Skeleton_t2209335561 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.MeshAndMaterials Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::GenerateMesh(Spine.Unity.MeshGeneration.SubmeshedMeshInstruction)
extern "C"  MeshAndMaterials_t234526394  ArraysSubmeshedMeshGenerator_GenerateMesh_m3660468752 (ArraysSubmeshedMeshGenerator_t888870828 * __this, SubmeshedMeshInstruction_t1095166029 * ___meshInstructions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::Spine.Unity.MeshGeneration.ISubmeshedMeshGenerator.get_AddNormals()
extern "C"  bool ArraysSubmeshedMeshGenerator_Spine_Unity_MeshGeneration_ISubmeshedMeshGenerator_get_AddNormals_m2682127400 (ArraysSubmeshedMeshGenerator_t888870828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::Spine.Unity.MeshGeneration.ISubmeshedMeshGenerator.set_AddNormals(System.Boolean)
extern "C"  void ArraysSubmeshedMeshGenerator_Spine_Unity_MeshGeneration_ISubmeshedMeshGenerator_set_AddNormals_m1894744415 (ArraysSubmeshedMeshGenerator_t888870828 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::Spine.Unity.MeshGeneration.ISubmeshedMeshGenerator.get_AddTangents()
extern "C"  bool ArraysSubmeshedMeshGenerator_Spine_Unity_MeshGeneration_ISubmeshedMeshGenerator_get_AddTangents_m602152436 (ArraysSubmeshedMeshGenerator_t888870828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::Spine.Unity.MeshGeneration.ISubmeshedMeshGenerator.set_AddTangents(System.Boolean)
extern "C"  void ArraysSubmeshedMeshGenerator_Spine_Unity_MeshGeneration_ISubmeshedMeshGenerator_set_AddTangents_m4217496235 (ArraysSubmeshedMeshGenerator_t888870828 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
