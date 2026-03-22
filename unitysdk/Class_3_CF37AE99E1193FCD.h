#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatPredicateConfig_AttackerCompareDefender; }

#define CLASS_3_CF37AE99E1193FCD_METHOD_3_2946087C03D874C9_OFFSET UNITYSDK_OFFSET(0x16048910)
#define CLASS_3_CF37AE99E1193FCD__CTOR_OFFSET UNITYSDK_OFFSET(0x160488F0)

inline static constexpr unsigned int Class_3_CF37AE99E1193FCD_TypeDefinitionIndex = 27686;

class Class_3_CF37AE99E1193FCD : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* Field_3_0; // 0x30
	::Class_2_053DD8E4EC1165EB* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_3_CF37AE99E1193FCD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2946087C03D874C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF37AE99E1193FCD_METHOD_3_2946087C03D874C9_OFFSET))(this);
	}
};
