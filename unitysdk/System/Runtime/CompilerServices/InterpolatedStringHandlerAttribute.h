#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERPOLATEDSTRINGHANDLERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD230)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int InterpolatedStringHandlerAttribute_TypeDefinitionIndex = 9863;

	class InterpolatedStringHandlerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERPOLATEDSTRINGHANDLERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
