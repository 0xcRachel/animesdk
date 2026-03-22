#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_TEXTINFOTOLOWERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C61BC0)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfoToLowerData_TypeDefinitionIndex = 784;

	class TextInfoToLowerData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_range_10a0_10c5()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8820);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2c00_2c2e()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8828);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2c60_2ce2()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8830);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_00c0_0556()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8838);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_1e00_1ffc()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8840);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2160_216f()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8848);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_24b6_24cf()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8850);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a640_a696()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8858);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a722_a78b()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x8860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFOTOLOWERDATA__CCTOR_OFFSET))();
		}
	};
}
