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

// SpineboyBeginnerView
struct SpineboyBeginnerView_t1352051552;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.Event
struct Event_t365432928;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"

// System.Void SpineboyBeginnerView::.ctor()
extern "C"  void SpineboyBeginnerView__ctor_m3110894395 (SpineboyBeginnerView_t1352051552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerView::Start()
extern "C"  void SpineboyBeginnerView_Start_m2058032187 (SpineboyBeginnerView_t1352051552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerView::HandleEvent(Spine.AnimationState,System.Int32,Spine.Event)
extern "C"  void SpineboyBeginnerView_HandleEvent_m2369844641 (SpineboyBeginnerView_t1352051552 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, Event_t365432928 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerView::Update()
extern "C"  void SpineboyBeginnerView_Update_m3675307826 (SpineboyBeginnerView_t1352051552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerView::PlayNewStableAnimation()
extern "C"  void SpineboyBeginnerView_PlayNewStableAnimation_m1257312390 (SpineboyBeginnerView_t1352051552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerView::PlayFootstepSound()
extern "C"  void SpineboyBeginnerView_PlayFootstepSound_m1206997562 (SpineboyBeginnerView_t1352051552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerView::PlayShoot()
extern "C"  void SpineboyBeginnerView_PlayShoot_m1611020004 (SpineboyBeginnerView_t1352051552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerView::Turn(System.Boolean)
extern "C"  void SpineboyBeginnerView_Turn_m2379652829 (SpineboyBeginnerView_t1352051552 * __this, bool ___facingLeft0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SpineboyBeginnerView::GetRandomPitch(System.Single)
extern "C"  float SpineboyBeginnerView_GetRandomPitch_m3473543535 (SpineboyBeginnerView_t1352051552 * __this, float ___maxPitchOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
