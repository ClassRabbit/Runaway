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

// Spine.DrawOrderTimeline
struct DrawOrderTimeline_t1733875985;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t1820556512;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.DrawOrderTimeline::.ctor(System.Int32)
extern "C"  void DrawOrderTimeline__ctor_m2424572540 (DrawOrderTimeline_t1733875985 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.DrawOrderTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* DrawOrderTimeline_get_Frames_m669131710 (DrawOrderTimeline_t1733875985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::set_Frames(System.Single[])
extern "C"  void DrawOrderTimeline_set_Frames_m2710909933 (DrawOrderTimeline_t1733875985 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[][] Spine.DrawOrderTimeline::get_DrawOrders()
extern "C"  Int32U5BU5DU5BU5D_t1820556512* DrawOrderTimeline_get_DrawOrders_m3666815873 (DrawOrderTimeline_t1733875985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::set_DrawOrders(System.Int32[][])
extern "C"  void DrawOrderTimeline_set_DrawOrders_m1853744524 (DrawOrderTimeline_t1733875985 * __this, Int32U5BU5DU5BU5D_t1820556512* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DrawOrderTimeline::get_FrameCount()
extern "C"  int32_t DrawOrderTimeline_get_FrameCount_m527001430 (DrawOrderTimeline_t1733875985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::SetFrame(System.Int32,System.Single,System.Int32[])
extern "C"  void DrawOrderTimeline_SetFrame_m1247321051 (DrawOrderTimeline_t1733875985 * __this, int32_t ___frameIndex0, float ___time1, Int32U5BU5D_t3230847821* ___drawOrder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void DrawOrderTimeline_Apply_m3642545339 (DrawOrderTimeline_t1733875985 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
