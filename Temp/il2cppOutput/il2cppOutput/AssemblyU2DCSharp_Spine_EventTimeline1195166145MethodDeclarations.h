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

// Spine.EventTimeline
struct EventTimeline_t1195166145;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Event[]
struct EventU5BU5D_t3124937249;
// Spine.Event
struct Event_t365432928;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.EventTimeline::.ctor(System.Int32)
extern "C"  void EventTimeline__ctor_m3582467020 (EventTimeline_t1195166145 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.EventTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* EventTimeline_get_Frames_m1881417582 (EventTimeline_t1195166145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::set_Frames(System.Single[])
extern "C"  void EventTimeline_set_Frames_m2203776317 (EventTimeline_t1195166145 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Event[] Spine.EventTimeline::get_Events()
extern "C"  EventU5BU5D_t3124937249* EventTimeline_get_Events_m3065273481 (EventTimeline_t1195166145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::set_Events(Spine.Event[])
extern "C"  void EventTimeline_set_Events_m893595266 (EventTimeline_t1195166145 * __this, EventU5BU5D_t3124937249* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.EventTimeline::get_FrameCount()
extern "C"  int32_t EventTimeline_get_FrameCount_m2397700358 (EventTimeline_t1195166145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::SetFrame(System.Int32,Spine.Event)
extern "C"  void EventTimeline_SetFrame_m2008178338 (EventTimeline_t1195166145 * __this, int32_t ___frameIndex0, Event_t365432928 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void EventTimeline_Apply_m3782075755 (EventTimeline_t1195166145 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
