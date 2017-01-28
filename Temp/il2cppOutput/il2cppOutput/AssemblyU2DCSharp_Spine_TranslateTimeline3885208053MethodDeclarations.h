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

// Spine.TranslateTimeline
struct TranslateTimeline_t3885208053;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.TranslateTimeline::.ctor(System.Int32)
extern "C"  void TranslateTimeline__ctor_m1170638872 (TranslateTimeline_t3885208053 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TranslateTimeline::get_BoneIndex()
extern "C"  int32_t TranslateTimeline_get_BoneIndex_m3429958648 (TranslateTimeline_t3885208053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TranslateTimeline::set_BoneIndex(System.Int32)
extern "C"  void TranslateTimeline_set_BoneIndex_m268531527 (TranslateTimeline_t3885208053 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.TranslateTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* TranslateTimeline_get_Frames_m1986362786 (TranslateTimeline_t3885208053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TranslateTimeline::set_Frames(System.Single[])
extern "C"  void TranslateTimeline_set_Frames_m3099481481 (TranslateTimeline_t3885208053 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TranslateTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single)
extern "C"  void TranslateTimeline_SetFrame_m3548142856 (TranslateTimeline_t3885208053 * __this, int32_t ___frameIndex0, float ___time1, float ___x2, float ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TranslateTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void TranslateTimeline_Apply_m818099359 (TranslateTimeline_t3885208053 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
