#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasCustomValue; }

#define CLASS_3_96DBE14E6123E2A9_METHOD_3_9E73B52655981BE4_OFFSET UNITYSDK_OFFSET(0x15FF8B50)
#define CLASS_3_96DBE14E6123E2A9__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF8B30)

inline static constexpr unsigned int Class_3_96DBE14E6123E2A9_TypeDefinitionIndex = 27721;

class Class_3_96DBE14E6123E2A9 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_96DBE14E6123E2A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9E73B52655981BE4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96DBE14E6123E2A9_METHOD_3_9E73B52655981BE4_OFFSET))(this);
	}
};
