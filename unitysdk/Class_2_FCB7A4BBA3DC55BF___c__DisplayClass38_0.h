#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FCB7A4BBA3DC55BF;
namespace RPG::Client { class BattleAlertParam; }

#define CLASS_2_FCB7A4BBA3DC55BF___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x874F530)
#define CLASS_2_FCB7A4BBA3DC55BF___C__DISPLAYCLASS38_0__TRYSHOWALERTMARK_B__0_OFFSET UNITYSDK_OFFSET(0x8751A70)

inline static constexpr unsigned int Class_2_FCB7A4BBA3DC55BF___c__DisplayClass38_0_TypeDefinitionIndex = 57278;

class Class_2_FCB7A4BBA3DC55BF___c__DisplayClass38_0 : public ::System::Object
{
public:
	::Class_2_FCB7A4BBA3DC55BF* __4__this; // 0x10
	::RPG::Client::BattleAlertParam* alertParam; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCB7A4BBA3DC55BF___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryShowAlertMark_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCB7A4BBA3DC55BF___C__DISPLAYCLASS38_0__TRYSHOWALERTMARK_B__0_OFFSET))(this);
	}
};
