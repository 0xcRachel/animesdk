#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_METHOD_5_BA48A26AC03960DF_OFFSET UNITYSDK_OFFSET(0x16E04720)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_METHOD_5_C54C447E9BEC5C03_OFFSET UNITYSDK_OFFSET(0x16E048E0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E04820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectDropConfig_TypeDefinitionIndex = 17627;

	class RogueActTriggerRogueMagicUnitSelectDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BA48A26AC03960DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_METHOD_5_BA48A26AC03960DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C54C447E9BEC5C03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_METHOD_5_C54C447E9BEC5C03_OFFSET))(a1, a2);
		}
	};
}
