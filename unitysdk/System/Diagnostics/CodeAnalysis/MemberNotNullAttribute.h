#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLATTRIBUTE_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x156ABC50)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156ABC40)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABBF0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int MemberNotNullAttribute_TypeDefinitionIndex = 9884;

	class MemberNotNullAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _Members_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLATTRIBUTE__CTOR_OFFSET))(this, member);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* members)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLATTRIBUTE__CTOR_1_OFFSET))(this, members);
		}

		::Il2CppArray<::System::String*>* get_Members()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLATTRIBUTE_GET_MEMBERS_OFFSET))(this);
		}
	};
}
