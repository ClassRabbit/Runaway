#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick
struct  Joystick_t3421498716  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image Joystick::bgImg
	Image_t538875265 * ___bgImg_2;
	// UnityEngine.UI.Image Joystick::joystickImg
	Image_t538875265 * ___joystickImg_3;
	// UnityEngine.Vector3 Joystick::inputVector
	Vector3_t4282066566  ___inputVector_4;

public:
	inline static int32_t get_offset_of_bgImg_2() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___bgImg_2)); }
	inline Image_t538875265 * get_bgImg_2() const { return ___bgImg_2; }
	inline Image_t538875265 ** get_address_of_bgImg_2() { return &___bgImg_2; }
	inline void set_bgImg_2(Image_t538875265 * value)
	{
		___bgImg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgImg_2, value);
	}

	inline static int32_t get_offset_of_joystickImg_3() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___joystickImg_3)); }
	inline Image_t538875265 * get_joystickImg_3() const { return ___joystickImg_3; }
	inline Image_t538875265 ** get_address_of_joystickImg_3() { return &___joystickImg_3; }
	inline void set_joystickImg_3(Image_t538875265 * value)
	{
		___joystickImg_3 = value;
		Il2CppCodeGenWriteBarrier(&___joystickImg_3, value);
	}

	inline static int32_t get_offset_of_inputVector_4() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___inputVector_4)); }
	inline Vector3_t4282066566  get_inputVector_4() const { return ___inputVector_4; }
	inline Vector3_t4282066566 * get_address_of_inputVector_4() { return &___inputVector_4; }
	inline void set_inputVector_4(Vector3_t4282066566  value)
	{
		___inputVector_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
