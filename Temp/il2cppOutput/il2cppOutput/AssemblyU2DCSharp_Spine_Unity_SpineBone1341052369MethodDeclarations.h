#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.Unity.SpineBone
struct SpineBone_t1341052369;
// System.String
struct String_t;
// Spine.Bone
struct Bone_t1650489600;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t3766155010;
// Spine.BoneData
struct BoneData_t2151574858;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t2211567523;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer3766155010.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonDataAsset2211567523.h"

// System.Void Spine.Unity.SpineBone::.ctor(System.String,System.String)
extern "C"  void SpineBone__ctor_m2800411798 (SpineBone_t1341052369 * __this, String_t* ___startsWith0, String_t* ___dataField1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Unity.SpineBone::GetBone(System.String,Spine.Unity.SkeletonRenderer)
extern "C"  Bone_t1650489600 * SpineBone_GetBone_m2660568798 (Il2CppObject * __this /* static, unused */, String_t* ___boneName0, SkeletonRenderer_t3766155010 * ___renderer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoneData Spine.Unity.SpineBone::GetBoneData(System.String,Spine.Unity.SkeletonDataAsset)
extern "C"  BoneData_t2151574858 * SpineBone_GetBoneData_m638560555 (Il2CppObject * __this /* static, unused */, String_t* ___boneName0, SkeletonDataAsset_t2211567523 * ___skeletonDataAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
