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

// Spine.VertexAttachment
struct VertexAttachment_t2433703843;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Slot
struct Slot_t1650993210;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Slot1650993210.h"
#include "AssemblyU2DCSharp_Spine_VertexAttachment2433703843.h"

// System.Void Spine.VertexAttachment::.ctor(System.String)
extern "C"  void VertexAttachment__ctor_m3782702361 (VertexAttachment_t2433703843 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Spine.VertexAttachment::get_Bones()
extern "C"  Int32U5BU5D_t3230847821* VertexAttachment_get_Bones_m3831264321 (VertexAttachment_t2433703843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_Bones(System.Int32[])
extern "C"  void VertexAttachment_set_Bones_m2246993576 (VertexAttachment_t2433703843 * __this, Int32U5BU5D_t3230847821* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.VertexAttachment::get_Vertices()
extern "C"  SingleU5BU5D_t2316563989* VertexAttachment_get_Vertices_m2450331911 (VertexAttachment_t2433703843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_Vertices(System.Single[])
extern "C"  void VertexAttachment_set_Vertices_m4022495896 (VertexAttachment_t2433703843 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.VertexAttachment::get_WorldVerticesLength()
extern "C"  int32_t VertexAttachment_get_WorldVerticesLength_m1337450465 (VertexAttachment_t2433703843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_WorldVerticesLength(System.Int32)
extern "C"  void VertexAttachment_set_WorldVerticesLength_m3864755468 (VertexAttachment_t2433703843 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Single[])
extern "C"  void VertexAttachment_ComputeWorldVertices_m2404147913 (VertexAttachment_t2433703843 * __this, Slot_t1650993210 * ___slot0, SingleU5BU5D_t2316563989* ___worldVertices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32)
extern "C"  void VertexAttachment_ComputeWorldVertices_m208427726 (VertexAttachment_t2433703843 * __this, Slot_t1650993210 * ___slot0, int32_t ___start1, int32_t ___count2, SingleU5BU5D_t2316563989* ___worldVertices3, int32_t ___offset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.VertexAttachment::ApplyDeform(Spine.VertexAttachment)
extern "C"  bool VertexAttachment_ApplyDeform_m713029172 (VertexAttachment_t2433703843 * __this, VertexAttachment_t2433703843 * ___sourceAttachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
