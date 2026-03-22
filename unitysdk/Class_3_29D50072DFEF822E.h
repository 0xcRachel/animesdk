#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllEven; }

#define CLASS_3_29D50072DFEF822E_METHOD_3_FDE98962EC6197E2_OFFSET UNITYSDK_OFFSET(0x15FCA850)
#define CLASS_3_29D50072DFEF822E__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCA830)

inline static constexpr unsigned int Class_3_29D50072DFEF822E_TypeDefinitionIndex = 27707;

class Class_3_29D50072DFEF822E : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_29D50072DFEF822E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_FDE98962EC6197E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29D50072DFEF822E_METHOD_3_FDE98962EC6197E2_OFFSET))(this);
	}
};
