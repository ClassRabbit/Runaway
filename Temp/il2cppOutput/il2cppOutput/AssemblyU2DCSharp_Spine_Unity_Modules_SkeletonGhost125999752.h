#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3191267369;
// Spine.Unity.Modules.SkeletonGhostRenderer[]
struct SkeletonGhostRendererU5BU5D_t132364682;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t807872303;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonGhost
struct  SkeletonGhost_t125999752  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Spine.Unity.Modules.SkeletonGhost::ghostingEnabled
	bool ___ghostingEnabled_2;
	// System.Single Spine.Unity.Modules.SkeletonGhost::spawnRate
	float ___spawnRate_3;
	// UnityEngine.Color32 Spine.Unity.Modules.SkeletonGhost::color
	Color32_t598853688  ___color_4;
	// System.Boolean Spine.Unity.Modules.SkeletonGhost::additive
	bool ___additive_5;
	// System.Int32 Spine.Unity.Modules.SkeletonGhost::maximumGhosts
	int32_t ___maximumGhosts_6;
	// System.Single Spine.Unity.Modules.SkeletonGhost::fadeSpeed
	float ___fadeSpeed_7;
	// UnityEngine.Shader Spine.Unity.Modules.SkeletonGhost::ghostShader
	Shader_t3191267369 * ___ghostShader_8;
	// System.Single Spine.Unity.Modules.SkeletonGhost::textureFade
	float ___textureFade_9;
	// System.Boolean Spine.Unity.Modules.SkeletonGhost::sortWithDistanceOnly
	bool ___sortWithDistanceOnly_10;
	// System.Single Spine.Unity.Modules.SkeletonGhost::zOffset
	float ___zOffset_11;
	// System.Single Spine.Unity.Modules.SkeletonGhost::nextSpawnTime
	float ___nextSpawnTime_12;
	// Spine.Unity.Modules.SkeletonGhostRenderer[] Spine.Unity.Modules.SkeletonGhost::pool
	SkeletonGhostRendererU5BU5D_t132364682* ___pool_13;
	// System.Int32 Spine.Unity.Modules.SkeletonGhost::poolIndex
	int32_t ___poolIndex_14;
	// Spine.Unity.SkeletonRenderer Spine.Unity.Modules.SkeletonGhost::skeletonRenderer
	SkeletonRenderer_t3766155010 * ___skeletonRenderer_15;
	// UnityEngine.MeshRenderer Spine.Unity.Modules.SkeletonGhost::meshRenderer
	MeshRenderer_t2804666580 * ___meshRenderer_16;
	// UnityEngine.MeshFilter Spine.Unity.Modules.SkeletonGhost::meshFilter
	MeshFilter_t3839065225 * ___meshFilter_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.Modules.SkeletonGhost::materialTable
	Dictionary_2_t807872303 * ___materialTable_18;

