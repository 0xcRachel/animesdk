#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_5_1BF8987E53E87FCA_OFFSET UNITYSDK_OFFSET(0x16E03FE0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_5_C5242C2A7A161D76_OFFSET UNITYSDK_OFFSET(0x16E041A0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E040E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomLevelUpConfig_TypeDefinitionIndex = 17630;

	class RogueActTriggerRogueMagicUnitRandomLevelUpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1BF8987E53E87FCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_5_1BF8987E53E87FCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C5242C2A7A161D76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_5_C5242C2A7A161D76_OFFSET))(a1, a2);
		}
	};
}
