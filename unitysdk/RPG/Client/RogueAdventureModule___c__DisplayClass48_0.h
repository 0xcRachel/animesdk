#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_496;
class Class_1_79583A1D241EC626;

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD5810)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS48_0___ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x9DD5820)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c__DisplayClass48_0_TypeDefinitionIndex = 53532;

	class RogueAdventureModule___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::Class_1_79583A1D241EC626* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdHandleRogueCommonPendingActionScRsp_b__0(::Class_0_16E4307DCC419505_496* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_496*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS48_0___ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_B__0_OFFSET))(this, a);
		}
	};
}
