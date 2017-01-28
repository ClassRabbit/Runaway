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

// Spine.ScaleTimeline
struct ScaleTimeline_t3557798001;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.ScaleTimeline::.ctor(System.Int32)
extern "C"  void ScaleTimeline__ctor_m2173780764 (ScaleTimeline_t3557798001 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ScaleTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void ScaleTimeline_Apply_m2547884059 (ScaleTimeline_t3557798001 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
