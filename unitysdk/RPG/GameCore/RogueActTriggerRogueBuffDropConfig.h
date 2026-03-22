#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_METHOD_5_3ABBADA080DD8E53_OFFSET UNITYSDK_OFFSET(0x16E02A20)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_METHOD_5_7F125EF98707A0AF_OFFSET UNITYSDK_OFFSET(0x16E02BE0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E02B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffDropConfig_TypeDefinitionIndex = 17538;

	class RogueActTriggerRogueBuffDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3ABBADA080DD8E53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_METHOD_5_3ABBADA080DD8E53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7F125EF98707A0AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_METHOD_5_7F125EF98707A0AF_OFFSET))(a1, a2);
		}
	};
}
