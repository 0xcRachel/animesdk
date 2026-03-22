#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70787F697C8A9AFB;
class Class_3_E5B65FD9338F9400;
namespace RPG::Client::DiceCombat { class DiceCombatStartPVPGameParam; }

#define CLASS_1_70787F697C8A9AFB___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x103CA530)
#define CLASS_1_70787F697C8A9AFB___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET UNITYSDK_OFFSET(0x103CC0C0)

inline static constexpr unsigned int Class_1_70787F697C8A9AFB___c__DisplayClass38_0_TypeDefinitionIndex = 60170;

class Class_1_70787F697C8A9AFB___c__DisplayClass38_0 : public ::System::Object
{
public:
	::Class_1_70787F697C8A9AFB* __4__this; // 0x10
	::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPVPGame_b__0(::Class_3_E5B65FD9338F9400* gameInstance)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E5B65FD9338F9400*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET))(this, gameInstance);
	}
};
