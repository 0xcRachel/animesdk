#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureModule; }

#define RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS245_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8BFC5D0)
#define RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS245_0__ONSINGLEPERFORMANCEREPLAYFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x8C03BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureModule___c__DisplayClass245_0_TypeDefinitionIndex = 49213;

	class AdventureModule___c__DisplayClass245_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventureModule* __4__this; // 0x10
		::System::Int32 prevReplayIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS245_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSinglePerformanceReplayFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS245_0__ONSINGLEPERFORMANCEREPLAYFINISH_B__0_OFFSET))(this);
		}
	};
}
