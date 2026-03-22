#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DamageValueCompare; }

#define CLASS_3_6506CC44BCD81080_METHOD_3_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x15FD9E80)
#define CLASS_3_6506CC44BCD81080__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD9E60)

inline static constexpr unsigned int Class_3_6506CC44BCD81080_TypeDefinitionIndex = 27687;

class Class_3_6506CC44BCD81080 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* Field_3_0; // 0x30
	::Class_2_053DD8E4EC1165EB* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_3_6506CC44BCD81080__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6506CC44BCD81080_METHOD_3_37011B6DDBE4CF26_OFFSET))(this);
	}
};
