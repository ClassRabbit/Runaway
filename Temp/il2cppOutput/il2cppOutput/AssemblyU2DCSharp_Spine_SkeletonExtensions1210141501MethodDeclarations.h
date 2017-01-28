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

// Spine.Skeleton
struct Skeleton_t2209335561;
// System.String
struct String_t;
// Spine.Slot
struct Slot_t1650993210;
// Spine.Animation
struct Animation_t3189667530;
// Spine.Timeline
struct Timeline_t2399905021;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Slot1650993210.h"
#include "AssemblyU2DCSharp_Spine_Animation3189667530.h"

// System.Void Spine.SkeletonExtensions::PoseWithAnimation(Spine.Skeleton,System.String,System.Single,System.Boolean)
extern "C"  void SkeletonExtensions_PoseWithAnimation_m2437726746 (Il2CppObject * __this /* static, unused */, Skeleton_t2209335561 * ___skeleton0, String_t* ___animationName1, float ___time2, bool ___loop3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetDrawOrderToSetupPose(Spine.Skeleton)
extern "C"  void SkeletonExtensions_SetDrawOrderToSetupPose_m3614827456 (Il2CppObject * __this /* static, unused */, Skeleton_t2209335561 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetColorToSetupPose(Spine.Slot)
extern "C"  void SkeletonExtensions_SetColorToSetupPose_m3744275990 (Il2CppObject * __this /* static, unused */, Slot_t1650993210 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetAttachmentToSetupPose(Spine.Slot)
extern "C"  void SkeletonExtensions_SetAttachmentToSetupPose_m1438386554 (Il2CppObject * __this /* static, unused */, Slot_t1650993210 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetSlotAttachmentToSetupPose(Spine.Skeleton,System.Int32)
extern "C"  void SkeletonExtensions_SetSlotAttachmentToSetupPose_m3888473290 (Il2CppObject * __this /* static, unused */, Skeleton_t2209335561 * ___skeleton0, int32_t ___slotIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetKeyedItemsToSetupPose(Spine.Animation,Spine.Skeleton)
extern "C"  void SkeletonExtensions_SetKeyedItemsToSetupPose_m380463609 (Il2CppObject * __this /* static, unused */, Animation_t3189667530 * ___animation0, Skeleton_t2209335561 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetToSetupPose(Spine.Timeline,Spine.Skeleton)
extern "C"  void SkeletonExtensions_SetToSetupPose_m361897492 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___timeline0, Skeleton_t2209335561 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
