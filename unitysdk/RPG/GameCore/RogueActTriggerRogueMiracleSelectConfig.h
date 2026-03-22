#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG_METHOD_5_5FDE49FC4CFDAD80_OFFSET UNITYSDK_OFFSET(0x16E05200)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG_METHOD_5_F47A6445FF7C67E4_OFFSET UNITYSDK_OFFSET(0x16E053C0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E05300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleSelectConfig_TypeDefinitionIndex = 17547;

	class RogueActTriggerRogueMiracleSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5FDE49FC4CFDAD80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG_METHOD_5_5FDE49FC4CFDAD80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F47A6445FF7C67E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG_METHOD_5_F47A6445FF7C67E4_OFFSET))(a1, a2);
		}
	};
}
