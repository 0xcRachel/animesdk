#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallbackBuffer.h"

namespace System { class String; }
namespace System::Text { class EncoderReplacementFallback; }

#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x15B595B0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x15B59500)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x15B597E0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x15B59870)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x15B59850)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x15B59880)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B593D0)

namespace System::Text
{
	inline static constexpr unsigned int EncoderReplacementFallbackBuffer_TypeDefinitionIndex = 486;

	class EncoderReplacementFallbackBuffer : public ::System::Text::EncoderFallbackBuffer
	{
	public:
		::System::String* strDefault; // 0x30
		::System::Int32 fallbackIndex; // 0x38
		::System::Int32 fallbackCount; // 0x3C

		::System::Void _ctor(::System::Text::EncoderReplacementFallback* fallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::EncoderReplacementFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER__CTOR_OFFSET))(this, fallback);
		}

		::System::Boolean Fallback(::System::Char charUnknown, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET))(this, charUnknown, index);
		}

		::System::Boolean Fallback_1(::System::Char charUnknownHigh, ::System::Char charUnknownLow, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_1_OFFSET))(this, charUnknownHigh, charUnknownLow, index);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Boolean MovePrevious()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET))(this);
		}
	};
}
