#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.TrackEntry
struct TrackEntry_t1654022115;
// Spine.Animation
struct Animation_t3189667530;
// Spine.AnimationState/StartEndDelegate
struct StartEndDelegate_t3416038005;
// Spine.AnimationState/EventDelegate
struct EventDelegate_t3743540456;
// Spine.AnimationState/CompleteDelegate
struct CompleteDelegate_t1469797013;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.TrackEntry
struct  TrackEntry_t1654022115  : public Il2CppObject
{
public:
	// Spine.TrackEntry Spine.TrackEntry::next
	TrackEntry_t1654022115 * ___next_0;
	// Spine.TrackEntry Spine.TrackEntry::previous
	TrackEntry_t1654022115 * ___previous_1;
	// Spine.Animation Spine.TrackEntry::animation
	Animation_t3189667530 * ___animation_2;
	// System.Boolean Spine.TrackEntry::loop
	bool ___loop_3;
	// System.Single Spine.TrackEntry::delay
	float ___delay_4;
	// System.Single Spine.TrackEntry::time
	float ___time_5;
	// System.Single Spine.TrackEntry::lastTime
	float ___lastTime_6;
	// System.Single Spine.TrackEntry::endTime
	float ___endTime_7;
	// System.Single Spine.TrackEntry::timeScale
	float ___timeScale_8;
	// System.Single Spine.TrackEntry::mixTime
	float ___mixTime_9;
	// System.Single Spine.TrackEntry::mixDuration
	float ___mixDuration_10;
	// System.Single Spine.TrackEntry::mix
	float ___mix_11;
	// Spine.AnimationState/StartEndDelegate Spine.TrackEntry::Start
	StartEndDelegate_t3416038005 * ___Start_12;
	// Spine.AnimationState/StartEndDelegate Spine.TrackEntry::End
	StartEndDelegate_t3416038005 * ___End_13;
	// Spine.AnimationState/EventDelegate Spine.TrackEntry::Event
	EventDelegate_t3743540456 * ___Event_14;
	// Spine.AnimationState/CompleteDelegate Spine.TrackEntry::Complete
	CompleteDelegate_t1469797013 * ___Complete_15;

public:
	inline static int32_t get_offset_of_next_0() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___next_0)); }
	inline TrackEntry_t1654022115 * get_next_0() const { return ___next_0; }
	inline TrackEntry_t1654022115 ** get_address_of_next_0() { return &___next_0; }
	inline void set_next_0(TrackEntry_t1654022115 * value)
	{
		___next_0 = value;
		Il2CppCodeGenWriteBarrier(&___next_0, value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___previous_1)); }
	inline TrackEntry_t1654022115 * get_previous_1() const { return ___previous_1; }
	inline TrackEntry_t1654022115 ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(TrackEntry_t1654022115 * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier(&___previous_1, value);
	}

	inline static int32_t get_offset_of_animation_2() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___animation_2)); }
	inline Animation_t3189667530 * get_animation_2() const { return ___animation_2; }
	inline Animation_t3189667530 ** get_address_of_animation_2() { return &___animation_2; }
	inline void set_animation_2(Animation_t3189667530 * value)
	{
		___animation_2 = value;
		Il2CppCodeGenWriteBarrier(&___animation_2, value);
	}

	inline static int32_t get_offset_of_loop_3() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___loop_3)); }
	inline bool get_loop_3() const { return ___loop_3; }
	inline bool* get_address_of_loop_3() { return &___loop_3; }
	inline void set_loop_3(bool value)
	{
		___loop_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_lastTime_6() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___lastTime_6)); }
	inline float get_lastTime_6() const { return ___lastTime_6; }
	inline float* get_address_of_lastTime_6() { return &___lastTime_6; }
	inline void set_lastTime_6(float value)
	{
		___lastTime_6 = value;
	}

	inline static int32_t get_offset_of_endTime_7() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___endTime_7)); }
	inline float get_endTime_7() const { return ___endTime_7; }
	inline float* get_address_of_endTime_7() { return &___endTime_7; }
	inline void set_endTime_7(float value)
	{
		___endTime_7 = value;
	}

	inline static int32_t get_offset_of_timeScale_8() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___timeScale_8)); }
	inline float get_timeScale_8() const { return ___timeScale_8; }
	inline float* get_address_of_timeScale_8() { return &___timeScale_8; }
	inline void set_timeScale_8(float value)
	{
		___timeScale_8 = value;
	}

	inline static int32_t get_offset_of_mixTime_9() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___mixTime_9)); }
	inline float get_mixTime_9() const { return ___mixTime_9; }
	inline float* get_address_of_mixTime_9() { return &___mixTime_9; }
	inline void set_mixTime_9(float value)
	{
		___mixTime_9 = value;
	}

	inline static int32_t get_offset_of_mixDuration_10() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___mixDuration_10)); }
	inline float get_mixDuration_10() const { return ___mixDuration_10; }
	inline float* get_address_of_mixDuration_10() { return &___mixDuration_10; }
	inline void set_mixDuration_10(float value)
	{
		___mixDuration_10 = value;
	}

	inline static int32_t get_offset_of_mix_11() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___mix_11)); }
	inline float get_mix_11() const { return ___mix_11; }
	inline float* get_address_of_mix_11() { return &___mix_11; }
	inline void set_mix_11(float value)
	{
		___mix_11 = value;
	}

	inline static int32_t get_offset_of_Start_12() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___Start_12)); }
	inline StartEndDelegate_t3416038005 * get_Start_12() const { return ___Start_12; }
	inline StartEndDelegate_t3416038005 ** get_address_of_Start_12() { return &___Start_12; }
	inline void set_Start_12(StartEndDelegate_t3416038005 * value)
	{
		___Start_12 = value;
		Il2CppCodeGenWriteBarrier(&___Start_12, value);
	}

	inline static int32_t get_offset_of_End_13() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___End_13)); }
	inline StartEndDelegate_t3416038005 * get_End_13() const { return ___End_13; }
	inline StartEndDelegate_t3416038005 ** get_address_of_End_13() { return &___End_13; }
	inline void set_End_13(StartEndDelegate_t3416038005 * value)
	{
		___End_13 = value;
		Il2CppCodeGenWriteBarrier(&___End_13, value);
	}

	inline static int32_t get_offset_of_Event_14() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___Event_14)); }
	inline EventDelegate_t3743540456 * get_Event_14() const { return ___Event_14; }
	inline EventDelegate_t3743540456 ** get_address_of_Event_14() { return &___Event_14; }
	inline void set_Event_14(EventDelegate_t3743540456 * value)
	{
		___Event_14 = value;
		Il2CppCodeGenWriteBarrier(&___Event_14, value);
	}

	inline static int32_t get_offset_of_Complete_15() { return static_cast<int32_t>(offsetof(TrackEntry_t1654022115, ___Complete_15)); }
	inline CompleteDelegate_t1469797013 * get_Complete_15() const { return ___Complete_15; }
	inline CompleteDelegate_t1469797013 ** get_address_of_Complete_15() { return &___Complete_15; }
	inline void set_Complete_15(CompleteDelegate_t1469797013 * value)
	{
		___Complete_15 = value;
		Il2CppCodeGenWriteBarrier(&___Complete_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
