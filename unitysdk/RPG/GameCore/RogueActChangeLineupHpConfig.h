#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_5_274606D13ED6FC9A_OFFSET UNITYSDK_OFFSET(0x16DF93A0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_5_FBE07C26B7245EC6_OFFSET UNITYSDK_OFFSET(0x16DF91E0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF92E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupHpConfig_TypeDefinitionIndex = 17573;

	class RogueActChangeLineupHpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FBE07C26B7245EC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_5_FBE07C26B7245EC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_274606D13ED6FC9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_5_274606D13ED6FC9A_OFFSET))(a1, a2);
		}
	};
}
