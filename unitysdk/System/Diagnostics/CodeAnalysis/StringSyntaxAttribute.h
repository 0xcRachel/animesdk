#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_STRINGSYNTAXATTRIBUTE_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x156ABE10)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_STRINGSYNTAXATTRIBUTE_GET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x156ABE00)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_STRINGSYNTAXATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156ABDF0)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_STRINGSYNTAXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABDC0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int StringSyntaxAttribute_TypeDefinitionIndex = 9890;

	class StringSyntaxAttribute : public ::System::Attribute
	{
	public:
		// static const ::System::String* CompositeFormat; // 0x0
		// static const ::System::String* DateOnlyFormat; // 0x0
		// static const ::System::String* DateTimeFormat; // 0x0
		// static const ::System::String* EnumFormat; // 0x0
		// static const ::System::String* GuidFormat; // 0x0
		// static const ::System::String* Json; // 0x0
		// static const ::System::String* NumericFormat; // 0x0
		// static const ::System::String* Regex; // 0x0
		// static const ::System::String* TimeOnlyFormat; // 0x0
		// static const ::System::String* TimeSpanFormat; // 0x0
		// static const ::System::String* Uri; // 0x0
		// static const ::System::String* Xml; // 0x0
		::System::String* _Syntax_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Arguments_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* syntax)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_STRINGSYNTAXATTRIBUTE__CTOR_OFFSET))(this, syntax);
		}

		::System::Void _ctor_1(::System::String* syntax, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_STRINGSYNTAXATTRIBUTE__CTOR_1_OFFSET))(this, syntax, arguments);
		}

		::System::String* get_Syntax()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_STRINGSYNTAXATTRIBUTE_GET_SYNTAX_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Arguments()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_STRINGSYNTAXATTRIBUTE_GET_ARGUMENTS_OFFSET))(this);
		}
	};
}
