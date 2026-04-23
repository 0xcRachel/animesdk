#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_INTRINSICATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7374C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IntrinsicAttribute_TypeDefinitionIndex = 4875;

	class IntrinsicAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTRINSICATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
