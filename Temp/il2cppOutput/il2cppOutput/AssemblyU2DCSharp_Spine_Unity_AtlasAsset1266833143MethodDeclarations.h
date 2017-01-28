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

// Spine.Unity.AtlasAsset
struct AtlasAsset_t1266833143;
// Spine.Atlas
struct Atlas_t361685585;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Mesh
struct Mesh_t4241756145;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"

// System.Void Spine.Unity.AtlasAsset::.ctor()
extern "C"  void AtlasAsset__ctor_m3170665202 (AtlasAsset_t1266833143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.AtlasAsset::Reset()
extern "C"  void AtlasAsset_Reset_m817098143 (AtlasAsset_t1266833143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Atlas Spine.Unity.AtlasAsset::GetAtlas()
extern "C"  Atlas_t361685585 * AtlasAsset_GetAtlas_m580989178 (AtlasAsset_t1266833143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Spine.Unity.AtlasAsset::GenerateSprite(System.String,UnityEngine.Material&)
extern "C"  Sprite_t3199167241 * AtlasAsset_GenerateSprite_m1112280985 (AtlasAsset_t1266833143 * __this, String_t* ___name0, Material_t3870600107 ** ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Spine.Unity.AtlasAsset::GenerateMesh(System.String,UnityEngine.Mesh,UnityEngine.Material&,System.Single)
extern "C"  Mesh_t4241756145 * AtlasAsset_GenerateMesh_m3367814934 (AtlasAsset_t1266833143 * __this, String_t* ___name0, Mesh_t4241756145 * ___mesh1, Material_t3870600107 ** ___material2, float ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
