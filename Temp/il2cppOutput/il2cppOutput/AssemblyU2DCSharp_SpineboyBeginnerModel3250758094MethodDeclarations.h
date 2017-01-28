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

// SpineboyBeginnerModel
struct SpineboyBeginnerModel_t3250758094;
// System.Action
struct Action_t3771233898;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"

// System.Void SpineboyBeginnerModel::.ctor()
extern "C"  void SpineboyBeginnerModel__ctor_m522354525 (SpineboyBeginnerModel_t3250758094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerModel::add_ShootEvent(System.Action)
extern "C"  void SpineboyBeginnerModel_add_ShootEvent_m1930286301 (SpineboyBeginnerModel_t3250758094 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerModel::remove_ShootEvent(System.Action)
extern "C"  void SpineboyBeginnerModel_remove_ShootEvent_m3114324108 (SpineboyBeginnerModel_t3250758094 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerModel::TryJump()
extern "C"  void SpineboyBeginnerModel_TryJump_m3263218756 (SpineboyBeginnerModel_t3250758094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerModel::TryShoot()
extern "C"  void SpineboyBeginnerModel_TryShoot_m1402843499 (SpineboyBeginnerModel_t3250758094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpineboyBeginnerModel::TryMove(System.Single)
extern "C"  void SpineboyBeginnerModel_TryMove_m3497159140 (SpineboyBeginnerModel_t3250758094 * __this, float ___speed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpineboyBeginnerModel::JumpRoutine()
extern "C"  Il2CppObject * SpineboyBeginnerModel_JumpRoutine_m3490388601 (SpineboyBeginnerModel_t3250758094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
