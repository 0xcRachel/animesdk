#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_ALLOWNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AB930)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int AllowNullAttribute_TypeDefinitionIndex = 9876;

	class AllowNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_ALLOWNULLATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
