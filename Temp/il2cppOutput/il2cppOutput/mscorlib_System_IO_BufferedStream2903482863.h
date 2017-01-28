#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t1561764144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_IO_Stream1561764144.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BufferedStream
struct  BufferedStream_t2903482863  : public Stream_t1561764144
{
public:
	// System.IO.Stream System.IO.BufferedStream::m_stream
	Stream_t1561764144 * ___m_stream_1;
	// System.Byte[] System.IO.BufferedStream::m_buffer
	ByteU5BU5D_t4260760469* ___m_buffer_2;
	// System.Int32 System.IO.BufferedStream::m_buffer_pos
	int32_t ___m_buffer_pos_3;
	// System.Int32 System.IO.BufferedStream::m_buffer_read_ahead
	int32_t ___m_buffer_read_ahead_4;
	// System.Boolean System.IO.BufferedStream::m_buffer_reading
	bool ___m_buffer_reading_5;
	// System.Boolean System.IO.BufferedStream::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_m_stream_1() { return static_cast<int32_t>(offsetof(BufferedStream_t2903482863, ___m_stream_1)); }
	inline Stream_t1561764144 * get_m_stream_1() const { return ___m_stream_1; }
	inline Stream_t1561764144 ** get_address_of_m_stream_1() { return &___m_stream_1; }
	inline void set_m_stream_1(Stream_t1561764144 * value)
	{
		___m_stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_stream_1, value);
	}

	inline static int32_t get_offset_of_m_buffer_2() { return static_cast<int32_t>(offsetof(BufferedStream_t2903482863, ___m_buffer_2)); }
	inline ByteU5BU5D_t4260760469* get_m_buffer_2() const { return ___m_buffer_2; }
	inline ByteU5BU5D_t4260760469** get_address_of_m_buffer_2() { return &___m_buffer_2; }
	inline void set_m_buffer_2(ByteU5BU5D_t4260760469* value)
	{
		___m_buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_buffer_2, value);
	}

	inline static int32_t get_offset_of_m_buffer_pos_3() { return static_cast<int32_t>(offsetof(BufferedStream_t2903482863, ___m_buffer_pos_3)); }
	inline int32_t get_m_buffer_pos_3() const { return ___m_buffer_pos_3; }
	inline int32_t* get_address_of_m_buffer_pos_3() { return &___m_buffer_pos_3; }
	inline void set_m_buffer_pos_3(int32_t value)
	{
		___m_buffer_pos_3 = value;
	}

	inline static int32_t get_offset_of_m_buffer_read_ahead_4() { return static_cast<int32_t>(offsetof(BufferedStream_t2903482863, ___m_buffer_read_ahead_4)); }
	inline int32_t get_m_buffer_read_ahead_4() const { return ___m_buffer_read_ahead_4; }
	inline int32_t* get_address_of_m_buffer_read_ahead_4() { return &___m_buffer_read_ahead_4; }
	inline void set_m_buffer_read_ahead_4(int32_t value)
	{
		___m_buffer_read_ahead_4 = value;
	}

	inline static int32_t get_offset_of_m_buffer_reading_5() { return static_cast<int32_t>(offsetof(BufferedStream_t2903482863, ___m_buffer_reading_5)); }
	inline bool get_m_buffer_reading_5() const { return ___m_buffer_reading_5; }
	inline bool* get_address_of_m_buffer_reading_5() { return &___m_buffer_reading_5; }
	inline void set_m_buffer_reading_5(bool value)
	{
		___m_buffer_reading_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(BufferedStream_t2903482863, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
