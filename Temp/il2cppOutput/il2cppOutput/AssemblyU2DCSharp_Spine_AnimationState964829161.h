#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.AnimationStateData
struct AnimationStateData_t250640307;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t3028954773;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;
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

// Spine.AnimationState
struct  AnimationState_t964829161  : public Il2CppObject
{
public:
	// Spine.AnimationStateData Spine.AnimationState::data
	AnimationStateData_t250640307 * ___data_0;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::tracks
	ExposedList_1_t3028954773 * ___tracks_1;
	// Spine.ExposedList`1<Spine.Event> Spine.AnimationState::events
	ExposedList_1_t1740365586 * ___events_2;
	// System.Single Spine.AnimationState::timeScale
	float ___timeScale_3;
	// Spine.AnimationState/StartEndDelegate Spine.AnimationState::Start
	StartEndDelegate_t3416038005 * ___Start_4;
	// Spine.AnimationState/StartEndDelegate Spine.AnimationState::End
	StartEndDelegate_t3416038005 * ___End_5;
	// Spine.AnimationState/EventDelegate Spine.AnimationState::Event
	EventDelegate_t3743540456 * ___Event_6;
	// Spine.AnimationState/CompleteDelegate Spine.AnimationState::Complete
	CompleteDelegate_t1469797013 * ___Complete_7;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(AnimationState_t964829161, ___data_0)); }
	inline AnimationStateData_t250640307 * get_data_0() const { return ___data_0; }
	inline AnimationStateData_t250640307 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(AnimationStateData_t250640307 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_tracks_1() { return static_cast<int32_t>(offsetof(AnimationState_t964829161, ___tracks_1)); }
	inline ExposedList_1_t3028954773 * get_tracks_1() const { return ___tracks_1; }
	inline ExposedList_1_t3028954773 ** get_address_of_tracks_1() { return &___tracks_1; }
	inline void set_tracks_1(ExposedList_1_t3028954773 * value)
	{
		___tracks_1 = value;
		Il2CppCodeGenWriteBarrier(&___tracks_1, value);
	}

	inline static int32_t get_offset_of_events_2() { return static_cast<int32_t>(offsetof(AnimationState_t964829161, ___events_2)); }
	inline ExposedList_1_t1740365586 * get_events_2() const { return ___events_2; }
	inline ExposedList_1_t1740365586 ** get_address_of_events_2() { return &___events_2; }
	inline void set_events_2(ExposedList_1_t1740365586 * value)
	{
		___events_2 = value;
		Il2CppCodeGenWriteBarrier(&___events_2, value);
	}

	inline static int32_t get_offset_of_timeScale_3() { return static_cast<int32_t>(offsetof(AnimationState_t964829161, ___timeScale_3)); }
	inline float get_timeScale_3() const { return ___timeScale_3; }
	inline float* get_address_of_timeScale_3() { return &___timeScale_3; }
	inline void set_timeScale_3(float value)
	{
		___timeScale_3 = value;
	}

	inline static int32_t get_offset_of_Start_4() { return static_cast<int32_t>(offsetof(AnimationState_t964829161, ___Start_4)); }
	inline StartEndDelegate_t3416038005 * get_Start_4() const { return ___Start_4; }
	inline StartEndDelegate_t3416038005 ** get_address_of_Start_4() { return &___Start_4; }
	inline void set_Start_4(StartEndDelegate_t3416038005 * value)
	{
		___Start_4 = value;
		Il2CppCodeGenWriteBarrier(&___Start_4, value);
	}

	inline static int32_t get_offset_of_End_5() { return static_cast<int32_t>(offsetof(AnimationState_t964829161, ___End_5)); }
	inline StartEndDelegate_t3416038005 * get_End_5() const { return ___End_5; }
	inline StartEndDelegate_t3416038005 ** get_address_of_End_5() { return &___End_5; }
	inline void set_End_5(StartEndDelegate_t3416038005 * value)
	{
		___End_5 = value;
		Il2CppCodeGenWriteBarrier(&___End_5, value);
	}

	inline static int32_t get_offset_of_Event_6() { return static_cast<int32_t>(offsetof(AnimationState_t964829161, ___Event_6)); }
	inline EventDelegate_t3743540456 * get_Event_6() const { return ___Event_6; }
	inline EventDelegate_t3743540456 ** get_address_of_Event_6() { return &___Event_6; }
	inline void set_Event_6(EventDelegate_t3743540456 * value)
	{
		___Event_6 = value;
		Il2CppCodeGenWriteBarrier(&___Event_6, value);
	}

	inline static int32_t get_offset_of_Complete_7() { return static_cast<int32_t>(offsetof(AnimationState_t964829161, ___Complete_7)); }
	inline CompleteDelegate_t1469797013 * get_Complete_7() const { return ___Complete_7; }
	inline CompleteDelegate_t1469797013 ** get_address_of_Complete_7() { return &___Complete_7; }
	inline void set_Complete_7(CompleteDelegate_t1469797013 * value)
	{
		___Complete_7 = value;
		Il2CppCodeGenWriteBarrier(&___Complete_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
