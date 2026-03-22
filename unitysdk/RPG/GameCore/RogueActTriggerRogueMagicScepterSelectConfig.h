#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_METHOD_5_290E35E521E024E0_OFFSET UNITYSDK_OFFSET(0x16E03A60)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_METHOD_5_7754B26F9AAA3464_OFFSET UNITYSDK_OFFSET(0x16E038A0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E039A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicScepterSelectConfig_TypeDefinitionIndex = 17634;

	class RogueActTriggerRogueMagicScepterSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7754B26F9AAA3464(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_METHOD_5_7754B26F9AAA3464_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_290E35E521E024E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_METHOD_5_290E35E521E024E0_OFFSET))(a1, a2);
		}
	};
}
