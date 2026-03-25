#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_895EBA3389065493;
class Class_2_569DE47525C5FD32;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }

#define CLASS_1_786436F0275D4D3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1664F030)

inline static constexpr unsigned int Class_1_786436F0275D4D3E_TypeDefinitionIndex = 28531;

class Class_1_786436F0275D4D3E : public ::System::Object
{
public:
	::Class_2_569DE47525C5FD32* Field_1_0; // 0x10
	::Class_1_895EBA3389065493* Field_1_2; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_1; // 0x20
	::RPG::GameCore::DiceCombatInsertAbilityConfig* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_786436F0275D4D3E__CTOR_OFFSET))(this);
	}
};
