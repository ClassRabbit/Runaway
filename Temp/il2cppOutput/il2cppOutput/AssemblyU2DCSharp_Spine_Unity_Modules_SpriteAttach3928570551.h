#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Spine.AtlasRegion>
struct Dictionary_2_t1134293740;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.Shader
struct Shader_t3191267369;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SpriteAttachmentLoader
struct  SpriteAttachmentLoader_t3928570551  : public Il2CppObject
{
public:
	// UnityEngine.Sprite Spine.Unity.Modules.SpriteAttachmentLoader::sprite
	Sprite_t3199167241 * ___sprite_2;
	// UnityEngine.Shader Spine.Unity.Modules.SpriteAttachmentLoader::shader
	Shader_t3191267369 * ___shader_3;

public:
	inline static int32_t get_offset_of_sprite_2() { return static_cast<int32_t>(offsetof(SpriteAttachmentLoader_t3928570551, ___sprite_2)); }
	inline Sprite_t3199167241 * get_sprite_2() const { return ___sprite_2; }
	inline Sprite_t3199167241 ** get_address_of_sprite_2() { return &___sprite_2; }
	inline void set_sprite_2(Sprite_t3199167241 * value)
	{
		___sprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_2, value);
	}

	inline static int32_t get_offset_of_shader_3() { return static_cast<int32_t>(offsetof(SpriteAttachmentLoader_t3928570551, ___shader_3)); }
	inline Shader_t3191267369 * get_shader_3() const { return ___shader_3; }
	inline Shader_t3191267369 ** get_address_of_shader_3() { return &___shader_3; }
	inline void set_shader_3(Shader_t3191267369 * value)
	{
		___shader_3 = value;
		Il2CppCodeGenWriteBarrier(&___shader_3, value);
	}
};

struct SpriteAttachmentLoader_t3928570551_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Spine.AtlasRegion> Spine.Unity.Modules.SpriteAttachmentLoader::atlasTable
	Dictionary_2_t1134293740 * ___atlasTable_0;
	// System.Collections.Generic.List`1<System.Int32> Spine.Unity.Modules.SpriteAttachmentLoader::premultipliedAtlasIds
	List_1_t2522024052 * ___premultipliedAtlasIds_1;

public:
	inline static int32_t get_offset_of_atlasTable_0() { return static_cast<int32_t>(offsetof(SpriteAttachmentLoader_t3928570551_StaticFields, ___atlasTable_0)); }
	inline Dictionary_2_t1134293740 * get_atlasTable_0() const { return ___atlasTable_0; }
	inline Dictionary_2_t1134293740 ** get_address_of_atlasTable_0() { return &___atlasTable_0; }
	inline void set_atlasTable_0(Dictionary_2_t1134293740 * value)
	{
		___atlasTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___atlasTable_0, value);
	}

	inline static int32_t get_offset_of_premultipliedAtlasIds_1() { return static_cast<int32_t>(offsetof(SpriteAttachmentLoader_t3928570551_StaticFields, ___premultipliedAtlasIds_1)); }
	inline List_1_t2522024052 * get_premultipliedAtlasIds_1() const { return ___premultipliedAtlasIds_1; }
	inline List_1_t2522024052 ** get_address_of_premultipliedAtlasIds_1() { return &___premultipliedAtlasIds_1; }
	inline void set_premultipliedAtlasIds_1(List_1_t2522024052 * value)
	{
		___premultipliedAtlasIds_1 = value;
		Il2CppCodeGenWriteBarrier(&___premultipliedAtlasIds_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
