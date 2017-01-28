#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Polygon[]
struct PolygonU5BU5D_t3731175233;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.ExposedList`1<Spine.Polygon>
struct  ExposedList_1_t3453352050  : public Il2CppObject
{
public:
	// T[] Spine.ExposedList`1::Items
	PolygonU5BU5D_t3731175233* ___Items_1;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_2;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t3453352050, ___Items_1)); }
	inline PolygonU5BU5D_t3731175233* get_Items_1() const { return ___Items_1; }
	inline PolygonU5BU5D_t3731175233** get_address_of_Items_1() { return &___Items_1; }
	inline void set_Items_1(PolygonU5BU5D_t3731175233* value)
	{
		___Items_1 = value;
		Il2CppCodeGenWriteBarrier(&___Items_1, value);
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(ExposedList_1_t3453352050, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t3453352050, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t3453352050_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	PolygonU5BU5D_t3731175233* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t3453352050_StaticFields, ___EmptyArray_3)); }
	inline PolygonU5BU5D_t3731175233* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline PolygonU5BU5D_t3731175233** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(PolygonU5BU5D_t3731175233* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
