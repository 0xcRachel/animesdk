#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatPVPMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0C36FD2A7876DF8E;
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

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A20AF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_CREATEPVPEXTINFO_OFFSET UNITYSDK_OFFSET(0x17A25350)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A25C40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_ENTERPVPLOBBY_OFFSET UNITYSDK_OFFSET(0x17A262B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x17A25AB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET_RANKSCORE_OFFSET UNITYSDK_OFFSET(0x17A285B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET__CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0x17A266D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x17A25BA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_INVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x17A26650)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_JOININVITATIONLOBBY_OFFSET UNITYSDK_OFFSET(0x17A26790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_QUITPVP_OFFSET UNITYSDK_OFFSET(0x17A25D10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_REGISTERGUEST_OFFSET UNITYSDK_OFFSET(0x17A27760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_REMINDPREPARE_OFFSET UNITYSDK_OFFSET(0x17A27230)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONCREATEGAME_OFFSET UNITYSDK_OFFSET(0x17A27390)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0x17A27480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x17A276F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x17A27680)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x17A274C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0x17A27540)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_RPG_CLIENT_IMULTIPLAYERGAME_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x17A27640)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_SET_RANKSCORE_OFFSET UNITYSDK_OFFSET(0x17A285C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTFRIENDMATCH_OFFSET UNITYSDK_OFFSET(0x17A26E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTMATCHTHENCONNECTSERVER_OFFSET UNITYSDK_OFFSET(0x17A25F00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x17A26140)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_SYNCRANKSCORE_OFFSET UNITYSDK_OFFSET(0x17A27330)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_TRYGETRECONNECTINFO_OFFSET UNITYSDK_OFFSET(0x17A26CF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_UNREGISTERGUEST_OFFSET UNITYSDK_OFFSET(0x17A27820)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__CLEARSELECTEDAVATARBEFOREJOINFRIENDLOBBY_OFFSET UNITYSDK_OFFSET(0x17A27BF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A285D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__DOCREATELOBBY_OFFSET UNITYSDK_OFFSET(0x17A26440)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ENTERPREPAREPAGEAFTERENTERLOBBY_OFFSET UNITYSDK_OFFSET(0x17A26A50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__GETPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0x17A25AC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__JOINLOBBYINTERNAL_OFFSET UNITYSDK_OFFSET(0x17A278E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ONGETFIGHTINFO_OFFSET UNITYSDK_OFFSET(0x17A27C90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ONGIVEUP_OFFSET UNITYSDK_OFFSET(0x17A25D60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__SENDSTARTRECONNECTEDGAMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x17A28130)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__SHOWRECONNECTDIALOG_OFFSET UNITYSDK_OFFSET(0x17A27D10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__STARTRECONNECTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x17A28060)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__TRYGETRECONNECTINFO_B__15_0_OFFSET UNITYSDK_OFFSET(0x17A285E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__TRYGETRECONNECTINFO_B__15_1_OFFSET UNITYSDK_OFFSET(0x17A28750)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__WAITMATCHRESULT_OFFSET UNITYSDK_OFFSET(0x17A26250)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___JOINLOBBYINTERNAL_B__28_0_OFFSET UNITYSDK_OFFSET(0x17A28780)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___SHOWRECONNECTDIALOG_B__30_0_OFFSET UNITYSDK_OFFSET(0x17A28790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___SHOWRECONNECTDIALOG_B__30_1_OFFSET UNITYSDK_OFFSET(0x17A28810)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager_TypeDefinitionIndex = 69899;

	class DiceCombatPVPManager : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _StartReconnectGameplayPromise; // 0x10
		::RPG::Client::DiceCombat::OnOnGeneralRspDelegate* _OnOnGeneralRsp; // 0x18
		::RPG::Client::DiceCombat::OnGeneralNotifyDelegate* _OnGeneralNotify; // 0x20
		::RPG::Client::DiceCombat::OnServerConnectedDelegate* _OnServerConnected; // 0x28
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetReconnectInfoPromise; // 0x30
		::RPG::Client::Promises::Promise* _WaitServerConnectedPromise; // 0x38
		::System::UInt32 _RankScore_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__CTOR_OFFSET))(this);
		}

		::Enum_3_A35B38E5F9115A76_2 get_GameMode()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_GET_GAMEMODE_OFFSET))(this);
		}

		static ::Class_1_0C36FD2A7876DF8E* CreatePVPExtInfo()
		{
			return ((::Class_1_0C36FD2A7876DF8E*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_CREATEPVPEXTINFO_OFFSET))();
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

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* EnterPVPLobby(::RPG::Client::DiceCombat::DiceCombatPVPMode mode)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER_ENTERPVPLOBBY_OFFSET))(this, mode);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _DoCreateLobby(::RPG::Client::DiceCombat::DiceCombatPVPMode mode)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__DOCREATELOBBY_OFFSET))(this, mode);
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

		::System::Void _OnGetFightInfo(::System::Boolean isInFighting, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__ONGETFIGHTINFO_OFFSET))(this, isInFighting, gameMode);
		}

		::System::Void _ShowReconnectDialog(::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__SHOWRECONNECTDIALOG_OFFSET))(this, gameMode);
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

		::System::Void _TryGetReconnectInfo_b__15_0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> args)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__TRYGETRECONNECTINFO_B__15_0_OFFSET))(this, args);
		}

		::System::Void _TryGetReconnectInfo_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER__TRYGETRECONNECTINFO_B__15_1_OFFSET))(this);
		}

		::System::Void __JoinLobbyInternal_b__28_0(::RPG::Client::BaseLobby* lobby)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___JOINLOBBYINTERNAL_B__28_0_OFFSET))(this, lobby);
		}

		::System::Void __ShowReconnectDialog_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___SHOWRECONNECTDIALOG_B__30_0_OFFSET))(this);
		}

		::System::Void __ShowReconnectDialog_b__30_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___SHOWRECONNECTDIALOG_B__30_1_OFFSET))(this);
		}
	};
}
