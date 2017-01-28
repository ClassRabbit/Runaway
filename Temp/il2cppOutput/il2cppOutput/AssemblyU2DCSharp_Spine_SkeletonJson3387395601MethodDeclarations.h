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

// Spine.SkeletonJson
struct SkeletonJson_t3387395601;
// Spine.Atlas[]
struct AtlasU5BU5D_t3146571084;
// Spine.AttachmentLoader
struct AttachmentLoader_t2849047762;
// Spine.SkeletonData
struct SkeletonData_t3387199699;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t2148718976;
// Spine.Attachment
struct Attachment_t2849733407;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// Spine.Skin
struct Skin_t1650992057;
// Spine.VertexAttachment
struct VertexAttachment_t2433703843;
// Spine.CurveTimeline
struct CurveTimeline_t3832230678;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "AssemblyU2DCSharp_Spine_Skin1650992057.h"
#include "AssemblyU2DCSharp_Spine_VertexAttachment2433703843.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData3387199699.h"
#include "AssemblyU2DCSharp_Spine_CurveTimeline3832230678.h"

// System.Void Spine.SkeletonJson::.ctor(Spine.Atlas[])
extern "C"  void SkeletonJson__ctor_m1885169045 (SkeletonJson_t3387395601 * __this, AtlasU5BU5D_t3146571084* ___atlasArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::.ctor(Spine.AttachmentLoader)
extern "C"  void SkeletonJson__ctor_m3918430970 (SkeletonJson_t3387395601 * __this, Il2CppObject * ___attachmentLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonJson::get_Scale()
extern "C"  float SkeletonJson_get_Scale_m1680034702 (SkeletonJson_t3387395601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::set_Scale(System.Single)
extern "C"  void SkeletonJson_set_Scale_m1032979589 (SkeletonJson_t3387395601 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.SkeletonJson::ReadSkeletonData(System.String)
extern "C"  SkeletonData_t3387199699 * SkeletonJson_ReadSkeletonData_m1827283601 (SkeletonJson_t3387395601 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.SkeletonJson::ReadSkeletonData(System.IO.TextReader)
extern "C"  SkeletonData_t3387199699 * SkeletonJson_ReadSkeletonData_m2639692376 (SkeletonJson_t3387395601 * __this, TextReader_t2148718976 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.SkeletonJson::ReadAttachment(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Spine.Skin,System.Int32,System.String)
extern "C"  Attachment_t2849733407 * SkeletonJson_ReadAttachment_m2380953829 (SkeletonJson_t3387395601 * __this, Dictionary_2_t696267445 * ___map0, Skin_t1650992057 * ___skin1, int32_t ___slotIndex2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::ReadVertices(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Spine.VertexAttachment,System.Int32)
extern "C"  void SkeletonJson_ReadVertices_m1028675066 (SkeletonJson_t3387395601 * __this, Dictionary_2_t696267445 * ___map0, VertexAttachment_t2433703843 * ___attachment1, int32_t ___verticesLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::ReadAnimation(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,Spine.SkeletonData)
extern "C"  void SkeletonJson_ReadAnimation_m469452706 (SkeletonJson_t3387395601 * __this, Dictionary_2_t696267445 * ___map0, String_t* ___name1, SkeletonData_t3387199699 * ___skeletonData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::ReadCurve(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Spine.CurveTimeline,System.Int32)
extern "C"  void SkeletonJson_ReadCurve_m945981759 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___valueMap0, CurveTimeline_t3832230678 * ___timeline1, int32_t ___frameIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.SkeletonJson::GetFloatArray(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Single)
extern "C"  SingleU5BU5D_t2316563989* SkeletonJson_GetFloatArray_m2768906018 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___map0, String_t* ___name1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Spine.SkeletonJson::GetIntArray(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Int32U5BU5D_t3230847821* SkeletonJson_GetIntArray_m1056881096 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___map0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonJson::GetFloat(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Single)
extern "C"  float SkeletonJson_GetFloat_m2104570747 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___map0, String_t* ___name1, float ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.SkeletonJson::GetInt(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Int32)
extern "C"  int32_t SkeletonJson_GetInt_m2066695244 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___map0, String_t* ___name1, int32_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonJson::GetBoolean(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Boolean)
extern "C"  bool SkeletonJson_GetBoolean_m2111523571 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___map0, String_t* ___name1, bool ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.SkeletonJson::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
extern "C"  String_t* SkeletonJson_GetString_m1493953428 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___map0, String_t* ___name1, String_t* ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonJson::ToColor(System.String,System.Int32)
extern "C"  float SkeletonJson_ToColor_m1235186730 (Il2CppObject * __this /* static, unused */, String_t* ___hexString0, int32_t ___colorIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
