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

// Raptor
struct Raptor_t2440623542;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.Event
struct Event_t365432928;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"

// System.Void Raptor::.ctor()
extern "C"  void Raptor__ctor_m3611851685 (Raptor_t2440623542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Raptor::Start()
extern "C"  void Raptor_Start_m2558989477 (Raptor_t2440623542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Raptor::HandleEvent(Spine.AnimationState,System.Int32,Spine.Event)
extern "C"  void Raptor_HandleEvent_m4120174839 (Raptor_t2440623542 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, Event_t365432928 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Raptor::GunGrabRoutine()
extern "C"  Il2CppObject * Raptor_GunGrabRoutine_m1240120127 (Raptor_t2440623542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
