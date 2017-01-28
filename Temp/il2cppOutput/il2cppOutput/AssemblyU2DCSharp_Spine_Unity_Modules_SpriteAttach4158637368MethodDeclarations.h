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

// Spine.Attachment
struct Attachment_t2849733407;
// Spine.Skeleton
struct Skeleton_t2209335561;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// Spine.SkeletonData
struct SkeletonData_t3387199699;
// Spine.RegionAttachment
struct RegionAttachment_t2459988211;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData3387199699.h"

// Spine.Attachment Spine.Unity.Modules.SpriteAttachmentExtensions::AttachUnitySprite(Spine.Skeleton,System.String,UnityEngine.Sprite,System.String)
extern "C"  Attachment_t2849733407 * SpriteAttachmentExtensions_AttachUnitySprite_m3856489130 (Il2CppObject * __this /* static, unused */, Skeleton_t2209335561 * ___skeleton0, String_t* ___slotName1, Sprite_t3199167241 * ___sprite2, String_t* ___shaderName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Unity.Modules.SpriteAttachmentExtensions::AddUnitySprite(Spine.SkeletonData,System.String,UnityEngine.Sprite,System.String,System.String)
extern "C"  Attachment_t2849733407 * SpriteAttachmentExtensions_AddUnitySprite_m641810384 (Il2CppObject * __this /* static, unused */, SkeletonData_t3387199699 * ___skeletonData0, String_t* ___slotName1, Sprite_t3199167241 * ___sprite2, String_t* ___skinName3, String_t* ___shaderName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.SpriteAttachmentExtensions::ToRegionAttachment(UnityEngine.Sprite,System.String)
extern "C"  RegionAttachment_t2459988211 * SpriteAttachmentExtensions_ToRegionAttachment_m1494211645 (Il2CppObject * __this /* static, unused */, Sprite_t3199167241 * ___sprite0, String_t* ___shaderName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
