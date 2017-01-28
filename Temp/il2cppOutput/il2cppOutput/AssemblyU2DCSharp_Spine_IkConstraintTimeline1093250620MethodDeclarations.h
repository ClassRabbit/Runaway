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

// Spine.IkConstraintTimeline
struct IkConstraintTimeline_t1093250620;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.IkConstraintTimeline::.ctor(System.Int32)
extern "C"  void IkConstraintTimeline__ctor_m1539731297 (IkConstraintTimeline_t1093250620 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.IkConstraintTimeline::get_IkConstraintIndex()
extern "C"  int32_t IkConstraintTimeline_get_IkConstraintIndex_m1151895722 (IkConstraintTimeline_t1093250620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraintTimeline::set_IkConstraintIndex(System.Int32)
extern "C"  void IkConstraintTimeline_set_IkConstraintIndex_m4167481301 (IkConstraintTimeline_t1093250620 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.IkConstraintTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* IkConstraintTimeline_get_Frames_m2988221325 (IkConstraintTimeline_t1093250620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraintTimeline::set_Frames(System.Single[])
extern "C"  void IkConstraintTimeline_set_Frames_m1735058386 (IkConstraintTimeline_t1093250620 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraintTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Int32)
extern "C"  void IkConstraintTimeline_SetFrame_m3140868125 (IkConstraintTimeline_t1093250620 * __this, int32_t ___frameIndex0, float ___time1, float ___mix2, int32_t ___bendDirection3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraintTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void IkConstraintTimeline_Apply_m3677025270 (IkConstraintTimeline_t1093250620 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
