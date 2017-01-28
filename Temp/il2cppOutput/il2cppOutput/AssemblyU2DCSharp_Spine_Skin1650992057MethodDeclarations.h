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

// Spine.Skin
struct Skin_t1650992057;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<Spine.Skin/AttachmentKeyTuple,Spine.Attachment>
struct Dictionary_2_t3878499227;
// Spine.Attachment
struct Attachment_t2849733407;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<Spine.Attachment>
struct List_1_t4217918959;
// Spine.Skeleton
struct Skeleton_t2209335561;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Attachment2849733407.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "AssemblyU2DCSharp_Spine_Skin1650992057.h"

// System.Void Spine.Skin::.ctor(System.String)
extern "C"  void Skin__ctor_m683376815 (Skin_t1650992057 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Skin::get_Name()
extern "C"  String_t* Skin_get_Name_m2524273768 (Skin_t1650992057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Spine.Skin/AttachmentKeyTuple,Spine.Attachment> Spine.Skin::get_Attachments()
extern "C"  Dictionary_2_t3878499227 * Skin_get_Attachments_m3004067511 (Skin_t1650992057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skin::AddAttachment(System.Int32,System.String,Spine.Attachment)
extern "C"  void Skin_AddAttachment_m2154207030 (Skin_t1650992057 * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_t2849733407 * ___attachment2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Skin::GetAttachment(System.Int32,System.String)
extern "C"  Attachment_t2849733407 * Skin_GetAttachment_m662684200 (Skin_t1650992057 * __this, int32_t ___slotIndex0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skin::FindNamesForSlot(System.Int32,System.Collections.Generic.List`1<System.String>)
extern "C"  void Skin_FindNamesForSlot_m313026080 (Skin_t1650992057 * __this, int32_t ___slotIndex0, List_1_t1375417109 * ___names1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skin::FindAttachmentsForSlot(System.Int32,System.Collections.Generic.List`1<Spine.Attachment>)
extern "C"  void Skin_FindAttachmentsForSlot_m1082383852 (Skin_t1650992057 * __this, int32_t ___slotIndex0, List_1_t4217918959 * ___attachments1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Skin::ToString()
extern "C"  String_t* Skin_ToString_m1885998848 (Skin_t1650992057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skin::AttachAll(Spine.Skeleton,Spine.Skin)
extern "C"  void Skin_AttachAll_m327474953 (Skin_t1650992057 * __this, Skeleton_t2209335561 * ___skeleton0, Skin_t1650992057 * ___oldSkin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
