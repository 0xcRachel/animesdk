#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_8220F695DC07608C___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105A33A0)
#define CLASS_2_8220F695DC07608C___C__DISPLAYCLASS63_0___FINDITEM_B__0_OFFSET UNITYSDK_OFFSET(0x105A4190)

inline static constexpr unsigned int Class_2_8220F695DC07608C___c__DisplayClass63_0_TypeDefinitionIndex = 56855;

class Class_2_8220F695DC07608C___c__DisplayClass63_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FindItem_b__0(::Class_1_02D30900317D93FD* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C__DISPLAYCLASS63_0___FINDITEM_B__0_OFFSET))(this, x);
	}
};
