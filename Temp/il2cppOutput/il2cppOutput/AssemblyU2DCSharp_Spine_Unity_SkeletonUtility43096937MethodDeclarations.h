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

// Spine.Unity.SkeletonUtility
struct SkeletonUtility_t43096937;
// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_t3470925072;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t2156524054;
// Spine.Skeleton
struct Skeleton_t2209335561;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t3933059536;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// Spine.Unity.SkeletonUtilityBone
struct SkeletonUtilityBone_t1973204173;
// Spine.Unity.SkeletonUtilityConstraint
struct SkeletonUtilityConstraint_t3501047718;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t1666901536;
// Spine.Bone
struct Bone_t1650489600;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtility_Skel3470925072.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "AssemblyU2DCSharp_Spine_BoundingBoxAttachment3933059536.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer3766155010.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityBone1973204173.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityConst3501047718.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityBone_3772442675.h"
#include "AssemblyU2DCSharp_Spine_Bone1650489600.h"

// System.Void Spine.Unity.SkeletonUtility::.ctor()
extern "C"  void SkeletonUtility__ctor_m3012203920 (SkeletonUtility_t43096937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::add_OnReset(Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate)
extern "C"  void SkeletonUtility_add_OnReset_m2389394018 (SkeletonUtility_t43096937 * __this, SkeletonUtilityDelegate_t3470925072 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::remove_OnReset(Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate)
extern "C"  void SkeletonUtility_remove_OnReset_m1743239897 (SkeletonUtility_t43096937 * __this, SkeletonUtilityDelegate_t3470925072 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.SkeletonUtility::AddBoundingBox(Spine.Skeleton,System.String,System.String,System.String,UnityEngine.Transform,System.Boolean)
extern "C"  PolygonCollider2D_t2156524054 * SkeletonUtility_AddBoundingBox_m2926004794 (Il2CppObject * __this /* static, unused */, Skeleton_t2209335561 * ___skeleton0, String_t* ___skinName1, String_t* ___slotName2, String_t* ___attachmentName3, Transform_t1659122786 * ___parent4, bool ___isTrigger5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.SkeletonUtility::AddBoundingBoxAsComponent(Spine.BoundingBoxAttachment,UnityEngine.GameObject,System.Boolean)
extern "C"  PolygonCollider2D_t2156524054 * SkeletonUtility_AddBoundingBoxAsComponent_m642219253 (Il2CppObject * __this /* static, unused */, BoundingBoxAttachment_t3933059536 * ___boundingBox0, GameObject_t3674682005 * ___gameObject1, bool ___isTrigger2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Spine.Unity.SkeletonUtility::GetBoundingBoxBounds(Spine.BoundingBoxAttachment,System.Single)
extern "C"  Bounds_t2711641849  SkeletonUtility_GetBoundingBoxBounds_m162189167 (Il2CppObject * __this /* static, unused */, BoundingBoxAttachment_t3933059536 * ___boundingBox0, float ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::Update()
extern "C"  void SkeletonUtility_Update_m615903101 (SkeletonUtility_t43096937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::OnEnable()
extern "C"  void SkeletonUtility_OnEnable_m3886843894 (SkeletonUtility_t43096937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::Start()
extern "C"  void SkeletonUtility_Start_m1959341712 (SkeletonUtility_t43096937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::OnDisable()
extern "C"  void SkeletonUtility_OnDisable_m674013687 (SkeletonUtility_t43096937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::HandleRendererReset(Spine.Unity.SkeletonRenderer)
extern "C"  void SkeletonUtility_HandleRendererReset_m894871326 (SkeletonUtility_t43096937 * __this, SkeletonRenderer_t3766155010 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::RegisterBone(Spine.Unity.SkeletonUtilityBone)
extern "C"  void SkeletonUtility_RegisterBone_m4029327192 (SkeletonUtility_t43096937 * __this, SkeletonUtilityBone_t1973204173 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UnregisterBone(Spine.Unity.SkeletonUtilityBone)
extern "C"  void SkeletonUtility_UnregisterBone_m1312405023 (SkeletonUtility_t43096937 * __this, SkeletonUtilityBone_t1973204173 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::RegisterConstraint(Spine.Unity.SkeletonUtilityConstraint)
extern "C"  void SkeletonUtility_RegisterConstraint_m3423144038 (SkeletonUtility_t43096937 * __this, SkeletonUtilityConstraint_t3501047718 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UnregisterConstraint(Spine.Unity.SkeletonUtilityConstraint)
extern "C"  void SkeletonUtility_UnregisterConstraint_m499983533 (SkeletonUtility_t43096937 * __this, SkeletonUtilityConstraint_t3501047718 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::CollectBones()
extern "C"  void SkeletonUtility_CollectBones_m3994911897 (SkeletonUtility_t43096937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateLocal(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateLocal_m1985154462 (SkeletonUtility_t43096937 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateWorld(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateWorld_m115076549 (SkeletonUtility_t43096937 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateComplete(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateComplete_m199296292 (SkeletonUtility_t43096937 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateAllBones()
extern "C"  void SkeletonUtility_UpdateAllBones_m3419936043 (SkeletonUtility_t43096937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Spine.Unity.SkeletonUtility::GetBoneRoot()
extern "C"  Transform_t1659122786 * SkeletonUtility_GetBoneRoot_m4176065544 (SkeletonUtility_t43096937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnRoot(Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t3674682005 * SkeletonUtility_SpawnRoot_m1464120816 (SkeletonUtility_t43096937 * __this, int32_t ___mode0, bool ___pos1, bool ___rot2, bool ___sca3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnHierarchy(Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t3674682005 * SkeletonUtility_SpawnHierarchy_m1416188119 (SkeletonUtility_t43096937 * __this, int32_t ___mode0, bool ___pos1, bool ___rot2, bool ___sca3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnBoneRecursively(Spine.Bone,UnityEngine.Transform,Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t3674682005 * SkeletonUtility_SpawnBoneRecursively_m1624915185 (SkeletonUtility_t43096937 * __this, Bone_t1650489600 * ___bone0, Transform_t1659122786 * ___parent1, int32_t ___mode2, bool ___pos3, bool ___rot4, bool ___sca5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnBone(Spine.Bone,UnityEngine.Transform,Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t3674682005 * SkeletonUtility_SpawnBone_m810931060 (SkeletonUtility_t43096937 * __this, Bone_t1650489600 * ___bone0, Transform_t1659122786 * ___parent1, int32_t ___mode2, bool ___pos3, bool ___rot4, bool ___sca5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
