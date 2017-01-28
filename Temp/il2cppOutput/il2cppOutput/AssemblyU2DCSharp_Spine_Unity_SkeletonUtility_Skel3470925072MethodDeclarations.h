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

// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_t3470925072;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SkeletonUtilityDelegate__ctor_m325825255 (SkeletonUtilityDelegate_t3470925072 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::Invoke()
extern "C"  void SkeletonUtilityDelegate_Invoke_m3272520193 (SkeletonUtilityDelegate_t3470925072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SkeletonUtilityDelegate_BeginInvoke_m4272306282 (SkeletonUtilityDelegate_t3470925072 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SkeletonUtilityDelegate_EndInvoke_m3957502071 (SkeletonUtilityDelegate_t3470925072 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
