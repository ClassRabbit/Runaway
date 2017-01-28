#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "AssemblyU2DCSharp_Spine_Attachment2849733407.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.VertexAttachment
struct  VertexAttachment_t2433703843  : public Attachment_t2849733407
{
public:
	// System.Int32[] Spine.VertexAttachment::bones
	Int32U5BU5D_t3230847821* ___bones_1;
	// System.Single[] Spine.VertexAttachment::vertices
	SingleU5BU5D_t2316563989* ___vertices_2;
	// System.Int32 Spine.VertexAttachment::worldVerticesLength
	int32_t ___worldVerticesLength_3;

public:
	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(VertexAttachment_t2433703843, ___bones_1)); }
	inline Int32U5BU5D_t3230847821* get_bones_1() const { return ___bones_1; }
	inline Int32U5BU5D_t3230847821** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(Int32U5BU5D_t3230847821* value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(VertexAttachment_t2433703843, ___vertices_2)); }
	inline SingleU5BU5D_t2316563989* get_vertices_2() const { return ___vertices_2; }
	inline SingleU5BU5D_t2316563989** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(SingleU5BU5D_t2316563989* value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_2, value);
	}

	inline static int32_t get_offset_of_worldVerticesLength_3() { return static_cast<int32_t>(offsetof(VertexAttachment_t2433703843, ___worldVerticesLength_3)); }
	inline int32_t get_worldVerticesLength_3() const { return ___worldVerticesLength_3; }
	inline int32_t* get_address_of_worldVerticesLength_3() { return &___worldVerticesLength_3; }
	inline void set_worldVerticesLength_3(int32_t value)
	{
		___worldVerticesLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
