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
// System.Collections.Generic.List`1<Spine.BoneData>
struct List_1_t3519760410;
// Spine.BoneData
struct BoneData_t2151574858;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.IkConstraintData
struct  IkConstraintData_t4214992549  : public Il2CppObject
{
public:
	// System.String Spine.IkConstraintData::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<Spine.BoneData> Spine.IkConstraintData::bones
	List_1_t3519760410 * ___bones_1;
	// Spine.BoneData Spine.IkConstraintData::target
	BoneData_t2151574858 * ___target_2;
	// System.Int32 Spine.IkConstraintData::bendDirection
	int32_t ___bendDirection_3;
	// System.Single Spine.IkConstraintData::mix
	float ___mix_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(IkConstraintData_t4214992549, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(IkConstraintData_t4214992549, ___bones_1)); }
	inline List_1_t3519760410 * get_bones_1() const { return ___bones_1; }
	inline List_1_t3519760410 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(List_1_t3519760410 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(IkConstraintData_t4214992549, ___target_2)); }
	inline BoneData_t2151574858 * get_target_2() const { return ___target_2; }
	inline BoneData_t2151574858 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(BoneData_t2151574858 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_bendDirection_3() { return static_cast<int32_t>(offsetof(IkConstraintData_t4214992549, ___bendDirection_3)); }
	inline int32_t get_bendDirection_3() const { return ___bendDirection_3; }
	inline int32_t* get_address_of_bendDirection_3() { return &___bendDirection_3; }
	inline void set_bendDirection_3(int32_t value)
	{
		___bendDirection_3 = value;
	}

	inline static int32_t get_offset_of_mix_4() { return static_cast<int32_t>(offsetof(IkConstraintData_t4214992549, ___mix_4)); }
	inline float get_mix_4() const { return ___mix_4; }
	inline float* get_address_of_mix_4() { return &___mix_4; }
	inline void set_mix_4(float value)
	{
		___mix_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
