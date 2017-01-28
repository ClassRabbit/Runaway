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

// Spine.PathConstraintSpacingTimeline
struct PathConstraintSpacingTimeline_t3184722984;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.PathConstraintSpacingTimeline::.ctor(System.Int32)
extern "C"  void PathConstraintSpacingTimeline__ctor_m3625805765 (PathConstraintSpacingTimeline_t3184722984 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintSpacingTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void PathConstraintSpacingTimeline_Apply_m1445649938 (PathConstraintSpacingTimeline_t3184722984 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___events3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
