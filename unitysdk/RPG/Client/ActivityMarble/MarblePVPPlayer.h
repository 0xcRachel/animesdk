#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::ActivityMarble { class MarblePVPRankInfo; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CANBEINVITED_OFFSET UNITYSDK_OFFSET(0x17019310)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CREATELOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x17012CB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CREATEOTHERPLAYER_OFFSET UNITYSDK_OFFSET(0x17012F40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GETMARBLESEALTEAM_OFFSET UNITYSDK_OFFSET(0x17019450)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17019B10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_MARBLEGAMEMODE_OFFSET UNITYSDK_OFFSET(0x17019BB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x17019B70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0x17019AB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x17019B90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_MARBLEGAMEMODE_OFFSET UNITYSDK_OFFSET(0x17019BC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x17019B80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x17019BA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17012E30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x170192A0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPPlayer_TypeDefinitionIndex = 68963;

	class MarblePVPPlayer : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarblePVPRankInfo* _RankInfo_k__BackingField; // 0x10
		::RPG::Client::LobbyMemberData* _PlayerInfo_k__BackingField; // 0x18
		::RPG::Client::ActivityMarble::MarbleSealTeamSelection* _TeamSelection; // 0x20
		::Enum_3_A35B38E5F9115A76_2 _MarbleGameMode_k__BackingField; // 0x28
		::System::Boolean _IsLocal; // 0x2C

		::System::Void _ctor(::RPG::Client::LobbyMemberData* playerInfo, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER__CTOR_OFFSET))(this, playerInfo, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPPlayer* CreateLocalPlayer(::RPG::Client::LobbyMemberData* playerInfo, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPPlayer*(*)(::RPG::Client::LobbyMemberData*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CREATELOCALPLAYER_OFFSET))(playerInfo, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPPlayer* CreateOtherPlayer(::RPG::Client::LobbyMemberData* playerInfo, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPPlayer*(*)(::RPG::Client::LobbyMemberData*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CREATEOTHERPLAYER_OFFSET))(playerInfo, gameMode);
		}

		::System::Void Update(::RPG::Client::LobbyMemberData* memberInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_UPDATE_OFFSET))(this, memberInfo);
		}

		static ::System::Boolean CanBeInvited(::RPG::Client::LobbyMemberData* playerInfo)
		{
			return ((::System::Boolean(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CANBEINVITED_OFFSET))(playerInfo);
		}

		::RPG::Client::ActivityMarble::MarbleSealTeamSelection* GetMarbleSealTeam()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GETMARBLESEALTEAM_OFFSET))(this);
		}

		::System::String* get_PlayerNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_PLAYERNAMESTR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::LobbyMemberData* get_PlayerInfo()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_PLAYERINFO_OFFSET))(this);
		}

		::System::Void set_PlayerInfo(::RPG::Client::LobbyMemberData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_PLAYERINFO_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarblePVPRankInfo* get_RankInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_RANKINFO_OFFSET))(this);
		}

		::System::Void set_RankInfo(::RPG::Client::ActivityMarble::MarblePVPRankInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_RANKINFO_OFFSET))(this, value);
		}

		::Enum_3_A35B38E5F9115A76_2 get_MarbleGameMode()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_MARBLEGAMEMODE_OFFSET))(this);
		}

		::System::Void set_MarbleGameMode(::Enum_3_A35B38E5F9115A76_2 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_MARBLEGAMEMODE_OFFSET))(this, value);
		}
	};
}
