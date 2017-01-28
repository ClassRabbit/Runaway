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

// Spine.PathConstraintPositionTimeline
struct PathConstraintPositionTimeline_t1949311752;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.PathConstraintPositionTimeline::.ctor(System.Int32)
extern "C"  void PathConstraintPositionTimeline__ctor_m3626431509 (PathConstraintPositionTimeline_t1949311752 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.PathConstraintPositionTimeline::get_PathConstraintIndex()
extern "C"  int32_t PathConstraintPositionTimeline_get_PathConstraintIndex_m3750906299 (PathConstraintPositionTimeline_t1949311752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintPositionTimeline::set_PathConstraintIndex(System.Int32)
extern "C"  void PathConstraintPositionTimeline_set_PathConstraintIndex_m3559264102 (PathConstraintPositionTimeline_t1949311752 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.PathConstraintPositionTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* PathConstraintPositionTimeline_get_Frames_m234124505 (PathConstraintPositionTimeline_t1949311752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintPositionTimeline::set_Frames(System.Single[])
extern "C"  void PathConstraintPositionTimeline_set_Frames_m220558470 (PathConstraintPositionTimeline_t1949311752 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintPositionTimeline::SetFrame(System.Int32,System.Single,System.Single)
extern "C"  void PathConstraintPositionTimeline_SetFrame_m3061600198 (PathConstraintPositionTimeline_t1949311752 * __this, int32_t ___frameIndex0, float ___time1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintPositionTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void PathConstraintPositionTimeline_Apply_m3184415682 (PathConstraintPositionTimeline_t1949311752 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___events3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
