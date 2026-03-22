#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GameObjectAudio; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0AEE60)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS55_0__UPDATETSCSTATE_B__0_OFFSET UNITYSDK_OFFSET(0xA0AF890)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS55_0__UPDATETSCSTATE_B__1_OFFSET UNITYSDK_OFFSET(0xA0AF8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___c__DisplayClass55_0_TypeDefinitionIndex = 55900;

	class TimeSpaceCrisscrossGroupBehavior___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Boolean audioState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTsCState_b__0(::RPG::Client::GameObjectAudio* x)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS55_0__UPDATETSCSTATE_B__0_OFFSET))(this, x);
		}

		::System::Void _UpdateTsCState_b__1(::RPG::Client::GameObjectAudio* x)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS55_0__UPDATETSCSTATE_B__1_OFFSET))(this, x);
		}
	};
}
