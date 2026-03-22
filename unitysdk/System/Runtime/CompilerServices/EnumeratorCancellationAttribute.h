#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ENUMERATORCANCELLATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156B2020)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int EnumeratorCancellationAttribute_TypeDefinitionIndex = 8803;

	class EnumeratorCancellationAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ENUMERATORCANCELLATIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
