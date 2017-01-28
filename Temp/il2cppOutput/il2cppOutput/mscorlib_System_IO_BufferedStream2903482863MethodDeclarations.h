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

// System.IO.BufferedStream
struct BufferedStream_t2903482863;
// System.IO.Stream
struct Stream_t1561764144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void System.IO.BufferedStream::.ctor(System.IO.Stream)
extern "C"  void BufferedStream__ctor_m1046072961 (BufferedStream_t2903482863 * __this, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BufferedStream::.ctor(System.IO.Stream,System.Int32)
extern "C"  void BufferedStream__ctor_m3530205174 (BufferedStream_t2903482863 * __this, Stream_t1561764144 * ___stream0, int32_t ___bufferSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BufferedStream::get_CanRead()
extern "C"  bool BufferedStream_get_CanRead_m3621430499 (BufferedStream_t2903482863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BufferedStream::get_CanWrite()
extern "C"  bool BufferedStream_get_CanWrite_m1117849300 (BufferedStream_t2903482863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BufferedStream::get_CanSeek()
extern "C"  bool BufferedStream_get_CanSeek_m3650185541 (BufferedStream_t2903482863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BufferedStream::get_Length()
extern "C"  int64_t BufferedStream_get_Length_m2561354598 (BufferedStream_t2903482863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BufferedStream::get_Position()
extern "C"  int64_t BufferedStream_get_Position_m667009321 (BufferedStream_t2903482863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BufferedStream::set_Position(System.Int64)
extern "C"  void BufferedStream_set_Position_m2505830098 (BufferedStream_t2903482863 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BufferedStream::Dispose(System.Boolean)
extern "C"  void BufferedStream_Dispose_m2731244254 (BufferedStream_t2903482863 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BufferedStream::Flush()
extern "C"  void BufferedStream_Flush_m3385559820 (BufferedStream_t2903482863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BufferedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t BufferedStream_Seek_m1457664190 (BufferedStream_t2903482863 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BufferedStream::SetLength(System.Int64)
extern "C"  void BufferedStream_SetLength_m3277682242 (BufferedStream_t2903482863 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BufferedStream::ReadByte()
extern "C"  int32_t BufferedStream_ReadByte_m2898391540 (BufferedStream_t2903482863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BufferedStream::WriteByte(System.Byte)
extern "C"  void BufferedStream_WriteByte_m303942332 (BufferedStream_t2903482863 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BufferedStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t BufferedStream_Read_m1391647261 (BufferedStream_t2903482863 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BufferedStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void BufferedStream_Write_m1723363554 (BufferedStream_t2903482863 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BufferedStream::CheckObjectDisposedException()
extern "C"  void BufferedStream_CheckObjectDisposedException_m1110791261 (BufferedStream_t2903482863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
