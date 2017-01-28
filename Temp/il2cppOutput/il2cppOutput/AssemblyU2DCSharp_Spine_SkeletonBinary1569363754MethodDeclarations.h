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

// Spine.SkeletonBinary
struct SkeletonBinary_t1569363754;
// Spine.Atlas[]
struct AtlasU5BU5D_t3146571084;
// Spine.AttachmentLoader
struct AttachmentLoader_t2849047762;
// Spine.SkeletonData
struct SkeletonData_t3387199699;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t1561764144;
// Spine.Skin
struct Skin_t1650992057;
// Spine.Attachment
struct Attachment_t2849733407;
// Spine.SkeletonBinary/Vertices
struct Vertices_t1382898063;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// Spine.CurveTimeline
struct CurveTimeline_t3832230678;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_Spine_Skin1650992057.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData3387199699.h"
#include "AssemblyU2DCSharp_Spine_CurveTimeline3832230678.h"

// System.Void Spine.SkeletonBinary::.ctor(Spine.Atlas[])
extern "C"  void SkeletonBinary__ctor_m35359726 (SkeletonBinary_t1569363754 * __this, AtlasU5BU5D_t3146571084* ___atlasArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::.ctor(Spine.AttachmentLoader)
extern "C"  void SkeletonBinary__ctor_m1105424577 (SkeletonBinary_t1569363754 * __this, Il2CppObject * ___attachmentLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBinary::get_Scale()
extern "C"  float SkeletonBinary_get_Scale_m3245953045 (SkeletonBinary_t1569363754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::set_Scale(System.Single)
extern "C"  void SkeletonBinary_set_Scale_m3702740574 (SkeletonBinary_t1569363754 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.SkeletonBinary::ReadSkeletonData(System.String)
extern "C"  SkeletonData_t3387199699 * SkeletonBinary_ReadSkeletonData_m1476629848 (SkeletonBinary_t1569363754 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.SkeletonBinary::ReadSkeletonData(System.IO.Stream)
extern "C"  SkeletonData_t3387199699 * SkeletonBinary_ReadSkeletonData_m932817025 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.SkeletonBinary::ReadSkin(System.IO.Stream,System.String,System.Boolean)
extern "C"  Skin_t1650992057 * SkeletonBinary_ReadSkin_m360744864 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, String_t* ___skinName1, bool ___nonessential2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.SkeletonBinary::ReadAttachment(System.IO.Stream,Spine.Skin,System.Int32,System.String,System.Boolean)
extern "C"  Attachment_t2849733407 * SkeletonBinary_ReadAttachment_m3167322439 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, Skin_t1650992057 * ___skin1, int32_t ___slotIndex2, String_t* ___attachmentName3, bool ___nonessential4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonBinary/Vertices Spine.SkeletonBinary::ReadVertices(System.IO.Stream,System.Int32)
extern "C"  Vertices_t1382898063 * SkeletonBinary_ReadVertices_m4087015819 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, int32_t ___vertexCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.SkeletonBinary::ReadFloatArray(System.IO.Stream,System.Int32,System.Single)
extern "C"  SingleU5BU5D_t2316563989* SkeletonBinary_ReadFloatArray_m694274118 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, int32_t ___n1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Spine.SkeletonBinary::ReadShortArray(System.IO.Stream)
extern "C"  Int32U5BU5D_t3230847821* SkeletonBinary_ReadShortArray_m564621976 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::ReadAnimation(System.String,System.IO.Stream,Spine.SkeletonData)
extern "C"  void SkeletonBinary_ReadAnimation_m2459570043 (SkeletonBinary_t1569363754 * __this, String_t* ___name0, Stream_t1561764144 * ___input1, SkeletonData_t3387199699 * ___skeletonData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::ReadCurve(System.IO.Stream,System.Int32,Spine.CurveTimeline)
extern "C"  void SkeletonBinary_ReadCurve_m3025221390 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, int32_t ___frameIndex1, CurveTimeline_t3832230678 * ___timeline2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte Spine.SkeletonBinary::ReadSByte(System.IO.Stream)
extern "C"  int8_t SkeletonBinary_ReadSByte_m2656681979 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBinary::ReadBoolean(System.IO.Stream)
extern "C"  bool SkeletonBinary_ReadBoolean_m2534318421 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBinary::ReadFloat(System.IO.Stream)
extern "C"  float SkeletonBinary_ReadFloat_m1141389489 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.SkeletonBinary::ReadInt(System.IO.Stream)
extern "C"  int32_t SkeletonBinary_ReadInt_m1856074050 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.SkeletonBinary::ReadVarint(System.IO.Stream,System.Boolean)
extern "C"  int32_t SkeletonBinary_ReadVarint_m1732742456 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, bool ___optimizePositive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.SkeletonBinary::ReadString(System.IO.Stream)
extern "C"  String_t* SkeletonBinary_ReadString_m1534766307 (SkeletonBinary_t1569363754 * __this, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  void SkeletonBinary_ReadFully_m3698592654 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
