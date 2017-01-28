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

// Spine.Unity.MaterialsTextureLoader
struct MaterialsTextureLoader_t1580053524;
// Spine.Unity.AtlasAsset
struct AtlasAsset_t1266833143;
// Spine.AtlasPage
struct AtlasPage_t3096131840;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_AtlasAsset1266833143.h"
#include "AssemblyU2DCSharp_Spine_AtlasPage3096131840.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void Spine.Unity.MaterialsTextureLoader::.ctor(Spine.Unity.AtlasAsset)
extern "C"  void MaterialsTextureLoader__ctor_m1519240908 (MaterialsTextureLoader_t1580053524 * __this, AtlasAsset_t1266833143 * ___atlasAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MaterialsTextureLoader::Load(Spine.AtlasPage,System.String)
extern "C"  void MaterialsTextureLoader_Load_m3339307818 (MaterialsTextureLoader_t1580053524 * __this, AtlasPage_t3096131840 * ___page0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MaterialsTextureLoader::Unload(System.Object)
extern "C"  void MaterialsTextureLoader_Unload_m1676260454 (MaterialsTextureLoader_t1580053524 * __this, Il2CppObject * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
