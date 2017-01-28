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
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t3526507516;
// Spine.SlotData
struct SlotData_t3389517700;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_Spine_PositionMode1978314152.h"
#include "AssemblyU2DCSharp_Spine_SpacingMode2053106316.h"
#include "AssemblyU2DCSharp_Spine_RotateMode439322522.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.PathConstraintData
struct  PathConstraintData_t1516901800  : public Il2CppObject
{
public:
	// System.String Spine.PathConstraintData::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.BoneData> Spine.PathConstraintData::bones
	ExposedList_1_t3526507516 * ___bones_1;
	// Spine.SlotData Spine.PathConstraintData::target
	SlotData_t3389517700 * ___target_2;
	// Spine.PositionMode Spine.PathConstraintData::positionMode
	int32_t ___positionMode_3;
	// Spine.SpacingMode Spine.PathConstraintData::spacingMode
	int32_t ___spacingMode_4;
	// Spine.RotateMode Spine.PathConstraintData::rotateMode
	int32_t ___rotateMode_5;
	// System.Single Spine.PathConstraintData::offsetRotation
	float ___offsetRotation_6;
	// System.Single Spine.PathConstraintData::position
	float ___position_7;
	// System.Single Spine.PathConstraintData::spacing
	float ___spacing_8;
	// System.Single Spine.PathConstraintData::rotateMix
	float ___rotateMix_9;
	// System.Single Spine.PathConstraintData::translateMix
	float ___translateMix_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___bones_1)); }
	inline ExposedList_1_t3526507516 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t3526507516 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t3526507516 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___target_2)); }
	inline SlotData_t3389517700 * get_target_2() const { return ___target_2; }
	inline SlotData_t3389517700 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(SlotData_t3389517700 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_positionMode_3() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___positionMode_3)); }
	inline int32_t get_positionMode_3() const { return ___positionMode_3; }
	inline int32_t* get_address_of_positionMode_3() { return &___positionMode_3; }
	inline void set_positionMode_3(int32_t value)
	{
		___positionMode_3 = value;
	}

	inline static int32_t get_offset_of_spacingMode_4() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___spacingMode_4)); }
	inline int32_t get_spacingMode_4() const { return ___spacingMode_4; }
	inline int32_t* get_address_of_spacingMode_4() { return &___spacingMode_4; }
	inline void set_spacingMode_4(int32_t value)
	{
		___spacingMode_4 = value;
	}

	inline static int32_t get_offset_of_rotateMode_5() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___rotateMode_5)); }
	inline int32_t get_rotateMode_5() const { return ___rotateMode_5; }
	inline int32_t* get_address_of_rotateMode_5() { return &___rotateMode_5; }
	inline void set_rotateMode_5(int32_t value)
	{
		___rotateMode_5 = value;
	}

	inline static int32_t get_offset_of_offsetRotation_6() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___offsetRotation_6)); }
	inline float get_offsetRotation_6() const { return ___offsetRotation_6; }
	inline float* get_address_of_offsetRotation_6() { return &___offsetRotation_6; }
	inline void set_offsetRotation_6(float value)
	{
		___offsetRotation_6 = value;
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___position_7)); }
	inline float get_position_7() const { return ___position_7; }
	inline float* get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(float value)
	{
		___position_7 = value;
	}

	inline static int32_t get_offset_of_spacing_8() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___spacing_8)); }
	inline float get_spacing_8() const { return ___spacing_8; }
	inline float* get_address_of_spacing_8() { return &___spacing_8; }
	inline void set_spacing_8(float value)
	{
		___spacing_8 = value;
	}

	inline static int32_t get_offset_of_rotateMix_9() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___rotateMix_9)); }
	inline float get_rotateMix_9() const { return ___rotateMix_9; }
	inline float* get_address_of_rotateMix_9() { return &___rotateMix_9; }
	inline void set_rotateMix_9(float value)
	{
		___rotateMix_9 = value;
	}

	inline static int32_t get_offset_of_translateMix_10() { return static_cast<int32_t>(offsetof(PathConstraintData_t1516901800, ___translateMix_10)); }
	inline float get_translateMix_10() const { return ___translateMix_10; }
	inline float* get_address_of_translateMix_10() { return &___translateMix_10; }
	inline void set_translateMix_10(float value)
	{
		___translateMix_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
