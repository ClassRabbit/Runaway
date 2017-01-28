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

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t1629107544;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t2211567523;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t807872303;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t3744150404;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction
struct Instruction_t629699354;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer_Ins1629107544.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer_Smar629699354.h"

// System.Void Spine.Unity.SkeletonRenderer::.ctor()
extern "C"  void SkeletonRenderer__ctor_m428100935 (SkeletonRenderer_t3766155010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::add_generateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_add_generateMeshOverride_m2420082545 (SkeletonRenderer_t3766155010 * __this, InstructionDelegate_t1629107544 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::remove_generateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_remove_generateMeshOverride_m1677746358 (SkeletonRenderer_t3766155010 * __this, InstructionDelegate_t1629107544 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::add_GenerateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_add_GenerateMeshOverride_m1949528977 (SkeletonRenderer_t3766155010 * __this, InstructionDelegate_t1629107544 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::remove_GenerateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_remove_GenerateMeshOverride_m1207192790 (SkeletonRenderer_t3766155010 * __this, InstructionDelegate_t1629107544 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::get_SkeletonDataAsset()
extern "C"  SkeletonDataAsset_t2211567523 * SkeletonRenderer_get_SkeletonDataAsset_m3774422807 (SkeletonRenderer_t3766155010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::get_CustomMaterialOverride()
extern "C"  Dictionary_2_t807872303 * SkeletonRenderer_get_CustomMaterialOverride_m2720035376 (SkeletonRenderer_t3766155010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::get_CustomSlotMaterials()
extern "C"  Dictionary_2_t3744150404 * SkeletonRenderer_get_CustomSlotMaterials_m305974590 (SkeletonRenderer_t3766155010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skeleton Spine.Unity.SkeletonRenderer::get_Skeleton()
extern "C"  Skeleton_t2209335561 * SkeletonRenderer_get_Skeleton_m3528944504 (SkeletonRenderer_t3766155010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::Awake()
extern "C"  void SkeletonRenderer_Awake_m665706154 (SkeletonRenderer_t3766155010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::Initialize(System.Boolean)
extern "C"  void SkeletonRenderer_Initialize_m1840709732 (SkeletonRenderer_t3766155010 * __this, bool ___overwrite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::LateUpdate()
extern "C"  void SkeletonRenderer_LateUpdate_m2418094444 (SkeletonRenderer_t3766155010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.SkeletonRenderer::CheckIfMustUpdateMeshStructure(Spine.Unity.SkeletonRenderer/SmartMesh/Instruction,Spine.Unity.SkeletonRenderer/SmartMesh/Instruction)
extern "C"  bool SkeletonRenderer_CheckIfMustUpdateMeshStructure_m3815453766 (Il2CppObject * __this /* static, unused */, Instruction_t629699354 * ___a0, Instruction_t629699354 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
