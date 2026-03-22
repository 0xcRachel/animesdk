#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatPVPMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_35379441886C7D20;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPLobby; }
namespace RPG::Client::DiceCombat { class OnGeneralNotifyDelegate; }
namespace RPG::Client::DiceCombat { class OnOnGeneralRspDelegate; }
namespace RPG::Client::DiceCombat { class OnServerConnectedDelegate; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9027E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_CREATEPVPEXTINFO_OFFSET UNITYSDK_OFFSET(0x902B4A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x902BDF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_ENTERPVPLOBBY_OFFSET UNITYSDK_OFFSET(0x902C410)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x902BC20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET_RANKSCORE_OFFSET UNITYSDK_OFFSET(0x902E3E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET__CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0x902C670)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x902BD50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_INVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x902C710)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_JOININVITATIONLOBBY_OFFSET UNITYSDK_OFFSET(0x902C790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_QUITPVP_OFFSET UNITYSDK_OFFSET(0x901D4C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_REGISTERGUEST_OFFSET UNITYSDK_OFFSET(0x902D9D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_REMINDPREPARE_OFFSET UNITYSDK_OFFSET(0x902D4A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONCREATEGAME_OFFSET UNITYSDK_OFFSET(0x902D600)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0x902D6F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x902D960)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x902D8F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x902D730)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0x902D7B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x902D8B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_SET_RANKSCORE_OFFSET UNITYSDK_OFFSET(0x902E3F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTFRIENDMATCH_OFFSET UNITYSDK_OFFSET(0x902D0F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTMATCHTHENCONNECTSERVER_OFFSET UNITYSDK_OFFSET(0x902C060)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x902C2A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_SYNCRANKSCORE_OFFSET UNITYSDK_OFFSET(0x902D5A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_TRYGETRECONNECTINFO_OFFSET UNITYSDK_OFFSET(0x902CC50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_UNREGISTERGUEST_OFFSET UNITYSDK_OFFSET(0x902DA90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__CLEARSELECTEDAVATARBEFOREJOINFRIENDLOBBY_OFFSET UNITYSDK_OFFSET(0x902DB50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x902E400)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ENTERPREPAREPAGEAFTERENTERLOBBY_OFFSET UNITYSDK_OFFSET(0x902C9D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__GETPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0x902BC30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__JOINLOBBYINTERNAL_OFFSET UNITYSDK_OFFSET(0x902CDE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ONGETFIGHTINFO_OFFSET UNITYSDK_OFFSET(0x902DC10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ONGIVEUP_OFFSET UNITYSDK_OFFSET(0x902BEC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__SENDSTARTRECONNECTEDGAMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x902E0B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__SHOWRECONNECTDIALOG_OFFSET UNITYSDK_OFFSET(0x902DC90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__STARTRECONNECTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x902DFE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__TRYGETRECONNECTINFO_B__14_0_OFFSET UNITYSDK_OFFSET(0x902E410)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__WAITMATCHRESULT_OFFSET UNITYSDK_OFFSET(0x902C3B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___JOINLOBBYINTERNAL_B__27_0_OFFSET UNITYSDK_OFFSET(0x902E500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___SHOWRECONNECTDIALOG_B__29_0_OFFSET UNITYSDK_OFFSET(0x902E510)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___SHOWRECONNECTDIALOG_B__29_1_OFFSET UNITYSDK_OFFSET(0x902E590)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager_TypeDefinitionIndex = 60193;

	class DiceCombatPVPManager : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _WaitServerConnectedPromise; // 0x10
		::RPG::Client::DiceCombat::OnGeneralNotifyDelegate* _OnGeneralNotify; // 0x18
		::RPG::Client::Promises::Promise* _StartReconnectGameplayPromise; // 0x20
		::RPG::Client::DiceCombat::OnServerConnectedDelegate* _OnServerConnected; // 0x28
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetReconnectInfoPromise; // 0x30
		::RPG::Client::DiceCombat::OnOnGeneralRspDelegate* _OnOnGeneralRsp; // 0x38
		::System::UInt32 _RankScore_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__CTOR_OFFSET))(this);
		}

		::Enum_3_F80BFD5B986D5503_4 get_GameMode()
		{
			return ((::Enum_3_F80BFD5B986D5503_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET_GAMEMODE_OFFSET))(this);
		}

		static ::Class_1_35379441886C7D20* CreatePVPExtInfo()
		{
			return ((::Class_1_35379441886C7D20*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_CREATEPVPEXTINFO_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void QuitPvp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_QUITPVP_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* StartMatchThenConnectServer()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTMATCHTHENCONNECTSERVER_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* EnterPVPLobby(::RPG::Client::DiceCombat::DiceCombatPVPMode mode)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_ENTERPVPLOBBY_OFFSET))(this, mode);
		}

		::System::Void InviteFriend(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_INVITEFRIEND_OFFSET))(this, uid);
		}

		::System::Boolean JoinInvitationLobby(::System::UInt64 roomID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_JOININVITATIONLOBBY_OFFSET))(this, roomID);
		}

		::RPG::Client::Promises::Promise* StartFriendMatch()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTFRIENDMATCH_OFFSET))(this);
		}

		::System::Void RemindPrepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_REMINDPREPARE_OFFSET))(this);
		}

		::System::Void SyncRankScore(::System::UInt32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_SYNCRANKSCORE_OFFSET))(this, score);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* TryGetReconnectInfo()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_TRYGETRECONNECTINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _WaitMatchResult()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__WAITMATCHRESULT_OFFSET))(this);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTMATCH_OFFSET))(this);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnCreateGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONCREATEGAME_OFFSET))(this);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONFINISHGAME_OFFSET))(this);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnServerConnectFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERCONNECTFAIL_OFFSET))(this);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnServerDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERDISCONNECTED_OFFSET))(this);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnOnGeneralRsp(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONONGENERALRSP_OFFSET))(this, msgId, msg);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnGeneralNotify(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONGENERALNOTIFY_OFFSET))(this, msgId, msg);
		}

		::System::Void RegisterGuest(::RPG::Client::DiceCombat::OnServerConnectedDelegate* onConnected, ::RPG::Client::DiceCombat::OnOnGeneralRspDelegate* onOnGeneralRsp, ::RPG::Client::DiceCombat::OnGeneralNotifyDelegate* onGeneralNotify)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::OnServerConnectedDelegate*, ::RPG::Client::DiceCombat::OnOnGeneralRspDelegate*, ::RPG::Client::DiceCombat::OnGeneralNotifyDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_REGISTERGUEST_OFFSET))(this, onConnected, onOnGeneralRsp, onGeneralNotify);
		}

		::System::Void UnregisterGuest(::RPG::Client::DiceCombat::OnServerConnectedDelegate* onConnected, ::RPG::Client::DiceCombat::OnOnGeneralRspDelegate* onOnGeneralRsp, ::RPG::Client::DiceCombat::OnGeneralNotifyDelegate* onGeneralNotify)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::OnServerConnectedDelegate*, ::RPG::Client::DiceCombat::OnOnGeneralRspDelegate*, ::RPG::Client::DiceCombat::OnGeneralNotifyDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_UNREGISTERGUEST_OFFSET))(this, onConnected, onOnGeneralRsp, onGeneralNotify);
		}

		::System::Void _EnterPreparePageAfterEnterLobby()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ENTERPREPAREPAGEAFTERENTERLOBBY_OFFSET))(this);
		}

		::System::Void _JoinLobbyInternal(::System::UInt64 lobbyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__JOINLOBBYINTERNAL_OFFSET))(this, lobbyID);
		}

		::System::Void _OnGetFightInfo(::System::Boolean isInFighting, ::Enum_3_F80BFD5B986D5503_4 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ONGETFIGHTINFO_OFFSET))(this, isInFighting, gameMode);
		}

		::System::Void _ShowReconnectDialog(::Enum_3_F80BFD5B986D5503_4 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__SHOWRECONNECTDIALOG_OFFSET))(this, gameMode);
		}

		::RPG::Client::Promises::IPromise* _StartReconnectGameplay()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__STARTRECONNECTGAMEPLAY_OFFSET))(this);
		}

		::System::Void _OnGiveUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ONGIVEUP_OFFSET))(this);
		}

		::System::Void _SendStartReConnectedGameMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__SENDSTARTRECONNECTEDGAMEMESSAGE_OFFSET))(this);
		}

		static ::System::UInt32 _GetPlayerAvatarID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__GETPLAYERAVATARID_OFFSET))();
		}

		static ::System::Void _ClearSelectedAvatarBeforeJoinFriendLobby()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__CLEARSELECTEDAVATARBEFOREJOINFRIENDLOBBY_OFFSET))();
		}

		::System::UInt32 get_RankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET_RANKSCORE_OFFSET))(this);
		}

		::System::Void set_RankScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_SET_RANKSCORE_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatPVPLobby* get__CurrentLobby()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPVPLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET__CURRENTLOBBY_OFFSET))(this);
		}

		::System::Void _TryGetReconnectInfo_b__14_0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4> args)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__TRYGETRECONNECTINFO_B__14_0_OFFSET))(this, args);
		}

		::System::Void __JoinLobbyInternal_b__27_0(::RPG::Client::BaseLobby* lobby)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___JOINLOBBYINTERNAL_B__27_0_OFFSET))(this, lobby);
		}

		::System::Void __ShowReconnectDialog_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___SHOWRECONNECTDIALOG_B__29_0_OFFSET))(this);
		}

		::System::Void __ShowReconnectDialog_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___SHOWRECONNECTDIALOG_B__29_1_OFFSET))(this);
		}
	};
}
