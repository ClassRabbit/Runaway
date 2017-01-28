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

// Spine.TrackEntry
struct TrackEntry_t1654022115;
// Spine.AnimationState/StartEndDelegate
struct StartEndDelegate_t3416038005;
// Spine.AnimationState/EventDelegate
struct EventDelegate_t3743540456;
// Spine.AnimationState/CompleteDelegate
struct CompleteDelegate_t1469797013;
// Spine.Animation
struct Animation_t3189667530;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.Event
struct Event_t365432928;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_StartEndDel3416038005.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_EventDelega3743540456.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_CompleteDel1469797013.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"

// System.Void Spine.TrackEntry::.ctor()
extern "C"  void TrackEntry__ctor_m3580054089 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Start(Spine.AnimationState/StartEndDelegate)
extern "C"  void TrackEntry_add_Start_m2792939282 (TrackEntry_t1654022115 * __this, StartEndDelegate_t3416038005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Start(Spine.AnimationState/StartEndDelegate)
extern "C"  void TrackEntry_remove_Start_m2758621531 (TrackEntry_t1654022115 * __this, StartEndDelegate_t3416038005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_End(Spine.AnimationState/StartEndDelegate)
extern "C"  void TrackEntry_add_End_m2248204921 (TrackEntry_t1654022115 * __this, StartEndDelegate_t3416038005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_End(Spine.AnimationState/StartEndDelegate)
extern "C"  void TrackEntry_remove_End_m2359900930 (TrackEntry_t1654022115 * __this, StartEndDelegate_t3416038005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Event(Spine.AnimationState/EventDelegate)
extern "C"  void TrackEntry_add_Event_m3928205435 (TrackEntry_t1654022115 * __this, EventDelegate_t3743540456 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Event(Spine.AnimationState/EventDelegate)
extern "C"  void TrackEntry_remove_Event_m1715051218 (TrackEntry_t1654022115 * __this, EventDelegate_t3743540456 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Complete(Spine.AnimationState/CompleteDelegate)
extern "C"  void TrackEntry_add_Complete_m3838800075 (TrackEntry_t1654022115 * __this, CompleteDelegate_t1469797013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Complete(Spine.AnimationState/CompleteDelegate)
extern "C"  void TrackEntry_remove_Complete_m3680896482 (TrackEntry_t1654022115 * __this, CompleteDelegate_t1469797013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Animation Spine.TrackEntry::get_Animation()
extern "C"  Animation_t3189667530 * TrackEntry_get_Animation_m3572371976 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_Delay()
extern "C"  float TrackEntry_get_Delay_m798820341 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Delay(System.Single)
extern "C"  void TrackEntry_set_Delay_m711304318 (TrackEntry_t1654022115 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_Time()
extern "C"  float TrackEntry_get_Time_m3951243325 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Time(System.Single)
extern "C"  void TrackEntry_set_Time_m2436584166 (TrackEntry_t1654022115 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_LastTime()
extern "C"  float TrackEntry_get_LastTime_m2901047027 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_LastTime(System.Single)
extern "C"  void TrackEntry_set_LastTime_m3249551344 (TrackEntry_t1654022115 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_EndTime()
extern "C"  float TrackEntry_get_EndTime_m965202746 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_EndTime(System.Single)
extern "C"  void TrackEntry_set_EndTime_m1193379673 (TrackEntry_t1654022115 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_TimeScale()
extern "C"  float TrackEntry_get_TimeScale_m1782642159 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_TimeScale(System.Single)
extern "C"  void TrackEntry_set_TimeScale_m3000445124 (TrackEntry_t1654022115 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_Mix()
extern "C"  float TrackEntry_get_Mix_m3584686798 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Mix(System.Single)
extern "C"  void TrackEntry_set_Mix_m4258194501 (TrackEntry_t1654022115 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.TrackEntry::get_Loop()
extern "C"  bool TrackEntry_get_Loop_m2315284540 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Loop(System.Boolean)
extern "C"  void TrackEntry_set_Loop_m2230874483 (TrackEntry_t1654022115 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnStart(Spine.AnimationState,System.Int32)
extern "C"  void TrackEntry_OnStart_m3790853957 (TrackEntry_t1654022115 * __this, AnimationState_t964829161 * ___state0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnEnd(Spine.AnimationState,System.Int32)
extern "C"  void TrackEntry_OnEnd_m2594773612 (TrackEntry_t1654022115 * __this, AnimationState_t964829161 * ___state0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnEvent(Spine.AnimationState,System.Int32,Spine.Event)
extern "C"  void TrackEntry_OnEvent_m4266735370 (TrackEntry_t1654022115 * __this, AnimationState_t964829161 * ___state0, int32_t ___index1, Event_t365432928 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnComplete(Spine.AnimationState,System.Int32,System.Int32)
extern "C"  void TrackEntry_OnComplete_m4102990747 (TrackEntry_t1654022115 * __this, AnimationState_t964829161 * ___state0, int32_t ___index1, int32_t ___loopCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.TrackEntry::ToString()
extern "C"  String_t* TrackEntry_ToString_m2383534058 (TrackEntry_t1654022115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
