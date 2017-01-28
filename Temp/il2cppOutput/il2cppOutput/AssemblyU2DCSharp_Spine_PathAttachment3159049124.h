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

#include "AssemblyU2DCSharp_Spine_VertexAttachment2433703843.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.PathAttachment
struct  PathAttachment_t3159049124  : public VertexAttachment_t2433703843
{
public:
	// System.Single[] Spine.PathAttachment::lengths
	SingleU5BU5D_t2316563989* ___lengths_4;
	// System.Boolean Spine.PathAttachment::closed
	bool ___closed_5;
	// System.Boolean Spine.PathAttachment::constantSpeed
	bool ___constantSpeed_6;

public:
	inline static int32_t get_offset_of_lengths_4() { return static_cast<int32_t>(offsetof(PathAttachment_t3159049124, ___lengths_4)); }
	inline SingleU5BU5D_t2316563989* get_lengths_4() const { return ___lengths_4; }
	inline SingleU5BU5D_t2316563989** get_address_of_lengths_4() { return &___lengths_4; }
	inline void set_lengths_4(SingleU5BU5D_t2316563989* value)
	{
		___lengths_4 = value;
		Il2CppCodeGenWriteBarrier(&___lengths_4, value);
	}

	inline static int32_t get_offset_of_closed_5() { return static_cast<int32_t>(offsetof(PathAttachment_t3159049124, ___closed_5)); }
	inline bool get_closed_5() const { return ___closed_5; }
	inline bool* get_address_of_closed_5() { return &___closed_5; }
	inline void set_closed_5(bool value)
	{
		___closed_5 = value;
	}

	inline static int32_t get_offset_of_constantSpeed_6() { return static_cast<int32_t>(offsetof(PathAttachment_t3159049124, ___constantSpeed_6)); }
	inline bool get_constantSpeed_6() const { return ___constantSpeed_6; }
	inline bool* get_address_of_constantSpeed_6() { return &___constantSpeed_6; }
	inline void set_constantSpeed_6(bool value)
	{
		___constantSpeed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
