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

// SharpJson.Lexer
struct Lexer_t2785281654;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_SharpJson_Lexer_Token1134737626.h"

// System.Void SharpJson.Lexer::.ctor(System.String)
extern "C"  void Lexer__ctor_m3795191623 (Lexer_t2785281654 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SharpJson.Lexer::get_hasError()
extern "C"  bool Lexer_get_hasError_m3143995788 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SharpJson.Lexer::get_lineNumber()
extern "C"  int32_t Lexer_get_lineNumber_m2335727425 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::set_lineNumber(System.Int32)
extern "C"  void Lexer_set_lineNumber_m3087709908 (Lexer_t2785281654 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SharpJson.Lexer::get_parseNumbersAsFloat()
extern "C"  bool Lexer_get_parseNumbersAsFloat_m2827277527 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::set_parseNumbersAsFloat(System.Boolean)
extern "C"  void Lexer_set_parseNumbersAsFloat_m974396006 (Lexer_t2785281654 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::Reset()
extern "C"  void Lexer_Reset_m543553096 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SharpJson.Lexer::ParseString()
extern "C"  String_t* Lexer_ParseString_m2161614144 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SharpJson.Lexer::GetNumberString()
extern "C"  String_t* Lexer_GetNumberString_m3892539212 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SharpJson.Lexer::ParseFloatNumber()
extern "C"  float Lexer_ParseFloatNumber_m3700772239 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SharpJson.Lexer::ParseDoubleNumber()
extern "C"  double Lexer_ParseDoubleNumber_m4187642665 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SharpJson.Lexer::GetLastIndexOfNumber(System.Int32)
extern "C"  int32_t Lexer_GetLastIndexOfNumber_m3421674002 (Lexer_t2785281654 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::SkipWhiteSpaces()
extern "C"  void Lexer_SkipWhiteSpaces_m3845188528 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::LookAhead()
extern "C"  int32_t Lexer_LookAhead_m3757430612 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::NextToken()
extern "C"  int32_t Lexer_NextToken_m1435640504 (Lexer_t2785281654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t Lexer_NextToken_m4032399256 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
