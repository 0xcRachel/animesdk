#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_METHOD_5_1094539015DACB32_OFFSET UNITYSDK_OFFSET(0x16E02DB0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_METHOD_5_D6AF8658DB69171E_OFFSET UNITYSDK_OFFSET(0x16E02BF0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E02CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffEnhanceConfig_TypeDefinitionIndex = 17537;

	class RogueActTriggerRogueBuffEnhanceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D6AF8658DB69171E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_METHOD_5_D6AF8658DB69171E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1094539015DACB32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_METHOD_5_1094539015DACB32_OFFSET))(a1, a2);
		}
	};
}
