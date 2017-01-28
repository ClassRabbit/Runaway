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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ground
struct  Ground_t2141373863  : public MonoBehaviour_t667441552
{
public:
	// System.String Ground::_groundPlaceName
	String_t* ____groundPlaceName_2;
	// UnityEngine.Sprite[] Ground::leftSprite
	SpriteU5BU5D_t2761310900* ___leftSprite_3;
	// UnityEngine.Sprite[] Ground::middleSprite
	SpriteU5BU5D_t2761310900* ___middleSprite_4;
	// UnityEngine.Sprite[] Ground::rightSprite
	SpriteU5BU5D_t2761310900* ___rightSprite_5;
	// UnityEngine.GameObject Ground::leftTile
	GameObject_t3674682005 * ___leftTile_6;
	// UnityEngine.GameObject Ground::middleTile
	GameObject_t3674682005 * ___middleTile_7;
	// UnityEngine.GameObject Ground::rightTile
	GameObject_t3674682005 * ___rightTile_8;

public:
	inline static int32_t get_offset_of__groundPlaceName_2() { return static_cast<int32_t>(offsetof(Ground_t2141373863, ____groundPlaceName_2)); }
	inline String_t* get__groundPlaceName_2() const { return ____groundPlaceName_2; }
	inline String_t** get_address_of__groundPlaceName_2() { return &____groundPlaceName_2; }
	inline void set__groundPlaceName_2(String_t* value)
	{
		____groundPlaceName_2 = value;
		Il2CppCodeGenWriteBarrier(&____groundPlaceName_2, value);
	}

	inline static int32_t get_offset_of_leftSprite_3() { return static_cast<int32_t>(offsetof(Ground_t2141373863, ___leftSprite_3)); }
	inline SpriteU5BU5D_t2761310900* get_leftSprite_3() const { return ___leftSprite_3; }
	inline SpriteU5BU5D_t2761310900** get_address_of_leftSprite_3() { return &___leftSprite_3; }
	inline void set_leftSprite_3(SpriteU5BU5D_t2761310900* value)
	{
		___leftSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___leftSprite_3, value);
	}

	inline static int32_t get_offset_of_middleSprite_4() { return static_cast<int32_t>(offsetof(Ground_t2141373863, ___middleSprite_4)); }
	inline SpriteU5BU5D_t2761310900* get_middleSprite_4() const { return ___middleSprite_4; }
	inline SpriteU5BU5D_t2761310900** get_address_of_middleSprite_4() { return &___middleSprite_4; }
	inline void set_middleSprite_4(SpriteU5BU5D_t2761310900* value)
	{
		___middleSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___middleSprite_4, value);
	}

	inline static int32_t get_offset_of_rightSprite_5() { return static_cast<int32_t>(offsetof(Ground_t2141373863, ___rightSprite_5)); }
	inline SpriteU5BU5D_t2761310900* get_rightSprite_5() const { return ___rightSprite_5; }
	inline SpriteU5BU5D_t2761310900** get_address_of_rightSprite_5() { return &___rightSprite_5; }
	inline void set_rightSprite_5(SpriteU5BU5D_t2761310900* value)
	{
		___rightSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___rightSprite_5, value);
	}

	inline static int32_t get_offset_of_leftTile_6() { return static_cast<int32_t>(offsetof(Ground_t2141373863, ___leftTile_6)); }
	inline GameObject_t3674682005 * get_leftTile_6() const { return ___leftTile_6; }
	inline GameObject_t3674682005 ** get_address_of_leftTile_6() { return &___leftTile_6; }
	inline void set_leftTile_6(GameObject_t3674682005 * value)
	{
		___leftTile_6 = value;
		Il2CppCodeGenWriteBarrier(&___leftTile_6, value);
	}

	inline static int32_t get_offset_of_middleTile_7() { return static_cast<int32_t>(offsetof(Ground_t2141373863, ___middleTile_7)); }
	inline GameObject_t3674682005 * get_middleTile_7() const { return ___middleTile_7; }
	inline GameObject_t3674682005 ** get_address_of_middleTile_7() { return &___middleTile_7; }
	inline void set_middleTile_7(GameObject_t3674682005 * value)
	{
		___middleTile_7 = value;
		Il2CppCodeGenWriteBarrier(&___middleTile_7, value);
	}

	inline static int32_t get_offset_of_rightTile_8() { return static_cast<int32_t>(offsetof(Ground_t2141373863, ___rightTile_8)); }
	inline GameObject_t3674682005 * get_rightTile_8() const { return ___rightTile_8; }
	inline GameObject_t3674682005 ** get_address_of_rightTile_8() { return &___rightTile_8; }
	inline void set_rightTile_8(GameObject_t3674682005 * value)
	{
		___rightTile_8 = value;
		Il2CppCodeGenWriteBarrier(&___rightTile_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
