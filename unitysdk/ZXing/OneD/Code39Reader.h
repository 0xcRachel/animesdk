#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }

#define ZXING_ONED_CODE39READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D2CC00)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code39Reader_TypeDefinitionIndex = 6098;

	class Code39Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x6170);
		}
		static ::System::String** StaticGet_CHECK_DIGIT_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x6178);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x6180);
		}
		static ::System::Int32* StaticGet_ASTERISK_ENCODING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x32D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39READER__CCTOR_OFFSET))();
		}
	};
}
