#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrcController
struct  OrcController_t952895100  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean OrcController::lookRight
	bool ___lookRight_2;
	// UnityEngine.Animator OrcController::animator
	Animator_t2776330603 * ___animator_3;

public:
	inline static int32_t get_offset_of_lookRight_2() { return static_cast<int32_t>(offsetof(OrcController_t952895100, ___lookRight_2)); }
	inline bool get_lookRight_2() const { return ___lookRight_2; }
	inline bool* get_address_of_lookRight_2() { return &___lookRight_2; }
	inline void set_lookRight_2(bool value)
	{
		___lookRight_2 = value;
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(OrcController_t952895100, ___animator_3)); }
	inline Animator_t2776330603 * get_animator_3() const { return ___animator_3; }
	inline Animator_t2776330603 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t2776330603 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___animator_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
