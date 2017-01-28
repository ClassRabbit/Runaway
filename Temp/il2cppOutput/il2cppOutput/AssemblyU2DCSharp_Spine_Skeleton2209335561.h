#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.SkeletonData
struct SkeletonData_t3387199699;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3025422258;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_t3025925868;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_t2496032397;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t326730273;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_t2012139280;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t2788772027;
// Spine.Skin
struct Skin_t1650992057;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Skeleton
struct  Skeleton_t2209335561  : public Il2CppObject
{
public:
	// Spine.SkeletonData Spine.Skeleton::data
	SkeletonData_t3387199699 * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::bones
	ExposedList_1_t3025422258 * ___bones_1;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::slots
	ExposedList_1_t3025925868 * ___slots_2;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::drawOrder
	ExposedList_1_t3025925868 * ___drawOrder_3;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraints
	ExposedList_1_t2496032397 * ___ikConstraints_4;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraintsSorted
	ExposedList_1_t2496032397 * ___ikConstraintsSorted_5;
	// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::transformConstraints
	ExposedList_1_t326730273 * ___transformConstraints_6;
	// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::pathConstraints
	ExposedList_1_t2012139280 * ___pathConstraints_7;
	// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::updateCache
	ExposedList_1_t2788772027 * ___updateCache_8;
	// Spine.Skin Spine.Skeleton::skin
	Skin_t1650992057 * ___skin_9;
	// System.Single Spine.Skeleton::r
	float ___r_10;
	// System.Single Spine.Skeleton::g
	float ___g_11;
	// System.Single Spine.Skeleton::b
	float ___b_12;
	// System.Single Spine.Skeleton::a
	float ___a_13;
	// System.Single Spine.Skeleton::time
	float ___time_14;
	// System.Boolean Spine.Skeleton::flipX
	bool ___flipX_15;
	// System.Boolean Spine.Skeleton::flipY
	bool ___flipY_16;
	// System.Single Spine.Skeleton::x
	float ___x_17;
	// System.Single Spine.Skeleton::y
	float ___y_18;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___data_0)); }
	inline SkeletonData_t3387199699 * get_data_0() const { return ___data_0; }
	inline SkeletonData_t3387199699 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SkeletonData_t3387199699 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___bones_1)); }
	inline ExposedList_1_t3025422258 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t3025422258 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t3025422258 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___slots_2)); }
	inline ExposedList_1_t3025925868 * get_slots_2() const { return ___slots_2; }
	inline ExposedList_1_t3025925868 ** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(ExposedList_1_t3025925868 * value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier(&___slots_2, value);
	}

	inline static int32_t get_offset_of_drawOrder_3() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___drawOrder_3)); }
	inline ExposedList_1_t3025925868 * get_drawOrder_3() const { return ___drawOrder_3; }
	inline ExposedList_1_t3025925868 ** get_address_of_drawOrder_3() { return &___drawOrder_3; }
	inline void set_drawOrder_3(ExposedList_1_t3025925868 * value)
	{
		___drawOrder_3 = value;
		Il2CppCodeGenWriteBarrier(&___drawOrder_3, value);
	}

	inline static int32_t get_offset_of_ikConstraints_4() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___ikConstraints_4)); }
	inline ExposedList_1_t2496032397 * get_ikConstraints_4() const { return ___ikConstraints_4; }
	inline ExposedList_1_t2496032397 ** get_address_of_ikConstraints_4() { return &___ikConstraints_4; }
	inline void set_ikConstraints_4(ExposedList_1_t2496032397 * value)
	{
		___ikConstraints_4 = value;
		Il2CppCodeGenWriteBarrier(&___ikConstraints_4, value);
	}

	inline static int32_t get_offset_of_ikConstraintsSorted_5() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___ikConstraintsSorted_5)); }
	inline ExposedList_1_t2496032397 * get_ikConstraintsSorted_5() const { return ___ikConstraintsSorted_5; }
	inline ExposedList_1_t2496032397 ** get_address_of_ikConstraintsSorted_5() { return &___ikConstraintsSorted_5; }
	inline void set_ikConstraintsSorted_5(ExposedList_1_t2496032397 * value)
	{
		___ikConstraintsSorted_5 = value;
		Il2CppCodeGenWriteBarrier(&___ikConstraintsSorted_5, value);
	}

	inline static int32_t get_offset_of_transformConstraints_6() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___transformConstraints_6)); }
	inline ExposedList_1_t326730273 * get_transformConstraints_6() const { return ___transformConstraints_6; }
	inline ExposedList_1_t326730273 ** get_address_of_transformConstraints_6() { return &___transformConstraints_6; }
	inline void set_transformConstraints_6(ExposedList_1_t326730273 * value)
	{
		___transformConstraints_6 = value;
		Il2CppCodeGenWriteBarrier(&___transformConstraints_6, value);
	}

	inline static int32_t get_offset_of_pathConstraints_7() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___pathConstraints_7)); }
	inline ExposedList_1_t2012139280 * get_pathConstraints_7() const { return ___pathConstraints_7; }
	inline ExposedList_1_t2012139280 ** get_address_of_pathConstraints_7() { return &___pathConstraints_7; }
	inline void set_pathConstraints_7(ExposedList_1_t2012139280 * value)
	{
		___pathConstraints_7 = value;
		Il2CppCodeGenWriteBarrier(&___pathConstraints_7, value);
	}

	inline static int32_t get_offset_of_updateCache_8() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___updateCache_8)); }
	inline ExposedList_1_t2788772027 * get_updateCache_8() const { return ___updateCache_8; }
	inline ExposedList_1_t2788772027 ** get_address_of_updateCache_8() { return &___updateCache_8; }
	inline void set_updateCache_8(ExposedList_1_t2788772027 * value)
	{
		___updateCache_8 = value;
		Il2CppCodeGenWriteBarrier(&___updateCache_8, value);
	}

	inline static int32_t get_offset_of_skin_9() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___skin_9)); }
	inline Skin_t1650992057 * get_skin_9() const { return ___skin_9; }
	inline Skin_t1650992057 ** get_address_of_skin_9() { return &___skin_9; }
	inline void set_skin_9(Skin_t1650992057 * value)
	{
		___skin_9 = value;
		Il2CppCodeGenWriteBarrier(&___skin_9, value);
	}

	inline static int32_t get_offset_of_r_10() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___r_10)); }
	inline float get_r_10() const { return ___r_10; }
	inline float* get_address_of_r_10() { return &___r_10; }
	inline void set_r_10(float value)
	{
		___r_10 = value;
	}

	inline static int32_t get_offset_of_g_11() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___g_11)); }
	inline float get_g_11() const { return ___g_11; }
	inline float* get_address_of_g_11() { return &___g_11; }
	inline void set_g_11(float value)
	{
		___g_11 = value;
	}

	inline static int32_t get_offset_of_b_12() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___b_12)); }
	inline float get_b_12() const { return ___b_12; }
	inline float* get_address_of_b_12() { return &___b_12; }
	inline void set_b_12(float value)
	{
		___b_12 = value;
	}

	inline static int32_t get_offset_of_a_13() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___a_13)); }
	inline float get_a_13() const { return ___a_13; }
	inline float* get_address_of_a_13() { return &___a_13; }
	inline void set_a_13(float value)
	{
		___a_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_flipX_15() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___flipX_15)); }
	inline bool get_flipX_15() const { return ___flipX_15; }
	inline bool* get_address_of_flipX_15() { return &___flipX_15; }
	inline void set_flipX_15(bool value)
	{
		___flipX_15 = value;
	}

	inline static int32_t get_offset_of_flipY_16() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___flipY_16)); }
	inline bool get_flipY_16() const { return ___flipY_16; }
	inline bool* get_address_of_flipY_16() { return &___flipY_16; }
	inline void set_flipY_16(bool value)
	{
		___flipY_16 = value;
	}

	inline static int32_t get_offset_of_x_17() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___x_17)); }
	inline float get_x_17() const { return ___x_17; }
	inline float* get_address_of_x_17() { return &___x_17; }
	inline void set_x_17(float value)
	{
		___x_17 = value;
	}

	inline static int32_t get_offset_of_y_18() { return static_cast<int32_t>(offsetof(Skeleton_t2209335561, ___y_18)); }
	inline float get_y_18() const { return ___y_18; }
	inline float* get_address_of_y_18() { return &___y_18; }
	inline void set_y_18(float value)
	{
		___y_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
