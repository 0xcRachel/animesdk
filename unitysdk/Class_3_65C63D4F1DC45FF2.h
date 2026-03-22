#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect; }

#define CLASS_3_65C63D4F1DC45FF2_METHOD_3_67F4204E24FCEC7D_OFFSET UNITYSDK_OFFSET(0x15F26BE0)
#define CLASS_3_65C63D4F1DC45FF2__CTOR_OFFSET UNITYSDK_OFFSET(0x15F26BC0)

inline static constexpr unsigned int Class_3_65C63D4F1DC45FF2_TypeDefinitionIndex = 27710;

class Class_3_65C63D4F1DC45FF2 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_65C63D4F1DC45FF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_67F4204E24FCEC7D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65C63D4F1DC45FF2_METHOD_3_67F4204E24FCEC7D_OFFSET))(this);
	}
};
