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

// Spine.AnimationStateData
struct AnimationStateData_t250640307;
// Spine.SkeletonData
struct SkeletonData_t3387199699;
// System.String
struct String_t;
// Spine.Animation
struct Animation_t3189667530;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData3387199699.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Animation3189667530.h"

// System.Void Spine.AnimationStateData::.ctor(Spine.SkeletonData)
extern "C"  void AnimationStateData__ctor_m1979486007 (AnimationStateData_t250640307 * __this, SkeletonData_t3387199699 * ___skeletonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.AnimationStateData::get_SkeletonData()
extern "C"  SkeletonData_t3387199699 * AnimationStateData_get_SkeletonData_m2729860934 (AnimationStateData_t250640307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationStateData::get_DefaultMix()
extern "C"  float AnimationStateData_get_DefaultMix_m4160808667 (AnimationStateData_t250640307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationStateData::set_DefaultMix(System.Single)
extern "C"  void AnimationStateData_set_DefaultMix_m2472451848 (AnimationStateData_t250640307 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationStateData::SetMix(System.String,System.String,System.Single)
extern "C"  void AnimationStateData_SetMix_m1223237758 (AnimationStateData_t250640307 * __this, String_t* ___fromName0, String_t* ___toName1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationStateData::SetMix(Spine.Animation,Spine.Animation,System.Single)
extern "C"  void AnimationStateData_SetMix_m1405330860 (AnimationStateData_t250640307 * __this, Animation_t3189667530 * ___from0, Animation_t3189667530 * ___to1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationStateData::GetMix(Spine.Animation,Spine.Animation)
extern "C"  float AnimationStateData_GetMix_m2580527279 (AnimationStateData_t250640307 * __this, Animation_t3189667530 * ___from0, Animation_t3189667530 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
