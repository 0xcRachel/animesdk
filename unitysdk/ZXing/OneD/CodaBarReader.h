#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0x185231F0)
#define ZXING_ONED_CODABARREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18523230)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarReader_TypeDefinitionIndex = 5934;

	class CodaBarReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0xAB00);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0xAB08);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_STARTEND_ENCODING()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0xAB10);
		}
		static ::System::Int32* StaticGet_MAX_ACCEPTABLE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x3C20);
		}
		static ::System::Int32* StaticGet_PADDING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x3C24);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER__CCTOR_OFFSET))();
		}

		static ::System::Boolean arrayContains(::Il2CppArray<::System::Char>* array, ::System::Char key)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Char>*, ::System::Char))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET))(array, key);
		}
	};
}
