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

// Spine.Animation
struct Animation_t3189667530;
// System.String
struct String_t;
// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t3774837679;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.Animation::.ctor(System.String,Spine.ExposedList`1<Spine.Timeline>,System.Single)
extern "C"  void Animation__ctor_m265078151 (Animation_t3189667530 * __this, String_t* ___name0, ExposedList_1_t3774837679 * ___timelines1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Animation::get_Name()
extern "C"  String_t* Animation_get_Name_m1328158531 (Animation_t3189667530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::get_Timelines()
extern "C"  ExposedList_1_t3774837679 * Animation_get_Timelines_m1618473074 (Animation_t3189667530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Animation::set_Timelines(Spine.ExposedList`1<Spine.Timeline>)
extern "C"  void Animation_set_Timelines_m1689757811 (Animation_t3189667530 * __this, ExposedList_1_t3774837679 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Animation::get_Duration()
extern "C"  float Animation_get_Duration_m3369386179 (Animation_t3189667530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Animation::set_Duration(System.Single)
extern "C"  void Animation_set_Duration_m3226174472 (Animation_t3189667530 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Animation::Apply(Spine.Skeleton,System.Single,System.Single,System.Boolean,Spine.ExposedList`1<Spine.Event>)
extern "C"  void Animation_Apply_m430003474 (Animation_t3189667530 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, bool ___loop3, ExposedList_1_t1740365586 * ___events4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Animation::Mix(Spine.Skeleton,System.Single,System.Single,System.Boolean,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void Animation_Mix_m2862104997 (Animation_t3189667530 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, bool ___loop3, ExposedList_1_t1740365586 * ___events4, float ___alpha5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Animation::binarySearch(System.Single[],System.Single,System.Int32)
extern "C"  int32_t Animation_binarySearch_m2775374582 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t2316563989* ___values0, float ___target1, int32_t ___step2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Animation::binarySearch(System.Single[],System.Single)
extern "C"  int32_t Animation_binarySearch_m3569400705 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t2316563989* ___values0, float ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Animation::linearSearch(System.Single[],System.Single,System.Int32)
extern "C"  int32_t Animation_linearSearch_m38194458 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t2316563989* ___values0, float ___target1, int32_t ___step2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
