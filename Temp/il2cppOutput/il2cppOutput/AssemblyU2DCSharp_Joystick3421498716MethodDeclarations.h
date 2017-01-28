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

// Joystick
struct Joystick_t3421498716;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"

// System.Void Joystick::.ctor()
extern "C"  void Joystick__ctor_m26220735 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::Start()
extern "C"  void Joystick_Start_m3268325823 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnDrag_m3618238950 (Joystick_t3421498716 * __this, PointerEventData_t1848751023 * ___ped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerDown_m2374337313 (Joystick_t3421498716 * __this, PointerEventData_t1848751023 * ___ped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerUp_m4070119688 (Joystick_t3421498716 * __this, PointerEventData_t1848751023 * ___ped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Joystick::GetHorizontalValue()
extern "C"  float Joystick_GetHorizontalValue_m506518824 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Joystick::GetVerticalValue()
extern "C"  float Joystick_GetVerticalValue_m1013950486 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
