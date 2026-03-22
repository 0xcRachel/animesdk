#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
class Class_2_8220F695DC07608C;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_8220F695DC07608C___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105A3080)
#define CLASS_2_8220F695DC07608C___C__DISPLAYCLASS58_0___GETSUMMONEDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x105A40E0)

inline static constexpr unsigned int Class_2_8220F695DC07608C___c__DisplayClass58_0_TypeDefinitionIndex = 56854;

class Class_2_8220F695DC07608C___c__DisplayClass58_0 : public ::System::Object
{
public:
	::Class_2_8220F695DC07608C* __4__this; // 0x10
	::RPG::GameCore::GameEntity* summoner; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetSummonedItems_b__0(::Class_1_02D30900317D93FD* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C__DISPLAYCLASS58_0___GETSUMMONEDITEMS_B__0_OFFSET))(this, x);
	}
};
