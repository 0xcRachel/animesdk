#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_735612C94F558EAE_9;
class Class_1_B1806EDD70E233D6;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class Item; }
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakRewardGroup; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ChallengePeakRewardRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKCURRENTGROUPHASENTERED_OFFSET UNITYSDK_OFFSET(0x8E90930)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKGROUPISFORCEHARDBOSSHASCONFIRMED_OFFSET UNITYSDK_OFFSET(0x8E90300)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKUNLOCK_OFFSET UNITYSDK_OFFSET(0x8E90410)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CONFIRMCHALLENGEPEAKSETTLE_OFFSET UNITYSDK_OFFSET(0x8E90140)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x8E8D380)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKGROUP_OFFSET UNITYSDK_OFFSET(0x8E8FED0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x8E8D110)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCURRENTPEAKGROUP_OFFSET UNITYSDK_OFFSET(0x8E84250)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETPREQUESTS_OFFSET UNITYSDK_OFFSET(0x8E904D0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ABOUTTOEXPIRETHRESHOLDDAYS_OFFSET UNITYSDK_OFFSET(0x8E8EA30)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CANENTERFROMHANDBOOKQUESTID_OFFSET UNITYSDK_OFFSET(0x8E8F740)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CHALLENGEPEAKUNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x8E8F670)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CURRENTPEAKGROUPID_OFFSET UNITYSDK_OFFSET(0x8E84130)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x8E8FBC0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKEASYBOSSBANNERPATH_OFFSET UNITYSDK_OFFSET(0x8E8FC50)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKHARDBOSSBANNERPATH_OFFSET UNITYSDK_OFFSET(0x8E8FD40)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_MAPINFOID_OFFSET UNITYSDK_OFFSET(0x8E8FAC0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_PREQUESTIDS_OFFSET UNITYSDK_OFFSET(0x8E8F840)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x8E8C8F0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_TUTORIALMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x8E8AFA0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8E90B40)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_ISCANENTERFROMHANDBOOK_OFFSET UNITYSDK_OFFSET(0x8E90870)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_LEAVECHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x8E8AF50)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_MARKCURRENTGROUPHASENTERED_OFFSET UNITYSDK_OFFSET(0x8E90A10)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_MARKGROUPFORCEHARDBOSSHASCONFIRMED_OFFSET UNITYSDK_OFFSET(0x8E901B0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8E90F20)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_RESTARTCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x8E8AEF0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SENDGETCHALLENGEPEAKDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x8E8FE30)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x8E8FE80)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SETBOSSHARDMODE_OFFSET UNITYSDK_OFFSET(0x8E900D0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SETCHALLENGEPEAKMONSTERLINEUPS_OFFSET UNITYSDK_OFFSET(0x8E8FF90)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_STARTCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x8E8AE60)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x8E90000)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0x8E917F0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E90EE0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E90C50)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__BUILDREWARDGROUPMAPPING_OFFSET UNITYSDK_OFFSET(0x8E91D70)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEALLGROUPS_OFFSET UNITYSDK_OFFSET(0x8E92060)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x8E92C20)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x8E92B50)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEREWARDGROUP_OFFSET UNITYSDK_OFFSET(0x8E928B0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E92E80)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x8E90C00)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKGROUPDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8E910D0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKSETTLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8E91180)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCHALLENGEPEAKDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8E90F70)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCURCHALLENGEPEAKSCRSP_OFFSET UNITYSDK_OFFSET(0x8E91010)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONRECEIVERESPONSE_OFFSET UNITYSDK_OFFSET(0x8E91C50)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONSETCHALLENGEPEAKBOSSHARDMODESCRSP_OFFSET UNITYSDK_OFFSET(0x8E91CC0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONTAKECHALLENGEPEAKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x8E91440)
#define RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8E93020)
#define RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8E93170)
#define RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E93110)
#define RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E930B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakModule_TypeDefinitionIndex = 50137;

	class ChallengePeakModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeakGroup*>* _ChallengePeakGroups; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeak*>* _ChallengePeaks; // 0x18
		::Class_1_B1806EDD70E233D6* _ServerAgent; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeakBoss*>* _ChallengePeakBosses; // 0x28
		::System::String* _HandbookHardBossBannerPath; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _PreQuestIDs; // 0x38
		::System::String* _HandbookEasyBossBannerPath; // 0x40
		::System::Nullable_1<::System::UInt32> _ChallengePeakUnlockQuestID; // 0x48
		::System::Nullable_1<::System::UInt32> _AboutToExpireThresholdDays; // 0x50
		::System::Nullable_1<::System::UInt32> _CanEnterFromHandbookQuestID; // 0x58
		::System::Nullable_1<::System::UInt32> _MapInfoID; // 0x60
		::System::Nullable_1<::System::Int32> _ShopID; // 0x68
		::System::Nullable_1<::System::UInt32> _EntranceID; // 0x70
		::System::Nullable_1<::System::UInt32> _TutorialMainMissionID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ChallengePeakUnlockQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CHALLENGEPEAKUNLOCKQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_CanEnterFromHandbookQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CANENTERFROMHANDBOOKQUESTID_OFFSET))(this);
		}

		::System::Int32 get_ShopID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_SHOPID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_PreQuestIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_PREQUESTIDS_OFFSET))(this);
		}

		::System::UInt32 get_MapInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_MAPINFOID_OFFSET))(this);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_AboutToExpireThresholdDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ABOUTTOEXPIRETHRESHOLDDAYS_OFFSET))(this);
		}

		::System::UInt32 get_TutorialMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_TUTORIALMAINMISSIONID_OFFSET))(this);
		}

		::System::String* get_HandbookEasyBossBannerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKEASYBOSSBANNERPATH_OFFSET))(this);
		}

		::System::String* get_HandbookHardBossBannerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKHARDBOSSBANNERPATH_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPeakGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CURRENTPEAKGROUPID_OFFSET))(this);
		}

		::System::Void SendGetChallengePeakDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SENDGETCHALLENGEPEAKDATAREQUEST_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGroup* GetCurrentPeakGroup()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETCURRENTPEAKGROUP_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGroup* GetChallengePeakGroup(::System::UInt32 id)
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKGROUP_OFFSET))(this, id);
		}

		::RPG::Client::ChallengePeak* GetChallengePeak(::System::UInt32 id)
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAK_OFFSET))(this, id);
		}

		::RPG::Client::ChallengePeakBoss* GetChallengePeakBoss(::System::UInt32 id)
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKBOSS_OFFSET))(this, id);
		}

		::RPG::Client::Promises::IPromise* SetChallengePeakMonsterLineups(::System::UInt32 groupID, ::System::Collections::Generic::List_1<::Class_1_735612C94F558EAE_9*>* lineupList)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_735612C94F558EAE_9*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SETCHALLENGEPEAKMONSTERLINEUPS_OFFSET))(this, groupID, lineupList);
		}

		::RPG::Client::Promises::IPromise* StartChallengePeak(::System::UInt32 peakID, ::System::UInt32 bossBuffID, ::System::Collections::Generic::List_1<::System::UInt32>* lineupAvatarList)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_STARTCHALLENGEPEAK_OFFSET))(this, peakID, bossBuffID, lineupAvatarList);
		}

		::RPG::Client::Promises::IPromise* LeaveChallengePeak()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_LEAVECHALLENGEPEAK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RestartChallengePeak()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_RESTARTCHALLENGEPEAK_OFFSET))(this);
		}

		::System::Void TakeReward(::System::UInt32 groupID, ::System::Collections::Generic::List_1<::System::UInt32>* challengePeakRewardIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_TAKEREWARD_OFFSET))(this, groupID, challengePeakRewardIDs);
		}

		::System::Void SetBossHardMode(::System::UInt32 groupID, ::System::Boolean isHard)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SETBOSSHARDMODE_OFFSET))(this, groupID, isHard);
		}

		::RPG::Client::Promises::IPromise* ConfirmChallengePeakSettle(::System::UInt32 peakID, ::System::Boolean isOverride)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_CONFIRMCHALLENGEPEAKSETTLE_OFFSET))(this, peakID, isOverride);
		}

		::System::Void MarkGroupForceHardBossHasConfirmed(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_MARKGROUPFORCEHARDBOSSHASCONFIRMED_OFFSET))(this, groupID);
		}

		::System::Boolean CheckGroupIsForceHardBossHasConfirmed(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKGROUPISFORCEHARDBOSSHASCONFIRMED_OFFSET))(this, groupID);
		}

		::System::Boolean CheckUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetPreQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETPREQUESTS_OFFSET))(this);
		}

		::System::Boolean IsCanEnterFromHandbook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_ISCANENTERFROMHANDBOOK_OFFSET))(this);
		}

		::System::Boolean CheckCurrentGroupHasEntered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKCURRENTGROUPHASENTERED_OFFSET))(this);
		}

		::System::Void MarkCurrentGroupHasEntered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_MARKCURRENTGROUPHASENTERED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnGetChallengePeakDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCHALLENGEPEAKDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetCurChallengePeakScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCURCHALLENGEPEAKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChallengePeakGroupDataUpdateScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKGROUPDATAUPDATESCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnChallengePeakSettleScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKSETTLESCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnTakeChallengePeakRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONTAKECHALLENGEPEAKREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnReceiveResponse(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONRECEIVERESPONSE_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetChallengePeakBossHardModeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONSETCHALLENGEPEAKBOSSHARDMODESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__INITDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>* _BuildRewardGroupMapping()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__BUILDREWARDGROUPMAPPING_OFFSET))(this);
		}

		::System::Void _CreateAllGroups(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>* rewardGroupMapping)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEALLGROUPS_OFFSET))(this, rewardGroupMapping);
		}

		::RPG::Client::ChallengePeak* _CreateChallengePeak(::System::UInt32 id, ::RPG::Client::ChallengePeakGroup* group)
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAK_OFFSET))(this, id, group);
		}

		::RPG::Client::ChallengePeakBoss* _CreateChallengePeakBoss(::System::UInt32 id, ::RPG::Client::ChallengePeakGroup* group)
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAKBOSS_OFFSET))(this, id, group);
		}

		::RPG::Client::ChallengePeakRewardGroup* _CreateRewardGroup(::System::UInt32 peakGroupID, ::System::UInt32 groupID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>* rewardGroupMapping)
		{
			return ((::RPG::Client::ChallengePeakRewardGroup*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEREWARDGROUP_OFFSET))(this, peakGroupID, groupID, rewardGroupMapping);
		}

		::System::Void _AddDisplayItemDatasByRewards(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* rewardList, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET))(this, rewardList, list);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
