#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// System.String
struct String_t;
// Spine.Slot
struct Slot_t1650993210;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t3933059536;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t2156524054;
// System.Collections.Generic.Dictionary`2<Spine.BoundingBoxAttachment,UnityEngine.PolygonCollider2D>
struct Dictionary_2_t4032885057;
// System.Collections.Generic.Dictionary`2<Spine.BoundingBoxAttachment,System.String>
struct Dictionary_2_t1883592560;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.BoundingBoxFollower
struct  BoundingBoxFollower_t467474383  : public MonoBehaviour_t667441552
{
public:
	// Spine.Unity.SkeletonRenderer Spine.Unity.BoundingBoxFollower::skeletonRenderer
	SkeletonRenderer_t3766155010 * ___skeletonRenderer_2;
	// System.String Spine.Unity.BoundingBoxFollower::slotName
	String_t* ___slotName_3;
	// System.Boolean Spine.Unity.BoundingBoxFollower::isTrigger
	bool ___isTrigger_4;
	// Spine.Slot Spine.Unity.BoundingBoxFollower::slot
	Slot_t1650993210 * ___slot_5;
	// Spine.BoundingBoxAttachment Spine.Unity.BoundingBoxFollower::currentAttachment
	BoundingBoxAttachment_t3933059536 * ___currentAttachment_6;
	// System.String Spine.Unity.BoundingBoxFollower::currentAttachmentName
	String_t* ___currentAttachmentName_7;
	// UnityEngine.PolygonCollider2D Spine.Unity.BoundingBoxFollower::currentCollider
	PolygonCollider2D_t2156524054 * ___currentCollider_8;
	// System.Boolean Spine.Unity.BoundingBoxFollower::valid
	bool ___valid_9;
	// System.Boolean Spine.Unity.BoundingBoxFollower::hasReset
	bool ___hasReset_10;
	// System.Collections.Generic.Dictionary`2<Spine.BoundingBoxAttachment,UnityEngine.PolygonCollider2D> Spine.Unity.BoundingBoxFollower::colliderTable
	Dictionary_2_t4032885057 * ___colliderTable_11;
	// System.Collections.Generic.Dictionary`2<Spine.BoundingBoxAttachment,System.String> Spine.Unity.BoundingBoxFollower::attachmentNameTable
	Dictionary_2_t1883592560 * ___attachmentNameTable_12;

public:
	inline static int32_t get_offset_of_skeletonRenderer_2() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___skeletonRenderer_2)); }
	inline SkeletonRenderer_t3766155010 * get_skeletonRenderer_2() const { return ___skeletonRenderer_2; }
	inline SkeletonRenderer_t3766155010 ** get_address_of_skeletonRenderer_2() { return &___skeletonRenderer_2; }
	inline void set_skeletonRenderer_2(SkeletonRenderer_t3766155010 * value)
	{
		___skeletonRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_2, value);
	}

	inline static int32_t get_offset_of_slotName_3() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___slotName_3)); }
	inline String_t* get_slotName_3() const { return ___slotName_3; }
	inline String_t** get_address_of_slotName_3() { return &___slotName_3; }
	inline void set_slotName_3(String_t* value)
	{
		___slotName_3 = value;
		Il2CppCodeGenWriteBarrier(&___slotName_3, value);
	}

	inline static int32_t get_offset_of_isTrigger_4() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___isTrigger_4)); }
	inline bool get_isTrigger_4() const { return ___isTrigger_4; }
	inline bool* get_address_of_isTrigger_4() { return &___isTrigger_4; }
	inline void set_isTrigger_4(bool value)
	{
		___isTrigger_4 = value;
	}

	inline static int32_t get_offset_of_slot_5() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___slot_5)); }
	inline Slot_t1650993210 * get_slot_5() const { return ___slot_5; }
	inline Slot_t1650993210 ** get_address_of_slot_5() { return &___slot_5; }
	inline void set_slot_5(Slot_t1650993210 * value)
	{
		___slot_5 = value;
		Il2CppCodeGenWriteBarrier(&___slot_5, value);
	}

	inline static int32_t get_offset_of_currentAttachment_6() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___currentAttachment_6)); }
	inline BoundingBoxAttachment_t3933059536 * get_currentAttachment_6() const { return ___currentAttachment_6; }
	inline BoundingBoxAttachment_t3933059536 ** get_address_of_currentAttachment_6() { return &___currentAttachment_6; }
	inline void set_currentAttachment_6(BoundingBoxAttachment_t3933059536 * value)
	{
		___currentAttachment_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttachment_6, value);
	}

	inline static int32_t get_offset_of_currentAttachmentName_7() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___currentAttachmentName_7)); }
	inline String_t* get_currentAttachmentName_7() const { return ___currentAttachmentName_7; }
	inline String_t** get_address_of_currentAttachmentName_7() { return &___currentAttachmentName_7; }
	inline void set_currentAttachmentName_7(String_t* value)
	{
		___currentAttachmentName_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttachmentName_7, value);
	}

	inline static int32_t get_offset_of_currentCollider_8() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___currentCollider_8)); }
	inline PolygonCollider2D_t2156524054 * get_currentCollider_8() const { return ___currentCollider_8; }
	inline PolygonCollider2D_t2156524054 ** get_address_of_currentCollider_8() { return &___currentCollider_8; }
	inline void set_currentCollider_8(PolygonCollider2D_t2156524054 * value)
	{
		___currentCollider_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentCollider_8, value);
	}

	inline static int32_t get_offset_of_valid_9() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___valid_9)); }
	inline bool get_valid_9() const { return ___valid_9; }
	inline bool* get_address_of_valid_9() { return &___valid_9; }
	inline void set_valid_9(bool value)
	{
		___valid_9 = value;
	}

	inline static int32_t get_offset_of_hasReset_10() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___hasReset_10)); }
	inline bool get_hasReset_10() const { return ___hasReset_10; }
	inline bool* get_address_of_hasReset_10() { return &___hasReset_10; }
	inline void set_hasReset_10(bool value)
	{
		___hasReset_10 = value;
	}

	inline static int32_t get_offset_of_colliderTable_11() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___colliderTable_11)); }
	inline Dictionary_2_t4032885057 * get_colliderTable_11() const { return ___colliderTable_11; }
	inline Dictionary_2_t4032885057 ** get_address_of_colliderTable_11() { return &___colliderTable_11; }
	inline void set_colliderTable_11(Dictionary_2_t4032885057 * value)
	{
		___colliderTable_11 = value;
		Il2CppCodeGenWriteBarrier(&___colliderTable_11, value);
	}

	inline static int32_t get_offset_of_attachmentNameTable_12() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t467474383, ___attachmentNameTable_12)); }
	inline Dictionary_2_t1883592560 * get_attachmentNameTable_12() const { return ___attachmentNameTable_12; }
	inline Dictionary_2_t1883592560 ** get_address_of_attachmentNameTable_12() { return &___attachmentNameTable_12; }
	inline void set_attachmentNameTable_12(Dictionary_2_t1883592560 * value)
	{
		___attachmentNameTable_12 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentNameTable_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
