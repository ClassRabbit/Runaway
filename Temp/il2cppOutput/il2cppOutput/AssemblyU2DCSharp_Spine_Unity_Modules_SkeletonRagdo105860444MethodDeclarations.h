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

// Spine.Unity.Modules.SkeletonRagdoll
struct SkeletonRagdoll_t105860444;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// Spine.Bone
struct Bone_t1650489600;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t1403726930;
// UnityEngine.Coroutine
struct Coroutine_t3621161934;
// System.String
struct String_t;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t1666901536;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t12892488;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "AssemblyU2DCSharp_Spine_Bone1650489600.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_String7231557.h"

// System.Void Spine.Unity.Modules.SkeletonRagdoll::.ctor()
extern "C"  void SkeletonRagdoll__ctor_m2621708832 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody Spine.Unity.Modules.SkeletonRagdoll::get_RootRigidbody()
extern "C"  Rigidbody_t3346577219 * SkeletonRagdoll_get_RootRigidbody_m715571261 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::set_RootRigidbody(UnityEngine.Rigidbody)
extern "C"  void SkeletonRagdoll_set_RootRigidbody_m579177808 (SkeletonRagdoll_t105860444 * __this, Rigidbody_t3346577219 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Unity.Modules.SkeletonRagdoll::get_StartingBone()
extern "C"  Bone_t1650489600 * SkeletonRagdoll_get_StartingBone_m241031523 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::set_StartingBone(Spine.Bone)
extern "C"  void SkeletonRagdoll_set_StartingBone_m4257538934 (SkeletonRagdoll_t105860444 * __this, Bone_t1650489600 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll::get_RootOffset()
extern "C"  Vector3_t4282066566  SkeletonRagdoll_get_RootOffset_m2825303880 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::get_IsActive()
extern "C"  bool SkeletonRagdoll_get_IsActive_m3186383433 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonRagdoll::Start()
extern "C"  Il2CppObject * SkeletonRagdoll_Start_m1719723368 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody[] Spine.Unity.Modules.SkeletonRagdoll::get_RigidbodyArray()
extern "C"  RigidbodyU5BU5D_t1403726930* SkeletonRagdoll_get_RigidbodyArray_m1009795038 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll::get_EstimatedSkeletonPosition()
extern "C"  Vector3_t4282066566  SkeletonRagdoll_get_EstimatedSkeletonPosition_m1935990721 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::Apply()
extern "C"  void SkeletonRagdoll_Apply_m2672811820 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine Spine.Unity.Modules.SkeletonRagdoll::SmoothMix(System.Single,System.Single)
extern "C"  Coroutine_t3621161934 * SkeletonRagdoll_SmoothMix_m2186138898 (SkeletonRagdoll_t105860444 * __this, float ___target0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonRagdoll::SmoothMixCoroutine(System.Single,System.Single)
extern "C"  Il2CppObject * SkeletonRagdoll_SmoothMixCoroutine_m3852618442 (SkeletonRagdoll_t105860444 * __this, float ___target0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::SetSkeletonPosition(UnityEngine.Vector3)
extern "C"  void SkeletonRagdoll_SetSkeletonPosition_m3661540483 (SkeletonRagdoll_t105860444 * __this, Vector3_t4282066566  ___worldPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::Remove()
extern "C"  void SkeletonRagdoll_Remove_m3855006184 (SkeletonRagdoll_t105860444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody Spine.Unity.Modules.SkeletonRagdoll::GetRigidbody(System.String)
extern "C"  Rigidbody_t3346577219 * SkeletonRagdoll_GetRigidbody_m3919234692 (SkeletonRagdoll_t105860444 * __this, String_t* ___boneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::RecursivelyCreateBoneProxies(Spine.Bone)
extern "C"  void SkeletonRagdoll_RecursivelyCreateBoneProxies_m2236597026 (SkeletonRagdoll_t105860444 * __this, Bone_t1650489600 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::UpdateSpineSkeleton(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonRagdoll_UpdateSpineSkeleton_m2953477267 (SkeletonRagdoll_t105860444 * __this, Il2CppObject * ___skeletonRenderer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider> Spine.Unity.Modules.SkeletonRagdoll::AttachBoundingBoxRagdollColliders(Spine.Bone)
extern "C"  List_1_t12892488 * SkeletonRagdoll_AttachBoundingBoxRagdollColliders_m4147200491 (SkeletonRagdoll_t105860444 * __this, Bone_t1650489600 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.Modules.SkeletonRagdoll::GetPropagatedRotation(Spine.Bone)
extern "C"  float SkeletonRagdoll_GetPropagatedRotation_m3661269354 (Il2CppObject * __this /* static, unused */, Bone_t1650489600 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
