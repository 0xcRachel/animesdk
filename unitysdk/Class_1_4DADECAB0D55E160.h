#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_507;
namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }

#define CLASS_1_4DADECAB0D55E160_METHOD_1_2E0F027C058B7585_OFFSET UNITYSDK_OFFSET(0xFD760F0)
#define CLASS_1_4DADECAB0D55E160__CTOR_OFFSET UNITYSDK_OFFSET(0xFD760A0)

inline static constexpr unsigned int Class_1_4DADECAB0D55E160_TypeDefinitionIndex = 48958;

class Class_1_4DADECAB0D55E160 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_507* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_507* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_507*))((::PBYTE)hIl2Cpp + CLASS_1_4DADECAB0D55E160__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::IActivityQuestRewardTabGroupInfo* Method_1_2E0F027C058B7585(::System::UInt32 a1)
	{
		return ((::RPG::Client::IActivityQuestRewardTabGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4DADECAB0D55E160_METHOD_1_2E0F027C058B7585_OFFSET))(this, a1);
	}
};
