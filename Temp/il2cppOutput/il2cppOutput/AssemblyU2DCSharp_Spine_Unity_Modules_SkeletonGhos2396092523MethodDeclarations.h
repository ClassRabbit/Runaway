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

// Spine.Unity.Modules.SkeletonGhostRenderer
struct SkeletonGhostRenderer_t2396092523;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"

// System.Void Spine.Unity.Modules.SkeletonGhostRenderer::.ctor()
extern "C"  void SkeletonGhostRenderer__ctor_m1744970225 (SkeletonGhostRenderer_t2396092523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhostRenderer::Awake()
extern "C"  void SkeletonGhostRenderer_Awake_m1982575444 (SkeletonGhostRenderer_t2396092523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhostRenderer::Initialize(UnityEngine.Mesh,UnityEngine.Material[],UnityEngine.Color32,System.Boolean,System.Single,System.Int32,System.Int32)
extern "C"  void SkeletonGhostRenderer_Initialize_m2213837402 (SkeletonGhostRenderer_t2396092523 * __this, Mesh_t4241756145 * ___mesh0, MaterialU5BU5D_t170856778* ___materials1, Color32_t598853688  ___color2, bool ___additive3, float ___speed4, int32_t ___sortingLayerID5, int32_t ___sortingOrder6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonGhostRenderer::Fade()
extern "C"  Il2CppObject * SkeletonGhostRenderer_Fade_m2911710055 (SkeletonGhostRenderer_t2396092523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonGhostRenderer::FadeAdditive()
extern "C"  Il2CppObject * SkeletonGhostRenderer_FadeAdditive_m268515923 (SkeletonGhostRenderer_t2396092523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhostRenderer::Cleanup()
extern "C"  void SkeletonGhostRenderer_Cleanup_m252934451 (SkeletonGhostRenderer_t2396092523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
