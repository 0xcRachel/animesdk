#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_METHOD_4_55823EC9012643FC_OFFSET UNITYSDK_OFFSET(0x16A3B170)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_METHOD_4_933BD4C0A783EDAD_OFFSET UNITYSDK_OFFSET(0x16A38FF0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A38FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceIncludeAnyContent_TypeDefinitionIndex = 14534;

	class DiceCombatPredicateConfig_DiceIncludeAnyContent : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ValueList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_55823EC9012643FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_METHOD_4_55823EC9012643FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_933BD4C0A783EDAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_METHOD_4_933BD4C0A783EDAD_OFFSET))(a1, a2);
		}
	};
}
