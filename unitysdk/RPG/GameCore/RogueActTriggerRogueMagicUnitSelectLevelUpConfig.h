#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_5_1B99F9A3BC95A2EB_OFFSET UNITYSDK_OFFSET(0x16E048F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_5_431538179EFEE947_OFFSET UNITYSDK_OFFSET(0x16E04AB0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E049F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectLevelUpConfig_TypeDefinitionIndex = 17629;

	class RogueActTriggerRogueMagicUnitSelectLevelUpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1B99F9A3BC95A2EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_5_1B99F9A3BC95A2EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_431538179EFEE947(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_5_431538179EFEE947_OFFSET))(a1, a2);
		}
	};
}
