#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CurrentTurnCompare; }

#define CLASS_3_4F5F9ADE43B410ED_METHOD_3_501509B4B58077AF_OFFSET UNITYSDK_OFFSET(0x160360D0)
#define CLASS_3_4F5F9ADE43B410ED__CTOR_OFFSET UNITYSDK_OFFSET(0x160360B0)

inline static constexpr unsigned int Class_3_4F5F9ADE43B410ED_TypeDefinitionIndex = 27714;

class Class_3_4F5F9ADE43B410ED : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_4F5F9ADE43B410ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_501509B4B58077AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F5F9ADE43B410ED_METHOD_3_501509B4B58077AF_OFFSET))(this);
	}
};
