#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleMatchContext.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/RPG/Client/LobbyState.h"

class Class_1_3A7B270FE0BE90AE;
class Class_1_EFF6ABE3B36522D9_2;
namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CANCELSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x8B72480)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CREATEPVPMATCH_OFFSET UNITYSDK_OFFSET(0x8B72360)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_CANSTART_OFFSET UNITYSDK_OFFSET(0x8B72590)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x8B72580)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHING_OFFSET UNITYSDK_OFFSET(0x8B72570)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x8B725A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x8B6BF00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_REQUESTSTARTGAME_OFFSET UNITYSDK_OFFSET(0x8B724C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETINITINFO_OFFSET UNITYSDK_OFFSET(0x8B702E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETMODE_OFFSET UNITYSDK_OFFSET(0x8B6BD50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x8B725B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x8B722F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x8B6BE00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8B72080)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__UPDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0x8B720C0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPMatchContext_TypeDefinitionIndex = 59699;

	class MarblePVPMatchContext : public ::RPG::Client::ActivityMarble::MarbleMatchContext
	{
	public:
		::Class_1_EFF6ABE3B36522D9_2* _InitInfo; // 0x50
		::RPG::Client::LobbyState _CurrentStatus; // 0x58
		::RPG::Client::ActivityMarble::MarblePVPMode _Mode_k__BackingField; // 0x5C
		::System::Boolean _PendingStartBattle; // 0x60

		::System::Void _ctor(::RPG::Client::ActivityMarble::MarblePVPMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__CTOR_OFFSET))(this, mode);
		}

		::System::Void UpdateStatus(::RPG::Client::LobbyState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATESTATUS_OFFSET))(this, state);
		}

		::System::Void SetInitInfo(::Class_1_EFF6ABE3B36522D9_2* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETINITINFO_OFFSET))(this, info);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPMatch(::RPG::Client::ActivityMarble::MarblePVPMode mode)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)(::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CREATEPVPMATCH_OFFSET))(mode);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_STARTBATTLE_OFFSET))(this);
		}

		::System::Void CancelStartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CANCELSTARTBATTLE_OFFSET))(this);
		}

		::System::Void SetMode(::RPG::Client::ActivityMarble::MarblePVPMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETMODE_OFFSET))(this, mode);
		}

		::System::Void RequestStartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_REQUESTSTARTGAME_OFFSET))(this);
		}

		::System::Void _UpdateMembers(::System::Collections::Generic::IList_1<::Class_1_3A7B270FE0BE90AE*>* playerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_3A7B270FE0BE90AE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__UPDATEMEMBERS_OFFSET))(this, playerInfo);
		}

		::System::Boolean get_IsMatching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHING_OFFSET))(this);
		}

		::System::Boolean get_IsMatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHED_OFFSET))(this);
		}

		::System::Boolean get_CanStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_CANSTART_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPManager* get_PVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_PVPMGR_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPMode get_Mode()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::Client::ActivityMarble::MarblePVPMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SET_MODE_OFFSET))(this, value);
		}
	};
}
