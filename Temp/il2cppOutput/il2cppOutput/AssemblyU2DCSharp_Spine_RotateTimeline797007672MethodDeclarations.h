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

// Spine.RotateTimeline
struct RotateTimeline_t797007672;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.RotateTimeline::.ctor(System.Int32)
extern "C"  void RotateTimeline__ctor_m586507749 (RotateTimeline_t797007672 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.RotateTimeline::get_BoneIndex()
extern "C"  int32_t RotateTimeline_get_BoneIndex_m131859177 (RotateTimeline_t797007672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.RotateTimeline::set_BoneIndex(System.Int32)
extern "C"  void RotateTimeline_set_BoneIndex_m2916104212 (RotateTimeline_t797007672 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.RotateTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* RotateTimeline_get_Frames_m888471817 (RotateTimeline_t797007672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.RotateTimeline::set_Frames(System.Single[])
extern "C"  void RotateTimeline_set_Frames_m1452086870 (RotateTimeline_t797007672 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.RotateTimeline::SetFrame(System.Int32,System.Single,System.Single)
extern "C"  void RotateTimeline_SetFrame_m2236851190 (RotateTimeline_t797007672 * __this, int32_t ___frameIndex0, float ___time1, float ___degrees2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.RotateTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void RotateTimeline_Apply_m1205457906 (RotateTimeline_t797007672 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
