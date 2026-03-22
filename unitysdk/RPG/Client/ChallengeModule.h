#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ChallengeSettleResult.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/Struct_2_26800DB1E21B77D0.h"

class Class_1_3AD2528CD53B1639_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class Item; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class ChallengeAutoSettleResult; }
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChallengeInstance; }
namespace RPG::Client { class ChallengeLineupSaveData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEMODULE_CLEARAUTOSETTLERESULTRECORD_OFFSET UNITYSDK_OFFSET(0x8E78530)
#define RPG_CLIENT_CHALLENGEMODULE_CLEARCHALLENGEBOSSDIFFICULTYSTATE_OFFSET UNITYSDK_OFFSET(0x8E751B0)
#define RPG_CLIENT_CHALLENGEMODULE_CLEARCONTINUECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x8E803C0)
#define RPG_CLIENT_CHALLENGEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E79830)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E74620)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E7BEC0)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERPARTIALCHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E748C0)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERSTORYCHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E78B50)
#define RPG_CLIENT_CHALLENGEMODULE_FILLNEWCHALLENGEGROUPIDSTO_OFFSET UNITYSDK_OFFSET(0x8E7D610)
#define RPG_CLIENT_CHALLENGEMODULE_GETALREADYGOTSTARSNUM_OFFSET UNITYSDK_OFFSET(0x8E7BDA0)
#define RPG_CLIENT_CHALLENGEMODULE_GETAUTOSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x8E76F10)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLEBOSSGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E74170)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLECHALLENGEGROUPS_OFFSET UNITYSDK_OFFSET(0x8E76390)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESCHEDULECHALLENGEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x8E6B750)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESTORYGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E6BB30)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x8E7A2C0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x8E61B50)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x8E6B410)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x8E7A3A0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E6F550)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEHISTORYMAXLEVELBYTYPE_OFFSET UNITYSDK_OFFSET(0x8E688E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGELINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x8E80E30)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEREQUIREDMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8E7D220)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURCHALLENGESTATE_OFFSET UNITYSDK_OFFSET(0x8E700A0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURRENTGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x8E7A9E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E75C40)
#define RPG_CLIENT_CHALLENGEMODULE_GETFIRSTENDGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x8E7B9A0)
#define RPG_CLIENT_CHALLENGEMODULE_GETGROUPLASTENTEREDCHALLENGELINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x8E80FE0)
#define RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATASBYTYPE_OFFSET UNITYSDK_OFFSET(0x8E7B270)
#define RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x8E7AD90)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x8E749A0)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEIDFROMPREF_OFFSET UNITYSDK_OFFSET(0x8E74F70)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTMEMORYCHALLENGEGROUPIDFROMCACHE_OFFSET UNITYSDK_OFFSET(0x8E76C80)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTREFRESHCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x8E65240)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPIDFROMCACHE_OFFSET UNITYSDK_OFFSET(0x8E78910)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x8E78DF0)
#define RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATABYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x8E7B6E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E75D90)
#define RPG_CLIENT_CHALLENGEMODULE_GETMEMORYAUTOSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x8E76DC0)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTCHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E7A3E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x8E75FC0)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E75F70)
#define RPG_CLIENT_CHALLENGEMODULE_GETNONESCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E758F0)
#define RPG_CLIENT_CHALLENGEMODULE_GETPREMISSIONFINISHEDCHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x8E7A0B0)
#define RPG_CLIENT_CHALLENGEMODULE_GETTOTALSTARSNUM_OFFSET UNITYSDK_OFFSET(0x8E7BC60)
#define RPG_CLIENT_CHALLENGEMODULE_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x8E7FE00)
#define RPG_CLIENT_CHALLENGEMODULE_GET_BOSSGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x8E74520)
#define RPG_CLIENT_CHALLENGEMODULE_GET_CURRENTCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x8E81170)
#define RPG_CLIENT_CHALLENGEMODULE_GET_LASTCHALLENGEUNLOCKGROUPID_OFFSET UNITYSDK_OFFSET(0x8E76880)
#define RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x8E75B40)
#define RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYHISTORYMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8E76FA0)
#define RPG_CLIENT_CHALLENGEMODULE_GET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET UNITYSDK_OFFSET(0x8E770A0)
#define RPG_CLIENT_CHALLENGEMODULE_GET_STORYGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x8E78A50)
#define RPG_CLIENT_CHALLENGEMODULE_HASBOSSREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x8E74D90)
#define RPG_CLIENT_CHALLENGEMODULE_HASMEMORYREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x8E76580)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWBOSSCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0x8E74BB0)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWRESIDENTGROUPUNLOCK_OFFSET UNITYSDK_OFFSET(0x8E76790)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWSCHEDULEMEMORYGROUPUNLOCK_OFFSET UNITYSDK_OFFSET(0x8E76A70)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWSTORYCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0x8E79000)
#define RPG_CLIENT_CHALLENGEMODULE_HASSTORYREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x8E791E0)
#define RPG_CLIENT_CHALLENGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8E793C0)
#define RPG_CLIENT_CHALLENGEMODULE_ISCHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0x8E74050)
#define RPG_CLIENT_CHALLENGEMODULE_ISNEEDSHOWUPDATEHINT_OFFSET UNITYSDK_OFFSET(0x8E7D4B0)
#define RPG_CLIENT_CHALLENGEMODULE_LEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E7BF70)
#define RPG_CLIENT_CHALLENGEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8E79780)
#define RPG_CLIENT_CHALLENGEMODULE_REFRESHALLCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x8E77C10)
#define RPG_CLIENT_CHALLENGEMODULE_RESETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E70520)
#define RPG_CLIENT_CHALLENGEMODULE_SAVECHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0x8E73F30)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTBOSSCHALLENGEIDTOPREF_OFFSET UNITYSDK_OFFSET(0x8E74FD0)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTMEMORYCHALLENGEGROUPIDTOCACHE_OFFSET UNITYSDK_OFFSET(0x8E76D20)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTSTORYCHALLENGEGROUPIDTOCACHE_OFFSET UNITYSDK_OFFSET(0x8E789B0)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x8E80DB0)
#define RPG_CLIENT_CHALLENGEMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x8E79F30)
#define RPG_CLIENT_CHALLENGEMODULE_SETCONTINUECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x8E80330)
#define RPG_CLIENT_CHALLENGEMODULE_SETDIFFICULTYSTATEBYCHALLENGEBOSSDATA_OFFSET UNITYSDK_OFFSET(0x8E75030)
#define RPG_CLIENT_CHALLENGEMODULE_SET_LASTCHALLENGEUNLOCKGROUPID_OFFSET UNITYSDK_OFFSET(0x8E81180)
#define RPG_CLIENT_CHALLENGEMODULE_SET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET UNITYSDK_OFFSET(0x8E772A0)
#define RPG_CLIENT_CHALLENGEMODULE_TAKECUMULATIVEREWARD_OFFSET UNITYSDK_OFFSET(0x8E7C0C0)
#define RPG_CLIENT_CHALLENGEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x8E7C150)
#define RPG_CLIENT_CHALLENGEMODULE__ADDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x8E800A0)
#define RPG_CLIENT_CHALLENGEMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0x8E7F410)
#define RPG_CLIENT_CHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E79D00)
#define RPG_CLIENT_CHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E79A40)
#define RPG_CLIENT_CHALLENGEMODULE__CLEARCURCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x8E799B0)
#define RPG_CLIENT_CHALLENGEMODULE__CONTINUECHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E7C1A0)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x8E80220)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8E7FF60)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x8E7FB20)
#define RPG_CLIENT_CHALLENGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E79DB0)
#define RPG_CLIENT_CHALLENGEMODULE__DESERIALIZEFROMHASHSET_OFFSET UNITYSDK_OFFSET(0x8E78240)
#define RPG_CLIENT_CHALLENGEMODULE__FILLNEWCHALLENGEGROUPIDSBYTYPETO_OFFSET UNITYSDK_OFFSET(0x8E7D690)
#define RPG_CLIENT_CHALLENGEMODULE__GETAUTOSETTLERESULTPREFHASHSET_OFFSET UNITYSDK_OFFSET(0x8E780C0)
#define RPG_CLIENT_CHALLENGEMODULE__GETCONTINUEMAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x8E80870)
#define RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUEMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8E80990)
#define RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8E80B90)
#define RPG_CLIENT_CHALLENGEMODULE__GETSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x8E77E90)
#define RPG_CLIENT_CHALLENGEMODULE__ISSKIPCONTINUE_OFFSET UNITYSDK_OFFSET(0x8E80420)
#define RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEDATACONFIG_OFFSET UNITYSDK_OFFSET(0x8E796A0)
#define RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEGROUPDATACONFIG_OFFSET UNITYSDK_OFFSET(0x8E79460)
#define RPG_CLIENT_CHALLENGEMODULE__NOTIFYCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x8E77D00)
#define RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGEBOSSPHASESETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0x8E75290)
#define RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGECHANGETEAM_OFFSET UNITYSDK_OFFSET(0x8E7F870)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGELINEUPNOTIFY_OFFSET UNITYSDK_OFFSET(0x8E7F980)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGESETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0x8E77330)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGEGROUPSTATISTICSSCRSP_OFFSET UNITYSDK_OFFSET(0x8E7FD40)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x8E7D9F0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCURCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x8E7DE30)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDLEAVECHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x8E7EFF0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x8E7E420)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTPARTIALCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x8E7ECF0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDTAKECHALLENGEREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x8E7F190)
#define RPG_CLIENT_CHALLENGEMODULE__ONENTERCHALLENGENEXTPHASESCRSP_OFFSET UNITYSDK_OFFSET(0x8E75700)
#define RPG_CLIENT_CHALLENGEMODULE__ONRESTARTCHALLENGEPHASESCRSP_OFFSET UNITYSDK_OFFSET(0x8E75800)
#define RPG_CLIENT_CHALLENGEMODULE__PROCESSAUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x8E77500)
#define RPG_CLIENT_CHALLENGEMODULE__RECOVERCURCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x8E7E310)
#define RPG_CLIENT_CHALLENGEMODULE__RESETTLECHALLENGE_B__38_0_OFFSET UNITYSDK_OFFSET(0x8E81210)
#define RPG_CLIENT_CHALLENGEMODULE__SAVELASTENTEREDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x8E7E980)
#define RPG_CLIENT_CHALLENGEMODULE__SERIALIZETOHASHSET_OFFSET UNITYSDK_OFFSET(0x8E785C0)
#define RPG_CLIENT_CHALLENGEMODULE__SETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E77A30)
#define RPG_CLIENT_CHALLENGEMODULE__TRYSHOWCHALLENGERESULT_OFFSET UNITYSDK_OFFSET(0x8E7CF20)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E815E0)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8E814F0)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8E81580)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E81650)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E815F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeModule_TypeDefinitionIndex = 50065;

