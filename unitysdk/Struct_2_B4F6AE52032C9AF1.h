#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { class Object; }

#define STRUCT_2_B4F6AE52032C9AF1_METHOD_2_72E2987673A719F6_OFFSET UNITYSDK_OFFSET(0x1460A20)
#define STRUCT_2_B4F6AE52032C9AF1_METHOD_2_DDB38AD7FA1D6204_OFFSET UNITYSDK_OFFSET(0x1460A30)

inline static constexpr unsigned int Struct_2_B4F6AE52032C9AF1_TypeDefinitionIndex = 53451;

struct alignas(4) Struct_2_B4F6AE52032C9AF1
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Object* Method_2_72E2987673A719F6()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B4F6AE52032C9AF1_METHOD_2_72E2987673A719F6_OFFSET))(this);
	}

	::RPG::Client::RogueMagicScepterDataItem* Method_2_DDB38AD7FA1D6204()
	{
		return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B4F6AE52032C9AF1_METHOD_2_DDB38AD7FA1D6204_OFFSET))(this);
	}
};
