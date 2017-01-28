#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.EventData
struct EventData_t2102088874;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Event
struct  Event_t365432928  : public Il2CppObject
{
public:
	// Spine.EventData Spine.Event::<Data>k__BackingField
	EventData_t2102088874 * ___U3CDataU3Ek__BackingField_0;
	// System.Int32 Spine.Event::<Int>k__BackingField
	int32_t ___U3CIntU3Ek__BackingField_1;
	// System.Single Spine.Event::<Float>k__BackingField
	float ___U3CFloatU3Ek__BackingField_2;
	// System.String Spine.Event::<String>k__BackingField
	String_t* ___U3CStringU3Ek__BackingField_3;
	// System.Single Spine.Event::<Time>k__BackingField
	float ___U3CTimeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Event_t365432928, ___U3CDataU3Ek__BackingField_0)); }
	inline EventData_t2102088874 * get_U3CDataU3Ek__BackingField_0() const { return ___U3CDataU3Ek__BackingField_0; }
	inline EventData_t2102088874 ** get_address_of_U3CDataU3Ek__BackingField_0() { return &___U3CDataU3Ek__BackingField_0; }
	inline void set_U3CDataU3Ek__BackingField_0(EventData_t2102088874 * value)
	{
		___U3CDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDataU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CIntU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Event_t365432928, ___U3CIntU3Ek__BackingField_1)); }
	inline int32_t get_U3CIntU3Ek__BackingField_1() const { return ___U3CIntU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIntU3Ek__BackingField_1() { return &___U3CIntU3Ek__BackingField_1; }
	inline void set_U3CIntU3Ek__BackingField_1(int32_t value)
	{
		___U3CIntU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFloatU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Event_t365432928, ___U3CFloatU3Ek__BackingField_2)); }
	inline float get_U3CFloatU3Ek__BackingField_2() const { return ___U3CFloatU3Ek__BackingField_2; }
	inline float* get_address_of_U3CFloatU3Ek__BackingField_2() { return &___U3CFloatU3Ek__BackingField_2; }
	inline void set_U3CFloatU3Ek__BackingField_2(float value)
	{
		___U3CFloatU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CStringU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Event_t365432928, ___U3CStringU3Ek__BackingField_3)); }
	inline String_t* get_U3CStringU3Ek__BackingField_3() const { return ___U3CStringU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CStringU3Ek__BackingField_3() { return &___U3CStringU3Ek__BackingField_3; }
	inline void set_U3CStringU3Ek__BackingField_3(String_t* value)
	{
		___U3CStringU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStringU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Event_t365432928, ___U3CTimeU3Ek__BackingField_4)); }
	inline float get_U3CTimeU3Ek__BackingField_4() const { return ___U3CTimeU3Ek__BackingField_4; }
	inline float* get_address_of_U3CTimeU3Ek__BackingField_4() { return &___U3CTimeU3Ek__BackingField_4; }
	inline void set_U3CTimeU3Ek__BackingField_4(float value)
	{
		___U3CTimeU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
