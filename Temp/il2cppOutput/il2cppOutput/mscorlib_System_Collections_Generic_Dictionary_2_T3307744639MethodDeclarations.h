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

// System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>
struct Transform_1_t3307744639;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_803395601.h"
#include "AssemblyU2DCSharp_Spine_Skin_AttachmentKeyTuple2091264019.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1101618758_gshared (Transform_1_t3307744639 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1101618758(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3307744639 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1101618758_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t803395601  Transform_1_Invoke_m664339954_gshared (Transform_1_t3307744639 * __this, AttachmentKeyTuple_t2091264019  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m664339954(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t803395601  (*) (Transform_1_t3307744639 *, AttachmentKeyTuple_t2091264019 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m664339954_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4283579805_gshared (Transform_1_t3307744639 * __this, AttachmentKeyTuple_t2091264019  ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4283579805(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3307744639 *, AttachmentKeyTuple_t2091264019 , Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4283579805_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t803395601  Transform_1_EndInvoke_m396021592_gshared (Transform_1_t3307744639 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m396021592(__this, ___result0, method) ((  KeyValuePair_2_t803395601  (*) (Transform_1_t3307744639 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m396021592_gshared)(__this, ___result0, method)
