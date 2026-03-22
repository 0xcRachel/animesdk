#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnyContent; }

#define CLASS_3_DAB1A38314F662AF_METHOD_3_C7FF21433486C346_OFFSET UNITYSDK_OFFSET(0x15FEB370)
#define CLASS_3_DAB1A38314F662AF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEB350)

inline static constexpr unsigned int Class_3_DAB1A38314F662AF_TypeDefinitionIndex = 27709;

class Class_3_DAB1A38314F662AF : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_DAB1A38314F662AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_C7FF21433486C346()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB1A38314F662AF_METHOD_3_C7FF21433486C346_OFFSET))(this);
	}
};
