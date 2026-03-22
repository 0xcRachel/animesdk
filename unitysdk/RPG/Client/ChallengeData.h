#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData_ChallengeOpenResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_910AC58BB2D45F21;
class Class_1_B9C9FEF982623D49;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChallengeRecommendData; }
namespace RPG::Client { class CheckItemFinishMainMission; }
namespace RPG::Client { class CheckItemReachPlayerLevel; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEDATA_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x8E66CC0)
#define RPG_CLIENT_CHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E667E0)
#define RPG_CLIENT_CHALLENGEDATA_GETALLMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x8E697B0)
#define RPG_CLIENT_CHALLENGEDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x8E63500)
#define RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0x8E689A0)
#define RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTROW_OFFSET UNITYSDK_OFFSET(0x8E68A20)
#define RPG_CLIENT_CHALLENGEDATA_GETCHALLENGETARGETDATALIST_OFFSET UNITYSDK_OFFSET(0x8E66F90)
#define RPG_CLIENT_CHALLENGEDATA_GETEVENTCOUNTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x8E69690)
#define RPG_CLIENT_CHALLENGEDATA_GETISOPEN_OFFSET UNITYSDK_OFFSET(0x8E67700)
#define RPG_CLIENT_CHALLENGEDATA_GETMONSTERDATABYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x8E68A90)
#define RPG_CLIENT_CHALLENGEDATA_GETMONSTERWEAKLISTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x8E69720)
#define RPG_CLIENT_CHALLENGEDATA_GETOPENRESULT_OFFSET UNITYSDK_OFFSET(0x8E67CD0)
#define RPG_CLIENT_CHALLENGEDATA_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x8E69B40)
#define RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x8E66CA0)
#define RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0x8E69DA0)
#define RPG_CLIENT_CHALLENGEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x8E69E60)
#define RPG_CLIENT_CHALLENGEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x8E69F20)
#define RPG_CLIENT_CHALLENGEDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x8E69BC0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8E69B80)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8E69EA0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0x8E69BE0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISPERFECTFINISH_OFFSET UNITYSDK_OFFSET(0x8E69EC0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x8E69E40)
#define RPG_CLIENT_CHALLENGEDATA_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x8E69F60)
#define RPG_CLIENT_CHALLENGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8E68850)
#define RPG_CLIENT_CHALLENGEDATA_GET_PRECHALLENGEID_OFFSET UNITYSDK_OFFSET(0x8E68830)
#define RPG_CLIENT_CHALLENGEDATA_GET_PRELEVEL_OFFSET UNITYSDK_OFFSET(0x8E68810)
#define RPG_CLIENT_CHALLENGEDATA_GET_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x8E687D0)
#define RPG_CLIENT_CHALLENGEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x8E61C10)
#define RPG_CLIENT_CHALLENGEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8E69BA0)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCOREFIRST_OFFSET UNITYSDK_OFFSET(0x8E69DC0)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCORESECOND_OFFSET UNITYSDK_OFFSET(0x8E69DE0)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x8E630F0)
#define RPG_CLIENT_CHALLENGEDATA_GET_STAGENUM_OFFSET UNITYSDK_OFFSET(0x8E69B20)
#define RPG_CLIENT_CHALLENGEDATA_GET_STARS_OFFSET UNITYSDK_OFFSET(0x8E69D80)
#define RPG_CLIENT_CHALLENGEDATA_GET_TAKENREWARD_OFFSET UNITYSDK_OFFSET(0x8E69E20)
#define RPG_CLIENT_CHALLENGEDATA_GET_TARGETBITSET_OFFSET UNITYSDK_OFFSET(0x8E69E00)
#define RPG_CLIENT_CHALLENGEDATA_HASREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x8E67070)
#define RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTFINISH_OFFSET UNITYSDK_OFFSET(0x8E67320)
#define RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x8E670D0)
#define RPG_CLIENT_CHALLENGEDATA_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8E63890)
#define RPG_CLIENT_CHALLENGEDATA_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x8E67590)
#define RPG_CLIENT_CHALLENGEDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E63800)
#define RPG_CLIENT_CHALLENGEDATA_SET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0x8E69DB0)
#define RPG_CLIENT_CHALLENGEDATA_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x8E69BD0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8E69B90)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8E69EB0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0x8E66D40)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x8E69E50)
#define RPG_CLIENT_CHALLENGEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x8E69BB0)
#define RPG_CLIENT_CHALLENGEDATA_SET_SCOREFIRST_OFFSET UNITYSDK_OFFSET(0x8E69DD0)
#define RPG_CLIENT_CHALLENGEDATA_SET_SCORESECOND_OFFSET UNITYSDK_OFFSET(0x8E69DF0)
#define RPG_CLIENT_CHALLENGEDATA_SET_STARS_OFFSET UNITYSDK_OFFSET(0x8E69D90)
#define RPG_CLIENT_CHALLENGEDATA_SET_TAKENREWARD_OFFSET UNITYSDK_OFFSET(0x8E69E30)
#define RPG_CLIENT_CHALLENGEDATA_SET_TARGETBITSET_OFFSET UNITYSDK_OFFSET(0x8E69E10)
#define RPG_CLIENT_CHALLENGEDATA_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0x8E63760)
#define RPG_CLIENT_CHALLENGEDATA_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x8E66720)
#define RPG_CLIENT_CHALLENGEDATA_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x8E66890)
#define RPG_CLIENT_CHALLENGEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E69F80)
#define RPG_CLIENT_CHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8E620F0)
#define RPG_CLIENT_CHALLENGEDATA__GETEVENTIDLISTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x8E629E0)
#define RPG_CLIENT_CHALLENGEDATA__GETEXTRAMONSTERIDBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x8E695E0)
#define RPG_CLIENT_CHALLENGEDATA__GETMONSTERIDBYEVENTID_OFFSET UNITYSDK_OFFSET(0x8E691A0)
#define RPG_CLIENT_CHALLENGEDATA__GETMONSTERLEVELBYEVENTID_OFFSET UNITYSDK_OFFSET(0x8E62A90)
#define RPG_CLIENT_CHALLENGEDATA__ISAUTOSETTLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x8E67890)
#define RPG_CLIENT_CHALLENGEDATA__ISFINISHPRECHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E67B20)
#define RPG_CLIENT_CHALLENGEDATA__ISFINISHPREMISSION_OFFSET UNITYSDK_OFFSET(0x8E675E0)
#define RPG_CLIENT_CHALLENGEDATA__ISREACHPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x8E67780)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeData_TypeDefinitionIndex = 50057;

	class ChallengeData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__AutoSettleFinishBitSet()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChallengeData_TypeDefinitionIndex)->GetStaticField(0xEA50);
		}
		::RPG::GameCore::ChallengeMazeConfigRow* _Row_k__BackingField; // 0x10
		::RPG::Client::ChallengeRecommendData* _ChallengeRecommendData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>* _ChallengeTargets; // 0x20
		::RPG::Client::CheckItemFinishMainMission* _FinishMainMissionCheckItem; // 0x28
		::RPG::Client::ChallengeGroupData* ChallengeGroupDataRef; // 0x30
		::RPG::Client::CheckItemReachPlayerLevel* _PlayerLevelCheckItem; // 0x38
		::System::UInt32 _Stars_k__BackingField; // 0x40
		::System::Int32 IndexInGroup; // 0x44
		::System::UInt32 _ScoreSecond_k__BackingField; // 0x48
		::System::Boolean _IsFinish_k__BackingField; // 0x4C
		::System::Boolean _IsRewardTaken_k__BackingField; // 0x4D
		::System::Boolean _IsFirstOpen; // 0x4E
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x50
		::System::UInt32 _ChallengeTimes_k__BackingField; // 0x54
		::System::UInt32 _TargetBitSet_k__BackingField; // 0x58
		::System::UInt32 _TakenReward_k__BackingField; // 0x5C
		::System::UInt32 _ID_k__BackingField; // 0x60
		::System::UInt32 _ScoreFirst_k__BackingField; // 0x64

		::System::Void _ctor(::System::UInt32 id, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__CTOR_OFFSET))(this, id, groupType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 targetBitSet, ::System::UInt32 scoreFirst, ::System::UInt32 scoreSecond, ::System::UInt32 rewardTakenBitSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_UPDATETARGETSTATUS_OFFSET))(this, targetBitSet, scoreFirst, scoreSecond, rewardTakenBitSet);
		}

		::System::Void UpdateTarget(::System::UInt32 targetBitSet, ::System::UInt32 rewardTakenBitSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_UPDATETARGET_OFFSET))(this, targetBitSet, rewardTakenBitSet);
		}

		::System::Void AutoSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_AUTOSETTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* GetChallengeTargetDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETCHALLENGETARGETDATALIST_OFFSET))(this);
		}

		::System::Boolean HasRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean HasTargetRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean HasTargetRewardNotFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTFINISH_OFFSET))(this);
		}

		::System::Boolean IsPreMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_ISPREMISSIONFINISH_OFFSET))(this);
		}

		::System::Boolean GetIsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETISOPEN_OFFSET))(this);
		}

		::RPG::Client::ChallengeData_ChallengeOpenResult GetOpenResult()
		{
			return ((::RPG::Client::ChallengeData_ChallengeOpenResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETOPENRESULT_OFFSET))(this);
		}

		::System::Boolean _IsReachPlayerLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISREACHPLAYERLEVEL_OFFSET))(this);
		}

		::System::Boolean _IsAutoSettleUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISAUTOSETTLEUNLOCK_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISFINISHPRECHALLENGE_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISFINISHPREMISSION_OFFSET))(this);
		}

		::System::UInt32 GetBattleEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTID_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventRow* GetBattleEventRow()
		{
			return ((::RPG::GameCore::BattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataByStageIndex(::System::Int32 stageIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETMONSTERDATABYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::Int32 GetEventCountByStageIndex(::System::Int32 stageIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETEVENTCOUNTBYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 stageIndex, ::System::Int32 eventIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, stageIndex, eventIndex);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* GetMonsterWeakListByStageIndex(::System::Int32 stageIndex)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETMONSTERWEAKLISTBYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllMonsterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETALLMONSTERIDS_OFFSET))(this);
		}

		::System::Void SyncArchiveExtInfo(::Class_1_910AC58BB2D45F21* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_910AC58BB2D45F21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SYNCARCHIVEEXTINFO_OFFSET))(this, extInfo);
		}

		::System::Void SaveExtInfoWhenEnterChallenge(::Class_1_B9C9FEF982623D49* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9C9FEF982623D49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, rsp);
		}

		::System::Boolean IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}

		::RPG::Client::ChallengeRecommendData* GetRecommendData()
		{
			return ((::RPG::Client::ChallengeRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetExtraMonsterIDByStageIndex(::System::Int32 stageIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETEXTRAMONSTERIDBYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetEventIDListByStageIndex(::System::Int32 stageIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETEVENTIDLISTBYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::UInt32 _GetMonsterLevelByEventID(::System::UInt32 eventID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETMONSTERLEVELBYEVENTID_OFFSET))(this, eventID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetMonsterIDByEventID(::System::UInt32 eventID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETMONSTERIDBYEVENTID_OFFSET))(this, eventID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeMazeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ChallengeMazeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ChallengeMazeConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::RPG::GameCore::ChallengeGroupType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_GROUPTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_StageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_STAGENUM_OFFSET))(this);
		}

		::System::Boolean get_IsFirstOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISFIRSTOPEN_OFFSET))(this);
		}

		::System::Void set_IsFirstOpen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISFIRSTOPEN_OFFSET))(this, value);
		}

		::System::UInt32 get_Stars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_STARS_OFFSET))(this);
		}

		::System::Void set_Stars(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_STARS_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGETIMES_OFFSET))(this);
		}

		::System::Void set_ChallengeTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_CHALLENGETIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_ScoreFirst()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCOREFIRST_OFFSET))(this);
		}

		::System::Void set_ScoreFirst(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_SCOREFIRST_OFFSET))(this, value);
		}

		::System::UInt32 get_ScoreSecond()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCORESECOND_OFFSET))(this);
		}

		::System::Void set_ScoreSecond(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_SCORESECOND_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetBitSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_TARGETBITSET_OFFSET))(this);
		}

		::System::Void set_TargetBitSet(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_TARGETBITSET_OFFSET))(this, value);
		}

		::System::UInt32 get_TakenReward()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_TAKENREWARD_OFFSET))(this);
		}

		::System::Void set_TakenReward(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_TAKENREWARD_OFFSET))(this, value);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISREWARDTAKEN_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_IsPerfectFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISPERFECTFINISH_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_PreMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PREMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_PreLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PRELEVEL_OFFSET))(this);
		}

		::System::UInt32 get_PreChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PRECHALLENGEID_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeCountDown()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGECOUNTDOWN_OFFSET))(this);
		}
	};
}
