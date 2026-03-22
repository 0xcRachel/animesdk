#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HPFull; }

#define CLASS_3_1530AE21C5172C19_METHOD_3_4B2CD7086A8CA682_OFFSET UNITYSDK_OFFSET(0x15EFEB50)
#define CLASS_3_1530AE21C5172C19__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFEB30)

inline static constexpr unsigned int Class_3_1530AE21C5172C19_TypeDefinitionIndex = 27711;

class Class_3_1530AE21C5172C19 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HPFull* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_1530AE21C5172C19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4B2CD7086A8CA682()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1530AE21C5172C19_METHOD_3_4B2CD7086A8CA682_OFFSET))(this);
	}
};
