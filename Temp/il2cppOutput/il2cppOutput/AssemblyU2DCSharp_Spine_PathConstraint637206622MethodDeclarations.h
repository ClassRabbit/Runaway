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

// Spine.PathConstraint
struct PathConstraint_t637206622;
// Spine.PathConstraintData
struct PathConstraintData_t1516901800;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3025422258;
// Spine.Slot
struct Slot_t1650993210;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.PathAttachment
struct PathAttachment_t3159049124;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_PathConstraintData1516901800.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "AssemblyU2DCSharp_Spine_Slot1650993210.h"
#include "AssemblyU2DCSharp_Spine_PathAttachment3159049124.h"

// System.Void Spine.PathConstraint::.ctor(Spine.PathConstraintData,Spine.Skeleton)
extern "C"  void PathConstraint__ctor_m2683016311 (PathConstraint_t637206622 * __this, PathConstraintData_t1516901800 * ___data0, Skeleton_t2209335561 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraint::get_Position()
extern "C"  float PathConstraint_get_Position_m2652319892 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_Position(System.Single)
extern "C"  void PathConstraint_set_Position_m2501535215 (PathConstraint_t637206622 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraint::get_Spacing()
extern "C"  float PathConstraint_get_Spacing_m1862528666 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_Spacing(System.Single)
extern "C"  void PathConstraint_set_Spacing_m351743481 (PathConstraint_t637206622 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraint::get_RotateMix()
extern "C"  float PathConstraint_get_RotateMix_m2602546264 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_RotateMix(System.Single)
extern "C"  void PathConstraint_set_RotateMix_m2906497787 (PathConstraint_t637206622 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraint::get_TranslateMix()
extern "C"  float PathConstraint_get_TranslateMix_m3657176921 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_TranslateMix(System.Single)
extern "C"  void PathConstraint_set_TranslateMix_m2814212938 (PathConstraint_t637206622 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.PathConstraint::get_Bones()
extern "C"  ExposedList_1_t3025422258 * PathConstraint_get_Bones_m2371567414 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Slot Spine.PathConstraint::get_Target()
extern "C"  Slot_t1650993210 * PathConstraint_get_Target_m636137060 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_Target(Spine.Slot)
extern "C"  void PathConstraint_set_Target_m127205019 (PathConstraint_t637206622 * __this, Slot_t1650993210 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PathConstraintData Spine.PathConstraint::get_Data()
extern "C"  PathConstraintData_t1516901800 * PathConstraint_get_Data_m3279749711 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::Apply()
extern "C"  void PathConstraint_Apply_m442170682 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::Update()
extern "C"  void PathConstraint_Update_m965058719 (PathConstraint_t637206622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.PathConstraint::ComputeWorldPositions(Spine.PathAttachment,System.Int32,System.Boolean,System.Boolean,System.Boolean)
extern "C"  SingleU5BU5D_t2316563989* PathConstraint_ComputeWorldPositions_m3041889892 (PathConstraint_t637206622 * __this, PathAttachment_t3159049124 * ___path0, int32_t ___spacesCount1, bool ___tangents2, bool ___percentPosition3, bool ___percentSpacing4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::AddBeforePosition(System.Single,System.Single[],System.Int32,System.Single[],System.Int32)
extern "C"  void PathConstraint_AddBeforePosition_m1563454838 (PathConstraint_t637206622 * __this, float ___p0, SingleU5BU5D_t2316563989* ___temp1, int32_t ___i2, SingleU5BU5D_t2316563989* ___output3, int32_t ___o4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::AddAfterPosition(System.Single,System.Single[],System.Int32,System.Single[],System.Int32)
extern "C"  void PathConstraint_AddAfterPosition_m2173470289 (PathConstraint_t637206622 * __this, float ___p0, SingleU5BU5D_t2316563989* ___temp1, int32_t ___i2, SingleU5BU5D_t2316563989* ___output3, int32_t ___o4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::AddCurvePosition(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single[],System.Int32,System.Boolean)
extern "C"  void PathConstraint_AddCurvePosition_m1451572687 (PathConstraint_t637206622 * __this, float ___p0, float ___x11, float ___y12, float ___cx13, float ___cy14, float ___cx25, float ___cy26, float ___x27, float ___y28, SingleU5BU5D_t2316563989* ___output9, int32_t ___o10, bool ___tangents11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
