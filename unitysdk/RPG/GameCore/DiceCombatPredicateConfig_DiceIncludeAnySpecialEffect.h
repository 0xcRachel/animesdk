#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_206F3F46F1B07420_OFFSET UNITYSDK_OFFSET(0x16A3B1C0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_9CFE7026887E14A9_OFFSET UNITYSDK_OFFSET(0x16A391E0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A391C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect_TypeDefinitionIndex = 14535;

	class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_206F3F46F1B07420(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_206F3F46F1B07420_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CFE7026887E14A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_9CFE7026887E14A9_OFFSET))(a1, a2);
		}
	};
}
