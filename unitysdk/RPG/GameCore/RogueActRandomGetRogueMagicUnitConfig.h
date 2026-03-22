#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG_METHOD_5_0F731957EC4DC2D7_OFFSET UNITYSDK_OFFSET(0x16DFEC80)
#define RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG_METHOD_5_57E1824A4E02BA3B_OFFSET UNITYSDK_OFFSET(0x16DFEE40)
#define RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFED80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRandomGetRogueMagicUnitConfig_TypeDefinitionIndex = 17626;

	class RogueActRandomGetRogueMagicUnitConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0F731957EC4DC2D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRandomGetRogueMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRandomGetRogueMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG_METHOD_5_0F731957EC4DC2D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_57E1824A4E02BA3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRandomGetRogueMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRandomGetRogueMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG_METHOD_5_57E1824A4E02BA3B_OFFSET))(a1, a2);
		}
	};
}
