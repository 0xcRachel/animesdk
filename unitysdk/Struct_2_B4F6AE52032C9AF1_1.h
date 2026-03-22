#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { class Object; }

#define STRUCT_2_B4F6AE52032C9AF1_1_METHOD_2_72E2987673A719F6_OFFSET UNITYSDK_OFFSET(0x13ED4F0)
#define STRUCT_2_B4F6AE52032C9AF1_1_METHOD_2_A8514AF5C6F400FC_OFFSET UNITYSDK_OFFSET(0x13ED500)

inline static constexpr unsigned int Struct_2_B4F6AE52032C9AF1_1_TypeDefinitionIndex = 53453;

struct alignas(4) Struct_2_B4F6AE52032C9AF1_1
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Object* Method_2_72E2987673A719F6()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B4F6AE52032C9AF1_1_METHOD_2_72E2987673A719F6_OFFSET))(this);
	}

	::RPG::Client::RogueMagicUnitDataItem* Method_2_A8514AF5C6F400FC()
	{
		return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B4F6AE52032C9AF1_1_METHOD_2_A8514AF5C6F400FC_OFFSET))(this);
	}
};
