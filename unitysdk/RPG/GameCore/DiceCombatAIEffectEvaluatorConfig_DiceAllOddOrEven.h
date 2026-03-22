#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN_METHOD_3_4A11A1A08E30F718_OFFSET UNITYSDK_OFFSET(0x169F49C0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN_METHOD_3_FFBA2EB2C2FFED55_OFFSET UNITYSDK_OFFSET(0x169F4180)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN__CTOR_OFFSET UNITYSDK_OFFSET(0x169F4170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven_TypeDefinitionIndex = 14588;

	class DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Boolean IsOdd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A11A1A08E30F718(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN_METHOD_3_4A11A1A08E30F718_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFBA2EB2C2FFED55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN_METHOD_3_FFBA2EB2C2FFED55_OFFSET))(a1, a2);
		}
	};
}
