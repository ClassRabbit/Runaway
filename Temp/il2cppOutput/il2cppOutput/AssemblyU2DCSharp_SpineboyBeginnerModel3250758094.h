#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3771233898;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_SpineBeginnerBodyState3071047130.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpineboyBeginnerModel
struct  SpineboyBeginnerModel_t3250758094  : public MonoBehaviour_t667441552
{
public:
	// SpineBeginnerBodyState SpineboyBeginnerModel::state
	int32_t ___state_2;
	// System.Boolean SpineboyBeginnerModel::facingLeft
	bool ___facingLeft_3;
	// System.Single SpineboyBeginnerModel::currentSpeed
	float ___currentSpeed_4;
	// System.Single SpineboyBeginnerModel::shootInterval
	float ___shootInterval_5;
	// System.Single SpineboyBeginnerModel::lastShootTime
	float ___lastShootTime_6;
	// System.Action SpineboyBeginnerModel::ShootEvent
	Action_t3771233898 * ___ShootEvent_7;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(SpineboyBeginnerModel_t3250758094, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_facingLeft_3() { return static_cast<int32_t>(offsetof(SpineboyBeginnerModel_t3250758094, ___facingLeft_3)); }
	inline bool get_facingLeft_3() const { return ___facingLeft_3; }
	inline bool* get_address_of_facingLeft_3() { return &___facingLeft_3; }
	inline void set_facingLeft_3(bool value)
	{
		___facingLeft_3 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_4() { return static_cast<int32_t>(offsetof(SpineboyBeginnerModel_t3250758094, ___currentSpeed_4)); }
	inline float get_currentSpeed_4() const { return ___currentSpeed_4; }
	inline float* get_address_of_currentSpeed_4() { return &___currentSpeed_4; }
	inline void set_currentSpeed_4(float value)
	{
		___currentSpeed_4 = value;
	}

	inline static int32_t get_offset_of_shootInterval_5() { return static_cast<int32_t>(offsetof(SpineboyBeginnerModel_t3250758094, ___shootInterval_5)); }
	inline float get_shootInterval_5() const { return ___shootInterval_5; }
	inline float* get_address_of_shootInterval_5() { return &___shootInterval_5; }
	inline void set_shootInterval_5(float value)
	{
		___shootInterval_5 = value;
	}

	inline static int32_t get_offset_of_lastShootTime_6() { return static_cast<int32_t>(offsetof(SpineboyBeginnerModel_t3250758094, ___lastShootTime_6)); }
	inline float get_lastShootTime_6() const { return ___lastShootTime_6; }
	inline float* get_address_of_lastShootTime_6() { return &___lastShootTime_6; }
	inline void set_lastShootTime_6(float value)
	{
		___lastShootTime_6 = value;
	}

	inline static int32_t get_offset_of_ShootEvent_7() { return static_cast<int32_t>(offsetof(SpineboyBeginnerModel_t3250758094, ___ShootEvent_7)); }
	inline Action_t3771233898 * get_ShootEvent_7() const { return ___ShootEvent_7; }
	inline Action_t3771233898 ** get_address_of_ShootEvent_7() { return &___ShootEvent_7; }
	inline void set_ShootEvent_7(Action_t3771233898 * value)
	{
		___ShootEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___ShootEvent_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
