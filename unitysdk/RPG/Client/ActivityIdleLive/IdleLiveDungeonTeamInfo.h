#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/InGameTeamSlotUiData.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D1E0AD3915BCCF29_54;
class Class_3_1C169A0F2ACF26E7;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ADDTEAMAVATAR_1_OFFSET UNITYSDK_OFFSET(0x16C508C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ADDTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x16C50850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CHECKTEAMISVALID_OFFSET UNITYSDK_OFFSET(0x16C4EFB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CLEARALLTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x16C4F4A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CLEARSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x16C503C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETALLTEAMGAMEPLAYSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x16C50940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETCURPOWER_OFFSET UNITYSDK_OFFSET(0x16C4F000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETRECOMMENDDATALIST_OFFSET UNITYSDK_OFFSET(0x16C50B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x16C52000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x16C51FF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET__CURRENTSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x16C4FE00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x16C4E820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET UNITYSDK_OFFSET(0x16C50460)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x16C4E880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REBUILDBYDUNGEONID_OFFSET UNITYSDK_OFFSET(0x16C4F500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x16C4FFA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REMOVETEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x16C50500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REPLACETEAM_OFFSET UNITYSDK_OFFSET(0x16C504A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_SYNCPOWER_OFFSET UNITYSDK_OFFSET(0x16C4F070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_TRIGGERPOWERCHANGE_OFFSET UNITYSDK_OFFSET(0x16C4F0D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_WRITETEAM_OFFSET UNITYSDK_OFFSET(0x16C4EB50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__CREATEANDREGISTERAVATAR_OFFSET UNITYSDK_OFFSET(0x16C513F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16C52010)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__GETBATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x16C51A30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__GETCURRENTSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x16C51D50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__ONPOWERCHANGE_OFFSET UNITYSDK_OFFSET(0x16C4F120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__REBUILDALLAVATARS_OFFSET UNITYSDK_OFFSET(0x16C4FBD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__REPLACETEAM_OFFSET UNITYSDK_OFFSET(0x16C4FE10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__SYNCSLOTDATASTOSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x16C50000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__UPDATEAVATARMGR_OFFSET UNITYSDK_OFFSET(0x16C4EB00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__UPDATEUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x16C4E9D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___IFIXBASEPROXY_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x16C520F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonTeamInfo_TypeDefinitionIndex = 69279;

	class IdleLiveDungeonTeamInfo : public ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _CurPower; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*>* _SavedTeam; // 0x58
		::System::UInt32 _DungeonId; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* avatarInfo, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* slotInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_INIT_OFFSET))(this, avatarInfo, slotInfo);
		}

		::System::Void OnSlotInfoProtocolReceived(::System::Object* sender, ::Class_3_1C169A0F2ACF26E7* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, sender, e);
		}

		::System::Void WriteTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_WRITETEAM_OFFSET))(this);
		}

		::System::Boolean CheckTeamIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CHECKTEAMISVALID_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetCurPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETCURPOWER_OFFSET))(this);
		}

		::System::Void SyncPower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_SYNCPOWER_OFFSET))(this);
		}

		::System::Void TriggerPowerChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_TRIGGERPOWERCHANGE_OFFSET))(this);
		}

		::System::Void ClearAllTeamAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CLEARALLTEAMAVATAR_OFFSET))(this);
		}

		::System::Void RebuildByDungeonId(::System::UInt32 dungeonId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REBUILDBYDUNGEONID_OFFSET))(this, dungeonId);
		}

		::System::Void RefreshTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REFRESHTEAM_OFFSET))(this);
		}

		::System::Void ClearSavedTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CLEARSAVEDTEAM_OFFSET))(this);
		}

		::System::Boolean IsCurrentTeamSameAsBattleTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET))(this);
		}

		::System::Void ReplaceTeam(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* avatarIdDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REPLACETEAM_OFFSET))(this, avatarIdDict);
		}

		::System::Void _ReplaceTeam(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* avatarIdDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__REPLACETEAM_OFFSET))(this, avatarIdDict);
		}

		::System::Void RemoveTeamAvatar(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REMOVETEAMAVATAR_OFFSET))(this, avatarId);
		}

		::System::Void AddTeamAvatar(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ADDTEAMAVATAR_OFFSET))(this, avatarId);
		}

		::System::Void AddTeamAvatar_1(::System::UInt32 avatarId, ::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ADDTEAMAVATAR_1_OFFSET))(this, avatarId, slotID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData>* GetAllTeamGamePlaySlotDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETALLTEAMGAMEPLAYSLOTDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>* GetRecommendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETRECOMMENDDATALIST_OFFSET))(this);
		}

		::System::Void _UpdateUpgradeSlot(::Class_1_D1E0AD3915BCCF29_54* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__UPDATEUPGRADESLOT_OFFSET))(this, rsp);
		}

		::System::Void _CreateAndRegisterAvatar(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__CREATEANDREGISTERAVATAR_OFFSET))(this, avatarData);
		}

		::System::Void _RebuildAllAvatars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__REBUILDALLAVATARS_OFFSET))(this);
		}

		::System::Void _SyncSlotDatasToSavedTeam(::System::Boolean writePrefs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__SYNCSLOTDATASTOSAVEDTEAM_OFFSET))(this, writePrefs);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>* _GetBattleAvatarIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__GETBATTLEAVATARIDLIST_OFFSET))(this);
		}

		::System::Void _OnPowerChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__ONPOWERCHANGE_OFFSET))(this);
		}

		::System::Void _UpdateAvatarMgr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__UPDATEAVATARMGR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GetCurrentSavedTeam()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__GETCURRENTSAVEDTEAM_OFFSET))(this);
		}

		::System::UInt32 get_DungeonId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET_DUNGEONID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get__CurrentSavedTeam()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET__CURRENTSAVEDTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>* get_BattleAvatarIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSlotInfoProtocolReceived(::System::Object* P0, ::Class_3_1C169A0F2ACF26E7* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___IFIXBASEPROXY_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, P0, P1);
		}
	};
}
