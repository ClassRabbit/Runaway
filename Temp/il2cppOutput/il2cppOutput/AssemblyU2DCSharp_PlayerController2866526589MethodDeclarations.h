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

// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D PlayerController::get_rb2D()
extern "C"  Rigidbody2D_t1743771669 * PlayerController_get_rb2D_m12845052 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_rb2D(UnityEngine.Rigidbody2D)
extern "C"  void PlayerController_set_rb2D_m937545317 (PlayerController_t2866526589 * __this, Rigidbody2D_t1743771669 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerController::get_moveVector()
extern "C"  Vector3_t4282066566  PlayerController_get_moveVector_m589325853 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_moveVector(UnityEngine.Vector3)
extern "C"  void PlayerController_set_moveVector_m2545667298 (PlayerController_t2866526589 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m270852281 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleInput()
extern "C"  void PlayerController_HandleInput_m225253534 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerController::PoolInput()
extern "C"  Vector3_t4282066566  PlayerController_PoolInput_m3591189424 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Move()
extern "C"  void PlayerController_Move_m153108311 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Attack()
extern "C"  void PlayerController_Attack_m1752732366 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::EaseVelocity()
extern "C"  void PlayerController_EaseVelocity_m159532785 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Jump()
extern "C"  void PlayerController_Jump_m72504436 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::IsGrounded()
extern "C"  bool PlayerController_IsGrounded_m1505370986 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
