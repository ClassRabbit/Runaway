#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonGhostRenderer
struct  SkeletonGhostRenderer_t2396092523  : public MonoBehaviour_t667441552
{
public:
	// System.Single Spine.Unity.Modules.SkeletonGhostRenderer::fadeSpeed
	float ___fadeSpeed_2;
	// UnityEngine.Color32[] Spine.Unity.Modules.SkeletonGhostRenderer::colors
	Color32U5BU5D_t2960766953* ___colors_3;
	// UnityEngine.Color32 Spine.Unity.Modules.SkeletonGhostRenderer::black
	Color32_t598853688  ___black_4;
	// UnityEngine.MeshFilter Spine.Unity.Modules.SkeletonGhostRenderer::meshFilter
	MeshFilter_t3839065225 * ___meshFilter_5;
	// UnityEngine.MeshRenderer Spine.Unity.Modules.SkeletonGhostRenderer::meshRenderer
	MeshRenderer_t2804666580 * ___meshRenderer_6;

public:
	inline static int32_t get_offset_of_fadeSpeed_2() { return static_cast<int32_t>(offsetof(SkeletonGhostRenderer_t2396092523, ___fadeSpeed_2)); }
	inline float get_fadeSpeed_2() const { return ___fadeSpeed_2; }
	inline float* get_address_of_fadeSpeed_2() { return &___fadeSpeed_2; }
	inline void set_fadeSpeed_2(float value)
	{
		___fadeSpeed_2 = value;
	}

	inline static int32_t get_offset_of_colors_3() { return static_cast<int32_t>(offsetof(SkeletonGhostRenderer_t2396092523, ___colors_3)); }
	inline Color32U5BU5D_t2960766953* get_colors_3() const { return ___colors_3; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_3() { return &___colors_3; }
	inline void set_colors_3(Color32U5BU5D_t2960766953* value)
	{
		___colors_3 = value;
		Il2CppCodeGenWriteBarrier(&___colors_3, value);
	}

	inline static int32_t get_offset_of_black_4() { return static_cast<int32_t>(offsetof(SkeletonGhostRenderer_t2396092523, ___black_4)); }
	inline Color32_t598853688  get_black_4() const { return ___black_4; }
	inline Color32_t598853688 * get_address_of_black_4() { return &___black_4; }
	inline void set_black_4(Color32_t598853688  value)
	{
		___black_4 = value;
	}

	inline static int32_t get_offset_of_meshFilter_5() { return static_cast<int32_t>(offsetof(SkeletonGhostRenderer_t2396092523, ___meshFilter_5)); }
	inline MeshFilter_t3839065225 * get_meshFilter_5() const { return ___meshFilter_5; }
	inline MeshFilter_t3839065225 ** get_address_of_meshFilter_5() { return &___meshFilter_5; }
	inline void set_meshFilter_5(MeshFilter_t3839065225 * value)
	{
		___meshFilter_5 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_5, value);
	}

	inline static int32_t get_offset_of_meshRenderer_6() { return static_cast<int32_t>(offsetof(SkeletonGhostRenderer_t2396092523, ___meshRenderer_6)); }
	inline MeshRenderer_t2804666580 * get_meshRenderer_6() const { return ___meshRenderer_6; }
	inline MeshRenderer_t2804666580 ** get_address_of_meshRenderer_6() { return &___meshRenderer_6; }
	inline void set_meshRenderer_6(MeshRenderer_t2804666580 * value)
	{
		___meshRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
