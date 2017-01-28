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

// Spine.TransformConstraint
struct TransformConstraint_t3246764911;
// Spine.TransformConstraintData
struct TransformConstraintData_t4233287737;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3025422258;
// Spine.Bone
struct Bone_t1650489600;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_TransformConstraintData4233287737.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "AssemblyU2DCSharp_Spine_Bone1650489600.h"

// System.Void Spine.TransformConstraint::.ctor(Spine.TransformConstraintData,Spine.Skeleton)
extern "C"  void TransformConstraint__ctor_m2616468881 (TransformConstraint_t3246764911 * __this, TransformConstraintData_t4233287737 * ___data0, Skeleton_t2209335561 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TransformConstraintData Spine.TransformConstraint::get_Data()
extern "C"  TransformConstraintData_t4233287737 * TransformConstraint_get_Data_m3883003839 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.TransformConstraint::get_Bones()
extern "C"  ExposedList_1_t3025422258 * TransformConstraint_get_Bones_m3480928077 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.TransformConstraint::get_Target()
extern "C"  Bone_t1650489600 * TransformConstraint_get_Target_m2339658947 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_Target(Spine.Bone)
extern "C"  void TransformConstraint_set_Target_m2816782806 (TransformConstraint_t3246764911 * __this, Bone_t1650489600 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_RotateMix()
extern "C"  float TransformConstraint_get_RotateMix_m2597759823 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_RotateMix(System.Single)
extern "C"  void TransformConstraint_set_RotateMix_m1939102076 (TransformConstraint_t3246764911 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_TranslateMix()
extern "C"  float TransformConstraint_get_TranslateMix_m2798233858 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_TranslateMix(System.Single)
extern "C"  void TransformConstraint_set_TranslateMix_m2359142697 (TransformConstraint_t3246764911 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_ScaleMix()
extern "C"  float TransformConstraint_get_ScaleMix_m1377357830 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_ScaleMix(System.Single)
extern "C"  void TransformConstraint_set_ScaleMix_m1727899813 (TransformConstraint_t3246764911 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_ShearMix()
extern "C"  float TransformConstraint_get_ShearMix_m2805867215 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_ShearMix(System.Single)
extern "C"  void TransformConstraint_set_ShearMix_m3081823356 (TransformConstraint_t3246764911 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::Apply()
extern "C"  void TransformConstraint_Apply_m1918244889 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::Update()
extern "C"  void TransformConstraint_Update_m3773686176 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.TransformConstraint::ToString()
extern "C"  String_t* TransformConstraint_ToString_m3957448896 (TransformConstraint_t3246764911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
