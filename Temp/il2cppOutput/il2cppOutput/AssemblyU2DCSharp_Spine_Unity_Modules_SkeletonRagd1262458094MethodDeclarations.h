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

// Spine.Unity.Modules.SkeletonRagdoll2D
struct SkeletonRagdoll2D_t1262458094;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// Spine.Bone
struct Bone_t1650489600;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t23929848;
// UnityEngine.Coroutine
struct Coroutine_t3621161934;
// System.String
struct String_t;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t1666901536;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_t2920210650;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// Spine.Skeleton
struct Skeleton_t2209335561;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "AssemblyU2DCSharp_Spine_Bone1650489600.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::.ctor()
extern "C"  void SkeletonRagdoll2D__ctor_m1146297550 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D Spine.Unity.Modules.SkeletonRagdoll2D::get_RootRigidbody()
extern "C"  Rigidbody2D_t1743771669 * SkeletonRagdoll2D_get_RootRigidbody_m619570137 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::set_RootRigidbody(UnityEngine.Rigidbody2D)
extern "C"  void SkeletonRagdoll2D_set_RootRigidbody_m3193025040 (SkeletonRagdoll2D_t1262458094 * __this, Rigidbody2D_t1743771669 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Unity.Modules.SkeletonRagdoll2D::get_StartingBone()
extern "C"  Bone_t1650489600 * SkeletonRagdoll2D_get_StartingBone_m2323915125 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::set_StartingBone(Spine.Bone)
extern "C"  void SkeletonRagdoll2D_set_StartingBone_m3211786632 (SkeletonRagdoll2D_t1262458094 * __this, Bone_t1650489600 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll2D::get_RootOffset()
extern "C"  Vector3_t4282066566  SkeletonRagdoll2D_get_RootOffset_m1932476122 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.SkeletonRagdoll2D::get_IsActive()
extern "C"  bool SkeletonRagdoll2D_get_IsActive_m4091516123 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonRagdoll2D::Start()
extern "C"  Il2CppObject * SkeletonRagdoll2D_Start_m3352065558 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D[] Spine.Unity.Modules.SkeletonRagdoll2D::get_RigidbodyArray()
extern "C"  Rigidbody2DU5BU5D_t23929848* SkeletonRagdoll2D_get_RigidbodyArray_m2997269186 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll2D::get_EstimatedSkeletonPosition()
extern "C"  Vector3_t4282066566  SkeletonRagdoll2D_get_EstimatedSkeletonPosition_m1355678191 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::Apply()
extern "C"  void SkeletonRagdoll2D_Apply_m1197400538 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine Spine.Unity.Modules.SkeletonRagdoll2D::SmoothMix(System.Single,System.Single)
extern "C"  Coroutine_t3621161934 * SkeletonRagdoll2D_SmoothMix_m3717832996 (SkeletonRagdoll2D_t1262458094 * __this, float ___target0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonRagdoll2D::SmoothMixCoroutine(System.Single,System.Single)
extern "C"  Il2CppObject * SkeletonRagdoll2D_SmoothMixCoroutine_m2365265272 (SkeletonRagdoll2D_t1262458094 * __this, float ___target0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::SetSkeletonPosition(UnityEngine.Vector3)
extern "C"  void SkeletonRagdoll2D_SetSkeletonPosition_m2066691989 (SkeletonRagdoll2D_t1262458094 * __this, Vector3_t4282066566  ___worldPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::Remove()
extern "C"  void SkeletonRagdoll2D_Remove_m1066929402 (SkeletonRagdoll2D_t1262458094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D Spine.Unity.Modules.SkeletonRagdoll2D::GetRigidbody(System.String)
extern "C"  Rigidbody2D_t1743771669 * SkeletonRagdoll2D_GetRigidbody_m1640140320 (SkeletonRagdoll2D_t1262458094 * __this, String_t* ___boneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::RecursivelyCreateBoneProxies(Spine.Bone)
extern "C"  void SkeletonRagdoll2D_RecursivelyCreateBoneProxies_m641748532 (SkeletonRagdoll2D_t1262458094 * __this, Bone_t1650489600 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::UpdateSpineSkeleton(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonRagdoll2D_UpdateSpineSkeleton_m409121345 (SkeletonRagdoll2D_t1262458094 * __this, Il2CppObject * ___animatedSkeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider2D> Spine.Unity.Modules.SkeletonRagdoll2D::AttachBoundingBoxRagdollColliders(Spine.Bone,UnityEngine.GameObject,Spine.Skeleton)
extern "C"  List_1_t2920210650 * SkeletonRagdoll2D_AttachBoundingBoxRagdollColliders_m3075023355 (Il2CppObject * __this /* static, unused */, Bone_t1650489600 * ___b0, GameObject_t3674682005 * ___go1, Skeleton_t2209335561 * ___skeleton2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.Modules.SkeletonRagdoll2D::GetPropagatedRotation(Spine.Bone)
extern "C"  float SkeletonRagdoll2D_GetPropagatedRotation_m659991448 (Il2CppObject * __this /* static, unused */, Bone_t1650489600 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll2D::FlipScale(System.Boolean,System.Boolean)
extern "C"  Vector3_t4282066566  SkeletonRagdoll2D_FlipScale_m1089747715 (Il2CppObject * __this /* static, unused */, bool ___flipX0, bool ___flipY1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
