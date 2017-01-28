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

// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t1629107544;
// System.Object
struct Il2CppObject;
// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction
struct Instruction_t629699354;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer_Smar629699354.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InstructionDelegate__ctor_m1088583167 (InstructionDelegate_t1629107544 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::Invoke(Spine.Unity.SkeletonRenderer/SmartMesh/Instruction)
extern "C"  void InstructionDelegate_Invoke_m917272383 (InstructionDelegate_t1629107544 * __this, Instruction_t629699354 * ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.SkeletonRenderer/InstructionDelegate::BeginInvoke(Spine.Unity.SkeletonRenderer/SmartMesh/Instruction,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InstructionDelegate_BeginInvoke_m2837612462 (InstructionDelegate_t1629107544 * __this, Instruction_t629699354 * ___instruction0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InstructionDelegate_EndInvoke_m1185333135 (InstructionDelegate_t1629107544 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
