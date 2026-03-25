#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6907DF4C380A65C4;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }

#define CLASS_2_6907DF4C380A65C4___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1151F570)
#define CLASS_2_6907DF4C380A65C4___C__DISPLAYCLASS6_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1151F6C0)

inline static constexpr unsigned int Class_2_6907DF4C380A65C4___c__DisplayClass6_0_TypeDefinitionIndex = 58321;

class Class_2_6907DF4C380A65C4___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::Client::ElationBattleBuffGroupViewData* viewData; // 0x10
	::Class_2_6907DF4C380A65C4* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupView_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4___C__DISPLAYCLASS6_0__SETUPVIEW_B__0_OFFSET))(this);
	}
};
