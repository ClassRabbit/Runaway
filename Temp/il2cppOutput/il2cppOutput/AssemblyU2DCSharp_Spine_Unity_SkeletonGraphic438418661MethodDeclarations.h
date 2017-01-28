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

// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_t438418661;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t4020151189;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t2211567523;
// UnityEngine.Texture
struct Texture_t2526458961;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.SkeletonData
struct SkeletonData_t3387199699;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.Unity.MeshGeneration.ISimpleMeshGenerator
struct ISimpleMeshGenerator_t1368828227;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_UpdateBonesDelegate4020151189.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate2847075725.h"

// System.Void Spine.Unity.SkeletonGraphic::.ctor()
extern "C"  void SkeletonGraphic__ctor_m3911344020 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateLocal(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateLocal_m1573629749 (SkeletonGraphic_t438418661 * __this, UpdateBonesDelegate_t4020151189 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateLocal(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateLocal_m585727796 (SkeletonGraphic_t438418661 * __this, UpdateBonesDelegate_t4020151189 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateWorld(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateWorld_m3730756590 (SkeletonGraphic_t438418661 * __this, UpdateBonesDelegate_t4020151189 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateWorld(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateWorld_m2742854637 (SkeletonGraphic_t438418661 * __this, UpdateBonesDelegate_t4020151189 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateComplete(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateComplete_m563348091 (SkeletonGraphic_t438418661 * __this, UpdateBonesDelegate_t4020151189 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateComplete(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateComplete_m3387145756 (SkeletonGraphic_t438418661 * __this, UpdateBonesDelegate_t4020151189 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonGraphic::get_SkeletonDataAsset()
extern "C"  SkeletonDataAsset_t2211567523 * SkeletonGraphic_get_SkeletonDataAsset_m1654373280 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Spine.Unity.SkeletonGraphic::get_mainTexture()
extern "C"  Texture_t2526458961 * SkeletonGraphic_get_mainTexture_m2667856346 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Awake()
extern "C"  void SkeletonGraphic_Awake_m4148949239 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void SkeletonGraphic_Rebuild_m6627585 (SkeletonGraphic_t438418661 * __this, int32_t ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Update()
extern "C"  void SkeletonGraphic_Update_m2719442425 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Update(System.Single)
extern "C"  void SkeletonGraphic_Update_m2951796818 (SkeletonGraphic_t438418661 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::LateUpdate()
extern "C"  void SkeletonGraphic_LateUpdate_m233015103 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skeleton Spine.Unity.SkeletonGraphic::get_Skeleton()
extern "C"  Skeleton_t2209335561 * SkeletonGraphic_get_Skeleton_m2651590241 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.Unity.SkeletonGraphic::get_SkeletonData()
extern "C"  SkeletonData_t3387199699 * SkeletonGraphic_get_SkeletonData_m3506109941 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.SkeletonGraphic::get_IsValid()
extern "C"  bool SkeletonGraphic_get_IsValid_m4216943 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AnimationState Spine.Unity.SkeletonGraphic::get_AnimationState()
extern "C"  AnimationState_t964829161 * SkeletonGraphic_get_AnimationState_m622681569 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.ISimpleMeshGenerator Spine.Unity.SkeletonGraphic::get_SpineMeshGenerator()
extern "C"  Il2CppObject * SkeletonGraphic_get_SpineMeshGenerator_m1083772569 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Clear()
extern "C"  void SkeletonGraphic_Clear_m1317477311 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Initialize(System.Boolean)
extern "C"  void SkeletonGraphic_Initialize_m2585340151 (SkeletonGraphic_t438418661 * __this, bool ___overwrite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::UpdateMesh()
extern "C"  void SkeletonGraphic_UpdateMesh_m2654495942 (SkeletonGraphic_t438418661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
