﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HelpURLAttribute
struct  HelpURLAttribute_t3314458450  : public Attribute_t2523058482
{
public:
	// System.String UnityEngine.HelpURLAttribute::<URL>k__BackingField
	String_t* ___U3CURLU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CURLU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HelpURLAttribute_t3314458450, ___U3CURLU3Ek__BackingField_0)); }
	inline String_t* get_U3CURLU3Ek__BackingField_0() const { return ___U3CURLU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CURLU3Ek__BackingField_0() { return &___U3CURLU3Ek__BackingField_0; }
	inline void set_U3CURLU3Ek__BackingField_0(String_t* value)
	{
		___U3CURLU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CURLU3Ek__BackingField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif