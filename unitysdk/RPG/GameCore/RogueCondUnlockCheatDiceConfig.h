#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_5_267F3BEEFD8E7D9D_OFFSET UNITYSDK_OFFSET(0x16E62450)
#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_5_F219777B437E7F7E_OFFSET UNITYSDK_OFFSET(0x16E622E0)
#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E623B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondUnlockCheatDiceConfig_TypeDefinitionIndex = 17666;

	class RogueCondUnlockCheatDiceConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F219777B437E7F7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_5_F219777B437E7F7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_267F3BEEFD8E7D9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_5_267F3BEEFD8E7D9D_OFFSET))(a1, a2);
		}
	};
}
