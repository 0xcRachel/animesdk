#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REQUIRESLOCATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD3A0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RequiresLocationAttribute_TypeDefinitionIndex = 9869;

	class RequiresLocationAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REQUIRESLOCATIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
