﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Polygon
struct  Polygon_t2078419392  : public Il2CppObject
{
public:
	// System.Single[] Spine.Polygon::<Vertices>k__BackingField
	SingleU5BU5D_t2316563989* ___U3CVerticesU3Ek__BackingField_0;
	// System.Int32 Spine.Polygon::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CVerticesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Polygon_t2078419392, ___U3CVerticesU3Ek__BackingField_0)); }
	inline SingleU5BU5D_t2316563989* get_U3CVerticesU3Ek__BackingField_0() const { return ___U3CVerticesU3Ek__BackingField_0; }
	inline SingleU5BU5D_t2316563989** get_address_of_U3CVerticesU3Ek__BackingField_0() { return &___U3CVerticesU3Ek__BackingField_0; }
	inline void set_U3CVerticesU3Ek__BackingField_0(SingleU5BU5D_t2316563989* value)
	{
		___U3CVerticesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CVerticesU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Polygon_t2078419392, ___U3CCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CCountU3Ek__BackingField_1() const { return ___U3CCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_1() { return &___U3CCountU3Ek__BackingField_1; }
	inline void set_U3CCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CCountU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif