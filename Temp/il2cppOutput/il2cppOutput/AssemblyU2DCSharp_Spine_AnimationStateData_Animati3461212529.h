#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Animation
struct Animation_t3189667530;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.AnimationStateData/AnimationPair
struct  AnimationPair_t3461212529 
{
public:
	// Spine.Animation Spine.AnimationStateData/AnimationPair::a1
	Animation_t3189667530 * ___a1_0;
	// Spine.Animation Spine.AnimationStateData/AnimationPair::a2
	Animation_t3189667530 * ___a2_1;

public:
	inline static int32_t get_offset_of_a1_0() { return static_cast<int32_t>(offsetof(AnimationPair_t3461212529, ___a1_0)); }
	inline Animation_t3189667530 * get_a1_0() const { return ___a1_0; }
	inline Animation_t3189667530 ** get_address_of_a1_0() { return &___a1_0; }
	inline void set_a1_0(Animation_t3189667530 * value)
	{
		___a1_0 = value;
		Il2CppCodeGenWriteBarrier(&___a1_0, value);
	}

	inline static int32_t get_offset_of_a2_1() { return static_cast<int32_t>(offsetof(AnimationPair_t3461212529, ___a2_1)); }
	inline Animation_t3189667530 * get_a2_1() const { return ___a2_1; }
	inline Animation_t3189667530 ** get_address_of_a2_1() { return &___a2_1; }
	inline void set_a2_1(Animation_t3189667530 * value)
	{
		___a2_1 = value;
		Il2CppCodeGenWriteBarrier(&___a2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Spine.AnimationStateData/AnimationPair
struct AnimationPair_t3461212529_marshaled_pinvoke
{
	Animation_t3189667530 * ___a1_0;
	Animation_t3189667530 * ___a2_1;
};
// Native definition for marshalling of: Spine.AnimationStateData/AnimationPair
struct AnimationPair_t3461212529_marshaled_com
{
	Animation_t3189667530 * ___a1_0;
	Animation_t3189667530 * ___a2_1;
};
