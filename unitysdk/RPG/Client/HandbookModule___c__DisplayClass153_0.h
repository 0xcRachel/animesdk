#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace System { class Action; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176A1CA0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__GOTOTOGUIDEROGUETOURNRELICCOCOON_B__0_OFFSET UNITYSDK_OFFSET(0x176A4BF0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__GOTOTOGUIDEROGUETOURNRELICCOCOON_B__1_OFFSET UNITYSDK_OFFSET(0x176A4D10)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass153_0_TypeDefinitionIndex = 61368;

	class HandbookModule___c__DisplayClass153_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::RogueTournRelicCocoonData* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueTournRelicCocoon_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__GOTOTOGUIDEROGUETOURNRELICCOCOON_B__0_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueTournRelicCocoon_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__GOTOTOGUIDEROGUETOURNRELICCOCOON_B__1_OFFSET))(this);
		}
	};
}
