#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class DecoderFallbackBuffer; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_1_OFFSET UNITYSDK_OFFSET(0x15B5F2C0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x15B5F210)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADJUSTBYTES_OFFSET UNITYSDK_OFFSET(0x15B5F2D0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x15B5F370)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x15B5F320)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GETNEXTBYTE_OFFSET UNITYSDK_OFFSET(0x15B5F2F0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_BYTESUSED_OFFSET UNITYSDK_OFFSET(0x15B5F310)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x15B5F4B0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_MOREDATA_OFFSET UNITYSDK_OFFSET(0x15B5F2E0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B5F130)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_EncodingCharBuffer_TypeDefinitionIndex = 490;

	class Encoding_EncodingCharBuffer : public ::System::Object
	{
	public:
		::System::Text::Encoding* enc; // 0x10
		::System::Text::DecoderNLS* decoder; // 0x18
		::System::Text::DecoderFallbackBuffer* fallbackBuffer; // 0x20
		::System::Char* charEnd; // 0x28
		::System::Char* charStart; // 0x30
		::System::Byte* bytes; // 0x38
		::System::Byte* byteStart; // 0x40
		::System::Byte* byteEnd; // 0x48
		::System::Char* chars; // 0x50
		::System::Int32 charCountResult; // 0x58

		::System::Void _ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder, ::System::Char* charStart, ::System::Int32 charCount, ::System::Byte* byteStart, ::System::Int32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*, ::System::Text::DecoderNLS*, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER__CTOR_OFFSET))(this, enc, decoder, charStart, charCount, byteStart, byteCount);
		}

		::System::Boolean AddChar(::System::Char ch, ::System::Int32 numBytes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_OFFSET))(this, ch, numBytes);
		}

		::System::Boolean AddChar_1(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_1_OFFSET))(this, ch);
		}

		::System::Void AdjustBytes(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADJUSTBYTES_OFFSET))(this, count);
		}

		::System::Boolean get_MoreData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_MOREDATA_OFFSET))(this);
		}

		::System::Byte GetNextByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GETNEXTBYTE_OFFSET))(this);
		}

		::System::Int32 get_BytesUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_BYTESUSED_OFFSET))(this);
		}

		::System::Boolean Fallback(::System::Byte fallbackByte)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_OFFSET))(this, fallbackByte);
		}

		::System::Boolean Fallback_1(::Il2CppArray<::System::Byte>* byteBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_1_OFFSET))(this, byteBuffer);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_COUNT_OFFSET))(this);
		}
	};
}
