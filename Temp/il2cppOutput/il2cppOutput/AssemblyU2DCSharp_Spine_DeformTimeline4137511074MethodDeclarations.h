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

// Spine.DeformTimeline
struct DeformTimeline_t4137511074;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Single[][]
struct SingleU5BU5DU5BU5D_t1565445624;
// Spine.VertexAttachment
struct VertexAttachment_t2433703843;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_VertexAttachment2433703843.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.DeformTimeline::.ctor(System.Int32)
extern "C"  void DeformTimeline__ctor_m2353545915 (DeformTimeline_t4137511074 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DeformTimeline::get_SlotIndex()
extern "C"  int32_t DeformTimeline_get_SlotIndex_m308565573 (DeformTimeline_t4137511074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_SlotIndex(System.Int32)
extern "C"  void DeformTimeline_set_SlotIndex_m1586127216 (DeformTimeline_t4137511074 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.DeformTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* DeformTimeline_get_Frames_m1185368307 (DeformTimeline_t4137511074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Frames(System.Single[])
extern "C"  void DeformTimeline_set_Frames_m242793772 (DeformTimeline_t4137511074 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[][] Spine.DeformTimeline::get_Vertices()
extern "C"  SingleU5BU5DU5BU5D_t1565445624* DeformTimeline_get_Vertices_m3874854372 (DeformTimeline_t4137511074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Vertices(System.Single[][])
extern "C"  void DeformTimeline_set_Vertices_m3445908631 (DeformTimeline_t4137511074 * __this, SingleU5BU5DU5BU5D_t1565445624* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.VertexAttachment Spine.DeformTimeline::get_Attachment()
extern "C"  VertexAttachment_t2433703843 * DeformTimeline_get_Attachment_m1461720241 (DeformTimeline_t4137511074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Attachment(Spine.VertexAttachment)
extern "C"  void DeformTimeline_set_Attachment_m1553817768 (DeformTimeline_t4137511074 * __this, VertexAttachment_t2433703843 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::SetFrame(System.Int32,System.Single,System.Single[])
extern "C"  void DeformTimeline_SetFrame_m1828838270 (DeformTimeline_t4137511074 * __this, int32_t ___frameIndex0, float ___time1, SingleU5BU5D_t2316563989* ___vertices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void DeformTimeline_Apply_m2902897372 (DeformTimeline_t4137511074 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
