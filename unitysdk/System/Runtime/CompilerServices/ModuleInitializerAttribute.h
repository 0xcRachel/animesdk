#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_MODULEINITIALIZERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD270)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ModuleInitializerAttribute_TypeDefinitionIndex = 9865;

	class ModuleInitializerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_MODULEINITIALIZERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
