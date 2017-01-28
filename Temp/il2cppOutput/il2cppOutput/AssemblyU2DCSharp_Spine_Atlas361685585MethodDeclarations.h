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

// Spine.Atlas
struct Atlas_t361685585;
// System.IO.TextReader
struct TextReader_t2148718976;
// System.String
struct String_t;
// Spine.TextureLoader
struct TextureLoader_t974571988;
// System.Collections.Generic.List`1<Spine.AtlasPage>
struct List_1_t169350096;
// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t2505216053;
// System.String[]
struct StringU5BU5D_t4054002952;
// Spine.AtlasRegion
struct AtlasRegion_t1137030501;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "mscorlib_System_String7231557.h"

// System.Void Spine.Atlas::.ctor(System.IO.TextReader,System.String,Spine.TextureLoader)
extern "C"  void Atlas__ctor_m3996259831 (Atlas_t361685585 * __this, TextReader_t2148718976 * ___reader0, String_t* ___dir1, Il2CppObject * ___textureLoader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::.ctor(System.Collections.Generic.List`1<Spine.AtlasPage>,System.Collections.Generic.List`1<Spine.AtlasRegion>)
extern "C"  void Atlas__ctor_m2715682176 (Atlas_t361685585 * __this, List_1_t169350096 * ___pages0, List_1_t2505216053 * ___regions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::Load(System.IO.TextReader,System.String,Spine.TextureLoader)
extern "C"  void Atlas_Load_m1604115819 (Atlas_t361685585 * __this, TextReader_t2148718976 * ___reader0, String_t* ___imagesDir1, Il2CppObject * ___textureLoader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Atlas::ReadValue(System.IO.TextReader)
extern "C"  String_t* Atlas_ReadValue_m1406015662 (Il2CppObject * __this /* static, unused */, TextReader_t2148718976 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Atlas::ReadTuple(System.IO.TextReader,System.String[])
extern "C"  int32_t Atlas_ReadTuple_m1559725962 (Il2CppObject * __this /* static, unused */, TextReader_t2148718976 * ___reader0, StringU5BU5D_t4054002952* ___tuple1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::FlipV()
extern "C"  void Atlas_FlipV_m2878876882 (Atlas_t361685585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Atlas::FindRegion(System.String)
extern "C"  AtlasRegion_t1137030501 * Atlas_FindRegion_m540247291 (Atlas_t361685585 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::Dispose()
extern "C"  void Atlas_Dispose_m3633673704 (Atlas_t361685585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
