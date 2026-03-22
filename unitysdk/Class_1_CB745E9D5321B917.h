#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2C47F4D1CC116A7;
namespace RPG::Client { class ActivityRewardCountCollection; }

#define CLASS_1_CB745E9D5321B917_METHOD_1_0EE0E75A50EA0EA8_OFFSET UNITYSDK_OFFSET(0x9455D40)
#define CLASS_1_CB745E9D5321B917__CTOR_OFFSET UNITYSDK_OFFSET(0x9455CD0)

inline static constexpr unsigned int Class_1_CB745E9D5321B917_TypeDefinitionIndex = 49011;

class Class_1_CB745E9D5321B917 : public ::System::Object
{
public:
	::RPG::Client::ActivityRewardCountCollection* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityRewardCountCollection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRewardCountCollection*))((::PBYTE)hIl2Cpp + CLASS_1_CB745E9D5321B917__CTOR_OFFSET))(this, a1);
	}

	::Class_1_A2C47F4D1CC116A7* Method_1_0EE0E75A50EA0EA8(::System::UInt32 a1)
	{
		return ((::Class_1_A2C47F4D1CC116A7*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB745E9D5321B917_METHOD_1_0EE0E75A50EA0EA8_OFFSET))(this, a1);
	}
};
