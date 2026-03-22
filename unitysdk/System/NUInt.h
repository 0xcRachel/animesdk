#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NUINT_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17D19330)
#define SYSTEM_NUINT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x17D19320)
#define SYSTEM_NUINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x17D19340)
#define SYSTEM_NUINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBDC0)
#define SYSTEM_NUINT__CTOR_OFFSET UNITYSDK_OFFSET(0x20024E0)

namespace System
{
	inline static constexpr unsigned int NUInt_TypeDefinitionIndex = 4865;

	struct alignas(8) NUInt
	{
		::System::Void* _value; // 0x10

		::System::Void _ctor(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUINT__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUINT__CTOR_1_OFFSET))(this, value);
		}

		static ::System::NUInt op_Explicit(::System::Int32 value)
		{
			return ((::System::NUInt(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUINT_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::Void* op_Explicit_1(::System::NUInt value)
		{
			return ((::System::Void*(*)(::System::NUInt))((::PBYTE)hIl2Cpp + SYSTEM_NUINT_OP_EXPLICIT_1_OFFSET))(value);
		}

		static ::System::NUInt op_Multiply(::System::NUInt left, ::System::NUInt right)
		{
			return ((::System::NUInt(*)(::System::NUInt, ::System::NUInt))((::PBYTE)hIl2Cpp + SYSTEM_NUINT_OP_MULTIPLY_OFFSET))(left, right);
		}
	};
}
