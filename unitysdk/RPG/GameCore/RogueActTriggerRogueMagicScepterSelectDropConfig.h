#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_5_04C2954A59D255B1_OFFSET UNITYSDK_OFFSET(0x16E03C30)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_5_E05A716E54B96B45_OFFSET UNITYSDK_OFFSET(0x16E03A70)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E03B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicScepterSelectDropConfig_TypeDefinitionIndex = 17642;

	class RogueActTriggerRogueMagicScepterSelectDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E05A716E54B96B45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_5_E05A716E54B96B45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_04C2954A59D255B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_5_04C2954A59D255B1_OFFSET))(a1, a2);
		}
	};
}
