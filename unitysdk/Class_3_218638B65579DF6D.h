#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllSame; }

#define CLASS_3_218638B65579DF6D_METHOD_3_CE859053E352A1B7_OFFSET UNITYSDK_OFFSET(0x15F7BD40)
#define CLASS_3_218638B65579DF6D__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7BD20)

inline static constexpr unsigned int Class_3_218638B65579DF6D_TypeDefinitionIndex = 27708;

class Class_3_218638B65579DF6D : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_218638B65579DF6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_CE859053E352A1B7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_218638B65579DF6D_METHOD_3_CE859053E352A1B7_OFFSET))(this);
	}
};
