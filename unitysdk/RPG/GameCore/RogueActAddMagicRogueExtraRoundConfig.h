#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_5_C41E7923FCD825CF_OFFSET UNITYSDK_OFFSET(0x16DF7F40)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_5_D6EFABD89B440E73_OFFSET UNITYSDK_OFFSET(0x16DF8100)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddMagicRogueExtraRoundConfig_TypeDefinitionIndex = 17637;

	class RogueActAddMagicRogueExtraRoundConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C41E7923FCD825CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_5_C41E7923FCD825CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D6EFABD89B440E73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_5_D6EFABD89B440E73_OFFSET))(a1, a2);
		}
	};
}
