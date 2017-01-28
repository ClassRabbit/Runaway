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

// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t4020151189;
// System.Object
struct Il2CppObject;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t1666901536;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Spine.Unity.UpdateBonesDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdateBonesDelegate__ctor_m2218992318 (UpdateBonesDelegate_t4020151189 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.UpdateBonesDelegate::Invoke(Spine.Unity.ISkeletonAnimation)
extern "C"  void UpdateBonesDelegate_Invoke_m4280713126 (UpdateBonesDelegate_t4020151189 * __this, Il2CppObject * ___animatedSkeletonComponent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.UpdateBonesDelegate::BeginInvoke(Spine.Unity.ISkeletonAnimation,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UpdateBonesDelegate_BeginInvoke_m2340217277 (UpdateBonesDelegate_t4020151189 * __this, Il2CppObject * ___animatedSkeletonComponent0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.UpdateBonesDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UpdateBonesDelegate_EndInvoke_m2258740174 (UpdateBonesDelegate_t4020151189 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
