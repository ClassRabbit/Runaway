#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.BoneData
struct BoneData_t2151574858;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.Bone
struct Bone_t1650489600;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3025422258;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Bone
struct  Bone_t1650489600  : public Il2CppObject
{
public:
	// Spine.BoneData Spine.Bone::data
	BoneData_t2151574858 * ___data_1;
	// Spine.Skeleton Spine.Bone::skeleton
	Skeleton_t2209335561 * ___skeleton_2;
	// Spine.Bone Spine.Bone::parent
	Bone_t1650489600 * ___parent_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.Bone::children
	ExposedList_1_t3025422258 * ___children_4;
	// System.Single Spine.Bone::x
	float ___x_5;
	// System.Single Spine.Bone::y
	float ___y_6;
	// System.Single Spine.Bone::rotation
	float ___rotation_7;
	// System.Single Spine.Bone::scaleX
	float ___scaleX_8;
	// System.Single Spine.Bone::scaleY
	float ___scaleY_9;
	// System.Single Spine.Bone::shearX
	float ___shearX_10;
	// System.Single Spine.Bone::shearY
	float ___shearY_11;
	// System.Single Spine.Bone::appliedRotation
	float ___appliedRotation_12;
	// System.Single Spine.Bone::a
	float ___a_13;
	// System.Single Spine.Bone::b
	float ___b_14;
	// System.Single Spine.Bone::worldX
	float ___worldX_15;
	// System.Single Spine.Bone::c
	float ___c_16;
	// System.Single Spine.Bone::d
	float ___d_17;
	// System.Single Spine.Bone::worldY
	float ___worldY_18;
	// System.Single Spine.Bone::worldSignX
	float ___worldSignX_19;
	// System.Single Spine.Bone::worldSignY
	float ___worldSignY_20;
	// System.Boolean Spine.Bone::sorted
	bool ___sorted_21;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___data_1)); }
	inline BoneData_t2151574858 * get_data_1() const { return ___data_1; }
	inline BoneData_t2151574858 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoneData_t2151574858 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_skeleton_2() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___skeleton_2)); }
	inline Skeleton_t2209335561 * get_skeleton_2() const { return ___skeleton_2; }
	inline Skeleton_t2209335561 ** get_address_of_skeleton_2() { return &___skeleton_2; }
	inline void set_skeleton_2(Skeleton_t2209335561 * value)
	{
		___skeleton_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_2, value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___parent_3)); }
	inline Bone_t1650489600 * get_parent_3() const { return ___parent_3; }
	inline Bone_t1650489600 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Bone_t1650489600 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier(&___parent_3, value);
	}

	inline static int32_t get_offset_of_children_4() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___children_4)); }
	inline ExposedList_1_t3025422258 * get_children_4() const { return ___children_4; }
	inline ExposedList_1_t3025422258 ** get_address_of_children_4() { return &___children_4; }
	inline void set_children_4(ExposedList_1_t3025422258 * value)
	{
		___children_4 = value;
		Il2CppCodeGenWriteBarrier(&___children_4, value);
	}

	inline static int32_t get_offset_of_x_5() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___x_5)); }
	inline float get_x_5() const { return ___x_5; }
	inline float* get_address_of_x_5() { return &___x_5; }
	inline void set_x_5(float value)
	{
		___x_5 = value;
	}

	inline static int32_t get_offset_of_y_6() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___y_6)); }
	inline float get_y_6() const { return ___y_6; }
	inline float* get_address_of_y_6() { return &___y_6; }
	inline void set_y_6(float value)
	{
		___y_6 = value;
	}

	inline static int32_t get_offset_of_rotation_7() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___rotation_7)); }
	inline float get_rotation_7() const { return ___rotation_7; }
	inline float* get_address_of_rotation_7() { return &___rotation_7; }
	inline void set_rotation_7(float value)
	{
		___rotation_7 = value;
	}

	inline static int32_t get_offset_of_scaleX_8() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___scaleX_8)); }
	inline float get_scaleX_8() const { return ___scaleX_8; }
	inline float* get_address_of_scaleX_8() { return &___scaleX_8; }
	inline void set_scaleX_8(float value)
	{
		___scaleX_8 = value;
	}

	inline static int32_t get_offset_of_scaleY_9() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___scaleY_9)); }
	inline float get_scaleY_9() const { return ___scaleY_9; }
	inline float* get_address_of_scaleY_9() { return &___scaleY_9; }
	inline void set_scaleY_9(float value)
	{
		___scaleY_9 = value;
	}

	inline static int32_t get_offset_of_shearX_10() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___shearX_10)); }
	inline float get_shearX_10() const { return ___shearX_10; }
	inline float* get_address_of_shearX_10() { return &___shearX_10; }
	inline void set_shearX_10(float value)
	{
		___shearX_10 = value;
	}

	inline static int32_t get_offset_of_shearY_11() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___shearY_11)); }
	inline float get_shearY_11() const { return ___shearY_11; }
	inline float* get_address_of_shearY_11() { return &___shearY_11; }
	inline void set_shearY_11(float value)
	{
		___shearY_11 = value;
	}

	inline static int32_t get_offset_of_appliedRotation_12() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___appliedRotation_12)); }
	inline float get_appliedRotation_12() const { return ___appliedRotation_12; }
	inline float* get_address_of_appliedRotation_12() { return &___appliedRotation_12; }
	inline void set_appliedRotation_12(float value)
	{
		___appliedRotation_12 = value;
	}

	inline static int32_t get_offset_of_a_13() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___a_13)); }
	inline float get_a_13() const { return ___a_13; }
	inline float* get_address_of_a_13() { return &___a_13; }
	inline void set_a_13(float value)
	{
		___a_13 = value;
	}

	inline static int32_t get_offset_of_b_14() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___b_14)); }
	inline float get_b_14() const { return ___b_14; }
	inline float* get_address_of_b_14() { return &___b_14; }
	inline void set_b_14(float value)
	{
		___b_14 = value;
	}

	inline static int32_t get_offset_of_worldX_15() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___worldX_15)); }
	inline float get_worldX_15() const { return ___worldX_15; }
	inline float* get_address_of_worldX_15() { return &___worldX_15; }
	inline void set_worldX_15(float value)
	{
		___worldX_15 = value;
	}

	inline static int32_t get_offset_of_c_16() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___c_16)); }
	inline float get_c_16() const { return ___c_16; }
	inline float* get_address_of_c_16() { return &___c_16; }
	inline void set_c_16(float value)
	{
		___c_16 = value;
	}

	inline static int32_t get_offset_of_d_17() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___d_17)); }
	inline float get_d_17() const { return ___d_17; }
	inline float* get_address_of_d_17() { return &___d_17; }
	inline void set_d_17(float value)
	{
		___d_17 = value;
	}

	inline static int32_t get_offset_of_worldY_18() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___worldY_18)); }
	inline float get_worldY_18() const { return ___worldY_18; }
	inline float* get_address_of_worldY_18() { return &___worldY_18; }
	inline void set_worldY_18(float value)
	{
		___worldY_18 = value;
	}

	inline static int32_t get_offset_of_worldSignX_19() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___worldSignX_19)); }
	inline float get_worldSignX_19() const { return ___worldSignX_19; }
	inline float* get_address_of_worldSignX_19() { return &___worldSignX_19; }
	inline void set_worldSignX_19(float value)
	{
		___worldSignX_19 = value;
	}

	inline static int32_t get_offset_of_worldSignY_20() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___worldSignY_20)); }
	inline float get_worldSignY_20() const { return ___worldSignY_20; }
	inline float* get_address_of_worldSignY_20() { return &___worldSignY_20; }
	inline void set_worldSignY_20(float value)
	{
		___worldSignY_20 = value;
	}

	inline static int32_t get_offset_of_sorted_21() { return static_cast<int32_t>(offsetof(Bone_t1650489600, ___sorted_21)); }
	inline bool get_sorted_21() const { return ___sorted_21; }
	inline bool* get_address_of_sorted_21() { return &___sorted_21; }
	inline void set_sorted_21(bool value)
	{
		___sorted_21 = value;
	}
};

struct Bone_t1650489600_StaticFields
{
public:
	// System.Boolean Spine.Bone::yDown
	bool ___yDown_0;

public:
	inline static int32_t get_offset_of_yDown_0() { return static_cast<int32_t>(offsetof(Bone_t1650489600_StaticFields, ___yDown_0)); }
	inline bool get_yDown_0() const { return ___yDown_0; }
	inline bool* get_address_of_yDown_0() { return &___yDown_0; }
	inline void set_yDown_0(bool value)
	{
		___yDown_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
