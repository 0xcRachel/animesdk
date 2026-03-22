#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_MUTABLEDECIMAL_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x1FFA630)
#define SYSTEM_MUTABLEDECIMAL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x2007340)
#define SYSTEM_MUTABLEDECIMAL_SET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x202CC10)
#define SYSTEM_MUTABLEDECIMAL_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x202CC30)

namespace System
{
	inline static constexpr unsigned int MutableDecimal_TypeDefinitionIndex = 4864;

	struct alignas(4) MutableDecimal
	{
		::System::UInt32 Flags; // 0x10
		::System::UInt32 High; // 0x14
		::System::UInt32 Low; // 0x18
		::System::UInt32 Mid; // 0x1C

		::System::Boolean get_IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_GET_ISNEGATIVE_OFFSET))(this);
		}

		::System::Void set_IsNegative(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_SET_ISNEGATIVE_OFFSET))(this, value);
		}

		::System::Int32 get_Scale()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_SET_SCALE_OFFSET))(this, value);
		}
	};
}
