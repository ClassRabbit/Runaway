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

// Spine.AnimationState/CompleteDelegate
struct CompleteDelegate_t1469797013;
// System.Object
struct Il2CppObject;
// Spine.AnimationState
struct AnimationState_t964829161;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Spine.AnimationState/CompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CompleteDelegate__ctor_m1123931116 (CompleteDelegate_t1469797013 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/CompleteDelegate::Invoke(Spine.AnimationState,System.Int32,System.Int32)
extern "C"  void CompleteDelegate_Invoke_m2630838542 (CompleteDelegate_t1469797013 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, int32_t ___loopCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.AnimationState/CompleteDelegate::BeginInvoke(Spine.AnimationState,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompleteDelegate_BeginInvoke_m1527858545 (CompleteDelegate_t1469797013 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, int32_t ___loopCount2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/CompleteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void CompleteDelegate_EndInvoke_m1859132412 (CompleteDelegate_t1469797013 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
