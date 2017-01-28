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

// Spine.AnimationState
struct AnimationState_t964829161;
// Spine.AnimationStateData
struct AnimationStateData_t250640307;
// Spine.AnimationState/StartEndDelegate
struct StartEndDelegate_t3416038005;
// Spine.AnimationState/EventDelegate
struct EventDelegate_t3743540456;
// Spine.AnimationState/CompleteDelegate
struct CompleteDelegate_t1469797013;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t3028954773;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.TrackEntry
struct TrackEntry_t1654022115;
// System.String
struct String_t;
// Spine.Animation
struct Animation_t3189667530;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationStateData250640307.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_StartEndDel3416038005.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_EventDelega3743540456.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_CompleteDel1469797013.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry1654022115.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Animation3189667530.h"

// System.Void Spine.AnimationState::.ctor(Spine.AnimationStateData)
extern "C"  void AnimationState__ctor_m1915063009 (AnimationState_t964829161 * __this, AnimationStateData_t250640307 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Start(Spine.AnimationState/StartEndDelegate)
extern "C"  void AnimationState_add_Start_m562994584 (AnimationState_t964829161 * __this, StartEndDelegate_t3416038005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Start(Spine.AnimationState/StartEndDelegate)
extern "C"  void AnimationState_remove_Start_m735290645 (AnimationState_t964829161 * __this, StartEndDelegate_t3416038005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_End(Spine.AnimationState/StartEndDelegate)
extern "C"  void AnimationState_add_End_m2590018175 (AnimationState_t964829161 * __this, StartEndDelegate_t3416038005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_End(Spine.AnimationState/StartEndDelegate)
extern "C"  void AnimationState_remove_End_m1951092028 (AnimationState_t964829161 * __this, StartEndDelegate_t3416038005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Event(Spine.AnimationState/EventDelegate)
extern "C"  void AnimationState_add_Event_m3939231669 (AnimationState_t964829161 * __this, EventDelegate_t3743540456 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Event(Spine.AnimationState/EventDelegate)
extern "C"  void AnimationState_remove_Event_m3780073816 (AnimationState_t964829161 * __this, EventDelegate_t3743540456 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Complete(Spine.AnimationState/CompleteDelegate)
extern "C"  void AnimationState_add_Complete_m1815469189 (AnimationState_t964829161 * __this, CompleteDelegate_t1469797013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Complete(Spine.AnimationState/CompleteDelegate)
extern "C"  void AnimationState_remove_Complete_m2201503720 (AnimationState_t964829161 * __this, CompleteDelegate_t1469797013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AnimationStateData Spine.AnimationState::get_Data()
extern "C"  AnimationStateData_t250640307 * AnimationState_get_Data_m1629320367 (AnimationState_t964829161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::get_Tracks()
extern "C"  ExposedList_1_t3028954773 * AnimationState_get_Tracks_m2051758065 (AnimationState_t964829161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationState::get_TimeScale()
extern "C"  float AnimationState_get_TimeScale_m3117038761 (AnimationState_t964829161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::set_TimeScale(System.Single)
extern "C"  void AnimationState_set_TimeScale_m2099045962 (AnimationState_t964829161 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::Update(System.Single)
extern "C"  void AnimationState_Update_m3128962945 (AnimationState_t964829161 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::Apply(Spine.Skeleton)
extern "C"  void AnimationState_Apply_m2165066967 (AnimationState_t964829161 * __this, Skeleton_t2209335561 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::ClearTracks()
extern "C"  void AnimationState_ClearTracks_m203957782 (AnimationState_t964829161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::ClearTrack(System.Int32)
extern "C"  void AnimationState_ClearTrack_m4031479344 (AnimationState_t964829161 * __this, int32_t ___trackIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::ExpandToIndex(System.Int32)
extern "C"  TrackEntry_t1654022115 * AnimationState_ExpandToIndex_m2020965444 (AnimationState_t964829161 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::SetCurrent(System.Int32,Spine.TrackEntry)
extern "C"  void AnimationState_SetCurrent_m3735270699 (AnimationState_t964829161 * __this, int32_t ___index0, TrackEntry_t1654022115 * ___entry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::SetAnimation(System.Int32,System.String,System.Boolean)
extern "C"  TrackEntry_t1654022115 * AnimationState_SetAnimation_m3671010114 (AnimationState_t964829161 * __this, int32_t ___trackIndex0, String_t* ___animationName1, bool ___loop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::SetAnimation(System.Int32,Spine.Animation,System.Boolean)
extern "C"  TrackEntry_t1654022115 * AnimationState_SetAnimation_m914171019 (AnimationState_t964829161 * __this, int32_t ___trackIndex0, Animation_t3189667530 * ___animation1, bool ___loop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::AddAnimation(System.Int32,System.String,System.Boolean,System.Single)
extern "C"  TrackEntry_t1654022115 * AnimationState_AddAnimation_m4147252006 (AnimationState_t964829161 * __this, int32_t ___trackIndex0, String_t* ___animationName1, bool ___loop2, float ___delay3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::AddAnimation(System.Int32,Spine.Animation,System.Boolean,System.Single)
extern "C"  TrackEntry_t1654022115 * AnimationState_AddAnimation_m4081020143 (AnimationState_t964829161 * __this, int32_t ___trackIndex0, Animation_t3189667530 * ___animation1, bool ___loop2, float ___delay3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::GetCurrent(System.Int32)
extern "C"  TrackEntry_t1654022115 * AnimationState_GetCurrent_m1811721696 (AnimationState_t964829161 * __this, int32_t ___trackIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.AnimationState::ToString()
extern "C"  String_t* AnimationState_ToString_m1527087472 (AnimationState_t964829161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
