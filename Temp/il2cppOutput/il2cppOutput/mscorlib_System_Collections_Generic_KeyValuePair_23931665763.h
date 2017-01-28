#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t3933059536;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t2156524054;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Spine.BoundingBoxAttachment,UnityEngine.PolygonCollider2D>
struct  KeyValuePair_2_t3931665763 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	BoundingBoxAttachment_t3933059536 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PolygonCollider2D_t2156524054 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3931665763, ___key_0)); }
	inline BoundingBoxAttachment_t3933059536 * get_key_0() const { return ___key_0; }
	inline BoundingBoxAttachment_t3933059536 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(BoundingBoxAttachment_t3933059536 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3931665763, ___value_1)); }
	inline PolygonCollider2D_t2156524054 * get_value_1() const { return ___value_1; }
	inline PolygonCollider2D_t2156524054 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PolygonCollider2D_t2156524054 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
