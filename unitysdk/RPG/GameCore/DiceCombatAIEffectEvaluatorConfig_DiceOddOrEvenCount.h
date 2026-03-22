#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT_METHOD_3_D34FAECC7BE514BB_OFFSET UNITYSDK_OFFSET(0x169F4620)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT_METHOD_3_FF15B7A112D1AABE_OFFSET UNITYSDK_OFFSET(0x169F4CB0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x169F4610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount_TypeDefinitionIndex = 14589;

	class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Boolean IsOdd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF15B7A112D1AABE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT_METHOD_3_FF15B7A112D1AABE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D34FAECC7BE514BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT_METHOD_3_D34FAECC7BE514BB_OFFSET))(a1, a2);
		}
	};
}
