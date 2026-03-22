#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasModifier; }

#define CLASS_3_802FD8D2AFA8FA6F_METHOD_3_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x15FEADD0)
#define CLASS_3_802FD8D2AFA8FA6F__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEADB0)

inline static constexpr unsigned int Class_3_802FD8D2AFA8FA6F_TypeDefinitionIndex = 27718;

class Class_3_802FD8D2AFA8FA6F : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_3_802FD8D2AFA8FA6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_802FD8D2AFA8FA6F_METHOD_3_D58849E1895DD394_OFFSET))(this);
	}
};
