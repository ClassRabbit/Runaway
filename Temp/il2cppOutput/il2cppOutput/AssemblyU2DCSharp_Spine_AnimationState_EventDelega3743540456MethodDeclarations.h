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

// Spine.AnimationState/EventDelegate
struct EventDelegate_t3743540456;
// System.Object
struct Il2CppObject;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.Event
struct Event_t365432928;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Spine.AnimationState/EventDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EventDelegate__ctor_m2728612751 (EventDelegate_t3743540456 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/EventDelegate::Invoke(Spine.AnimationState,System.Int32,Spine.Event)
extern "C"  void EventDelegate_Invoke_m1426494691 (EventDelegate_t3743540456 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, Event_t365432928 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.AnimationState/EventDelegate::BeginInvoke(Spine.AnimationState,System.Int32,Spine.Event,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventDelegate_BeginInvoke_m1241270612 (EventDelegate_t3743540456 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, Event_t365432928 * ___e2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/EventDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void EventDelegate_EndInvoke_m4262782239 (EventDelegate_t3743540456 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
