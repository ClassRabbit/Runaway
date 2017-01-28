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

// Spine.Unity.WaitForSpineAnimationComplete
struct WaitForSpineAnimationComplete_t2719088888;
// Spine.TrackEntry
struct TrackEntry_t1654022115;
// System.Object
struct Il2CppObject;
// Spine.AnimationState
struct AnimationState_t964829161;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry1654022115.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"

// System.Void Spine.Unity.WaitForSpineAnimationComplete::.ctor(Spine.TrackEntry)
extern "C"  void WaitForSpineAnimationComplete__ctor_m4248177807 (WaitForSpineAnimationComplete_t2719088888 * __this, TrackEntry_t1654022115 * ___trackEntry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.WaitForSpineAnimationComplete::System.Collections.IEnumerator.MoveNext()
extern "C"  bool WaitForSpineAnimationComplete_System_Collections_IEnumerator_MoveNext_m596388624 (WaitForSpineAnimationComplete_t2719088888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineAnimationComplete::System.Collections.IEnumerator.Reset()
extern "C"  void WaitForSpineAnimationComplete_System_Collections_IEnumerator_Reset_m1860406777 (WaitForSpineAnimationComplete_t2719088888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Spine.Unity.WaitForSpineAnimationComplete::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * WaitForSpineAnimationComplete_System_Collections_IEnumerator_get_Current_m829517541 (WaitForSpineAnimationComplete_t2719088888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineAnimationComplete::HandleComplete(Spine.AnimationState,System.Int32,System.Int32)
extern "C"  void WaitForSpineAnimationComplete_HandleComplete_m3650212940 (WaitForSpineAnimationComplete_t2719088888 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, int32_t ___loopCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineAnimationComplete::SafeSubscribe(Spine.TrackEntry)
extern "C"  void WaitForSpineAnimationComplete_SafeSubscribe_m2757512874 (WaitForSpineAnimationComplete_t2719088888 * __this, TrackEntry_t1654022115 * ___trackEntry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.WaitForSpineAnimationComplete Spine.Unity.WaitForSpineAnimationComplete::NowWaitFor(Spine.TrackEntry)
extern "C"  WaitForSpineAnimationComplete_t2719088888 * WaitForSpineAnimationComplete_NowWaitFor_m2779200614 (WaitForSpineAnimationComplete_t2719088888 * __this, TrackEntry_t1654022115 * ___trackEntry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
