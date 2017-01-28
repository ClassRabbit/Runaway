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

// UnityEngine.AnimationClip
struct AnimationClip_t2007702890;
// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t2746035113;
struct AnimatorClipInfo_t2746035113_marshaled_pinvoke;
struct AnimatorClipInfo_t2746035113_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorClipInfo2746035113.h"

// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
extern "C"  AnimationClip_t2007702890 * AnimatorClipInfo_get_clip_m1947050667 (AnimatorClipInfo_t2746035113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
extern "C"  float AnimatorClipInfo_get_weight_m3987235401 (AnimatorClipInfo_t2746035113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::ClipInstanceToScriptingObject(System.Int32)
extern "C"  AnimationClip_t2007702890 * AnimatorClipInfo_ClipInstanceToScriptingObject_m2499360471 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimatorClipInfo_t2746035113;
struct AnimatorClipInfo_t2746035113_marshaled_pinvoke;

extern "C" void AnimatorClipInfo_t2746035113_marshal_pinvoke(const AnimatorClipInfo_t2746035113& unmarshaled, AnimatorClipInfo_t2746035113_marshaled_pinvoke& marshaled);
extern "C" void AnimatorClipInfo_t2746035113_marshal_pinvoke_back(const AnimatorClipInfo_t2746035113_marshaled_pinvoke& marshaled, AnimatorClipInfo_t2746035113& unmarshaled);
extern "C" void AnimatorClipInfo_t2746035113_marshal_pinvoke_cleanup(AnimatorClipInfo_t2746035113_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimatorClipInfo_t2746035113;
struct AnimatorClipInfo_t2746035113_marshaled_com;

extern "C" void AnimatorClipInfo_t2746035113_marshal_com(const AnimatorClipInfo_t2746035113& unmarshaled, AnimatorClipInfo_t2746035113_marshaled_com& marshaled);
extern "C" void AnimatorClipInfo_t2746035113_marshal_com_back(const AnimatorClipInfo_t2746035113_marshaled_com& marshaled, AnimatorClipInfo_t2746035113& unmarshaled);
extern "C" void AnimatorClipInfo_t2746035113_marshal_com_cleanup(AnimatorClipInfo_t2746035113_marshaled_com& marshaled);
