#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_2_181A7F9409C60DBC;

#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD4D38E0)
#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS13_1___FILTERSOLDIERBYINITPOSITION_B__6_OFFSET UNITYSDK_OFFSET(0xD4D84D0)

inline static constexpr unsigned int Class_1_36006FC25F5DDC69___c__DisplayClass13_1_TypeDefinitionIndex = 71370;

class Class_1_36006FC25F5DDC69___c__DisplayClass13_1 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleInitPosition maxPosition; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __FilterSoldierByInitPosition_b__6(::Class_2_181A7F9409C60DBC* soldier)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS13_1___FILTERSOLDIERBYINITPOSITION_B__6_OFFSET))(this, soldier);
	}
};
