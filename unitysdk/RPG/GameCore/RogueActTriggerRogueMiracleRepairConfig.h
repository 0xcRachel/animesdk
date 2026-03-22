#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_METHOD_5_239CF38C2E317049_OFFSET UNITYSDK_OFFSET(0x16E04E60)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_METHOD_5_F75A2180099438DD_OFFSET UNITYSDK_OFFSET(0x16E05020)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E04F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleRepairConfig_TypeDefinitionIndex = 17550;

	class RogueActTriggerRogueMiracleRepairConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_239CF38C2E317049(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_METHOD_5_239CF38C2E317049_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F75A2180099438DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_METHOD_5_F75A2180099438DD_OFFSET))(a1, a2);
		}
	};
}
