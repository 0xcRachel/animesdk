#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_METHOD_3_513F177408FE7B6C_OFFSET UNITYSDK_OFFSET(0x1B339EA0)
#define RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_METHOD_3_F7146A62B3EC6C35_OFFSET UNITYSDK_OFFSET(0x1B3443C0)
#define RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B339E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierIgnorePersonaRoomContentConfig_TypeDefinitionIndex = 16920;

	class RogueModifierIgnorePersonaRoomContentConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7146A62B3EC6C35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierIgnorePersonaRoomContentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierIgnorePersonaRoomContentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_METHOD_3_F7146A62B3EC6C35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_513F177408FE7B6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierIgnorePersonaRoomContentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierIgnorePersonaRoomContentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_METHOD_3_513F177408FE7B6C_OFFSET))(a1, a2);
		}
	};
}
