#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17015690)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x17018130)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x17018360)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0x17018720)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__3_OFFSET UNITYSDK_OFFSET(0x17018750)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__4_OFFSET UNITYSDK_OFFSET(0x17018500)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManager___c__DisplayClass26_0_TypeDefinitionIndex = 68958;

	class MarblePVPManager___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPManager* __4__this; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Action_1<::RPG::Client::BaseLobby*>* __9__4; // 0x28
		::System::Action* __9__3; // 0x30
		::System::UInt64 roomID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _JoinLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__0_OFFSET))(this, arg);
		}

		::System::Void _JoinLobby_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__1_OFFSET))(this);
		}

		::System::Void _JoinLobby_b__4(::RPG::Client::BaseLobby* lobby)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__4_OFFSET))(this, lobby);
		}

		::System::Void _JoinLobby_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__2_OFFSET))(this);
		}

		::System::Void _JoinLobby_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS26_0__JOINLOBBY_B__3_OFFSET))(this);
		}
	};
}
