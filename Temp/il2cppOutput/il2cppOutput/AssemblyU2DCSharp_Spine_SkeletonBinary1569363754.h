#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.AttachmentLoader
struct AttachmentLoader_t2849047762;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.List`1<Spine.SkeletonJson/LinkedMesh>
struct List_1_t707378501;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SkeletonBinary
struct  SkeletonBinary_t1569363754  : public Il2CppObject
{
public:
	// Spine.AttachmentLoader Spine.SkeletonBinary::attachmentLoader
	Il2CppObject * ___attachmentLoader_12;
	// System.Byte[] Spine.SkeletonBinary::buffer
	ByteU5BU5D_t4260760469* ___buffer_13;
	// System.Collections.Generic.List`1<Spine.SkeletonJson/LinkedMesh> Spine.SkeletonBinary::linkedMeshes
	List_1_t707378501 * ___linkedMeshes_14;
	// System.Single Spine.SkeletonBinary::<Scale>k__BackingField
	float ___U3CScaleU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_attachmentLoader_12() { return static_cast<int32_t>(offsetof(SkeletonBinary_t1569363754, ___attachmentLoader_12)); }
	inline Il2CppObject * get_attachmentLoader_12() const { return ___attachmentLoader_12; }
	inline Il2CppObject ** get_address_of_attachmentLoader_12() { return &___attachmentLoader_12; }
	inline void set_attachmentLoader_12(Il2CppObject * value)
	{
		___attachmentLoader_12 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentLoader_12, value);
	}

	inline static int32_t get_offset_of_buffer_13() { return static_cast<int32_t>(offsetof(SkeletonBinary_t1569363754, ___buffer_13)); }
	inline ByteU5BU5D_t4260760469* get_buffer_13() const { return ___buffer_13; }
	inline ByteU5BU5D_t4260760469** get_address_of_buffer_13() { return &___buffer_13; }
	inline void set_buffer_13(ByteU5BU5D_t4260760469* value)
	{
		___buffer_13 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_13, value);
	}

	inline static int32_t get_offset_of_linkedMeshes_14() { return static_cast<int32_t>(offsetof(SkeletonBinary_t1569363754, ___linkedMeshes_14)); }
	inline List_1_t707378501 * get_linkedMeshes_14() const { return ___linkedMeshes_14; }
	inline List_1_t707378501 ** get_address_of_linkedMeshes_14() { return &___linkedMeshes_14; }
	inline void set_linkedMeshes_14(List_1_t707378501 * value)
	{
		___linkedMeshes_14 = value;
		Il2CppCodeGenWriteBarrier(&___linkedMeshes_14, value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SkeletonBinary_t1569363754, ___U3CScaleU3Ek__BackingField_15)); }
	inline float get_U3CScaleU3Ek__BackingField_15() const { return ___U3CScaleU3Ek__BackingField_15; }
	inline float* get_address_of_U3CScaleU3Ek__BackingField_15() { return &___U3CScaleU3Ek__BackingField_15; }
	inline void set_U3CScaleU3Ek__BackingField_15(float value)
	{
		___U3CScaleU3Ek__BackingField_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
