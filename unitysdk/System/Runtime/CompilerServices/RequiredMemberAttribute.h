#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REQUIREDMEMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD390)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RequiredMemberAttribute_TypeDefinitionIndex = 9868;

	class RequiredMemberAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REQUIREDMEMBERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
