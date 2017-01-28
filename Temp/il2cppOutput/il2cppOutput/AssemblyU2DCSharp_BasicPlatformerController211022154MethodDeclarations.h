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

// BasicPlatformerController
struct BasicPlatformerController_t211022154;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.Event
struct Event_t365432928;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"

// System.Void BasicPlatformerController::.ctor()
extern "C"  void BasicPlatformerController__ctor_m1174021985 (BasicPlatformerController_t211022154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasicPlatformerController::Awake()
extern "C"  void BasicPlatformerController_Awake_m1411627204 (BasicPlatformerController_t211022154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasicPlatformerController::Start()
extern "C"  void BasicPlatformerController_Start_m121159777 (BasicPlatformerController_t211022154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasicPlatformerController::HandleEvent(Spine.AnimationState,System.Int32,Spine.Event)
extern "C"  void BasicPlatformerController_HandleEvent_m3715281851 (BasicPlatformerController_t211022154 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, Event_t365432928 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasicPlatformerController::Update()
extern "C"  void BasicPlatformerController_Update_m3761805260 (BasicPlatformerController_t211022154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BasicPlatformerController::GetRandomPitch(System.Single)
extern "C"  float BasicPlatformerController_GetRandomPitch_m3920584237 (Il2CppObject * __this /* static, unused */, float ___maxOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