	class ChallengeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* _NoneScheduleChallengeGroupDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengeGroupType, ::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*>* _ChallengeGroupDataDict; // 0x18
		::RPG::Client::ChallengeAutoSettleResult* _AutoSettleCacheData; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengeGroupType, ::System::UInt32>* _ChallengeHistoryMaxLevelDict; // 0x28
		::Struct_2_26800DB1E21B77D0 ContinueChallengeData; // 0x30
		::RPG::Client::Promises::Promise* _LeaveChallengePromise; // 0x58
		::RPG::Client::Promises::Promise* _RefreshAllChallengePromise; // 0x60
		::RPG::Client::ChallengeInstance* _CurrentChallengeInstance; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengeData*>* _AllChallengeDatas; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise*>* _GetCurChallengePromiseList; // 0x78
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RequiredMainMissionIDs; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void SaveChallengeBossShowedMonsterGuide(::System::UInt32 challengeID, ::System::UInt32 stageIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVECHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET))(this, challengeID, stageIndex);
		}

		::System::Boolean IsChallengeBossShowedMonsterGuide(::System::UInt32 challengeID, ::System::UInt32 stageIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ISCHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET))(this, challengeID, stageIndex);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableBossGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLEBOSSGROUPDATA_OFFSET))(this);
		}

		::System::Void EnterBossChallenge(::System::UInt32 challengeID, ::System::UInt32 buff1, ::System::UInt32 buff2, ::System::Collections::Generic::List_1<::System::UInt32>* team1, ::System::Collections::Generic::List_1<::System::UInt32>* team2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERBOSSCHALLENGE_OFFSET))(this, challengeID, buff1, buff2, team1, team2);
		}

		::System::Void EnterPartialChallenge(::System::UInt32 challengeID, ::System::UInt32 stageIndex, ::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERPARTIALCHALLENGE_OFFSET))(this, challengeID, stageIndex, buffID);
		}

		::System::UInt32 GetLastBossChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Boolean HasNewBossChallengeGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASNEWBOSSCHALLENGEGROUP_OFFSET))(this);
		}

		::System::Boolean HasBossRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASBOSSREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::UInt32 GetLastBossChallengeIDFromPref()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEIDFROMPREF_OFFSET))(this);
		}

		::System::Void SaveLastBossChallengeIDToPref(::System::UInt32 challengeGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTBOSSCHALLENGEIDTOPREF_OFFSET))(this, challengeGroupID);
		}

		::System::Void SetDifficultyStateByChallengeBossData(::RPG::Client::ChallengeBossData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SETDIFFICULTYSTATEBYCHALLENGEBOSSDATA_OFFSET))(this, data);
		}

		::System::Void ClearChallengeBossDifficultyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARCHALLENGEBOSSDIFFICULTYSTATE_OFFSET))(this);
		}

		::System::Void _OnChallengeBossPhaseSettleNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGEBOSSPHASESETTLENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEnterChallengeNextPhaseScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONENTERCHALLENGENEXTPHASESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRestartChallengePhaseScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONRESTARTCHALLENGEPHASESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* get_BossGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_BOSSGROUPDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetNoneScheduleChallengeGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNONESCHEDULECHALLENGEGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetCurScheduleChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCURSCHEDULECHALLENGEGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetLatestScheduleChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableScheduleChallengeGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESCHEDULECHALLENGEGROUPDATALIST_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetNextScheduleChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableChallengeGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLECHALLENGEGROUPS_OFFSET))(this);
		}

		::System::Boolean HasMemoryRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASMEMORYREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean HasNewResidentGroupUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASNEWRESIDENTGROUPUNLOCK_OFFSET))(this);
		}

		::System::Boolean HasNewScheduleMemoryGroupUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASNEWSCHEDULEMEMORYGROUPUNLOCK_OFFSET))(this);
		}

		::System::UInt32 GetLastMemoryChallengeGroupIDFromCache()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTMEMORYCHALLENGEGROUPIDFROMCACHE_OFFSET))(this);
		}

		::System::Void SaveLastMemoryChallengeGroupIDToCache(::System::UInt32 challengeGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTMEMORYCHALLENGEGROUPIDTOCACHE_OFFSET))(this, challengeGroupID);
		}

		::RPG::Client::ChallengeAutoSettleResult* GetMemoryAutoSettleResult()
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETMEMORYAUTOSETTLERESULT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* get_MemoryGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYGROUPDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_MemoryHistoryMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYHISTORYMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_SeenChallengeMemoryScheduleUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET))(this);
		}

		::System::Void set_SeenChallengeMemoryScheduleUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET))(this, value);
		}

		::System::Void _OnCmdChallengeSettleNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGESETTLENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SettleChallenge(::System::UInt32 challengeID, ::System::Boolean isWin, ::System::UInt32 targetBitSet, ::System::UInt32 score1, ::System::UInt32 score2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SETTLECHALLENGE_OFFSET))(this, challengeID, isWin, targetBitSet, score1, score2);
		}

		::System::Void ReSettleChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_RESETTLECHALLENGE_OFFSET))(this);
		}

		::System::Void _NotifyChallengeFinish(::RPG::Client::ChallengeSettleResult result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeSettleResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__NOTIFYCHALLENGEFINISH_OFFSET))(this, result);
		}

		::RPG::Client::ChallengeSettleResult _GetSettleResult()
		{
			return ((::RPG::Client::ChallengeSettleResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETSETTLERESULT_OFFSET))(this);
		}

		::RPG::Client::ChallengeAutoSettleResult* GetAutoSettleResult(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAUTOSETTLERESULT_OFFSET))(this, type);
		}

		::System::Void ClearAutoSettleResultRecord(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARAUTOSETTLERESULTRECORD_OFFSET))(this, type);
		}

		::System::Void _ProcessAutoSettle(::RPG::GameCore::ChallengeGroupType type, ::System::UInt32 curChallengeID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* challengeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__PROCESSAUTOSETTLE_OFFSET))(this, type, curChallengeID, challengeIDList);
		}

		::RPG::Client::ChallengeAutoSettleResult* _DeSerializeFromHashset(::RPG::Client::PrefHashSet_1<::System::UInt32>* hashSet)
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__DESERIALIZEFROMHASHSET_OFFSET))(this, hashSet);
		}

		::System::Void _SerializeToHashset(::RPG::Client::PrefHashSet_1<::System::UInt32>*& hashSet, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* challengeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*&, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SERIALIZETOHASHSET_OFFSET))(this, hashSet, challengeIDList);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* _GetAutoSettleResultPrefHashSet(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETAUTOSETTLERESULTPREFHASHSET_OFFSET))(this, type);
		}

		::System::UInt32 GetLastStoryChallengeGroupIDFromCache()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPIDFROMCACHE_OFFSET))(this);
		}

		::System::Void SaveLastStoryChallengeGroupIDToCache(::System::UInt32 challengeGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTSTORYCHALLENGEGROUPIDTOCACHE_OFFSET))(this, challengeGroupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableStoryGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESTORYGROUPDATA_OFFSET))(this);
		}

		::System::Void EnterStoryChallenge(::System::UInt32 challengeID, ::System::UInt32 buff1, ::System::UInt32 buff2, ::System::Collections::Generic::List_1<::System::UInt32>* team1, ::System::Collections::Generic::List_1<::System::UInt32>* team2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERSTORYCHALLENGE_OFFSET))(this, challengeID, buff1, buff2, team1, team2);
		}

		::System::UInt32 GetLastStoryChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Boolean HasNewStoryChallengeGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASNEWSTORYCHALLENGEGROUP_OFFSET))(this);
		}

		::System::Boolean HasStoryRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASSTORYREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* get_StoryGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_STORYGROUPDATALIST_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* GetPreMissionFinishedChallengeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETPREMISSIONFINISHEDCHALLENGEDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* GetChallengeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATAS_OFFSET))(this);
		}

		::RPG::Client::ChallengeData* GetChallengeData(::System::UInt32 id)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATA_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetChallengeGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetChallengeGroupDataByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATABYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetNextScheduleChallengeGroupDataByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATABYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetNextChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNEXTCHALLENGEGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetCurrentGroupDataByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCURRENTGROUPDATABYTYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetInScheduleGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetInScheduleGroupDatasByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATASBYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetChallengeGroupData(::System::UInt32 challengeGroupID)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATA_OFFSET))(this, challengeGroupID);
		}

		::System::UInt32 GetChallengeHistoryMaxLevelByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEHISTORYMAXLEVELBYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetLastRefreshChallengeData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTREFRESHCHALLENGEDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetLatestScheduleChallengeGroupDataByGroupType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATABYGROUPTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetFirstEndGroupDataByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETFIRSTENDGROUPDATABYTYPE_OFFSET))(this, type);
		}

		::System::Int32 GetTotalStarsNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETTOTALSTARSNUM_OFFSET))(this);
		}

		::System::UInt32 GetAlreadyGotStarsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETALREADYGOTSTARSNUM_OFFSET))(this);
		}

		::System::Void EnterChallenge(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::UInt32>* team1, ::System::Collections::Generic::List_1<::System::UInt32>* team2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERCHALLENGE_OFFSET))(this, challengeID, team1, team2);
		}

		::RPG::Client::Promises::Promise* LeaveChallenge()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_LEAVECHALLENGE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GetCurChallengeState()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCURCHALLENGESTATE_OFFSET))(this);
		}

		::System::Void TakeCumulativeReward(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_TAKECUMULATIVEREWARD_OFFSET))(this, groupID);
		}

		::RPG::Client::Promises::Promise* RefreshAllChallengeData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_REFRESHALLCHALLENGEDATA_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeRequiredMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEREQUIREDMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Boolean IsNeedShowUpdateHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ISNEEDSHOWUPDATEHINT_OFFSET))(this);
		}

		::System::Void FillNewChallengeGroupIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* challengeGroupIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_FILLNEWCHALLENGEGROUPIDSTO_OFFSET))(this, challengeGroupIDs);
		}

		::System::Void _OnCmdGetChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetCurChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCURCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartPartialChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTPARTIALCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SaveLastEnteredChallengeID(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SAVELASTENTEREDCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Void _OnCmdLeaveChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDLEAVECHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeChallengeRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDTAKECHALLENGEREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddDisplayItemDatasByRewards(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* rewardList, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET))(this, rewardList, list);
		}

		::System::Void _OnChallengeChangeTeam(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGECHANGETEAM_OFFSET))(this, arg);
		}

		::System::Void _OnCmdChallengeLineupNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGELINEUPNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _ClearCurChallengeInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CLEARCURCHALLENGEINSTANCE_OFFSET))(this);
		}

		::System::Void _RecoverCurChallengeInstance(::Class_1_3AD2528CD53B1639_2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__RECOVERCURCHALLENGEINSTANCE_OFFSET))(this, data);
		}

		::RPG::Client::ChallengeInstance* _CreateChallengeInstance(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::ChallengeInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEINSTANCE_OFFSET))(this, challengeID);
		}

		::System::Void _OnCmdGetChallengeGroupStatisticsScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGEGROUPSTATISTICSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _FillNewChallengeGroupIDsByTypeTo(::RPG::GameCore::ChallengeGroupType type, ::System::Collections::Generic::ICollection_1<::System::UInt32>* challengeGroupIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__FILLNEWCHALLENGEGROUPIDSBYTYPETO_OFFSET))(this, type, challengeGroupIDs);
		}

		::RPG::Client::AvatarData* GetUpgradeAvailableAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETUPGRADEAVAILABLEAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void _LoadChallengeGroupDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEGROUPDATACONFIG_OFFSET))(this);
		}

		::System::Void _LoadChallengeDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEDATACONFIG_OFFSET))(this);
		}

		::RPG::Client::ChallengeData* _CreateChallengeData(::System::UInt32 challengeID, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEDATA_OFFSET))(this, challengeID, groupType);
		}

		::RPG::Client::ChallengeGroupData* _CreateChallengeGroupData(::System::UInt32 groupID, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEGROUPDATA_OFFSET))(this, groupID, groupType);
		}

		::System::Void _AddChallengeData(::RPG::GameCore::ChallengeMazeConfigRow* configRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDCHALLENGEDATA_OFFSET))(this, configRow);
		}

		::System::Void SetContinueChallengeData(::System::Boolean showChallengeGroup, ::System::Boolean showChallengeDetail, ::System::Boolean useLastTeamData, ::System::UInt32 challengeGroupID, ::System::UInt32 challengeDataID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SETCONTINUECHALLENGEDATA_OFFSET))(this, showChallengeGroup, showChallengeDetail, useLastTeamData, challengeGroupID, challengeDataID);
		}

		::System::Void ClearContinueChallengeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARCONTINUECHALLENGEDATA_OFFSET))(this);
		}

		::System::Void _ContinueChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CONTINUECHALLENGE_OFFSET))(this);
		}

		::System::Boolean _IsSkipContinue(::System::UInt32 challengeGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ISSKIPCONTINUE_OFFSET))(this, challengeGroupID);
		}

		::System::UInt32 _GetContinueMapEntranceID(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETCONTINUEMAPENTRANCEID_OFFSET))(this, type);
		}

		::Il2CppArray<::System::UInt32>* _GetForbidContinueMainMissionIDs(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUEMAINMISSIONIDS_OFFSET))(this, type);
		}

		::Il2CppArray<::System::UInt32>* _GetForbidContinueSubmissionIDs(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUESUBMISSIONIDS_OFFSET))(this, type);
		}

		::System::Void _TryShowChallengeResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__TRYSHOWCHALLENGERESULT_OFFSET))(this);
		}

		::System::Void SaveLineupSaveData(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarList1, ::System::Collections::Generic::List_1<::System::UInt32>* avatarList2, ::System::Collections::Generic::List_1<::System::UInt32>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELINEUPSAVEDATA_OFFSET))(this, challengeID, avatarList1, avatarList2, buffList);
		}

		::RPG::Client::ChallengeLineupSaveData* GetChallengeLineupSaveData(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::ChallengeLineupSaveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGELINEUPSAVEDATA_OFFSET))(this, challengeID);
		}

		::RPG::Client::ChallengeLineupSaveData* GetGroupLastEnteredChallengeLineupSaveData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::ChallengeLineupSaveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETGROUPLASTENTEREDCHALLENGELINEUPSAVEDATA_OFFSET))(this, groupID);
		}

		::RPG::Client::ChallengeInstance* get_CurrentChallengeInstance()
		{
			return ((::RPG::Client::ChallengeInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_CURRENTCHALLENGEINSTANCE_OFFSET))(this);
		}

		::System::UInt32 get_LastChallengeUnlockGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_LASTCHALLENGEUNLOCKGROUPID_OFFSET))(this);
		}

		::System::Void set_LastChallengeUnlockGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SET_LASTCHALLENGEUNLOCKGROUPID_OFFSET))(this, value);
		}

		::System::Void _ReSettleChallenge_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__RESETTLECHALLENGE_B__38_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
