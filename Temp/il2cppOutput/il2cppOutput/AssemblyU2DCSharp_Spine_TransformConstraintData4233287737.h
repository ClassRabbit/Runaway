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
// Spine.BoneData
struct BoneData_t2151574858;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.TransformConstraintData
struct  TransformConstraintData_t4233287737  : public Il2CppObject
{
public:
	// System.String Spine.TransformConstraintData::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.BoneData> Spine.TransformConstraintData::bones
	ExposedList_1_t3526507516 * ___bones_1;
	// Spine.BoneData Spine.TransformConstraintData::target
	BoneData_t2151574858 * ___target_2;
	// System.Single Spine.TransformConstraintData::rotateMix
	float ___rotateMix_3;
	// System.Single Spine.TransformConstraintData::translateMix
	float ___translateMix_4;
	// System.Single Spine.TransformConstraintData::scaleMix
	float ___scaleMix_5;
	// System.Single Spine.TransformConstraintData::shearMix
	float ___shearMix_6;
	// System.Single Spine.TransformConstraintData::offsetRotation
	float ___offsetRotation_7;
	// System.Single Spine.TransformConstraintData::offsetX
	float ___offsetX_8;
	// System.Single Spine.TransformConstraintData::offsetY
	float ___offsetY_9;
	// System.Single Spine.TransformConstraintData::offsetScaleX
	float ___offsetScaleX_10;
	// System.Single Spine.TransformConstraintData::offsetScaleY
	float ___offsetScaleY_11;
	// System.Single Spine.TransformConstraintData::offsetShearY
	float ___offsetShearY_12;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___bones_1)); }
	inline ExposedList_1_t3526507516 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t3526507516 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t3526507516 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___target_2)); }
	inline BoneData_t2151574858 * get_target_2() const { return ___target_2; }
	inline BoneData_t2151574858 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(BoneData_t2151574858 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_rotateMix_3() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___rotateMix_3)); }
	inline float get_rotateMix_3() const { return ___rotateMix_3; }
	inline float* get_address_of_rotateMix_3() { return &___rotateMix_3; }
	inline void set_rotateMix_3(float value)
	{
		___rotateMix_3 = value;
	}

	inline static int32_t get_offset_of_translateMix_4() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___translateMix_4)); }
	inline float get_translateMix_4() const { return ___translateMix_4; }
	inline float* get_address_of_translateMix_4() { return &___translateMix_4; }
	inline void set_translateMix_4(float value)
	{
		___translateMix_4 = value;
	}

	inline static int32_t get_offset_of_scaleMix_5() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___scaleMix_5)); }
	inline float get_scaleMix_5() const { return ___scaleMix_5; }
	inline float* get_address_of_scaleMix_5() { return &___scaleMix_5; }
	inline void set_scaleMix_5(float value)
	{
		___scaleMix_5 = value;
	}

	inline static int32_t get_offset_of_shearMix_6() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___shearMix_6)); }
	inline float get_shearMix_6() const { return ___shearMix_6; }
	inline float* get_address_of_shearMix_6() { return &___shearMix_6; }
	inline void set_shearMix_6(float value)
	{
		___shearMix_6 = value;
	}

	inline static int32_t get_offset_of_offsetRotation_7() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___offsetRotation_7)); }
	inline float get_offsetRotation_7() const { return ___offsetRotation_7; }
	inline float* get_address_of_offsetRotation_7() { return &___offsetRotation_7; }
	inline void set_offsetRotation_7(float value)
	{
		___offsetRotation_7 = value;
	}

	inline static int32_t get_offset_of_offsetX_8() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___offsetX_8)); }
	inline float get_offsetX_8() const { return ___offsetX_8; }
	inline float* get_address_of_offsetX_8() { return &___offsetX_8; }
	inline void set_offsetX_8(float value)
	{
		___offsetX_8 = value;
	}

	inline static int32_t get_offset_of_offsetY_9() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___offsetY_9)); }
	inline float get_offsetY_9() const { return ___offsetY_9; }
	inline float* get_address_of_offsetY_9() { return &___offsetY_9; }
	inline void set_offsetY_9(float value)
	{
		___offsetY_9 = value;
	}

	inline static int32_t get_offset_of_offsetScaleX_10() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___offsetScaleX_10)); }
	inline float get_offsetScaleX_10() const { return ___offsetScaleX_10; }
	inline float* get_address_of_offsetScaleX_10() { return &___offsetScaleX_10; }
	inline void set_offsetScaleX_10(float value)
	{
		___offsetScaleX_10 = value;
	}

	inline static int32_t get_offset_of_offsetScaleY_11() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___offsetScaleY_11)); }
	inline float get_offsetScaleY_11() const { return ___offsetScaleY_11; }
	inline float* get_address_of_offsetScaleY_11() { return &___offsetScaleY_11; }
	inline void set_offsetScaleY_11(float value)
	{
		___offsetScaleY_11 = value;
	}

	inline static int32_t get_offset_of_offsetShearY_12() { return static_cast<int32_t>(offsetof(TransformConstraintData_t4233287737, ___offsetShearY_12)); }
	inline float get_offsetShearY_12() const { return ___offsetShearY_12; }
	inline float* get_address_of_offsetShearY_12() { return &___offsetShearY_12; }
	inline void set_offsetShearY_12(float value)
	{
		___offsetShearY_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
