#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE_METHOD_3_2E9835C47EBEA4AD_OFFSET UNITYSDK_OFFSET(0x169F4490)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE_METHOD_3_E912035F4597B0D8_OFFSET UNITYSDK_OFFSET(0x169F4BE0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x169F4480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceHasSequence_TypeDefinitionIndex = 14594;

	class DiceCombatAIEffectEvaluatorConfig_DiceHasSequence : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Len; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E912035F4597B0D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE_METHOD_3_E912035F4597B0D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E9835C47EBEA4AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE_METHOD_3_2E9835C47EBEA4AD_OFFSET))(a1, a2);
		}
	};
}
