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

// UnityEngine.Animator
struct Animator_t2776330603;
// System.String
struct String_t;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t3117370260;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t274649809;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo323110318.h"

// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C"  void Animator_SetFloat_m1775105839 (Animator_t2776330603 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m514363822 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m4152421915 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C"  int32_t Animator_get_layerCount_m3326924613 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C"  float Animator_GetLayerWeight_m3878421230 (Animator_t2776330603 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t323110318  Animator_GetCurrentAnimatorStateInfo_m3061859448 (Animator_t2776330603 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t323110318  Animator_GetNextAnimatorStateInfo_m791156688 (Animator_t2776330603 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t3117370260* Animator_GetCurrentAnimatorClipInfo_m4182556072 (Animator_t2776330603 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t3117370260* Animator_GetNextAnimatorClipInfo_m162731378 (Animator_t2776330603 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C"  RuntimeAnimatorController_t274649809 * Animator_get_runtimeAnimatorController_m1822082727 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m4020897098 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C"  void Animator_SetFloatString_m82432478 (Animator_t2776330603 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m1378271133 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m1817269834 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
