#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_METHOD_5_01CD4A997357EB1B_OFFSET UNITYSDK_OFFSET(0x16DF88D0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_METHOD_5_C2505876D17C7F77_OFFSET UNITYSDK_OFFSET(0x16DF8A90)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF89D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueCheatDiceConfig_TypeDefinitionIndex = 17586;

	class RogueActChangeChessRogueCheatDiceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_01CD4A997357EB1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_METHOD_5_01CD4A997357EB1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C2505876D17C7F77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_METHOD_5_C2505876D17C7F77_OFFSET))(a1, a2);
		}
	};
}
