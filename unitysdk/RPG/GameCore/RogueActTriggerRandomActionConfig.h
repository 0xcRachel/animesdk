#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_METHOD_5_DEB28F8F2AB68794_OFFSET UNITYSDK_OFFSET(0x16E02680)
#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_METHOD_5_ECFF1FFACEFF2710_OFFSET UNITYSDK_OFFSET(0x16E02840)
#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E02780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRandomActionConfig_TypeDefinitionIndex = 17648;

	class RogueActTriggerRandomActionConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DEB28F8F2AB68794(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRandomActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRandomActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_METHOD_5_DEB28F8F2AB68794_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_ECFF1FFACEFF2710(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRandomActionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRandomActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_METHOD_5_ECFF1FFACEFF2710_OFFSET))(a1, a2);
		}
	};
}
