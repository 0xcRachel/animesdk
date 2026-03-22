#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_METHOD_5_9472B7542DB5E54C_OFFSET UNITYSDK_OFFSET(0x16E05030)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_METHOD_5_D47790DBB4FC6468_OFFSET UNITYSDK_OFFSET(0x16E051F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E05130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleSelectByIDConfig_TypeDefinitionIndex = 17548;

	class RogueActTriggerRogueMiracleSelectByIDConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9472B7542DB5E54C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_METHOD_5_9472B7542DB5E54C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D47790DBB4FC6468(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_METHOD_5_D47790DBB4FC6468_OFFSET))(a1, a2);
		}
	};
}
