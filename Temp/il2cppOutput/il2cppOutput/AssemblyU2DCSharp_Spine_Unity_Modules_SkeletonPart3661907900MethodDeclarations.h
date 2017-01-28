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

// Spine.Unity.Modules.SkeletonPartsRenderer
struct SkeletonPartsRenderer_t3661907900;
// Spine.Unity.MeshGeneration.ISubmeshSetMeshGenerator
struct ISubmeshSetMeshGenerator_t3306192096;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t723286955;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t1322387783;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock1322387783.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "mscorlib_System_String7231557.h"

// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::.ctor()
extern "C"  void SkeletonPartsRenderer__ctor_m2323971520 (SkeletonPartsRenderer_t3661907900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.ISubmeshSetMeshGenerator Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshGenerator()
extern "C"  Il2CppObject * SkeletonPartsRenderer_get_MeshGenerator_m3096151393 (SkeletonPartsRenderer_t3661907900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshRenderer Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshRenderer()
extern "C"  MeshRenderer_t2804666580 * SkeletonPartsRenderer_get_MeshRenderer_m1306459527 (SkeletonPartsRenderer_t3661907900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshFilter()
extern "C"  MeshFilter_t3839065225 * SkeletonPartsRenderer_get_MeshFilter_m2990257329 (SkeletonPartsRenderer_t3661907900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::LazyIntialize()
extern "C"  void SkeletonPartsRenderer_LazyIntialize_m200107321 (SkeletonPartsRenderer_t3661907900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::ClearMesh()
extern "C"  void SkeletonPartsRenderer_ClearMesh_m1375432632 (SkeletonPartsRenderer_t3661907900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::RenderParts(Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>,System.Int32,System.Int32)
extern "C"  void SkeletonPartsRenderer_RenderParts_m4026733528 (SkeletonPartsRenderer_t3661907900 * __this, ExposedList_1_t723286955 * ___instructions0, int32_t ___startSubmesh1, int32_t ___endSubmesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
extern "C"  void SkeletonPartsRenderer_SetPropertyBlock_m3147267262 (SkeletonPartsRenderer_t3661907900 * __this, MaterialPropertyBlock_t1322387783 * ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.Modules.SkeletonPartsRenderer Spine.Unity.Modules.SkeletonPartsRenderer::NewPartsRendererGameObject(UnityEngine.Transform,System.String)
extern "C"  SkeletonPartsRenderer_t3661907900 * SkeletonPartsRenderer_NewPartsRendererGameObject_m2382428393 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___parent0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
