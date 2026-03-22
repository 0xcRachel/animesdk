#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_302;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_7AC1968B7091850B___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C7DD20)
#define CLASS_1_7AC1968B7091850B___C__DISPLAYCLASS34_0__REMOVEDEPENDENCYMODIFIERS_B__0_OFFSET UNITYSDK_OFFSET(0x10C7E660)

inline static constexpr unsigned int Class_1_7AC1968B7091850B___c__DisplayClass34_0_TypeDefinitionIndex = 42479;

class Class_1_7AC1968B7091850B___c__DisplayClass34_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* removeInstance; // 0x10
	::RPG::PoolList_1<::RPG::GameCore::TurnBasedModifierInstance*>* DependencyRemoveInstanceList; // 0x18
	::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbilityComp; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC1968B7091850B___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Void _RemoveDependencyModifiers_b__0(::Class_0_16E4307DCC419505_302* instance)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_302*))((::PBYTE)hIl2Cpp + CLASS_1_7AC1968B7091850B___C__DISPLAYCLASS34_0__REMOVEDEPENDENCYMODIFIERS_B__0_OFFSET))(this, instance);
	}
};
