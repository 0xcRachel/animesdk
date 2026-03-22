#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_METHOD_5_50C073FD64B064B0_OFFSET UNITYSDK_OFFSET(0x16E04AC0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_METHOD_5_BEC4E4434F39E094_OFFSET UNITYSDK_OFFSET(0x16E04C80)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E04BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleDestroyConfig_TypeDefinitionIndex = 17549;

	class RogueActTriggerRogueMiracleDestroyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_50C073FD64B064B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_METHOD_5_50C073FD64B064B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BEC4E4434F39E094(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_METHOD_5_BEC4E4434F39E094_OFFSET))(a1, a2);
		}
	};
}
