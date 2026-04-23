#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3C849F91800FB7FA;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_3C849F91800FB7FA___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDD54ED0)
#define CLASS_2_3C849F91800FB7FA___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xDD562B0)

inline static constexpr unsigned int Class_2_3C849F91800FB7FA___c__DisplayClass16_0_TypeDefinitionIndex = 66110;

class Class_2_3C849F91800FB7FA___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_2_3C849F91800FB7FA* __4__this; // 0x10
	::RPG::GameCore::GameEntity* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C849F91800FB7FA___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupBossEntity_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C849F91800FB7FA___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET))(this);
	}
};
