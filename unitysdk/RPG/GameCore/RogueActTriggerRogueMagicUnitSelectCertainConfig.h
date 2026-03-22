#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG_METHOD_5_209543B5D778DCEA_OFFSET UNITYSDK_OFFSET(0x16E041B0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG_METHOD_5_3A4DBF7D78915A96_OFFSET UNITYSDK_OFFSET(0x16E04370)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E042B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectCertainConfig_TypeDefinitionIndex = 17623;

	class RogueActTriggerRogueMagicUnitSelectCertainConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_209543B5D778DCEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCertainConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCertainConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG_METHOD_5_209543B5D778DCEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3A4DBF7D78915A96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCertainConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCertainConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG_METHOD_5_3A4DBF7D78915A96_OFFSET))(a1, a2);
		}
	};
}
