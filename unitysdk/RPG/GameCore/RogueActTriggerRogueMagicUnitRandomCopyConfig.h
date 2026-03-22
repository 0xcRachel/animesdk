#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_5_BA855391A9046DA0_OFFSET UNITYSDK_OFFSET(0x16E03C40)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_5_BBE90D902C1B2704_OFFSET UNITYSDK_OFFSET(0x16E03E00)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E03D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomCopyConfig_TypeDefinitionIndex = 17633;

	class RogueActTriggerRogueMagicUnitRandomCopyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BA855391A9046DA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_5_BA855391A9046DA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BBE90D902C1B2704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_5_BBE90D902C1B2704_OFFSET))(a1, a2);
		}
	};
}
