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

// System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Object>
struct Transform_1_t2380198113;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Spine_Skin_AttachmentKeyTuple2091264019.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2091857198_gshared (Transform_1_t2380198113 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2091857198(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2380198113 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2091857198_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m2355317710_gshared (Transform_1_t2380198113 * __this, AttachmentKeyTuple_t2091264019  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2355317710(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t2380198113 *, AttachmentKeyTuple_t2091264019 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m2355317710_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2470493741_gshared (Transform_1_t2380198113 * __this, AttachmentKeyTuple_t2091264019  ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2470493741(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2380198113 *, AttachmentKeyTuple_t2091264019 , Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2470493741_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m785221628_gshared (Transform_1_t2380198113 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m785221628(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t2380198113 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m785221628_gshared)(__this, ___result0, method)
