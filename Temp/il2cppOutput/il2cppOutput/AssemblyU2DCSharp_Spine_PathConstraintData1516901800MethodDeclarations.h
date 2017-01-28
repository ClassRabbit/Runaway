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

// Spine.PathConstraintData
struct PathConstraintData_t1516901800;
// System.String
struct String_t;
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t3526507516;
// Spine.SlotData
struct SlotData_t3389517700;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_SlotData3389517700.h"
#include "AssemblyU2DCSharp_Spine_PositionMode1978314152.h"
#include "AssemblyU2DCSharp_Spine_SpacingMode2053106316.h"
#include "AssemblyU2DCSharp_Spine_RotateMode439322522.h"

// System.Void Spine.PathConstraintData::.ctor(System.String)
extern "C"  void PathConstraintData__ctor_m804949854 (PathConstraintData_t1516901800 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.BoneData> Spine.PathConstraintData::get_Bones()
extern "C"  ExposedList_1_t3526507516 * PathConstraintData_get_Bones_m2963284514 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SlotData Spine.PathConstraintData::get_Target()
extern "C"  SlotData_t3389517700 * PathConstraintData_get_Target_m1396030244 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_Target(Spine.SlotData)
extern "C"  void PathConstraintData_set_Target_m246446427 (PathConstraintData_t1516901800 * __this, SlotData_t3389517700 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PositionMode Spine.PathConstraintData::get_PositionMode()
extern "C"  int32_t PathConstraintData_get_PositionMode_m2705647003 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_PositionMode(Spine.PositionMode)
extern "C"  void PathConstraintData_set_PositionMode_m2527538578 (PathConstraintData_t1516901800 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SpacingMode Spine.PathConstraintData::get_SpacingMode()
extern "C"  int32_t PathConstraintData_get_SpacingMode_m1499554151 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_SpacingMode(Spine.SpacingMode)
extern "C"  void PathConstraintData_set_SpacingMode_m4064046284 (PathConstraintData_t1516901800 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RotateMode Spine.PathConstraintData::get_RotateMode()
extern "C"  int32_t PathConstraintData_get_RotateMode_m4118433755 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_RotateMode(Spine.RotateMode)
extern "C"  void PathConstraintData_set_RotateMode_m3193172882 (PathConstraintData_t1516901800 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraintData::get_OffsetRotation()
extern "C"  float PathConstraintData_get_OffsetRotation_m192465638 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_OffsetRotation(System.Single)
extern "C"  void PathConstraintData_set_OffsetRotation_m3411343581 (PathConstraintData_t1516901800 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraintData::get_Position()
extern "C"  float PathConstraintData_get_Position_m3585243102 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_Position(System.Single)
extern "C"  void PathConstraintData_set_Position_m478167269 (PathConstraintData_t1516901800 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraintData::get_Spacing()
extern "C"  float PathConstraintData_get_Spacing_m2862454288 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_Spacing(System.Single)
extern "C"  void PathConstraintData_set_Spacing_m9378883 (PathConstraintData_t1516901800 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraintData::get_RotateMix()
extern "C"  float PathConstraintData_get_RotateMix_m1458394702 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_RotateMix(System.Single)
extern "C"  void PathConstraintData_set_RotateMix_m311633605 (PathConstraintData_t1516901800 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraintData::get_TranslateMix()
extern "C"  float PathConstraintData_get_TranslateMix_m3098454435 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintData::set_TranslateMix(System.Single)
extern "C"  void PathConstraintData_set_TranslateMix_m36760384 (PathConstraintData_t1516901800 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.PathConstraintData::get_Name()
extern "C"  String_t* PathConstraintData_get_Name_m1566810263 (PathConstraintData_t1516901800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
