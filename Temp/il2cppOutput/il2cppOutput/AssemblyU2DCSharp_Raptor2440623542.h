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
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t3721178561;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Raptor
struct  Raptor_t2440623542  : public MonoBehaviour_t667441552
{
public:
	// System.String Raptor::walk
	String_t* ___walk_2;
	// System.String Raptor::gungrab
	String_t* ___gungrab_3;
	// System.String Raptor::gunkeep
	String_t* ___gunkeep_4;
	// System.String Raptor::footstepEvent
	String_t* ___footstepEvent_5;
	// UnityEngine.AudioSource Raptor::footstepAudioSource
	AudioSource_t1740077639 * ___footstepAudioSource_6;
	// Spine.Unity.SkeletonAnimation Raptor::skeletonAnimation
	SkeletonAnimation_t3721178561 * ___skeletonAnimation_7;

public:
	inline static int32_t get_offset_of_walk_2() { return static_cast<int32_t>(offsetof(Raptor_t2440623542, ___walk_2)); }
	inline String_t* get_walk_2() const { return ___walk_2; }
	inline String_t** get_address_of_walk_2() { return &___walk_2; }
	inline void set_walk_2(String_t* value)
	{
		___walk_2 = value;
		Il2CppCodeGenWriteBarrier(&___walk_2, value);
	}

	inline static int32_t get_offset_of_gungrab_3() { return static_cast<int32_t>(offsetof(Raptor_t2440623542, ___gungrab_3)); }
	inline String_t* get_gungrab_3() const { return ___gungrab_3; }
	inline String_t** get_address_of_gungrab_3() { return &___gungrab_3; }
	inline void set_gungrab_3(String_t* value)
	{
		___gungrab_3 = value;
		Il2CppCodeGenWriteBarrier(&___gungrab_3, value);
	}

	inline static int32_t get_offset_of_gunkeep_4() { return static_cast<int32_t>(offsetof(Raptor_t2440623542, ___gunkeep_4)); }
	inline String_t* get_gunkeep_4() const { return ___gunkeep_4; }
	inline String_t** get_address_of_gunkeep_4() { return &___gunkeep_4; }
	inline void set_gunkeep_4(String_t* value)
	{
		___gunkeep_4 = value;
		Il2CppCodeGenWriteBarrier(&___gunkeep_4, value);
	}

	inline static int32_t get_offset_of_footstepEvent_5() { return static_cast<int32_t>(offsetof(Raptor_t2440623542, ___footstepEvent_5)); }
	inline String_t* get_footstepEvent_5() const { return ___footstepEvent_5; }
	inline String_t** get_address_of_footstepEvent_5() { return &___footstepEvent_5; }
	inline void set_footstepEvent_5(String_t* value)
	{
		___footstepEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___footstepEvent_5, value);
	}

	inline static int32_t get_offset_of_footstepAudioSource_6() { return static_cast<int32_t>(offsetof(Raptor_t2440623542, ___footstepAudioSource_6)); }
	inline AudioSource_t1740077639 * get_footstepAudioSource_6() const { return ___footstepAudioSource_6; }
	inline AudioSource_t1740077639 ** get_address_of_footstepAudioSource_6() { return &___footstepAudioSource_6; }
	inline void set_footstepAudioSource_6(AudioSource_t1740077639 * value)
	{
		___footstepAudioSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___footstepAudioSource_6, value);
	}

	inline static int32_t get_offset_of_skeletonAnimation_7() { return static_cast<int32_t>(offsetof(Raptor_t2440623542, ___skeletonAnimation_7)); }
	inline SkeletonAnimation_t3721178561 * get_skeletonAnimation_7() const { return ___skeletonAnimation_7; }
	inline SkeletonAnimation_t3721178561 ** get_address_of_skeletonAnimation_7() { return &___skeletonAnimation_7; }
	inline void set_skeletonAnimation_7(SkeletonAnimation_t3721178561 * value)
	{
		___skeletonAnimation_7 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
