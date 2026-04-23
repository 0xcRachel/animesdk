#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace System { class Action; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15214190)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__GOTOTOGUIDEROGUETOURNRELICCOCOON_B__0_OFFSET UNITYSDK_OFFSET(0x15216C50)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__GOTOTOGUIDEROGUETOURNRELICCOCOON_B__1_OFFSET UNITYSDK_OFFSET(0x15216D60)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass153_0_TypeDefinitionIndex = 60433;

	class HandbookModule___c__DisplayClass153_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournRelicCocoonData* data; // 0x10
		::System::Action* __9__1; // 0x18

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
