#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_TEXTINFOTOUPPERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x171114E0)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfoToUpperData_TypeDefinitionIndex = 786;

	class TextInfoToUpperData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_range_2170_2184()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x5660);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a641_a697()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x5668);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2d00_2d25()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x5670);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_1e01_1ff3()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x5678);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a723_a78c()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x5680);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_24d0_24e9()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x5688);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2c30_2ce3()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x5690);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_00e0_0586()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x5698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFOTOUPPERDATA__CCTOR_OFFSET))();
		}
	};
}
