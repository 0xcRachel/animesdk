#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_METHOD_5_CB8B35B40BE2A393_OFFSET UNITYSDK_OFFSET(0x16E01BA0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_METHOD_5_F170680616F660EF_OFFSET UNITYSDK_OFFSET(0x16E01D60)
#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E01CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDestroyedRogueMiracleSelectConfig_TypeDefinitionIndex = 17552;

	class RogueActTriggerDestroyedRogueMiracleSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_CB8B35B40BE2A393(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_METHOD_5_CB8B35B40BE2A393_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F170680616F660EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_METHOD_5_F170680616F660EF_OFFSET))(a1, a2);
		}
	};
}
