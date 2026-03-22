#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsAttacker; }

#define CLASS_3_953FE35A8F8D54B7_METHOD_3_AC3D041EA6F5D8CC_OFFSET UNITYSDK_OFFSET(0x15F8EDD0)
#define CLASS_3_953FE35A8F8D54B7__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8EDA0)

inline static constexpr unsigned int Class_3_953FE35A8F8D54B7_TypeDefinitionIndex = 27712;

class Class_3_953FE35A8F8D54B7 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_953FE35A8F8D54B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_AC3D041EA6F5D8CC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_953FE35A8F8D54B7_METHOD_3_AC3D041EA6F5D8CC_OFFSET))(this);
	}
};
