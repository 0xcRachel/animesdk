#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerDiceUpgrade; }

#define CLASS_2_425E3C99236F4015_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x15FFED40)
#define CLASS_2_425E3C99236F4015__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFED30)

inline static constexpr unsigned int Class_2_425E3C99236F4015_TypeDefinitionIndex = 27696;

class Class_2_425E3C99236F4015 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_425E3C99236F4015__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_425E3C99236F4015_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}
};
