#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Event[]
struct EventU5BU5D_t3124937249;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.EventTimeline
struct  EventTimeline_t1195166145  : public Il2CppObject
{
public:
	// System.Single[] Spine.EventTimeline::frames
	SingleU5BU5D_t2316563989* ___frames_0;
	// Spine.Event[] Spine.EventTimeline::events
	EventU5BU5D_t3124937249* ___events_1;

public:
	inline static int32_t get_offset_of_frames_0() { return static_cast<int32_t>(offsetof(EventTimeline_t1195166145, ___frames_0)); }
	inline SingleU5BU5D_t2316563989* get_frames_0() const { return ___frames_0; }
	inline SingleU5BU5D_t2316563989** get_address_of_frames_0() { return &___frames_0; }
	inline void set_frames_0(SingleU5BU5D_t2316563989* value)
	{
		___frames_0 = value;
		Il2CppCodeGenWriteBarrier(&___frames_0, value);
	}

	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(EventTimeline_t1195166145, ___events_1)); }
	inline EventU5BU5D_t3124937249* get_events_1() const { return ___events_1; }
	inline EventU5BU5D_t3124937249** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventU5BU5D_t3124937249* value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier(&___events_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
