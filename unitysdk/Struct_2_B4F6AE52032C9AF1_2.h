#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_B4F6AE52032C9AF1_2_METHOD_2_72E2987673A719F6_OFFSET UNITYSDK_OFFSET(0x1457D30)

inline static constexpr unsigned int Struct_2_B4F6AE52032C9AF1_2_TypeDefinitionIndex = 53455;

struct alignas(4) Struct_2_B4F6AE52032C9AF1_2
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Object* Method_2_72E2987673A719F6()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B4F6AE52032C9AF1_2_METHOD_2_72E2987673A719F6_OFFSET))(this);
	}
};
