#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/UPCEANReader.h"

namespace System { class String; }

#define ZXING_ONED_UPCEREADER_CONVERTUPCETOUPCA_OFFSET UNITYSDK_OFFSET(0x16CB4E40)
#define ZXING_ONED_UPCEREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CB5130)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEReader_TypeDefinitionIndex = 6092;

	class UPCEReader : public ::ZXing::OneD::UPCEANReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_MIDDLE_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEReader_TypeDefinitionIndex)->GetStaticField(0x4710);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_NUMSYS_AND_CHECK_DIGIT_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEReader_TypeDefinitionIndex)->GetStaticField(0x4718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEREADER__CCTOR_OFFSET))();
		}

		static ::System::String* convertUPCEtoUPCA(::System::String* upce)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEREADER_CONVERTUPCETOUPCA_OFFSET))(upce);
		}
	};
}
