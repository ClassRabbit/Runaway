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

// Spine.IkConstraint
struct IkConstraint_t1121099739;
// Spine.IkConstraintData
struct IkConstraintData_t4214992549;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3025422258;
// Spine.Bone
struct Bone_t1650489600;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_IkConstraintData4214992549.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "AssemblyU2DCSharp_Spine_Bone1650489600.h"

// System.Void Spine.IkConstraint::.ctor(Spine.IkConstraintData,Spine.Skeleton)
extern "C"  void IkConstraint__ctor_m485954801 (IkConstraint_t1121099739 * __this, IkConstraintData_t4214992549 * ___data0, Skeleton_t2209335561 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.IkConstraintData Spine.IkConstraint::get_Data()
extern "C"  IkConstraintData_t4214992549 * IkConstraint_get_Data_m2893182575 (IkConstraint_t1121099739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.IkConstraint::get_Bones()
extern "C"  ExposedList_1_t3025422258 * IkConstraint_get_Bones_m3371631065 (IkConstraint_t1121099739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.IkConstraint::get_Target()
extern "C"  Bone_t1650489600 * IkConstraint_get_Target_m290620955 (IkConstraint_t1121099739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::set_Target(Spine.Bone)
extern "C"  void IkConstraint_set_Target_m1965594898 (IkConstraint_t1121099739 * __this, Bone_t1650489600 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.IkConstraint::get_BendDirection()
extern "C"  int32_t IkConstraint_get_BendDirection_m3489441662 (IkConstraint_t1121099739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::set_BendDirection(System.Int32)
extern "C"  void IkConstraint_set_BendDirection_m4021838761 (IkConstraint_t1121099739 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.IkConstraint::get_Mix()
extern "C"  float IkConstraint_get_Mix_m1031326934 (IkConstraint_t1121099739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::set_Mix(System.Single)
extern "C"  void IkConstraint_set_Mix_m2296947261 (IkConstraint_t1121099739 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::Update()
extern "C"  void IkConstraint_Update_m2466570716 (IkConstraint_t1121099739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::Apply()
extern "C"  void IkConstraint_Apply_m629153885 (IkConstraint_t1121099739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.IkConstraint::ToString()
extern "C"  String_t* IkConstraint_ToString_m1832873250 (IkConstraint_t1121099739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::Apply(Spine.Bone,System.Single,System.Single,System.Single)
extern "C"  void IkConstraint_Apply_m3042405501 (Il2CppObject * __this /* static, unused */, Bone_t1650489600 * ___bone0, float ___targetX1, float ___targetY2, float ___alpha3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::Apply(Spine.Bone,Spine.Bone,System.Single,System.Single,System.Int32,System.Single)
extern "C"  void IkConstraint_Apply_m2303809001 (Il2CppObject * __this /* static, unused */, Bone_t1650489600 * ___parent0, Bone_t1650489600 * ___child1, float ___targetX2, float ___targetY3, int32_t ___bendDir4, float ___alpha5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
