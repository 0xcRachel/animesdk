#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0x16CA5230)
#define ZXING_ONED_CODABARREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA5270)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarReader_TypeDefinitionIndex = 6046;

	class CodaBarReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x42F0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_STARTEND_ENCODING()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x42F8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x4300);
		}
		static ::System::Int32* StaticGet_MAX_ACCEPTABLE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x13C0);
		}
		static ::System::Int32* StaticGet_PADDING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x13C4);
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
