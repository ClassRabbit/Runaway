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

// Spine.PathConstraintMixTimeline
struct PathConstraintMixTimeline_t3763089089;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.PathConstraintMixTimeline::.ctor(System.Int32)
extern "C"  void PathConstraintMixTimeline__ctor_m3875715788 (PathConstraintMixTimeline_t3763089089 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.PathConstraintMixTimeline::get_PathConstraintIndex()
extern "C"  int32_t PathConstraintMixTimeline_get_PathConstraintIndex_m1586293646 (PathConstraintMixTimeline_t3763089089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintMixTimeline::set_PathConstraintIndex(System.Int32)
extern "C"  void PathConstraintMixTimeline_set_PathConstraintIndex_m3467130461 (PathConstraintMixTimeline_t3763089089 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.PathConstraintMixTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* PathConstraintMixTimeline_get_Frames_m3795203950 (PathConstraintMixTimeline_t3763089089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintMixTimeline::set_Frames(System.Single[])
extern "C"  void PathConstraintMixTimeline_set_Frames_m4224095293 (PathConstraintMixTimeline_t3763089089 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintMixTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single)
extern "C"  void PathConstraintMixTimeline_SetFrame_m3313041108 (PathConstraintMixTimeline_t3763089089 * __this, int32_t ___frameIndex0, float ___time1, float ___rotateMix2, float ___translateMix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintMixTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void PathConstraintMixTimeline_Apply_m669361771 (PathConstraintMixTimeline_t3763089089 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___events3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
