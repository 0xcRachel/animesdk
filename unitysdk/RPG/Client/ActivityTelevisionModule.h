#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityTelevisionModule__TreasureQuestInfo.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"

class Class_1_120319518E6F6581_118;
class Class_1_352A8B3482C80E7D_60;
namespace RPG::Client { class ActivityTelevisionBattleResult; }
namespace RPG::Client { class ActivityTelevisionData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_CLEARBATTLETEMPPARAM_OFFSET UNITYSDK_OFFSET(0x9023E20)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETALLTELEVISIONDATABYSEASON_OFFSET UNITYSDK_OFFSET(0x9023F10)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETALLTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9023E80)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFMAXLAYER_OFFSET UNITYSDK_OFFSET(0x9025060)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFRELATEDTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9025150)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9025540)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWLEVELIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x90253E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x9025710)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEATHLEVELID_OFFSET UNITYSDK_OFFSET(0x9022670)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEATHLEVELMESSAGESUBMISSION_OFFSET UNITYSDK_OFFSET(0x9025B80)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEFAULTBUFFSHOWBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9025680)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETGUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x90259B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9024D00)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETSCORERANK_OFFSET UNITYSDK_OFFSET(0x9024DD0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETSHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x9025230)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x9024740)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONDATABYMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x90252E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9022D90)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTREASUREQUESTGROUPID_OFFSET UNITYSDK_OFFSET(0x9025A30)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTREASUREQUESTID_OFFSET UNITYSDK_OFFSET(0x9025AB0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_BUFFTELEVISIONDATAREF_OFFSET UNITYSDK_OFFSET(0x90267F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTBUFFLIST_OFFSET UNITYSDK_OFFSET(0x9026830)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9023CD0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONID_OFFSET UNITYSDK_OFFSET(0x9026810)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONSEASON_OFFSET UNITYSDK_OFFSET(0x9026840)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x9026BF0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_SHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x9026C10)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_TELEVISIONDATACOUNT_OFFSET UNITYSDK_OFFSET(0x9026730)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_TELEVISIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9026710)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_HASLEVELNOTCHALLENGED_OFFSET UNITYSDK_OFFSET(0x9025840)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9022E70)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_ISINACTIVITYTELEVISIONBATTLE_OFFSET UNITYSDK_OFFSET(0x9023B10)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_ISSHOWEVERYDAYREDDOT_OFFSET UNITYSDK_OFFSET(0x9026860)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_RESTARTTELEVISIONBATTLE_OFFSET UNITYSDK_OFFSET(0x9024B20)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9024BD0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9024020)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x9026690)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_BUFFTELEVISIONDATAREF_OFFSET UNITYSDK_OFFSET(0x9026800)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_CURRENTTELEVISIONID_OFFSET UNITYSDK_OFFSET(0x9026820)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_CURRENTTELEVISIONSEASON_OFFSET UNITYSDK_OFFSET(0x9026850)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x9026C00)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_SHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x9026C20)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_TELEVISIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9026720)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_STARTTELEVISIONBATTLE_OFFSET UNITYSDK_OFFSET(0x90245C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x90264D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_UPDATECURRENTSEASON_OFFSET UNITYSDK_OFFSET(0x9024470)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_UPDATETELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9023770)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x90232C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9023370)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CLEARAUTOSHOWPARAM_OFFSET UNITYSDK_OFFSET(0x9026640)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CMDENTERTELEVISIONACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x9023820)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CMDGETTELEVISIONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x90234C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9026C30)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x9022F10)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITMODULERELATEDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9024100)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITQUESTREFRESHINFO_OFFSET UNITYSDK_OFFSET(0x9025C00)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9022FC0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9023D30)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x90239C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONTELEVISIONACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9023920)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0x9025E20)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__STARTTELEVISIONBATTLE_OFFSET UNITYSDK_OFFSET(0x90249E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9026EF0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9026F80)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9026FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule_TypeDefinitionIndex = 50332;

	class ActivityTelevisionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* _TelevisionDataList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionModule__TreasureQuestInfo>* _TreasureQuestInfoList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _RankScoreLine; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _TempBattleBuffIDList; // 0x28
		::RPG::Client::ActivityTelevisionBattleResult* BattleResult; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* _BuffTelevisionDataRef_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::ActivityRank>* _SSNumToRank; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x48
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* _ShowLevel_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _TempBattleAvatarIDList; // 0x58
		::System::UInt32 _CurrentTelevisionSeason_k__BackingField; // 0x60
		::System::Boolean _ShowMainPage; // 0x64
		::System::UInt32 _CurrentTelevisionID_k__BackingField; // 0x68
		::System::UInt32 _AutoShowTelevisionID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdGetTelevisionActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CMDGETTELEVISIONACTIVITYDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _CmdEnterTelevisionActivityStageScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CMDENTERTELEVISIONACTIVITYSTAGESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnTelevisionActivityBattleEndScNotify(::System::UInt16 cmd, ::System::Object* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONTELEVISIONACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, obj);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::RPG::Client::ActivityTelevisionData* GetTelevisionData(::System::UInt32 televisionID)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONDATA_OFFSET))(this, televisionID);
		}

		::System::Void UpdateTelevisionData(::Class_1_120319518E6F6581_118* televisionData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_118*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_UPDATETELEVISIONDATA_OFFSET))(this, televisionData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionData*>* GetAllTelevisionData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETALLTELEVISIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionData*>* GetAllTelevisionDataBySeason(::System::UInt32 season)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETALLTELEVISIONDATABYSEASON_OFFSET))(this, season);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void UpdateCurrentSeason()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_UPDATECURRENTSEASON_OFFSET))(this);
		}

		::System::Void StartTelevisionBattle(::System::UInt32 televisionID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Collections::Generic::List_1<::System::UInt32>* buffIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_STARTTELEVISIONBATTLE_OFFSET))(this, televisionID, avatarIDList, buffIDList);
		}

		::System::Void RestartTelevisionBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_RESTARTTELEVISIONBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_60*>* GetTelevisionAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_60*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONAVATARLISTFROMIDLIST_OFFSET))(this, avatarIDList);
		}

		::System::Void SaveLineupData(::System::UInt32 televisionID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SAVELINEUPDATA_OFFSET))(this, televisionID, avatarIDList);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupData(::System::UInt32 televisionID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETLINEUPDATA_OFFSET))(this, televisionID);
		}

		::System::Int32 GetScoreRank(::System::UInt32 score)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETSCORERANK_OFFSET))(this, score);
		}

		::System::UInt32 GetBuffMaxLayer(::System::UInt32 buffID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFMAXLAYER_OFFSET))(this, buffID);
		}

		::RPG::Client::ActivityTelevisionData* GetBuffRelatedTelevisionData(::System::UInt32 buffID)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFRELATEDTELEVISIONDATA_OFFSET))(this, buffID);
		}

		::System::Boolean IsInActivityTelevisionBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_ISINACTIVITYTELEVISIONBATTLE_OFFSET))(this);
		}

		::System::Void ClearBattleTempParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_CLEARBATTLETEMPPARAM_OFFSET))(this);
		}

		::System::UInt32 GetShowLevel(::System::UInt32 worldLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETSHOWLEVEL_OFFSET))(this, worldLevel);
		}

		::RPG::Client::ActivityTelevisionData* GetTelevisionDataByMappingInfoID(::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONDATABYMAPPINGINFOID_OFFSET))(this, mappingInfoID);
		}

		::System::String* GetBuffShowLevelImagePath(::System::UInt32 buffID, ::System::UInt32 buffCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWLEVELIMAGEPATH_OFFSET))(this, buffID, buffCount);
		}

		::System::String* GetBuffShowBackGroundImagePath(::System::UInt32 buffID, ::System::UInt32 buffCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWBACKGROUNDIMAGEPATH_OFFSET))(this, buffID, buffCount);
		}

		::System::String* GetDefaultBuffShowBackGroundImagePath(::System::UInt32 buffID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEFAULTBUFFSHOWBACKGROUNDIMAGEPATH_OFFSET))(this, buffID);
		}

		::System::Int32 GetBuffShowLevel(::System::UInt32 buffID, ::System::UInt32 buffCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWLEVEL_OFFSET))(this, buffID, buffCount);
		}

		::System::Boolean HasLevelNotChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_HASLEVELNOTCHALLENGED_OFFSET))(this);
		}

		::System::UInt32 GetDeathLevelID(::System::UInt32 season)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEATHLEVELID_OFFSET))(this, season);
		}

		::System::UInt32 GetGuideMissionID(::System::UInt32 season)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETGUIDEMISSIONID_OFFSET))(this, season);
		}

		::System::UInt32 GetTreasureQuestGroupID(::System::UInt32 season)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTREASUREQUESTGROUPID_OFFSET))(this, season);
		}

		::System::UInt32 GetTreasureQuestID(::System::UInt32 season)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTREASUREQUESTID_OFFSET))(this, season);
		}

		::System::UInt32 GetDeathLevelMessageSubmission(::System::UInt32 season)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEATHLEVELMESSAGESUBMISSION_OFFSET))(this, season);
		}

		::System::Void _InitConstValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITCONSTVALUE_OFFSET))(this);
		}

		::System::Void _InitTelevisionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITTELEVISIONDATA_OFFSET))(this);
		}

		::System::Void _InitModuleRelatedMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITMODULERELATEDMISSIONDATA_OFFSET))(this);
		}

		::System::Void _StartTelevisionBattle(::System::UInt32 televisionID, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_60*>* avatarList, ::System::Collections::Generic::List_1<::System::UInt32>* buffIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_60*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__STARTTELEVISIONBATTLE_OFFSET))(this, televisionID, avatarList, buffIDList);
		}

		::System::Void _InitQuestRefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITQUESTREFRESHINFO_OFFSET))(this);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, o);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitBattle(::System::Boolean showMainPage, ::System::UInt32 televisionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, showMainPage, televisionID);
		}

		::System::Void _ClearAutoShowParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CLEARAUTOSHOWPARAM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* get_TelevisionDataList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_TELEVISIONDATALIST_OFFSET))(this);
		}

		::System::Void set_TelevisionDataList(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_TELEVISIONDATALIST_OFFSET))(this, value);
		}

		::System::Int32 get_TelevisionDataCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_TELEVISIONDATACOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* get_BuffTelevisionDataRef()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_BUFFTELEVISIONDATAREF_OFFSET))(this);
		}

		::System::Void set_BuffTelevisionDataRef(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_BUFFTELEVISIONDATAREF_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentTelevisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONID_OFFSET))(this);
		}

		::System::Void set_CurrentTelevisionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_CURRENTTELEVISIONID_OFFSET))(this, value);
		}

		::RPG::Client::ActivityTelevisionData* get_CurrentTelevisionData()
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurrentBuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTBUFFLIST_OFFSET))(this);
		}

		::System::UInt32 get_CurrentTelevisionSeason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONSEASON_OFFSET))(this);
		}

		::System::Void set_CurrentTelevisionSeason(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_CURRENTTELEVISIONSEASON_OFFSET))(this, value);
		}

		::System::Boolean IsShowEveryDayRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_ISSHOWEVERYDAYREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::DynamicValue*>* get_ShowLevel()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_SHOWLEVEL_OFFSET))(this);
		}

		::System::Void set_ShowLevel(::Il2CppArray<::RPG::GameCore::DynamicValue*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_SHOWLEVEL_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
