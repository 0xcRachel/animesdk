#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_METHOD_5_363B04FFB3665C4A_OFFSET UNITYSDK_OFFSET(0x16DF8C70)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_METHOD_5_DF6698ABD993F9F6_OFFSET UNITYSDK_OFFSET(0x16DF8E30)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueRerollDiceConfig_TypeDefinitionIndex = 17587;

	class RogueActChangeChessRogueRerollDiceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_363B04FFB3665C4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_METHOD_5_363B04FFB3665C4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DF6698ABD993F9F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_METHOD_5_DF6698ABD993F9F6_OFFSET))(a1, a2);
		}
	};
}
