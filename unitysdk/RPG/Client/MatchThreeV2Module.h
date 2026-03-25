#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"

class Class_1_FBD57FD5B46A130F;
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client { class MatchThreeGame; }
namespace RPG::Client { class MatchThreeRoyaleDataManager; }
namespace RPG::Client { class MatchThreeV2ActivityInfo; }
namespace RPG::Client { class MatchThreeV2ArenaPvpManager; }
namespace RPG::Client { class MatchThreeV2BirdInfos; }
namespace RPG::Client { class MatchThreeV2ChallengerInfos; }
namespace RPG::Client { class MatchThreeV2InviteToastService; }
namespace RPG::Client { class MatchThreeV2LevelInfos; }
namespace RPG::Client { class MatchThreeV2PlayerData; }
namespace RPG::Client { class MatchThreeV2PropInfos; }
namespace RPG::Client { class MatchThreeV2PvpScoreInfos; }
namespace RPG::Client { class MatchThreeV2RankInfos; }
namespace RPG::Client { class MatchThreeV2ReputationInfos; }
namespace RPG::Client { class MatchThreeV2RewardInfo; }
namespace RPG::Client { class MatchThreeV2SoloPvpManager; }
namespace RPG::Client { class MatchThreeV2UICounter; }
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2MODULE_CREATEARENAPVPGAME_OFFSET UNITYSDK_OFFSET(0x9B62F50)
#define RPG_CLIENT_MATCHTHREEV2MODULE_CREATEROYALEPVPGAME_OFFSET UNITYSDK_OFFSET(0x9B5C780)
#define RPG_CLIENT_MATCHTHREEV2MODULE_CREATESOLOPVPGAME_OFFSET UNITYSDK_OFFSET(0x9B6DEA0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B6D450)
#define RPG_CLIENT_MATCHTHREEV2MODULE_DOENDGAME_OFFSET UNITYSDK_OFFSET(0x9B6E240)
#define RPG_CLIENT_MATCHTHREEV2MODULE_ENDGAME_OFFSET UNITYSDK_OFFSET(0x9B6D680)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GETOFFERDATA_OFFSET UNITYSDK_OFFSET(0x9B6E2B0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GETSCORELIMIT_OFFSET UNITYSDK_OFFSET(0x9B6E420)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_ACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0x9B6BF30)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_ARENAPVPMANAGER_OFFSET UNITYSDK_OFFSET(0x9B6C0B0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_BIRDINFOS_OFFSET UNITYSDK_OFFSET(0x9B6BF90)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_CHALLENGERINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C010)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9B6C130)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9B59F60)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_INVITETOASTSERVICE_OFFSET UNITYSDK_OFFSET(0x9B6C0F0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_ISGAMERUNNING_OFFSET UNITYSDK_OFFSET(0x9B6C150)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_LEVELINFOS_OFFSET UNITYSDK_OFFSET(0x9B6BFB0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9B6BF70)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_PROPINFOS_OFFSET UNITYSDK_OFFSET(0x9B6BFD0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_PVPSCOREINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C070)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_RANKINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C050)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_REPUTATIONINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C030)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_REWARDINFO_OFFSET UNITYSDK_OFFSET(0x9B6BF50)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_ROYALEDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x9B6C0D0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_SOLOPVPMANAGER_OFFSET UNITYSDK_OFFSET(0x9B6C090)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_STARTARGETINFOS_OFFSET UNITYSDK_OFFSET(0x9B6BFF0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_UICOUNTER_OFFSET UNITYSDK_OFFSET(0x9B6C110)
#define RPG_CLIENT_MATCHTHREEV2MODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9B6C160)
#define RPG_CLIENT_MATCHTHREEV2MODULE_ISSCOREREACHLIMIT_OFFSET UNITYSDK_OFFSET(0x9B6E590)
#define RPG_CLIENT_MATCHTHREEV2MODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9B6CC20)
#define RPG_CLIENT_MATCHTHREEV2MODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9B6D1F0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_QUITGAME_OFFSET UNITYSDK_OFFSET(0x9B60660)
#define RPG_CLIENT_MATCHTHREEV2MODULE_RESTARTPVEONEONONEGAME_OFFSET UNITYSDK_OFFSET(0x9B6DC50)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SENDLEVELRESULTTOSERVER_OFFSET UNITYSDK_OFFSET(0x9B6A710)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_ACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0x9B6BF40)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_ARENAPVPMANAGER_OFFSET UNITYSDK_OFFSET(0x9B6C0C0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_BIRDINFOS_OFFSET UNITYSDK_OFFSET(0x9B6BFA0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_CHALLENGERINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C020)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9B6C140)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_INVITETOASTSERVICE_OFFSET UNITYSDK_OFFSET(0x9B6C100)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_LEVELINFOS_OFFSET UNITYSDK_OFFSET(0x9B6BFC0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9B6BF80)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_PROPINFOS_OFFSET UNITYSDK_OFFSET(0x9B6BFE0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_PVPSCOREINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C080)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_RANKINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C060)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_REPUTATIONINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C040)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_REWARDINFO_OFFSET UNITYSDK_OFFSET(0x9B6BF60)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_ROYALEDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x9B6C0E0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_SOLOPVPMANAGER_OFFSET UNITYSDK_OFFSET(0x9B6C0A0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_STARTARGETINFOS_OFFSET UNITYSDK_OFFSET(0x9B6C000)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_UICOUNTER_OFFSET UNITYSDK_OFFSET(0x9B6C120)
#define RPG_CLIENT_MATCHTHREEV2MODULE_STARTPVEONEONONEGAME_OFFSET UNITYSDK_OFFSET(0x9B6D740)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B6D2F0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B6A190)
#define RPG_CLIENT_MATCHTHREEV2MODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6E610)
#define RPG_CLIENT_MATCHTHREEV2MODULE__DISPOSECURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9B6E1E0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__INITREQ_OFFSET UNITYSDK_OFFSET(0x9B6CDD0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9B6D360)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9B6A310)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONLOGINFINISH_B__86_0_OFFSET UNITYSDK_OFFSET(0x9B6E630)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x9B6A610)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2BATTLEITEMLEVELUPSCRSP_OFFSET UNITYSDK_OFFSET(0x9B6BBA0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2LEVELENDSCRSP_OFFSET UNITYSDK_OFFSET(0x9B6AC40)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2PVPFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9B6A590)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2SCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9B6A510)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2SETBIRDPOSSCRSP_OFFSET UNITYSDK_OFFSET(0x9B6BC40)
#define RPG_CLIENT_MATCHTHREEV2MODULE__RECORDNEWREPUTATIONTOPREF_OFFSET UNITYSDK_OFFSET(0x9B6B720)
#define RPG_CLIENT_MATCHTHREEV2MODULE__RECORDNEWUNLOCKPROPTOPREF_OFFSET UNITYSDK_OFFSET(0x9B6B580)
#define RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B6E9A0)
#define RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9B6E7F0)
#define RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9B6E880)
#define RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9B6E8E0)
#define RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B6E940)
#define RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B6E790)
#define RPG_CLIENT_MATCHTHREEV2MODULE___INITREQ_B__87_0_OFFSET UNITYSDK_OFFSET(0x9B6E640)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2Module_TypeDefinitionIndex = 53654;

	class MatchThreeV2Module : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::MatchThreeV2InviteToastService* _InviteToastService_k__BackingField; // 0x10
		::RPG::Client::MatchThreeV2RankInfos* _RankInfos_k__BackingField; // 0x18
		::RPG::Client::MatchThreeV2PropInfos* _PropInfos_k__BackingField; // 0x20
		::RPG::Client::MatchThreeV2PvpScoreInfos* _PvpScoreInfos_k__BackingField; // 0x28
		::RPG::Client::MatchThreeRoyaleDataManager* _RoyaleDataManager_k__BackingField; // 0x30
		::RPG::Client::MatchThreeV2ActivityInfo* _ActivityInfo_k__BackingField; // 0x38
		::RPG::Client::MatchThreeV2RewardInfo* _RewardInfo_k__BackingField; // 0x40
		::RPG::Client::MatchThreeV2ReputationInfos* _ReputationInfos_k__BackingField; // 0x48
		::RPG::Client::MatchThreeV2ArenaPvpManager* _ArenaPvpManager_k__BackingField; // 0x50
		::RPG::Client::MatchThreeGame* _CurrentGame_k__BackingField; // 0x58
		::RPG::Client::MatchThreeV2ChallengerInfos* _ChallengerInfos_k__BackingField; // 0x60
		::RPG::Client::MatchThreeV2PlayerData* _PlayerData_k__BackingField; // 0x68
		::RPG::Client::MatchThreeV2SoloPvpManager* _SoloPvpManager_k__BackingField; // 0x70
		::Class_1_FBD57FD5B46A130F* _StarTargetInfos_k__BackingField; // 0x78
		::RPG::Client::MatchThreeV2LevelInfos* _LevelInfos_k__BackingField; // 0x80
		::RPG::Client::ScheduleTask* _WaitForScheduleOpenTask; // 0x88
		::RPG::Client::MatchThreeV2UICounter* _UICounter_k__BackingField; // 0x90
		::RPG::Client::MatchThreeV2BirdInfos* _BirdInfos_k__BackingField; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMatchThreeV2ScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2SCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMatchThreeV2PvpFinishScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2PVPFINISHSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMatchPlayDataUpdated(::RPG::Client::MatchPlayRecord* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHPLAYDATAUPDATED_OFFSET))(this, data);
		}

		::System::Void SendLevelResultToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SENDLEVELRESULTTOSERVER_OFFSET))(this);
		}

		::System::Void _OnMatchThreeV2LevelEndScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2LEVELENDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _RecordNewUnlockPropToPref(::System::UInt32 propID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__RECORDNEWUNLOCKPROPTOPREF_OFFSET))(this, propID);
		}

		::System::Void _RecordNewReputationToPref(::System::UInt32 oldReputation, ::System::UInt32 newReputation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__RECORDNEWREPUTATIONTOPREF_OFFSET))(this, oldReputation, newReputation);
		}

		::System::Void _OnMatchThreeV2BattleItemLevelUpScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2BATTLEITEMLEVELUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMatchThreeV2SetBirdPosScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2SETBIRDPOSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		static ::RPG::Client::MatchThreeV2Module* get_Instance()
		{
			return ((::RPG::Client::MatchThreeV2Module*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_INSTANCE_OFFSET))();
		}

		::RPG::Client::MatchThreeV2ActivityInfo* get_ActivityInfo()
		{
			return ((::RPG::Client::MatchThreeV2ActivityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_ACTIVITYINFO_OFFSET))(this);
		}

		::System::Void set_ActivityInfo(::RPG::Client::MatchThreeV2ActivityInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ActivityInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_ACTIVITYINFO_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2RewardInfo* get_RewardInfo()
		{
			return ((::RPG::Client::MatchThreeV2RewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_REWARDINFO_OFFSET))(this);
		}

		::System::Void set_RewardInfo(::RPG::Client::MatchThreeV2RewardInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2RewardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_REWARDINFO_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2PlayerData* get_PlayerData()
		{
			return ((::RPG::Client::MatchThreeV2PlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::MatchThreeV2PlayerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_PLAYERDATA_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2BirdInfos* get_BirdInfos()
		{
			return ((::RPG::Client::MatchThreeV2BirdInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_BIRDINFOS_OFFSET))(this);
		}

		::System::Void set_BirdInfos(::RPG::Client::MatchThreeV2BirdInfos* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2BirdInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_BIRDINFOS_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2LevelInfos* get_LevelInfos()
		{
			return ((::RPG::Client::MatchThreeV2LevelInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_LEVELINFOS_OFFSET))(this);
		}

		::System::Void set_LevelInfos(::RPG::Client::MatchThreeV2LevelInfos* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_LEVELINFOS_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2PropInfos* get_PropInfos()
		{
			return ((::RPG::Client::MatchThreeV2PropInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_PROPINFOS_OFFSET))(this);
		}

		::System::Void set_PropInfos(::RPG::Client::MatchThreeV2PropInfos* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PropInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_PROPINFOS_OFFSET))(this, value);
		}

		::Class_1_FBD57FD5B46A130F* get_StarTargetInfos()
		{
			return ((::Class_1_FBD57FD5B46A130F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_STARTARGETINFOS_OFFSET))(this);
		}

		::System::Void set_StarTargetInfos(::Class_1_FBD57FD5B46A130F* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBD57FD5B46A130F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_STARTARGETINFOS_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2ChallengerInfos* get_ChallengerInfos()
		{
			return ((::RPG::Client::MatchThreeV2ChallengerInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_CHALLENGERINFOS_OFFSET))(this);
		}

		::System::Void set_ChallengerInfos(::RPG::Client::MatchThreeV2ChallengerInfos* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ChallengerInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_CHALLENGERINFOS_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2ReputationInfos* get_ReputationInfos()
		{
			return ((::RPG::Client::MatchThreeV2ReputationInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_REPUTATIONINFOS_OFFSET))(this);
		}

		::System::Void set_ReputationInfos(::RPG::Client::MatchThreeV2ReputationInfos* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_REPUTATIONINFOS_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2RankInfos* get_RankInfos()
		{
			return ((::RPG::Client::MatchThreeV2RankInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_RANKINFOS_OFFSET))(this);
		}

		::System::Void set_RankInfos(::RPG::Client::MatchThreeV2RankInfos* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2RankInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_RANKINFOS_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2PvpScoreInfos* get_PvpScoreInfos()
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_PVPSCOREINFOS_OFFSET))(this);
		}

		::System::Void set_PvpScoreInfos(::RPG::Client::MatchThreeV2PvpScoreInfos* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_PVPSCOREINFOS_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2SoloPvpManager* get_SoloPvpManager()
		{
			return ((::RPG::Client::MatchThreeV2SoloPvpManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_SOLOPVPMANAGER_OFFSET))(this);
		}

		::System::Void set_SoloPvpManager(::RPG::Client::MatchThreeV2SoloPvpManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2SoloPvpManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_SOLOPVPMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2ArenaPvpManager* get_ArenaPvpManager()
		{
			return ((::RPG::Client::MatchThreeV2ArenaPvpManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_ARENAPVPMANAGER_OFFSET))(this);
		}

		::System::Void set_ArenaPvpManager(::RPG::Client::MatchThreeV2ArenaPvpManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ArenaPvpManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_ARENAPVPMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeRoyaleDataManager* get_RoyaleDataManager()
		{
			return ((::RPG::Client::MatchThreeRoyaleDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_ROYALEDATAMANAGER_OFFSET))(this);
		}

		::System::Void set_RoyaleDataManager(::RPG::Client::MatchThreeRoyaleDataManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeRoyaleDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_ROYALEDATAMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2InviteToastService* get_InviteToastService()
		{
			return ((::RPG::Client::MatchThreeV2InviteToastService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_INVITETOASTSERVICE_OFFSET))(this);
		}

		::System::Void set_InviteToastService(::RPG::Client::MatchThreeV2InviteToastService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2InviteToastService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_INVITETOASTSERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2UICounter* get_UICounter()
		{
			return ((::RPG::Client::MatchThreeV2UICounter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_UICOUNTER_OFFSET))(this);
		}

		::System::Void set_UICounter(::RPG::Client::MatchThreeV2UICounter* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2UICounter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_UICOUNTER_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeGame* get_CurrentGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_CURRENTGAME_OFFSET))(this);
		}

		::System::Void set_CurrentGame(::RPG::Client::MatchThreeGame* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_CURRENTGAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsGameRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_ISGAMERUNNING_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void _InitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__INITREQ_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void StartPVEOneOnOneGame(::System::UInt32 levelID, ::System::UInt32 leftBirdID, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* propLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_STARTPVEONEONONEGAME_OFFSET))(this, levelID, leftBirdID, propLeft);
		}

		::System::Void RestartPVEOneOnOneGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_RESTARTPVEONEONONEGAME_OFFSET))(this);
		}

		::System::Void CreateSoloPvpGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_CREATESOLOPVPGAME_OFFSET))(this);
		}

		::System::Void CreateArenaPvpGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_CREATEARENAPVPGAME_OFFSET))(this);
		}

		::System::Void CreateRoyalePvpGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_CREATEROYALEPVPGAME_OFFSET))(this);
		}

		::System::Void QuitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_QUITGAME_OFFSET))(this);
		}

		::System::Void EndGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_ENDGAME_OFFSET))(this);
		}

		::System::Void DoEndGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_DOENDGAME_OFFSET))(this);
		}

		::System::Void _DisposeCurrentGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__DISPOSECURRENTGAME_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* GetOfferData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GETOFFERDATA_OFFSET))(this);
		}

		::System::UInt32 GetScoreLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GETSCORELIMIT_OFFSET))(this);
		}

		::System::Boolean IsScoreReachLimit(::RPG::GameCore::MultiPlayerGameMode gameMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_ISSCOREREACHLIMIT_OFFSET))(this, gameMode);
		}

		::System::Void _OnLoginFinish_b__86_0(::RPG::Client::MatchPlayRecord* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONLOGINFINISH_B__86_0_OFFSET))(this, data);
		}

		::System::Void __InitReq_b__87_0(::RPG::Client::ScheduleData* _)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___INITREQ_B__87_0_OFFSET))(this, _);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
