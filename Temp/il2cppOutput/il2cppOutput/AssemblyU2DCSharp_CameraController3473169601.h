#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3473169601  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CameraController::character
	GameObject_t3674682005 * ___character_2;
	// UnityEngine.Transform CameraController::characterTransfrom
	Transform_t1659122786 * ___characterTransfrom_3;

public:
	inline static int32_t get_offset_of_character_2() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___character_2)); }
	inline GameObject_t3674682005 * get_character_2() const { return ___character_2; }
	inline GameObject_t3674682005 ** get_address_of_character_2() { return &___character_2; }
	inline void set_character_2(GameObject_t3674682005 * value)
	{
		___character_2 = value;
		Il2CppCodeGenWriteBarrier(&___character_2, value);
	}

	inline static int32_t get_offset_of_characterTransfrom_3() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___characterTransfrom_3)); }
	inline Transform_t1659122786 * get_characterTransfrom_3() const { return ___characterTransfrom_3; }
	inline Transform_t1659122786 ** get_address_of_characterTransfrom_3() { return &___characterTransfrom_3; }
	inline void set_characterTransfrom_3(Transform_t1659122786 * value)
	{
		___characterTransfrom_3 = value;
		Il2CppCodeGenWriteBarrier(&___characterTransfrom_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
