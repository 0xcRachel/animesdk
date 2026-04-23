#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET UNITYSDK_OFFSET(0x166B6450)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET UNITYSDK_OFFSET(0x166B6370)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x166B5E70)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int NormalizationTableUtil_TypeDefinitionIndex = 38;

	class NormalizationTableUtil : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Helper()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1860);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Composite()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1868);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Prop()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1870);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Map()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1878);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Combining()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CCTOR_OFFSET))();
		}

		static ::System::Int32 PropIdx(::System::Int32 cp)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET))(cp);
		}

		static ::System::Int32 MapIdx(::System::Int32 cp)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET))(cp);
		}
	};
}
