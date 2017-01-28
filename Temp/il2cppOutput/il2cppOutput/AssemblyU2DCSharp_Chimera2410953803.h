#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t2211567523;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chimera
struct  Chimera_t2410953803  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonDataAsset Chimera::skeletonDataSource
	SkeletonDataAsset_t2211567523 * ___skeletonDataSource_2;
	// System.String Chimera::attachmentPath
	String_t* ___attachmentPath_3;
	// System.String Chimera::targetSlot
	String_t* ___targetSlot_4;

public:
	inline static int32_t get_offset_of_skeletonDataSource_2() { return static_cast<int32_t>(offsetof(Chimera_t2410953803, ___skeletonDataSource_2)); }
	inline SkeletonDataAsset_t2211567523 * get_skeletonDataSource_2() const { return ___skeletonDataSource_2; }
	inline SkeletonDataAsset_t2211567523 ** get_address_of_skeletonDataSource_2() { return &___skeletonDataSource_2; }
	inline void set_skeletonDataSource_2(SkeletonDataAsset_t2211567523 * value)
	{
		___skeletonDataSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonDataSource_2, value);
	}

	inline static int32_t get_offset_of_attachmentPath_3() { return static_cast<int32_t>(offsetof(Chimera_t2410953803, ___attachmentPath_3)); }
	inline String_t* get_attachmentPath_3() const { return ___attachmentPath_3; }
	inline String_t** get_address_of_attachmentPath_3() { return &___attachmentPath_3; }
	inline void set_attachmentPath_3(String_t* value)
	{
		___attachmentPath_3 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentPath_3, value);
	}

	inline static int32_t get_offset_of_targetSlot_4() { return static_cast<int32_t>(offsetof(Chimera_t2410953803, ___targetSlot_4)); }
	inline String_t* get_targetSlot_4() const { return ___targetSlot_4; }
	inline String_t** get_address_of_targetSlot_4() { return &___targetSlot_4; }
	inline void set_targetSlot_4(String_t* value)
	{
		___targetSlot_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetSlot_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
