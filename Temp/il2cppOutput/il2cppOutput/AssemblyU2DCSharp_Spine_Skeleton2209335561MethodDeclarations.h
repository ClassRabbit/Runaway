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
// Spine.SkeletonData
struct SkeletonData_t3387199699;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3025422258;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t2788772027;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_t3025925868;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_t2496032397;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_t2012139280;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t326730273;
// Spine.Skin
struct Skin_t1650992057;
// Spine.Bone
struct Bone_t1650489600;
// Spine.Attachment
struct Attachment_t2849733407;
// System.String
struct String_t;
// Spine.Slot
struct Slot_t1650993210;
// Spine.IkConstraint
struct IkConstraint_t1121099739;
// Spine.TransformConstraint
struct TransformConstraint_t3246764911;
// Spine.PathConstraint
struct PathConstraint_t637206622;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData3387199699.h"
#include "AssemblyU2DCSharp_Spine_Skin1650992057.h"
#include "AssemblyU2DCSharp_Spine_Bone1650489600.h"
#include "AssemblyU2DCSharp_Spine_Attachment2849733407.h"
#include "mscorlib_System_String7231557.h"

// System.Void Spine.Skeleton::.ctor(Spine.SkeletonData)
extern "C"  void Skeleton__ctor_m652989985 (Skeleton_t2209335561 * __this, SkeletonData_t3387199699 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.Skeleton::get_Data()
extern "C"  SkeletonData_t3387199699 * Skeleton_get_Data_m427316911 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::get_Bones()
extern "C"  ExposedList_1_t3025422258 * Skeleton_get_Bones_m3299938667 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::get_UpdateCacheList()
extern "C"  ExposedList_1_t2788772027 * Skeleton_get_UpdateCacheList_m1786540298 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::get_Slots()
extern "C"  ExposedList_1_t3025925868 * Skeleton_get_Slots_m616231671 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::get_DrawOrder()
extern "C"  ExposedList_1_t3025925868 * Skeleton_get_DrawOrder_m3306655596 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::get_IkConstraints()
extern "C"  ExposedList_1_t2496032397 * Skeleton_get_IkConstraints_m168078261 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::get_PathConstraints()
extern "C"  ExposedList_1_t2012139280 * Skeleton_get_PathConstraints_m338947183 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::get_TransformConstraints()
extern "C"  ExposedList_1_t326730273 * Skeleton_get_TransformConstraints_m4210690425 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Skeleton::get_Skin()
extern "C"  Skin_t1650992057 * Skeleton_get_Skin_m937084444 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_Skin(Spine.Skin)
extern "C"  void Skeleton_set_Skin_m1281230291 (Skeleton_t2209335561 * __this, Skin_t1650992057 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_R()
extern "C"  float Skeleton_get_R_m2806240318 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_R(System.Single)
extern "C"  void Skeleton_set_R_m3071207381 (Skeleton_t2209335561 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_G()
extern "C"  float Skeleton_get_G_m2806229747 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_G(System.Single)
extern "C"  void Skeleton_set_G_m97148736 (Skeleton_t2209335561 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_B()
extern "C"  float Skeleton_get_B_m2806224942 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_B(System.Single)
extern "C"  void Skeleton_set_B_m2649819621 (Skeleton_t2209335561 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_A()
extern "C"  float Skeleton_get_A_m2806223981 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_A(System.Single)
extern "C"  void Skeleton_set_A_m3160353798 (Skeleton_t2209335561 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_Time()
extern "C"  float Skeleton_get_Time_m3581275491 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_Time(System.Single)
extern "C"  void Skeleton_set_Time_m995165824 (Skeleton_t2209335561 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_X()
extern "C"  float Skeleton_get_X_m2806246084 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_X(System.Single)
extern "C"  void Skeleton_set_X_m8002319 (Skeleton_t2209335561 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_Y()
extern "C"  float Skeleton_get_Y_m2806247045 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_Y(System.Single)
extern "C"  void Skeleton_set_Y_m3792435438 (Skeleton_t2209335561 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Skeleton::get_FlipX()
extern "C"  bool Skeleton_get_FlipX_m955621039 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_FlipX(System.Boolean)
extern "C"  void Skeleton_set_FlipX_m460711462 (Skeleton_t2209335561 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Skeleton::get_FlipY()
extern "C"  bool Skeleton_get_FlipY_m955622000 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_FlipY(System.Boolean)
extern "C"  void Skeleton_set_FlipY_m1814021159 (Skeleton_t2209335561 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Skeleton::get_RootBone()
extern "C"  Bone_t1650489600 * Skeleton_get_RootBone_m2819736574 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::UpdateCache()
extern "C"  void Skeleton_UpdateCache_m3605907706 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortPathConstraintAttachment(Spine.Skin,System.Int32,Spine.Bone)
extern "C"  void Skeleton_SortPathConstraintAttachment_m1083276988 (Skeleton_t2209335561 * __this, Skin_t1650992057 * ___skin0, int32_t ___slotIndex1, Bone_t1650489600 * ___slotBone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortPathConstraintAttachment(Spine.Attachment,Spine.Bone)
extern "C"  void Skeleton_SortPathConstraintAttachment_m3681580577 (Skeleton_t2209335561 * __this, Attachment_t2849733407 * ___attachment0, Bone_t1650489600 * ___slotBone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortBone(Spine.Bone)
extern "C"  void Skeleton_SortBone_m3894440884 (Skeleton_t2209335561 * __this, Bone_t1650489600 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortReset(Spine.ExposedList`1<Spine.Bone>)
extern "C"  void Skeleton_SortReset_m1105204393 (Skeleton_t2209335561 * __this, ExposedList_1_t3025422258 * ___bones0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::UpdateWorldTransform()
extern "C"  void Skeleton_UpdateWorldTransform_m2487614308 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetToSetupPose()
extern "C"  void Skeleton_SetToSetupPose_m2356687218 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetBonesToSetupPose()
extern "C"  void Skeleton_SetBonesToSetupPose_m2650451143 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetSlotsToSetupPose()
extern "C"  void Skeleton_SetSlotsToSetupPose_m3743035009 (Skeleton_t2209335561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Skeleton::FindBone(System.String)
extern "C"  Bone_t1650489600 * Skeleton_FindBone_m2568164470 (Skeleton_t2209335561 * __this, String_t* ___boneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Skeleton::FindBoneIndex(System.String)
extern "C"  int32_t Skeleton_FindBoneIndex_m1478210394 (Skeleton_t2209335561 * __this, String_t* ___boneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Slot Spine.Skeleton::FindSlot(System.String)
extern "C"  Slot_t1650993210 * Skeleton_FindSlot_m43661110 (Skeleton_t2209335561 * __this, String_t* ___slotName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Skeleton::FindSlotIndex(System.String)
extern "C"  int32_t Skeleton_FindSlotIndex_m2031976852 (Skeleton_t2209335561 * __this, String_t* ___slotName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetSkin(System.String)
extern "C"  void Skeleton_SetSkin_m3396853442 (Skeleton_t2209335561 * __this, String_t* ___skinName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetSkin(Spine.Skin)
extern "C"  void Skeleton_SetSkin_m3714687000 (Skeleton_t2209335561 * __this, Skin_t1650992057 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Skeleton::GetAttachment(System.String,System.String)
extern "C"  Attachment_t2849733407 * Skeleton_GetAttachment_m2681965203 (Skeleton_t2209335561 * __this, String_t* ___slotName0, String_t* ___attachmentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Skeleton::GetAttachment(System.Int32,System.String)
extern "C"  Attachment_t2849733407 * Skeleton_GetAttachment_m533388888 (Skeleton_t2209335561 * __this, int32_t ___slotIndex0, String_t* ___attachmentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetAttachment(System.String,System.String)
extern "C"  void Skeleton_SetAttachment_m1640102680 (Skeleton_t2209335561 * __this, String_t* ___slotName0, String_t* ___attachmentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.IkConstraint Spine.Skeleton::FindIkConstraint(System.String)
extern "C"  IkConstraint_t1121099739 * Skeleton_FindIkConstraint_m3472355862 (Skeleton_t2209335561 * __this, String_t* ___constraintName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TransformConstraint Spine.Skeleton::FindTransformConstraint(System.String)
extern "C"  TransformConstraint_t3246764911 * Skeleton_FindTransformConstraint_m3165771238 (Skeleton_t2209335561 * __this, String_t* ___constraintName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PathConstraint Spine.Skeleton::FindPathConstraint(System.String)
extern "C"  PathConstraint_t637206622 * Skeleton_FindPathConstraint_m126400118 (Skeleton_t2209335561 * __this, String_t* ___constraintName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::Update(System.Single)
extern "C"  void Skeleton_Update_m3065263201 (Skeleton_t2209335561 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
