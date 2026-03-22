#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Diagnostics/CodeAnalysis/DynamicallyAccessedMemberTypes.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DYNAMICALLYACCESSEDMEMBERSATTRIBUTE_GET_MEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x156ABB70)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DYNAMICALLYACCESSEDMEMBERSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABB60)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DynamicallyAccessedMembersAttribute_TypeDefinitionIndex = 9874;

	class DynamicallyAccessedMembersAttribute : public ::System::Attribute
	{
	public:
		::System::Diagnostics::CodeAnalysis::DynamicallyAccessedMemberTypes _MemberTypes_k__BackingField; // 0x10

		::System::Void _ctor(::System::Diagnostics::CodeAnalysis::DynamicallyAccessedMemberTypes memberTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::CodeAnalysis::DynamicallyAccessedMemberTypes))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DYNAMICALLYACCESSEDMEMBERSATTRIBUTE__CTOR_OFFSET))(this, memberTypes);
		}

		::System::Diagnostics::CodeAnalysis::DynamicallyAccessedMemberTypes get_MemberTypes()
		{
			return ((::System::Diagnostics::CodeAnalysis::DynamicallyAccessedMemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DYNAMICALLYACCESSEDMEMBERSATTRIBUTE_GET_MEMBERTYPES_OFFSET))(this);
		}
	};
}
