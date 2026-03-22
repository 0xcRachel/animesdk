#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG_METHOD_5_549B9C02BE38FA78_OFFSET UNITYSDK_OFFSET(0x16E03E10)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG_METHOD_5_CE6403C8545D089C_OFFSET UNITYSDK_OFFSET(0x16E03FD0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E03F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomDropConfig_TypeDefinitionIndex = 17628;

	class RogueActTriggerRogueMagicUnitRandomDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_549B9C02BE38FA78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG_METHOD_5_549B9C02BE38FA78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CE6403C8545D089C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG_METHOD_5_CE6403C8545D089C_OFFSET))(a1, a2);
		}
	};
}
