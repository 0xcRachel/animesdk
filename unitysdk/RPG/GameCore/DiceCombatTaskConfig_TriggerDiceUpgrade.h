#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_METHOD_3_24A77DC47793E17F_OFFSET UNITYSDK_OFFSET(0x16A43140)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_METHOD_3_A02463E9C72870B3_OFFSET UNITYSDK_OFFSET(0x16A40F80)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A40F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerDiceUpgrade_TypeDefinitionIndex = 14498;

	class DiceCombatTaskConfig_TriggerDiceUpgrade : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_24A77DC47793E17F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_METHOD_3_24A77DC47793E17F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A02463E9C72870B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_METHOD_3_A02463E9C72870B3_OFFSET))(a1, a2);
		}
	};
}
