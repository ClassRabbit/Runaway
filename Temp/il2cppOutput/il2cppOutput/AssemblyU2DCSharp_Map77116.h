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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Map
struct  Map_t77116  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Map::groundsTarget
	GameObject_t3674682005 * ___groundsTarget_2;
	// UnityEngine.GameObject Map::groundPrefab
	GameObject_t3674682005 * ___groundPrefab_3;
	// UnityEngine.GameObject[] Map::groundsArray
	GameObjectU5BU5D_t2662109048* ___groundsArray_4;

public:
	inline static int32_t get_offset_of_groundsTarget_2() { return static_cast<int32_t>(offsetof(Map_t77116, ___groundsTarget_2)); }
	inline GameObject_t3674682005 * get_groundsTarget_2() const { return ___groundsTarget_2; }
	inline GameObject_t3674682005 ** get_address_of_groundsTarget_2() { return &___groundsTarget_2; }
	inline void set_groundsTarget_2(GameObject_t3674682005 * value)
	{
		___groundsTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___groundsTarget_2, value);
	}

	inline static int32_t get_offset_of_groundPrefab_3() { return static_cast<int32_t>(offsetof(Map_t77116, ___groundPrefab_3)); }
	inline GameObject_t3674682005 * get_groundPrefab_3() const { return ___groundPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_groundPrefab_3() { return &___groundPrefab_3; }
	inline void set_groundPrefab_3(GameObject_t3674682005 * value)
	{
		___groundPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___groundPrefab_3, value);
	}

	inline static int32_t get_offset_of_groundsArray_4() { return static_cast<int32_t>(offsetof(Map_t77116, ___groundsArray_4)); }
	inline GameObjectU5BU5D_t2662109048* get_groundsArray_4() const { return ___groundsArray_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_groundsArray_4() { return &___groundsArray_4; }
	inline void set_groundsArray_4(GameObjectU5BU5D_t2662109048* value)
	{
		___groundsArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___groundsArray_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
