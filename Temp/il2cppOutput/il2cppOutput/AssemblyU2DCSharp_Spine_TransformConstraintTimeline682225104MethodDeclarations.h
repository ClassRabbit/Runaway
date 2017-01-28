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

// Spine.TransformConstraintTimeline
struct TransformConstraintTimeline_t682225104;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.TransformConstraintTimeline::.ctor(System.Int32)
extern "C"  void TransformConstraintTimeline__ctor_m3243192605 (TransformConstraintTimeline_t682225104 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TransformConstraintTimeline::get_TransformConstraintIndex()
extern "C"  int32_t TransformConstraintTimeline_get_TransformConstraintIndex_m1566447836 (TransformConstraintTimeline_t682225104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraintTimeline::set_TransformConstraintIndex(System.Int32)
extern "C"  void TransformConstraintTimeline_set_TransformConstraintIndex_m3508096239 (TransformConstraintTimeline_t682225104 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.TransformConstraintTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* TransformConstraintTimeline_get_Frames_m3130670269 (TransformConstraintTimeline_t682225104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraintTimeline::set_Frames(System.Single[])
extern "C"  void TransformConstraintTimeline_set_Frames_m1055140238 (TransformConstraintTimeline_t682225104 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraintTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void TransformConstraintTimeline_SetFrame_m773977773 (TransformConstraintTimeline_t682225104 * __this, int32_t ___frameIndex0, float ___time1, float ___rotateMix2, float ___translateMix3, float ___scaleMix4, float ___shearMix5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraintTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void TransformConstraintTimeline_Apply_m1310966714 (TransformConstraintTimeline_t682225104 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
