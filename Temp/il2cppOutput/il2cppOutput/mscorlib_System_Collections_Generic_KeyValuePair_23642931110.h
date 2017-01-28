#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Slot
struct Slot_t1650993210;
// UnityEngine.Material
struct Material_t3870600107;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Spine.Slot,UnityEngine.Material>
struct  KeyValuePair_2_t3642931110 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Slot_t1650993210 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Material_t3870600107 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3642931110, ___key_0)); }
	inline Slot_t1650993210 * get_key_0() const { return ___key_0; }
	inline Slot_t1650993210 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Slot_t1650993210 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3642931110, ___value_1)); }
	inline Material_t3870600107 * get_value_1() const { return ___value_1; }
	inline Material_t3870600107 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Material_t3870600107 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
