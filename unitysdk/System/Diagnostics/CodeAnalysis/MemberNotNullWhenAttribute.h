#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x156ABCD0)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x156ABCC0)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156ABCB0)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABC60)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int MemberNotNullWhenAttribute_TypeDefinitionIndex = 9885;

	class MemberNotNullWhenAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _Members_k__BackingField; // 0x10
		::System::Boolean _ReturnValue_k__BackingField; // 0x18

		::System::Void _ctor(::System::Boolean returnValue, ::System::String* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE__CTOR_OFFSET))(this, returnValue, member);
		}

		::System::Void _ctor_1(::System::Boolean returnValue, ::Il2CppArray<::System::String*>* members)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE__CTOR_1_OFFSET))(this, returnValue, members);
		}

		::System::Boolean get_ReturnValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE_GET_RETURNVALUE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Members()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE_GET_MEMBERS_OFFSET))(this);
		}
	};
}
