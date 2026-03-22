#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_5_2150FD9299EACFAC_OFFSET UNITYSDK_OFFSET(0x16DFB270)
#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_5_FA9F2E56EAD9A808_OFFSET UNITYSDK_OFFSET(0x16DFB0B0)
#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFB1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActEnhanceRogueBuffConfig_TypeDefinitionIndex = 17542;

	class RogueActEnhanceRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FA9F2E56EAD9A808(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_5_FA9F2E56EAD9A808_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2150FD9299EACFAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_5_2150FD9299EACFAC_OFFSET))(a1, a2);
		}
	};
}
