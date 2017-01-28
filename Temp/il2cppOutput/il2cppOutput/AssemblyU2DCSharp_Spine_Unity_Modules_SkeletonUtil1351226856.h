#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonUtilityKinematicShadow/TransformPair
struct  TransformPair_t1351226856 
{
public:
	// UnityEngine.Transform Spine.Unity.Modules.SkeletonUtilityKinematicShadow/TransformPair::dest
	Transform_t1659122786 * ___dest_0;
	// UnityEngine.Transform Spine.Unity.Modules.SkeletonUtilityKinematicShadow/TransformPair::src
	Transform_t1659122786 * ___src_1;

public:
	inline static int32_t get_offset_of_dest_0() { return static_cast<int32_t>(offsetof(TransformPair_t1351226856, ___dest_0)); }
	inline Transform_t1659122786 * get_dest_0() const { return ___dest_0; }
	inline Transform_t1659122786 ** get_address_of_dest_0() { return &___dest_0; }
	inline void set_dest_0(Transform_t1659122786 * value)
	{
		___dest_0 = value;
		Il2CppCodeGenWriteBarrier(&___dest_0, value);
	}

	inline static int32_t get_offset_of_src_1() { return static_cast<int32_t>(offsetof(TransformPair_t1351226856, ___src_1)); }
	inline Transform_t1659122786 * get_src_1() const { return ___src_1; }
	inline Transform_t1659122786 ** get_address_of_src_1() { return &___src_1; }
	inline void set_src_1(Transform_t1659122786 * value)
	{
		___src_1 = value;
		Il2CppCodeGenWriteBarrier(&___src_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Spine.Unity.Modules.SkeletonUtilityKinematicShadow/TransformPair
struct TransformPair_t1351226856_marshaled_pinvoke
{
	Transform_t1659122786 * ___dest_0;
	Transform_t1659122786 * ___src_1;
};
// Native definition for marshalling of: Spine.Unity.Modules.SkeletonUtilityKinematicShadow/TransformPair
struct TransformPair_t1351226856_marshaled_com
{
	Transform_t1659122786 * ___dest_0;
	Transform_t1659122786 * ___src_1;
};
