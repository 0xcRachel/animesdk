#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_2AE89B9E4BF18AD3;
class Class_1_30467842FAA5266B;
class Class_2_6C1B95FB4BCBEF14;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDice; }

#define CLASS_2_1E2FC7DB123B0E34_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x15FBF3F0)
#define CLASS_2_1E2FC7DB123B0E34__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBF370)

inline static constexpr unsigned int Class_2_1E2FC7DB123B0E34_TypeDefinitionIndex = 27665;

class Class_2_1E2FC7DB123B0E34 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_6C1B95FB4BCBEF14* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* Field_2_0; // 0x20
	::Class_1_2AE89B9E4BF18AD3* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_1E2FC7DB123B0E34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E2FC7DB123B0E34_METHOD_2_3CAB3F134E5CEF52_OFFSET))(this);
	}
};
