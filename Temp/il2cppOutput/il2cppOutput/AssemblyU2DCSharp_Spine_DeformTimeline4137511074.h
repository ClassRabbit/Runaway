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
// System.Single[][]
struct SingleU5BU5DU5BU5D_t1565445624;
// Spine.VertexAttachment
struct VertexAttachment_t2433703843;

#include "AssemblyU2DCSharp_Spine_CurveTimeline3832230678.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.DeformTimeline
struct  DeformTimeline_t4137511074  : public CurveTimeline_t3832230678
{
public:
	// System.Int32 Spine.DeformTimeline::slotIndex
	int32_t ___slotIndex_5;
	// System.Single[] Spine.DeformTimeline::frames
	SingleU5BU5D_t2316563989* ___frames_6;
	// System.Single[][] Spine.DeformTimeline::frameVertices
	SingleU5BU5DU5BU5D_t1565445624* ___frameVertices_7;
	// Spine.VertexAttachment Spine.DeformTimeline::attachment
	VertexAttachment_t2433703843 * ___attachment_8;

public:
	inline static int32_t get_offset_of_slotIndex_5() { return static_cast<int32_t>(offsetof(DeformTimeline_t4137511074, ___slotIndex_5)); }
	inline int32_t get_slotIndex_5() const { return ___slotIndex_5; }
	inline int32_t* get_address_of_slotIndex_5() { return &___slotIndex_5; }
	inline void set_slotIndex_5(int32_t value)
	{
		___slotIndex_5 = value;
	}

	inline static int32_t get_offset_of_frames_6() { return static_cast<int32_t>(offsetof(DeformTimeline_t4137511074, ___frames_6)); }
	inline SingleU5BU5D_t2316563989* get_frames_6() const { return ___frames_6; }
	inline SingleU5BU5D_t2316563989** get_address_of_frames_6() { return &___frames_6; }
	inline void set_frames_6(SingleU5BU5D_t2316563989* value)
	{
		___frames_6 = value;
		Il2CppCodeGenWriteBarrier(&___frames_6, value);
	}

	inline static int32_t get_offset_of_frameVertices_7() { return static_cast<int32_t>(offsetof(DeformTimeline_t4137511074, ___frameVertices_7)); }
	inline SingleU5BU5DU5BU5D_t1565445624* get_frameVertices_7() const { return ___frameVertices_7; }
	inline SingleU5BU5DU5BU5D_t1565445624** get_address_of_frameVertices_7() { return &___frameVertices_7; }
	inline void set_frameVertices_7(SingleU5BU5DU5BU5D_t1565445624* value)
	{
		___frameVertices_7 = value;
		Il2CppCodeGenWriteBarrier(&___frameVertices_7, value);
	}

	inline static int32_t get_offset_of_attachment_8() { return static_cast<int32_t>(offsetof(DeformTimeline_t4137511074, ___attachment_8)); }
	inline VertexAttachment_t2433703843 * get_attachment_8() const { return ___attachment_8; }
	inline VertexAttachment_t2433703843 ** get_address_of_attachment_8() { return &___attachment_8; }
	inline void set_attachment_8(VertexAttachment_t2433703843 * value)
	{
		___attachment_8 = value;
		Il2CppCodeGenWriteBarrier(&___attachment_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
