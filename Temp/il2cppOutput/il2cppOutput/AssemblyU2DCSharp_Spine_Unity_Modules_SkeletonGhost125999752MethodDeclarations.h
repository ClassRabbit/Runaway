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

// Spine.Unity.Modules.SkeletonGhost
struct SkeletonGhost_t125999752;
// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.Event
struct Event_t365432928;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "mscorlib_System_String7231557.h"

// System.Void Spine.Unity.Modules.SkeletonGhost::.ctor()
extern "C"  void SkeletonGhost__ctor_m1935177844 (SkeletonGhost_t125999752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::Start()
extern "C"  void SkeletonGhost_Start_m882315636 (SkeletonGhost_t125999752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::OnEvent(Spine.AnimationState,System.Int32,Spine.Event)
extern "C"  void SkeletonGhost_OnEvent_m3386603903 (SkeletonGhost_t125999752 * __this, AnimationState_t964829161 * ___state0, int32_t ___trackIndex1, Event_t365432928 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::Ghosting(System.Single)
extern "C"  void SkeletonGhost_Ghosting_m761883016 (SkeletonGhost_t125999752 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::Update()
extern "C"  void SkeletonGhost_Update_m1587833113 (SkeletonGhost_t125999752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::OnDestroy()
extern "C"  void SkeletonGhost_OnDestroy_m949023597 (SkeletonGhost_t125999752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 Spine.Unity.Modules.SkeletonGhost::HexToColor(System.String)
extern "C"  Color32_t598853688  SkeletonGhost_HexToColor_m2873058893 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
