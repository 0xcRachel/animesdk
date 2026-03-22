#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/UPCEANReader.h"

#define ZXING_ONED_EAN13READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852C390)

namespace ZXing::OneD
{
	inline static constexpr unsigned int EAN13Reader_TypeDefinitionIndex = 5964;

	class EAN13Reader : public ::ZXing::OneD::UPCEANReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_FIRST_DIGIT_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EAN13Reader_TypeDefinitionIndex)->GetStaticField(0xAC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_EAN13READER__CCTOR_OFFSET))();
		}
	};
}
