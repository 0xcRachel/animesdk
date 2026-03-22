#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/BoxingClubUIStageEnum.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class BoxingClubLevelInstance; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class BoxingClubActivityQuestConfigRow; }
namespace RPG::GameCore { class BoxingClubPerformanceConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E06410)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETBOXINGCLUBLEVELINSTANCEBYTYPE_OFFSET UNITYSDK_OFFSET(0x8E09BB0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETFINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0x8E082A0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0x8E08660)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETREDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0x8E08240)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETREWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0x8E06CF0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETSTAGEBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x8E06C10)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_BOXINGCLUBLEVELDICT_OFFSET UNITYSDK_OFFSET(0x8E0C290)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_FINISHEDQUESTLISTDIC_OFFSET UNITYSDK_OFFSET(0x8E0C250)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_REDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0x8E0C270)
#define RPG_CLIENT_BOXINGCLUBMODULE_GIVEUPMATCH_OFFSET UNITYSDK_OFFSET(0x8E06700)
#define RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELNOTPASSRELEASED_OFFSET UNITYSDK_OFFSET(0x8E089D0)
#define RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELRELEASED_OFFSET UNITYSDK_OFFSET(0x8E005E0)
#define RPG_CLIENT_BOXINGCLUBMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8E05FA0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISLEVELINSTANCEUNREAD_OFFSET UNITYSDK_OFFSET(0x8E08DC0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISNORMALTABUNLOCK_OFFSET UNITYSDK_OFFSET(0x8E06F40)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPHONEMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x8E07080)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x8E06FE0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCETABUNLOCK_OFFSET UNITYSDK_OFFSET(0x8E06DB0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ONNEWLEVELNOTIFIED_OFFSET UNITYSDK_OFFSET(0x8E08B90)
#define RPG_CLIENT_BOXINGCLUBMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x8E08300)
#define RPG_CLIENT_BOXINGCLUBMODULE_SENDGETCHALLENGEDATAREQ_OFFSET UNITYSDK_OFFSET(0x8E084C0)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_BOXINGCLUBLEVELDICT_OFFSET UNITYSDK_OFFSET(0x8E0C2A0)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_FINISHEDQUESTLISTDIC_OFFSET UNITYSDK_OFFSET(0x8E0C260)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_REDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0x8E0C280)
#define RPG_CLIENT_BOXINGCLUBMODULE_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x8E06630)
#define RPG_CLIENT_BOXINGCLUBMODULE_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x8E06550)
#define RPG_CLIENT_BOXINGCLUBMODULE_TELEPORTTOFISTCLUB_OFFSET UNITYSDK_OFFSET(0x8E08800)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x8E08570)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYGETLOCALTEAMBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x8E09180)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYGETTRIALAVATARSBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x8E09880)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWCHALLENGEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x8E03000)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWRESONANCECHALLENGEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x8E06880)
#define RPG_CLIENT_BOXINGCLUBMODULE_UPDATECACHEDENTRANCEPANELREDDOT_OFFSET UNITYSDK_OFFSET(0x8E08E70)
#define RPG_CLIENT_BOXINGCLUBMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E06080)
#define RPG_CLIENT_BOXINGCLUBMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E06130)
#define RPG_CLIENT_BOXINGCLUBMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E0C2B0)
#define RPG_CLIENT_BOXINGCLUBMODULE__CUSTOMINIT_OFFSET UNITYSDK_OFFSET(0x8E06350)
#define RPG_CLIENT_BOXINGCLUBMODULE__GETCHALLENGESTAGE_OFFSET UNITYSDK_OFFSET(0x8E067E0)
#define RPG_CLIENT_BOXINGCLUBMODULE__GETRESONANCECHALLENGESTAGE_OFFSET UNITYSDK_OFFSET(0x8E06B80)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITLEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0x8E09CC0)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITNORMALUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0x8E0ADE0)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITQUESTDIC_OFFSET UNITYSDK_OFFSET(0x8E0A210)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCERESIDENTQUESTLIST_OFFSET UNITYSDK_OFFSET(0x8E0A8D0)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCEUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0x8E0AAA0)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x8E09F70)
#define RPG_CLIENT_BOXINGCLUBMODULE__ISLOCALENTRANCEPANELUNREAD_OFFSET UNITYSDK_OFFSET(0x8E09080)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONBOXINGCLUBREWARDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8E0B4E0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDBOXINGCLUBCHALLENGEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8E0BBF0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBRESONANCESCRSP_OFFSET UNITYSDK_OFFSET(0x8E0BD60)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBSTAGEOPTIONALBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x8E0BF10)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDSETBOXINGCLUBRESONANCESCRSP_OFFSET UNITYSDK_OFFSET(0x8E0C0C0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONGETBOXINGCLUBINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8E0AFA0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONGIVEUPBOXINGCLUBCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x8E0BA70)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONMATCHBOXINGCLUBOPPONENTSCRSP_OFFSET UNITYSDK_OFFSET(0x8E0B770)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONSTARTBOXINGCLUBBATTLESCRSP_OFFSET UNITYSDK_OFFSET(0x8E0B8D0)
#define RPG_CLIENT_BOXINGCLUBMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0x8E07120)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E0C4B0)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8E0C3C0)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E0C450)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E0C4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubModule_TypeDefinitionIndex = 49963;

	class BoxingClubModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NormalUnlockMissionList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonancePhoneMessageSubMission; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonanceResidentQuestList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _EntrancePanelReddot; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>*>* _RewardQuestSeriesListDic; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonanceUnlockMissionList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* _BoxingClubLevelDict_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _RedDotQuestSeriesDic_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemIDList; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _FinishedQuestListDic_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* ResonanceResidentRedDotQuestList; // 0x60
		::System::UInt32 _ResonancePreMission; // 0x68
		::System::Int32 LastBattleChallengeID; // 0x6C
		::System::Int32 LastTryBattleChallengeID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void StartMatch(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_STARTMATCH_OFFSET))(this, challengeID, avatarIDs);
		}

		::System::Void StartBattle(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_STARTBATTLE_OFFSET))(this, challengeID);
		}

		::System::Void GiveUpMatch(::System::UInt32 challengeID, ::System::Boolean isGiveUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GIVEUPMATCH_OFFSET))(this, challengeID, isGiveUp);
		}

		::System::Void TryShowChallengeMainPage(::System::UInt32 challengeID, ::System::Boolean mayNeedPreBuffDialog)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWCHALLENGEMAINPAGE_OFFSET))(this, challengeID, mayNeedPreBuffDialog);
		}

		::System::Void TryShowResonanceChallengeMainPage(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWRESONANCECHALLENGEMAINPAGE_OFFSET))(this, challengeID);
		}

		::RPG::Client::BoxingClubUIStageEnum GetStageByChallengeID(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::BoxingClubUIStageEnum(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETSTAGEBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>* GetRewardQuestSeriesList(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETREWARDQUESTSERIESLIST_OFFSET))(this, type);
		}

		::System::Boolean IsResonanceTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCETABUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsNormalTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISNORMALTABUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsResonancePreMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPREMISSIONFINISH_OFFSET))(this);
		}

		::System::Boolean IsResonancePhoneMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPHONEMISSIONFINISH_OFFSET))(this);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, o);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRedDotQuestSeriesDic(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETREDDOTQUESTSERIESDIC_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFinishedQuestList(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETFINISHEDQUESTLIST_OFFSET))(this, type);
		}

		::System::Void RequestRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::Void SendGetChallengeDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SENDGETCHALLENGEDATAREQ_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubPerformanceConfigRow*>* GetPerformanceConfig()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubPerformanceConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETPERFORMANCECONFIG_OFFSET))(this);
		}

		::System::Void TeleportToFistClub(::System::UInt32 entranceID, ::System::UInt32 mappingInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TELEPORTTOFISTCLUB_OFFSET))(this, entranceID, mappingInfoID);
		}

		::System::Boolean HasNewLevelReleased(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELRELEASED_OFFSET))(this, type);
		}

		::System::Boolean HasNewLevelNotPassReleased(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELNOTPASSRELEASED_OFFSET))(this, type);
		}

		::System::Void OnNewLevelNotified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ONNEWLEVELNOTIFIED_OFFSET))(this);
		}

		::System::Boolean IsLevelInstanceUnRead(::RPG::Client::BoxingClubLevelInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISLEVELINSTANCEUNREAD_OFFSET))(this, instance);
		}

		::System::Void UpdateCachedEntrancePanelReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_UPDATECACHEDENTRANCEPANELREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* TryGetLocalTeamByChallengeID(::System::UInt32 challengeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYGETLOCALTEAMBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* TryGetTrialAvatarsByChallengeID(::System::UInt32 challengeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYGETTRIALAVATARSBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BoxingClubLevelInstance*>* GetBoxingClubLevelInstanceByType(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BoxingClubLevelInstance*>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETBOXINGCLUBLEVELINSTANCEBYTYPE_OFFSET))(this, type);
		}

		::System::Void _CustomInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__CUSTOMINIT_OFFSET))(this);
		}

		::System::Void _InitLevelInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITLEVELINSTANCE_OFFSET))(this);
		}

		::System::Void _InitRewardQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITREWARDQUEST_OFFSET))(this);
		}

		::System::Void _InitResonanceResidentQuestList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCERESIDENTQUESTLIST_OFFSET))(this);
		}

		::System::Void _InitResonanceUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCEUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitNormalUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITNORMALUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitQuestDic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITQUESTDIC_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::BoxingClubUIStageEnum _GetChallengeStage(::RPG::Client::BoxingClubLevelInstance* instance)
		{
			return ((::RPG::Client::BoxingClubUIStageEnum(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__GETCHALLENGESTAGE_OFFSET))(this, instance);
		}

		::System::UInt32 _GetResonanceChallengeStage(::RPG::Client::BoxingClubLevelInstance* instance)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__GETRESONANCECHALLENGESTAGE_OFFSET))(this, instance);
		}

		::System::Boolean _IsLocalEntrancePanelUnread(::RPG::Client::BoxingClubLevelInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ISLOCALENTRANCEPANELUNREAD_OFFSET))(this, instance);
		}

		::System::Void _OnGetBoxingClubInfoScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONGETBOXINGCLUBINFOSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnBoxingClubRewardScNotify(::System::UInt16 cmdID, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONBOXINGCLUBREWARDSCNOTIFY_OFFSET))(this, cmdID, ntfObject);
		}

		::System::Void _OnMatchBoxingClubOpponentScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONMATCHBOXINGCLUBOPPONENTSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnStartBoxingClubBattleScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONSTARTBOXINGCLUBBATTLESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnGiveUpBoxingClubChallengeScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONGIVEUPBOXINGCLUBCHALLENGESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdBoxingClubChallengeUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDBOXINGCLUBCHALLENGEUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdChooseBoxingClubResonanceScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBRESONANCESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdChooseBoxingClubStageOptionalBuffScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBSTAGEOPTIONALBUFFSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdSetBoxingClubResonanceScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDSETBOXINGCLUBRESONANCESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_FinishedQuestListDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_FINISHEDQUESTLISTDIC_OFFSET))(this);
		}

		::System::Void set_FinishedQuestListDic(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_FINISHEDQUESTLISTDIC_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_RedDotQuestSeriesDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_REDDOTQUESTSERIESDIC_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeriesDic(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_REDDOTQUESTSERIESDIC_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* get_BoxingClubLevelDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_BOXINGCLUBLEVELDICT_OFFSET))(this);
		}

		::System::Void set_BoxingClubLevelDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_BOXINGCLUBLEVELDICT_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
