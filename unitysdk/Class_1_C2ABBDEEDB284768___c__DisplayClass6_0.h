#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_C2ABBDEEDB284768;

#define CLASS_1_C2ABBDEEDB284768___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10A6EF50)
#define CLASS_1_C2ABBDEEDB284768___C__DISPLAYCLASS6_0___REGISTEREVENT_B__0_OFFSET UNITYSDK_OFFSET(0x10A6F280)

inline static constexpr unsigned int Class_1_C2ABBDEEDB284768___c__DisplayClass6_0_TypeDefinitionIndex = 61368;

class Class_1_C2ABBDEEDB284768___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_C2ABBDEEDB284768* __4__this; // 0x10
	::RPG::Client::LittleGame::CakeRace::CakeRaceEventType eventType; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2ABBDEEDB284768___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void __RegisterEvent_b__0(::System::Object* obj)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C2ABBDEEDB284768___C__DISPLAYCLASS6_0___REGISTEREVENT_B__0_OFFSET))(this, obj);
	}
};
