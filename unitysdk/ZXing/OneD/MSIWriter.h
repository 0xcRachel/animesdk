#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_MSIWRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x16CB1560)
#define ZXING_ONED_MSIWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x16CB14B0)
#define ZXING_ONED_MSIWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CB1880)
#define ZXING_ONED_MSIWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA5150)

namespace ZXing::OneD
{
	inline static constexpr unsigned int MSIWriter_TypeDefinitionIndex = 6080;

	class MSIWriter : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_numberWidths()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MSIWriter_TypeDefinitionIndex)->GetStaticField(0x45A0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_endWidths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIWriter_TypeDefinitionIndex)->GetStaticField(0x45A8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_startWidths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIWriter_TypeDefinitionIndex)->GetStaticField(0x45B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_MSIWRITER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_MSIWRITER__CCTOR_OFFSET))();
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_MSIWRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		::Il2CppArray<::System::Boolean>* encode_1(::System::String* contents)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_MSIWRITER_ENCODE_1_OFFSET))(this, contents);
		}
	};
}
