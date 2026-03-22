#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_496;

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD5600)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS38_0__MARKSELECTACTIONACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x9DD5610)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c__DisplayClass38_0_TypeDefinitionIndex = 53530;

	class RogueAdventureModule___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_496* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MarkSelectActionActive_b__0(::Class_0_16E4307DCC419505_496* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_496*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS38_0__MARKSELECTACTIONACTIVE_B__0_OFFSET))(this, a);
		}
	};
}
