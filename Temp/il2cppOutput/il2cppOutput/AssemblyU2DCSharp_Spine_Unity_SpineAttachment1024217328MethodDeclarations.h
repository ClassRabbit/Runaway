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

// Spine.Unity.SpineAttachment
struct SpineAttachment_t1024217328;
// System.String
struct String_t;
// Spine.Attachment
struct Attachment_t2849733407;
// Spine.SkeletonData
struct SkeletonData_t3387199699;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t2211567523;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Unity_SpineAttachment_Hiera262310408.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData3387199699.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonDataAsset2211567523.h"

// System.Void Spine.Unity.SpineAttachment::.ctor(System.Boolean,System.Boolean,System.Boolean,System.String,System.String)
extern "C"  void SpineAttachment__ctor_m3676563320 (SpineAttachment_t1024217328 * __this, bool ___currentSkinOnly0, bool ___returnAttachmentPath1, bool ___placeholdersOnly2, String_t* ___slotField3, String_t* ___dataField4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SpineAttachment/Hierarchy Spine.Unity.SpineAttachment::GetHierarchy(System.String)
extern "C"  Hierarchy_t262310408  SpineAttachment_GetHierarchy_m2003944723 (Il2CppObject * __this /* static, unused */, String_t* ___fullPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Unity.SpineAttachment::GetAttachment(System.String,Spine.SkeletonData)
extern "C"  Attachment_t2849733407 * SpineAttachment_GetAttachment_m3399742673 (Il2CppObject * __this /* static, unused */, String_t* ___attachmentPath0, SkeletonData_t3387199699 * ___skeletonData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Unity.SpineAttachment::GetAttachment(System.String,Spine.Unity.SkeletonDataAsset)
extern "C"  Attachment_t2849733407 * SpineAttachment_GetAttachment_m3148733994 (Il2CppObject * __this /* static, unused */, String_t* ___attachmentPath0, SkeletonDataAsset_t2211567523 * ___skeletonDataAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
