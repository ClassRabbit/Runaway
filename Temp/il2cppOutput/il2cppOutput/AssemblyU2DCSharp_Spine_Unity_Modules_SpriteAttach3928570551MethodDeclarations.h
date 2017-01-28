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

// Spine.Unity.Modules.SpriteAttachmentLoader
struct SpriteAttachmentLoader_t3928570551;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.Shader
struct Shader_t3191267369;
// Spine.RegionAttachment
struct RegionAttachment_t2459988211;
// Spine.Skin
struct Skin_t1650992057;
// System.String
struct String_t;
// Spine.MeshAttachment
struct MeshAttachment_t3373030252;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t3933059536;
// Spine.PathAttachment
struct PathAttachment_t3159049124;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "UnityEngine_UnityEngine_Shader3191267369.h"
#include "AssemblyU2DCSharp_Spine_Skin1650992057.h"
#include "mscorlib_System_String7231557.h"

// System.Void Spine.Unity.Modules.SpriteAttachmentLoader::.ctor(UnityEngine.Sprite,UnityEngine.Shader)
extern "C"  void SpriteAttachmentLoader__ctor_m2461146161 (SpriteAttachmentLoader_t3928570551 * __this, Sprite_t3199167241 * ___sprite0, Shader_t3191267369 * ___shader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SpriteAttachmentLoader::.cctor()
extern "C"  void SpriteAttachmentLoader__cctor_m2283331064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.SpriteAttachmentLoader::NewRegionAttachment(Spine.Skin,System.String,System.String)
extern "C"  RegionAttachment_t2459988211 * SpriteAttachmentLoader_NewRegionAttachment_m921951743 (SpriteAttachmentLoader_t3928570551 * __this, Skin_t1650992057 * ___skin0, String_t* ___name1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.MeshAttachment Spine.Unity.Modules.SpriteAttachmentLoader::NewMeshAttachment(Spine.Skin,System.String,System.String)
extern "C"  MeshAttachment_t3373030252 * SpriteAttachmentLoader_NewMeshAttachment_m777959665 (SpriteAttachmentLoader_t3928570551 * __this, Skin_t1650992057 * ___skin0, String_t* ___name1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.Unity.Modules.SpriteAttachmentLoader::NewBoundingBoxAttachment(Spine.Skin,System.String)
extern "C"  BoundingBoxAttachment_t3933059536 * SpriteAttachmentLoader_NewBoundingBoxAttachment_m846453793 (SpriteAttachmentLoader_t3928570551 * __this, Skin_t1650992057 * ___skin0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PathAttachment Spine.Unity.Modules.SpriteAttachmentLoader::NewPathAttachment(Spine.Skin,System.String)
extern "C"  PathAttachment_t3159049124 * SpriteAttachmentLoader_NewPathAttachment_m585520101 (SpriteAttachmentLoader_t3928570551 * __this, Skin_t1650992057 * ___skin0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.Modules.SpriteAttachmentLoader::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float SpriteAttachmentLoader_InverseLerp_m4171754567 (SpriteAttachmentLoader_t3928570551 * __this, float ___a0, float ___b1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