public:
	inline static int32_t get_offset_of_ghostingEnabled_2() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___ghostingEnabled_2)); }
	inline bool get_ghostingEnabled_2() const { return ___ghostingEnabled_2; }
	inline bool* get_address_of_ghostingEnabled_2() { return &___ghostingEnabled_2; }
	inline void set_ghostingEnabled_2(bool value)
	{
		___ghostingEnabled_2 = value;
	}

	inline static int32_t get_offset_of_spawnRate_3() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___spawnRate_3)); }
	inline float get_spawnRate_3() const { return ___spawnRate_3; }
	inline float* get_address_of_spawnRate_3() { return &___spawnRate_3; }
	inline void set_spawnRate_3(float value)
	{
		___spawnRate_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___color_4)); }
	inline Color32_t598853688  get_color_4() const { return ___color_4; }
	inline Color32_t598853688 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_t598853688  value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_additive_5() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___additive_5)); }
	inline bool get_additive_5() const { return ___additive_5; }
	inline bool* get_address_of_additive_5() { return &___additive_5; }
	inline void set_additive_5(bool value)
	{
		___additive_5 = value;
	}

	inline static int32_t get_offset_of_maximumGhosts_6() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___maximumGhosts_6)); }
	inline int32_t get_maximumGhosts_6() const { return ___maximumGhosts_6; }
	inline int32_t* get_address_of_maximumGhosts_6() { return &___maximumGhosts_6; }
	inline void set_maximumGhosts_6(int32_t value)
	{
		___maximumGhosts_6 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_7() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___fadeSpeed_7)); }
	inline float get_fadeSpeed_7() const { return ___fadeSpeed_7; }
	inline float* get_address_of_fadeSpeed_7() { return &___fadeSpeed_7; }
	inline void set_fadeSpeed_7(float value)
	{
		___fadeSpeed_7 = value;
	}

	inline static int32_t get_offset_of_ghostShader_8() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___ghostShader_8)); }
	inline Shader_t3191267369 * get_ghostShader_8() const { return ___ghostShader_8; }
	inline Shader_t3191267369 ** get_address_of_ghostShader_8() { return &___ghostShader_8; }
	inline void set_ghostShader_8(Shader_t3191267369 * value)
	{
		___ghostShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___ghostShader_8, value);
	}

	inline static int32_t get_offset_of_textureFade_9() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___textureFade_9)); }
	inline float get_textureFade_9() const { return ___textureFade_9; }
	inline float* get_address_of_textureFade_9() { return &___textureFade_9; }
	inline void set_textureFade_9(float value)
	{
		___textureFade_9 = value;
	}

	inline static int32_t get_offset_of_sortWithDistanceOnly_10() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___sortWithDistanceOnly_10)); }
	inline bool get_sortWithDistanceOnly_10() const { return ___sortWithDistanceOnly_10; }
	inline bool* get_address_of_sortWithDistanceOnly_10() { return &___sortWithDistanceOnly_10; }
	inline void set_sortWithDistanceOnly_10(bool value)
	{
		___sortWithDistanceOnly_10 = value;
	}

	inline static int32_t get_offset_of_zOffset_11() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___zOffset_11)); }
	inline float get_zOffset_11() const { return ___zOffset_11; }
	inline float* get_address_of_zOffset_11() { return &___zOffset_11; }
	inline void set_zOffset_11(float value)
	{
		___zOffset_11 = value;
	}

	inline static int32_t get_offset_of_nextSpawnTime_12() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___nextSpawnTime_12)); }
	inline float get_nextSpawnTime_12() const { return ___nextSpawnTime_12; }
	inline float* get_address_of_nextSpawnTime_12() { return &___nextSpawnTime_12; }
	inline void set_nextSpawnTime_12(float value)
	{
		___nextSpawnTime_12 = value;
	}

	inline static int32_t get_offset_of_pool_13() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___pool_13)); }
	inline SkeletonGhostRendererU5BU5D_t132364682* get_pool_13() const { return ___pool_13; }
	inline SkeletonGhostRendererU5BU5D_t132364682** get_address_of_pool_13() { return &___pool_13; }
	inline void set_pool_13(SkeletonGhostRendererU5BU5D_t132364682* value)
	{
		___pool_13 = value;
		Il2CppCodeGenWriteBarrier(&___pool_13, value);
	}

	inline static int32_t get_offset_of_poolIndex_14() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___poolIndex_14)); }
	inline int32_t get_poolIndex_14() const { return ___poolIndex_14; }
	inline int32_t* get_address_of_poolIndex_14() { return &___poolIndex_14; }
	inline void set_poolIndex_14(int32_t value)
	{
		___poolIndex_14 = value;
	}

	inline static int32_t get_offset_of_skeletonRenderer_15() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___skeletonRenderer_15)); }
	inline SkeletonRenderer_t3766155010 * get_skeletonRenderer_15() const { return ___skeletonRenderer_15; }
	inline SkeletonRenderer_t3766155010 ** get_address_of_skeletonRenderer_15() { return &___skeletonRenderer_15; }
	inline void set_skeletonRenderer_15(SkeletonRenderer_t3766155010 * value)
	{
		___skeletonRenderer_15 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_15, value);
	}

	inline static int32_t get_offset_of_meshRenderer_16() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___meshRenderer_16)); }
	inline MeshRenderer_t2804666580 * get_meshRenderer_16() const { return ___meshRenderer_16; }
	inline MeshRenderer_t2804666580 ** get_address_of_meshRenderer_16() { return &___meshRenderer_16; }
	inline void set_meshRenderer_16(MeshRenderer_t2804666580 * value)
	{
		___meshRenderer_16 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_16, value);
	}

	inline static int32_t get_offset_of_meshFilter_17() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___meshFilter_17)); }
	inline MeshFilter_t3839065225 * get_meshFilter_17() const { return ___meshFilter_17; }
	inline MeshFilter_t3839065225 ** get_address_of_meshFilter_17() { return &___meshFilter_17; }
	inline void set_meshFilter_17(MeshFilter_t3839065225 * value)
	{
		___meshFilter_17 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_17, value);
	}

	inline static int32_t get_offset_of_materialTable_18() { return static_cast<int32_t>(offsetof(SkeletonGhost_t125999752, ___materialTable_18)); }
	inline Dictionary_2_t807872303 * get_materialTable_18() const { return ___materialTable_18; }
	inline Dictionary_2_t807872303 ** get_address_of_materialTable_18() { return &___materialTable_18; }
	inline void set_materialTable_18(Dictionary_2_t807872303 * value)
	{
		___materialTable_18 = value;
		Il2CppCodeGenWriteBarrier(&___materialTable_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
