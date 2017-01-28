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

// Spine.AttachmentTimeline
struct AttachmentTimeline_t223675776;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.AttachmentTimeline::.ctor(System.Int32)
extern "C"  void AttachmentTimeline__ctor_m1837969565 (AttachmentTimeline_t223675776 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.AttachmentTimeline::get_SlotIndex()
extern "C"  int32_t AttachmentTimeline_get_SlotIndex_m994368551 (AttachmentTimeline_t223675776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::set_SlotIndex(System.Int32)
extern "C"  void AttachmentTimeline_set_SlotIndex_m4210838866 (AttachmentTimeline_t223675776 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.AttachmentTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* AttachmentTimeline_get_Frames_m2217488465 (AttachmentTimeline_t223675776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::set_Frames(System.Single[])
extern "C"  void AttachmentTimeline_set_Frames_m2867505422 (AttachmentTimeline_t223675776 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Spine.AttachmentTimeline::get_AttachmentNames()
extern "C"  StringU5BU5D_t4054002952* AttachmentTimeline_get_AttachmentNames_m2974104133 (AttachmentTimeline_t223675776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::set_AttachmentNames(System.String[])
extern "C"  void AttachmentTimeline_set_AttachmentNames_m4060841134 (AttachmentTimeline_t223675776 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.AttachmentTimeline::get_FrameCount()
extern "C"  int32_t AttachmentTimeline_get_FrameCount_m1784842161 (AttachmentTimeline_t223675776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::SetFrame(System.Int32,System.Single,System.String)
extern "C"  void AttachmentTimeline_SetFrame_m2951683989 (AttachmentTimeline_t223675776 * __this, int32_t ___frameIndex0, float ___time1, String_t* ___attachmentName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void AttachmentTimeline_Apply_m1711076410 (AttachmentTimeline_t223675776 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
