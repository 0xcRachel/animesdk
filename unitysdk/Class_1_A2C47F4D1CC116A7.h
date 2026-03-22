#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardCountCollection; }
namespace RPG::Client { class ActivityRewardCountData; }

#define CLASS_1_A2C47F4D1CC116A7_METHOD_1_3DE6DC7BE3F01C08_OFFSET UNITYSDK_OFFSET(0xF5595A0)
#define CLASS_1_A2C47F4D1CC116A7__CTOR_OFFSET UNITYSDK_OFFSET(0xF559520)

inline static constexpr unsigned int Class_1_A2C47F4D1CC116A7_TypeDefinitionIndex = 49010;

class Class_1_A2C47F4D1CC116A7 : public ::System::Object
{
public:
	::RPG::Client::ActivityRewardCountCollection* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::ActivityRewardCountCollection* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRewardCountCollection*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2C47F4D1CC116A7__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityRewardCountData* Method_1_3DE6DC7BE3F01C08()
	{
		return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C47F4D1CC116A7_METHOD_1_3DE6DC7BE3F01C08_OFFSET))(this);
	}
};
