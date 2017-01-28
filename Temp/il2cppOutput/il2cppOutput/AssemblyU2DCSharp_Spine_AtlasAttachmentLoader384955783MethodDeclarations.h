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

// Spine.AtlasAttachmentLoader
struct AtlasAttachmentLoader_t384955783;
// Spine.Atlas[]
struct AtlasU5BU5D_t3146571084;
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
// Spine.AtlasRegion
struct AtlasRegion_t1137030501;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skin1650992057.h"
#include "mscorlib_System_String7231557.h"

// System.Void Spine.AtlasAttachmentLoader::.ctor(Spine.Atlas[])
extern "C"  void AtlasAttachmentLoader__ctor_m2851248059 (AtlasAttachmentLoader_t384955783 * __this, AtlasU5BU5D_t3146571084* ___atlasArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.AtlasAttachmentLoader::NewRegionAttachment(Spine.Skin,System.String,System.String)
extern "C"  RegionAttachment_t2459988211 * AtlasAttachmentLoader_NewRegionAttachment_m3668100149 (AtlasAttachmentLoader_t384955783 * __this, Skin_t1650992057 * ___skin0, String_t* ___name1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.MeshAttachment Spine.AtlasAttachmentLoader::NewMeshAttachment(Spine.Skin,System.String,System.String)
extern "C"  MeshAttachment_t3373030252 * AtlasAttachmentLoader_NewMeshAttachment_m787381461 (AtlasAttachmentLoader_t384955783 * __this, Skin_t1650992057 * ___skin0, String_t* ___name1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.AtlasAttachmentLoader::NewBoundingBoxAttachment(Spine.Skin,System.String)
extern "C"  BoundingBoxAttachment_t3933059536 * AtlasAttachmentLoader_NewBoundingBoxAttachment_m3981042969 (AtlasAttachmentLoader_t384955783 * __this, Skin_t1650992057 * ___skin0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PathAttachment Spine.AtlasAttachmentLoader::NewPathAttachment(Spine.Skin,System.String)
extern "C"  PathAttachment_t3159049124 * AtlasAttachmentLoader_NewPathAttachment_m4166094169 (AtlasAttachmentLoader_t384955783 * __this, Skin_t1650992057 * ___skin0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.AtlasAttachmentLoader::FindRegion(System.String)
extern "C"  AtlasRegion_t1137030501 * AtlasAttachmentLoader_FindRegion_m2518315525 (AtlasAttachmentLoader_t384955783 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
