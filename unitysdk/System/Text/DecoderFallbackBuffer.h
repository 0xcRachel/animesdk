#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_1_OFFSET UNITYSDK_OFFSET(0x16DCD660)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x16DCD4C0)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x16DCBB30)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALRESET_OFFSET UNITYSDK_OFFSET(0x16DCBB40)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x16DCD490)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_THROWLASTBYTESRECURSIVE_OFFSET UNITYSDK_OFFSET(0x16DCD7E0)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x16DCD2E0)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallbackBuffer_TypeDefinitionIndex = 472;

	class DecoderFallbackBuffer : public ::System::Object
	{
	public:
		::System::Char* charEnd; // 0x10
		::System::Byte* byteStart; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Void InternalReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALRESET_OFFSET))(this);
		}

		::System::Void InternalInitialize(::System::Byte* byteStart, ::System::Char* charEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET))(this, byteStart, charEnd);
		}

		::System::Boolean InternalFallback(::Il2CppArray<::System::Byte>* bytes, ::System::Byte* pBytes, ::System::Char*& chars)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte*, ::System::Char*&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(this, bytes, pBytes, chars);
		}

		::System::Int32 InternalFallback_1(::Il2CppArray<::System::Byte>* bytes, ::System::Byte* pBytes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_1_OFFSET))(this, bytes, pBytes);
		}

		::System::Void ThrowLastBytesRecursive(::Il2CppArray<::System::Byte>* bytesUnknown)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_THROWLASTBYTESRECURSIVE_OFFSET))(this, bytesUnknown);
		}
	};
}
