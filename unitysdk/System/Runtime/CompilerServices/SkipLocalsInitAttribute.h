#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_SKIPLOCALSINITATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD3C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int SkipLocalsInitAttribute_TypeDefinitionIndex = 9870;

	class SkipLocalsInitAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SKIPLOCALSINITATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
