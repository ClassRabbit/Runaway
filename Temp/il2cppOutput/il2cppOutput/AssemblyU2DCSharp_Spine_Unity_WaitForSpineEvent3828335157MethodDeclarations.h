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

// Spine.Unity.WaitForSpineEvent
struct WaitForSpineEvent_t3828335157;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.EventData
struct EventData_t2102088874;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t3721178561;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Spine.Event
struct Event_t365432928;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "AssemblyU2DCSharp_Spine_EventData2102088874.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonAnimation3721178561.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"

// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.AnimationState,Spine.EventData,System.Boolean)
extern "C"  void WaitForSpineEvent__ctor_m2587289726 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, EventData_t2102088874 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.Unity.SkeletonAnimation,Spine.EventData,System.Boolean)
extern "C"  void WaitForSpineEvent__ctor_m2552410127 (WaitForSpineEvent_t3828335157 * __this, SkeletonAnimation_t3721178561 * ___skeletonAnimation0, EventData_t2102088874 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.AnimationState,System.String,System.Boolean)
extern "C"  void WaitForSpineEvent__ctor_m2099001877 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.Unity.SkeletonAnimation,System.String,System.Boolean)
extern "C"  void WaitForSpineEvent__ctor_m2076619238 (WaitForSpineEvent_t3828335157 * __this, SkeletonAnimation_t3721178561 * ___skeletonAnimation0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.MoveNext()
extern "C"  bool WaitForSpineEvent_System_Collections_IEnumerator_MoveNext_m1236430771 (WaitForSpineEvent_t3828335157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.Reset()
extern "C"  void WaitForSpineEvent_System_Collections_IEnumerator_Reset_m893710902 (WaitForSpineEvent_t3828335157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * WaitForSpineEvent_System_Collections_IEnumerator_get_Current_m1566956002 (WaitForSpineEvent_t3828335157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::Subscribe(Spine.AnimationState,Spine.EventData,System.Boolean)
extern "C"  void WaitForSpineEvent_Subscribe_m3409985558 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, EventData_t2102088874 * ___eventDataReference1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::SubscribeByName(Spine.AnimationState,System.String,System.Boolean)
extern "C"  void WaitForSpineEvent_SubscribeByName_m2096883979 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, String_t* ___eventName1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::HandleAnimationStateEventByName(Spine.AnimationState,System.Int32,Spine.Event)
extern "C"  void WaitForSpineEvent_HandleAnimationStateEventByName_m980330339 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, Event_t365432928 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::HandleAnimationStateEvent(Spine.AnimationState,System.Int32,Spine.Event)
extern "C"  void WaitForSpineEvent_HandleAnimationStateEvent_m31936197 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, Event_t365432928 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.WaitForSpineEvent::get_WillUnsubscribeAfterFiring()
extern "C"  bool WaitForSpineEvent_get_WillUnsubscribeAfterFiring_m2520711717 (WaitForSpineEvent_t3828335157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::set_WillUnsubscribeAfterFiring(System.Boolean)
extern "C"  void WaitForSpineEvent_set_WillUnsubscribeAfterFiring_m281870468 (WaitForSpineEvent_t3828335157 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.WaitForSpineEvent Spine.Unity.WaitForSpineEvent::NowWaitFor(Spine.AnimationState,Spine.EventData,System.Boolean)
extern "C"  WaitForSpineEvent_t3828335157 * WaitForSpineEvent_NowWaitFor_m1629351184 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, EventData_t2102088874 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.WaitForSpineEvent Spine.Unity.WaitForSpineEvent::NowWaitFor(Spine.AnimationState,System.String,System.Boolean)
extern "C"  WaitForSpineEvent_t3828335157 * WaitForSpineEvent_NowWaitFor_m2696887079 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::Clear(Spine.AnimationState)
extern "C"  void WaitForSpineEvent_Clear_m3128494551 (WaitForSpineEvent_t3828335157 * __this, AnimationState_t964829161 * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
