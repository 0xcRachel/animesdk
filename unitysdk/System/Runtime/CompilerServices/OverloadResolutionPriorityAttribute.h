#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_OVERLOADRESOLUTIONPRIORITYATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x156AD360)
#define SYSTEM_RUNTIME_COMPILERSERVICES_OVERLOADRESOLUTIONPRIORITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD350)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int OverloadResolutionPriorityAttribute_TypeDefinitionIndex = 9866;

	class OverloadResolutionPriorityAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _Priority_k__BackingField; // 0x10

		::System::Void _ctor(::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_OVERLOADRESOLUTIONPRIORITYATTRIBUTE__CTOR_OFFSET))(this, priority);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_OVERLOADRESOLUTIONPRIORITYATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}
	};
}
