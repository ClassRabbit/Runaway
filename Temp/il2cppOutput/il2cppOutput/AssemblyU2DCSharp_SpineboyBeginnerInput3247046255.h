#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// SpineboyBeginnerModel
struct SpineboyBeginnerModel_t3250758094;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpineboyBeginnerInput
struct  SpineboyBeginnerInput_t3247046255  : public MonoBehaviour_t667441552
{
public:
	// System.String SpineboyBeginnerInput::horizontalAxis
	String_t* ___horizontalAxis_2;
	// System.String SpineboyBeginnerInput::attackButton
	String_t* ___attackButton_3;
	// System.String SpineboyBeginnerInput::jumpButton
	String_t* ___jumpButton_4;
	// SpineboyBeginnerModel SpineboyBeginnerInput::model
	SpineboyBeginnerModel_t3250758094 * ___model_5;

public:
	inline static int32_t get_offset_of_horizontalAxis_2() { return static_cast<int32_t>(offsetof(SpineboyBeginnerInput_t3247046255, ___horizontalAxis_2)); }
	inline String_t* get_horizontalAxis_2() const { return ___horizontalAxis_2; }
	inline String_t** get_address_of_horizontalAxis_2() { return &___horizontalAxis_2; }
	inline void set_horizontalAxis_2(String_t* value)
	{
		___horizontalAxis_2 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxis_2, value);
	}

	inline static int32_t get_offset_of_attackButton_3() { return static_cast<int32_t>(offsetof(SpineboyBeginnerInput_t3247046255, ___attackButton_3)); }
	inline String_t* get_attackButton_3() const { return ___attackButton_3; }
	inline String_t** get_address_of_attackButton_3() { return &___attackButton_3; }
	inline void set_attackButton_3(String_t* value)
	{
		___attackButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___attackButton_3, value);
	}

	inline static int32_t get_offset_of_jumpButton_4() { return static_cast<int32_t>(offsetof(SpineboyBeginnerInput_t3247046255, ___jumpButton_4)); }
	inline String_t* get_jumpButton_4() const { return ___jumpButton_4; }
	inline String_t** get_address_of_jumpButton_4() { return &___jumpButton_4; }
	inline void set_jumpButton_4(String_t* value)
	{
		___jumpButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___jumpButton_4, value);
	}

	inline static int32_t get_offset_of_model_5() { return static_cast<int32_t>(offsetof(SpineboyBeginnerInput_t3247046255, ___model_5)); }
	inline SpineboyBeginnerModel_t3250758094 * get_model_5() const { return ___model_5; }
	inline SpineboyBeginnerModel_t3250758094 ** get_address_of_model_5() { return &___model_5; }
	inline void set_model_5(SpineboyBeginnerModel_t3250758094 * value)
	{
		___model_5 = value;
		Il2CppCodeGenWriteBarrier(&___model_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
