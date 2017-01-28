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

// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t1530399696;
// System.Object
struct Il2CppObject;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer3766155010.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SkeletonRendererDelegate__ctor_m4163935143 (SkeletonRendererDelegate_t1530399696 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::Invoke(Spine.Unity.SkeletonRenderer)
extern "C"  void SkeletonRendererDelegate_Invoke_m1692446061 (SkeletonRendererDelegate_t1530399696 * __this, SkeletonRenderer_t3766155010 * ___skeletonRenderer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::BeginInvoke(Spine.Unity.SkeletonRenderer,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SkeletonRendererDelegate_BeginInvoke_m454515400 (SkeletonRendererDelegate_t1530399696 * __this, SkeletonRenderer_t3766155010 * ___skeletonRenderer0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SkeletonRendererDelegate_EndInvoke_m855243063 (SkeletonRendererDelegate_t1530399696 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
