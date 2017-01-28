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

// Spine.AnimationState/StartEndDelegate
struct StartEndDelegate_t3416038005;
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

// System.Void Spine.AnimationState/StartEndDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void StartEndDelegate__ctor_m1224780748 (StartEndDelegate_t3416038005 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/StartEndDelegate::Invoke(Spine.AnimationState,System.Int32)
extern "C"  void StartEndDelegate_Invoke_m2689446537 (StartEndDelegate_t3416038005 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.AnimationState/StartEndDelegate::BeginInvoke(Spine.AnimationState,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StartEndDelegate_BeginInvoke_m1581457436 (StartEndDelegate_t3416038005 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/StartEndDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void StartEndDelegate_EndInvoke_m2428101596 (StartEndDelegate_t3416038005 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
