#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSAME_METHOD_3_4D523F7C1070E9C8_OFFSET UNITYSDK_OFFSET(0x169F4A90)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSAME_METHOD_3_4FF9A94A9C94541D_OFFSET UNITYSDK_OFFSET(0x169F4250)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSAME__CTOR_OFFSET UNITYSDK_OFFSET(0x169F4240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceAllSame_TypeDefinitionIndex = 14591;

	class DiceCombatAIEffectEvaluatorConfig_DiceAllSame : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Content; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D523F7C1070E9C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSAME_METHOD_3_4D523F7C1070E9C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4FF9A94A9C94541D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSAME_METHOD_3_4FF9A94A9C94541D_OFFSET))(a1, a2);
		}
	};
}
