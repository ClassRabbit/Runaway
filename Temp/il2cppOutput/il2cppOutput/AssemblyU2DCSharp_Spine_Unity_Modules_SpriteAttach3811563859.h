#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t3199167241;
// System.String
struct String_t;
// Spine.Unity.Modules.SpriteAttachmentLoader
struct SpriteAttachmentLoader_t3928570551;
// Spine.RegionAttachment
struct RegionAttachment_t2459988211;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SpriteAttacher
struct  SpriteAttacher_t3811563859  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Spine.Unity.Modules.SpriteAttacher::attachOnStart
	bool ___attachOnStart_2;
	// System.Boolean Spine.Unity.Modules.SpriteAttacher::keepLoaderInMemory
	bool ___keepLoaderInMemory_3;
	// UnityEngine.Sprite Spine.Unity.Modules.SpriteAttacher::sprite
	Sprite_t3199167241 * ___sprite_4;
	// System.String Spine.Unity.Modules.SpriteAttacher::slot
	String_t* ___slot_5;
	// Spine.Unity.Modules.SpriteAttachmentLoader Spine.Unity.Modules.SpriteAttacher::loader
	SpriteAttachmentLoader_t3928570551 * ___loader_6;
	// Spine.RegionAttachment Spine.Unity.Modules.SpriteAttacher::attachment
	RegionAttachment_t2459988211 * ___attachment_7;

public:
	inline static int32_t get_offset_of_attachOnStart_2() { return static_cast<int32_t>(offsetof(SpriteAttacher_t3811563859, ___attachOnStart_2)); }
	inline bool get_attachOnStart_2() const { return ___attachOnStart_2; }
	inline bool* get_address_of_attachOnStart_2() { return &___attachOnStart_2; }
	inline void set_attachOnStart_2(bool value)
	{
		___attachOnStart_2 = value;
	}

	inline static int32_t get_offset_of_keepLoaderInMemory_3() { return static_cast<int32_t>(offsetof(SpriteAttacher_t3811563859, ___keepLoaderInMemory_3)); }
	inline bool get_keepLoaderInMemory_3() const { return ___keepLoaderInMemory_3; }
	inline bool* get_address_of_keepLoaderInMemory_3() { return &___keepLoaderInMemory_3; }
	inline void set_keepLoaderInMemory_3(bool value)
	{
		___keepLoaderInMemory_3 = value;
	}

	inline static int32_t get_offset_of_sprite_4() { return static_cast<int32_t>(offsetof(SpriteAttacher_t3811563859, ___sprite_4)); }
	inline Sprite_t3199167241 * get_sprite_4() const { return ___sprite_4; }
	inline Sprite_t3199167241 ** get_address_of_sprite_4() { return &___sprite_4; }
	inline void set_sprite_4(Sprite_t3199167241 * value)
	{
		___sprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_4, value);
	}

	inline static int32_t get_offset_of_slot_5() { return static_cast<int32_t>(offsetof(SpriteAttacher_t3811563859, ___slot_5)); }
	inline String_t* get_slot_5() const { return ___slot_5; }
	inline String_t** get_address_of_slot_5() { return &___slot_5; }
	inline void set_slot_5(String_t* value)
	{
		___slot_5 = value;
		Il2CppCodeGenWriteBarrier(&___slot_5, value);
	}

	inline static int32_t get_offset_of_loader_6() { return static_cast<int32_t>(offsetof(SpriteAttacher_t3811563859, ___loader_6)); }
	inline SpriteAttachmentLoader_t3928570551 * get_loader_6() const { return ___loader_6; }
	inline SpriteAttachmentLoader_t3928570551 ** get_address_of_loader_6() { return &___loader_6; }
	inline void set_loader_6(SpriteAttachmentLoader_t3928570551 * value)
	{
		___loader_6 = value;
		Il2CppCodeGenWriteBarrier(&___loader_6, value);
	}

	inline static int32_t get_offset_of_attachment_7() { return static_cast<int32_t>(offsetof(SpriteAttacher_t3811563859, ___attachment_7)); }
	inline RegionAttachment_t2459988211 * get_attachment_7() const { return ___attachment_7; }
	inline RegionAttachment_t2459988211 ** get_address_of_attachment_7() { return &___attachment_7; }
	inline void set_attachment_7(RegionAttachment_t2459988211 * value)
	{
		___attachment_7 = value;
		Il2CppCodeGenWriteBarrier(&___attachment_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
