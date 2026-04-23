#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"

class Class_1_58D4E6FABD47E257;
class Class_1_6C345D5D294DD242;
class Class_1_9C60DFCC04FDF0DC;
class Class_1_D40936EF3BF54118_6;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LittleWheelSelectConfig; }
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x143F7F50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x143F7010)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143F2E50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x143F6C80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET UNITYSDK_OFFSET(0x143F7670)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x143F6790)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET UNITYSDK_OFFSET(0x143F6BA0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x143F73A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x143F7F10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET UNITYSDK_OFFSET(0x143F81D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET UNITYSDK_OFFSET(0x143F5870)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET UNITYSDK_OFFSET(0x143F76E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET UNITYSDK_OFFSET(0x143F9350)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET UNITYSDK_OFFSET(0x143D8E50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x143F93A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0x143F93C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0x143F93E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x143F9440)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGTARGETUID_OFFSET UNITYSDK_OFFSET(0x143F9400)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0x143F9460)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITREASON_OFFSET UNITYSDK_OFFSET(0x143F9420)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x143F2980)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET UNITYSDK_OFFSET(0x143F7290)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET UNITYSDK_OFFSET(0x143F71D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET UNITYSDK_OFFSET(0x143F72F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x143F6F60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x143F2CF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x143F6EB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET UNITYSDK_OFFSET(0x143F70C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x143F7FC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x143F93B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0x143F93D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0x143F93F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x143F9450)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGTARGETUID_OFFSET UNITYSDK_OFFSET(0x143F9410)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0x143F9470)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITREASON_OFFSET UNITYSDK_OFFSET(0x143F9430)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET UNITYSDK_OFFSET(0x143F8020)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET UNITYSDK_OFFSET(0x143F7730)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x143F6C20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x143F7930)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x143F6150)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET UNITYSDK_OFFSET(0x143F8090)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x143F2C20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x143F2A00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x143F4540)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0x143F8610)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x143F9480)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x143F9680)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET UNITYSDK_OFFSET(0x143F3F50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x143F4200)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x143F6080)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0x143F55C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x143F5FF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET UNITYSDK_OFFSET(0x143F4130)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x143F3130)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x143F4A00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET UNITYSDK_OFFSET(0x143F60D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x143F48E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET UNITYSDK_OFFSET(0x143F5DF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0x143F5690)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x143F5930)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x143F3FB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET UNITYSDK_OFFSET(0x143F3BC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET UNITYSDK_OFFSET(0x143F2EA0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET UNITYSDK_OFFSET(0x143F6DD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET UNITYSDK_OFFSET(0x143F8880)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET UNITYSDK_OFFSET(0x143F5D50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET UNITYSDK_OFFSET(0x143F8820)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x143F3DB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143F9880)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x143F96D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x143F9820)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x143F97C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x143F9760)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_0_OFFSET UNITYSDK_OFFSET(0x143F95B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_1_OFFSET UNITYSDK_OFFSET(0x143F9670)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule_TypeDefinitionIndex = 61160;

	class OnlinePlayRoomModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* __PendingVisitDict_k__BackingField; // 0x10
		::Class_1_6C345D5D294DD242* __CurrentSession_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* __PendingOperationRecordList_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>* __OnlinePlayerInfoListInRoom_k__BackingField; // 0x28
		::System::UInt32 __PendingVisitReason_k__BackingField; // 0x30
		::System::UInt32 __PendingTargetUid_k__BackingField; // 0x34
		::System::Boolean _IsVisitToastActive_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnSocialPlayGameplayOperationScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnSocialPlayRoomPlayerMoveScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnSocialPlayPreCheckEnterRoomScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrainCakeCatchDiyLikeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrainCakeCatchGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSocialPlayTalkScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPlayerInfoChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void _OnSocialPlayQueryRecentVisitorsScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void TryqueryOnlineRoomStatus(::System::UInt32 targetUid, ::System::UInt32 reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET))(this, targetUid, reason);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* GetOnlineRoomPlayerBriefDisplayDataList(::System::Boolean needLocalPlayer)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET))(this, needLocalPlayer);
		}

		::System::UInt32 GetOnlineRoomPlayerCapacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* TryGetOnlineRoomPlayerBriefDisplayData(::System::UInt32 uid)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET))(this, uid);
		}

		::System::Void EnterOnlinePlayRoom(::System::UInt32 targetUid, ::System::UInt32 entryId, ::System::UInt32 mappingInfoId, ::System::UInt32 reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET))(this, targetUid, entryId, mappingInfoId, reason);
		}

		::System::Void QuitOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void KickOutOnlinePlayRoom(::System::UInt32 targetUid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET))(this, targetUid);
		}

		::System::Void DisbandOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void SendLikeRoomDIY()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET))(this);
		}

		::System::Boolean IsInSelfRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET))(this);
		}

		::System::Boolean IsAnyoneVisiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET))(this);
		}

		::System::Boolean IsPlayerVisiting(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET))(this, uid);
		}

		::System::UInt32 GetOnlineRoomPlayerIndex(::System::UInt32 uid)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET))(this, uid);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* GetChatMessageDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET))(this);
		}

		::System::String* GetRoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET))(this);
		}

		::System::UInt32 GetRoomPopularityValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET))(this);
		}

		::System::Void TransferToArrangePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* TryGetPendingVisitPlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetPendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void ClearPendingOperationRecordList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void SetVisitToastActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET))(this, isActive);
		}

		::System::Void ToggleOnlinePlayRoomGuestVisible(::System::Boolean isVisible, ::RPG::GameCore::CharacterVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET))(this, isVisible, reason);
		}

		::System::Void TryQueryRecentVisitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>* GetRecentVisitorList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET))(this);
		}

		::System::Boolean _IsValidSessionForRoom(::System::UInt32 roomOwnerUid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET))(this, roomOwnerUid);
		}

		::System::Void _TryCreateSession(::Class_1_9C60DFCC04FDF0DC* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET))(this, roomInfo);
		}

		::System::Void _TryRestoreSession(::Class_1_9C60DFCC04FDF0DC* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET))(this, roomInfo);
		}

		::System::Void _TryDisposeSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET))(this);
		}

		::System::Void _TryRestoreOnlineSession(::Class_1_9C60DFCC04FDF0DC* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET))(this, roomInfo);
		}

		::System::Void _UpdateOnlinePlayerInfo(::Class_1_58D4E6FABD47E257* playerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_58D4E6FABD47E257*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET))(this, playerInfo);
		}

		::System::Void _OnPlayerLeaveRoom(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET))(this, uid);
		}

		::System::Void _CacheOperationRecordList(::Class_1_D40936EF3BF54118_6* operationRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET))(this, operationRecordList);
		}

		::System::Void _NotifyOperationRecordList(::Class_1_D40936EF3BF54118_6* operationRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET))(this, operationRecordList);
		}

		::System::Void _SetOnlinePlayRoomLoadingStrategy(::System::Boolean isEntering, ::System::UInt32 targetUid, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET))(this, isEntering, targetUid, callback);
		}

		::System::Boolean _TryEnterOnlineFunction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET))(this);
		}

		::System::Void _TryInsertVisitToast(::Class_1_58D4E6FABD47E257* playerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_58D4E6FABD47E257*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET))(this, playerInfo);
		}

		::RPG::Client::LittleWheelSelectConfig* _CreateLittleWheelSelectConfig()
		{
			return ((::RPG::Client::LittleWheelSelectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsInSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRoomOwnerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET))(this);
		}

		::System::Boolean get_IsVisitToastActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET))(this);
		}

		::System::Void set_IsVisitToastActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET))(this, value);
		}

		::Class_1_6C345D5D294DD242* get__CurrentSession()
		{
			return ((::Class_1_6C345D5D294DD242*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET))(this);
		}

		::System::Void set__CurrentSession(::Class_1_6C345D5D294DD242* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6C345D5D294DD242*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>* get__OnlinePlayerInfoListInRoom()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLISTINROOM_OFFSET))(this);
		}

		::System::Void set__OnlinePlayerInfoListInRoom(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLISTINROOM_OFFSET))(this, value);
		}

		::System::UInt32 get__PendingTargetUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGTARGETUID_OFFSET))(this);
		}

		::System::Void set__PendingTargetUid(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGTARGETUID_OFFSET))(this, value);
		}

		::System::UInt32 get__PendingVisitReason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITREASON_OFFSET))(this);
		}

		::System::Void set__PendingVisitReason(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITREASON_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get__PendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void set__PendingOperationRecordList(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* get__PendingVisitDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET))(this);
		}

		::System::Void set__PendingVisitDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET))(this, value);
		}

		::System::Void __OnSocialPlayPreCheckEnterRoomScRsp_b__7_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_0_OFFSET))(this, isOk);
		}

		::System::Void __OnSocialPlayPreCheckEnterRoomScRsp_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_1_OFFSET))(this);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataList_b__16_0(::RPG::Client::PlayerBriefDisplayData* a, ::RPG::Client::PlayerBriefDisplayData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_0_OFFSET))(this, a, b);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
