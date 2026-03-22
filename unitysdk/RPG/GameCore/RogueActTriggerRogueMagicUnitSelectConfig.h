#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_5_270F1DDA7DFA3B6A_OFFSET UNITYSDK_OFFSET(0x16E04540)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_5_B95BDDF45B1DB756_OFFSET UNITYSDK_OFFSET(0x16E04380)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E04480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectConfig_TypeDefinitionIndex = 17622;

	class RogueActTriggerRogueMagicUnitSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B95BDDF45B1DB756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_5_B95BDDF45B1DB756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_270F1DDA7DFA3B6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_5_270F1DDA7DFA3B6A_OFFSET))(a1, a2);
		}
	};
}
