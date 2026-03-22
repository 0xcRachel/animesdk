#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CurrentHPCompare; }

#define CLASS_3_346C20A6C57AF7D6_METHOD_3_E93FB20C44775568_OFFSET UNITYSDK_OFFSET(0x15F19680)
#define CLASS_3_346C20A6C57AF7D6__CTOR_OFFSET UNITYSDK_OFFSET(0x15F19660)

inline static constexpr unsigned int Class_3_346C20A6C57AF7D6_TypeDefinitionIndex = 27715;

class Class_3_346C20A6C57AF7D6 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_346C20A6C57AF7D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_E93FB20C44775568()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346C20A6C57AF7D6_METHOD_3_E93FB20C44775568_OFFSET))(this);
	}
};
