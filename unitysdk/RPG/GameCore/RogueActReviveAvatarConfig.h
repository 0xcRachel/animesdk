#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_5_8ECA0489378362CD_OFFSET UNITYSDK_OFFSET(0x16E010C0)
#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_5_B637D48C6F6B1EB9_OFFSET UNITYSDK_OFFSET(0x16E01280)
#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E011C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReviveAvatarConfig_TypeDefinitionIndex = 17578;

	class RogueActReviveAvatarConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8ECA0489378362CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReviveAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReviveAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_5_8ECA0489378362CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B637D48C6F6B1EB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReviveAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReviveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_5_B637D48C6F6B1EB9_OFFSET))(a1, a2);
		}
	};
}
