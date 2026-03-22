#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_0B8D1566449A1677;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven; }

#define CLASS_2_155506CD7336E4D4_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x15FEE990)
#define CLASS_2_155506CD7336E4D4__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEE980)

inline static constexpr unsigned int Class_2_155506CD7336E4D4_TypeDefinitionIndex = 27603;

class Class_2_155506CD7336E4D4 : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::Class_3_0B8D1566449A1677* Field_2_1; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven* a1, ::Class_3_0B8D1566449A1677* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven*, ::Class_3_0B8D1566449A1677*))((::PBYTE)hIl2Cpp + CLASS_2_155506CD7336E4D4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155506CD7336E4D4_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
