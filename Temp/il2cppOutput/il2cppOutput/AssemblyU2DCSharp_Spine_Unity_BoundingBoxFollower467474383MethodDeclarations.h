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

// Spine.Unity.BoundingBoxFollower
struct BoundingBoxFollower_t467474383;
// Spine.Slot
struct Slot_t1650993210;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t3933059536;
// System.String
struct String_t;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t2156524054;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// Spine.Attachment
struct Attachment_t2849733407;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer3766155010.h"
#include "AssemblyU2DCSharp_Spine_Attachment2849733407.h"

// System.Void Spine.Unity.BoundingBoxFollower::.ctor()
extern "C"  void BoundingBoxFollower__ctor_m999421930 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Slot Spine.Unity.BoundingBoxFollower::get_Slot()
extern "C"  Slot_t1650993210 * BoundingBoxFollower_get_Slot_m753226477 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.Unity.BoundingBoxFollower::get_CurrentAttachment()
extern "C"  BoundingBoxAttachment_t3933059536 * BoundingBoxFollower_get_CurrentAttachment_m3742352399 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Unity.BoundingBoxFollower::get_CurrentAttachmentName()
extern "C"  String_t* BoundingBoxFollower_get_CurrentAttachmentName_m2857350057 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.BoundingBoxFollower::get_CurrentCollider()
extern "C"  PolygonCollider2D_t2156524054 * BoundingBoxFollower_get_CurrentCollider_m190638102 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.BoundingBoxFollower::get_IsTrigger()
extern "C"  bool BoundingBoxFollower_get_IsTrigger_m3708236545 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::OnEnable()
extern "C"  void BoundingBoxFollower_OnEnable_m3136999260 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::OnDisable()
extern "C"  void BoundingBoxFollower_OnDisable_m3198633809 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::Start()
extern "C"  void BoundingBoxFollower_Start_m4241527018 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::HandleRebuild(Spine.Unity.SkeletonRenderer)
extern "C"  void BoundingBoxFollower_HandleRebuild_m2186478023 (BoundingBoxFollower_t467474383 * __this, SkeletonRenderer_t3766155010 * ___renderer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::ClearColliders()
extern "C"  void BoundingBoxFollower_ClearColliders_m71522188 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::LateUpdate()
extern "C"  void BoundingBoxFollower_LateUpdate_m3694376105 (BoundingBoxFollower_t467474383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::MatchAttachment(Spine.Attachment)
extern "C"  void BoundingBoxFollower_MatchAttachment_m281729794 (BoundingBoxFollower_t467474383 * __this, Attachment_t2849733407 * ___attachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
