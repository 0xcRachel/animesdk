#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_SETSREQUIREDMEMBERSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABDB0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int SetsRequiredMembersAttribute_TypeDefinitionIndex = 9889;

	class SetsRequiredMembersAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_SETSREQUIREDMEMBERSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
