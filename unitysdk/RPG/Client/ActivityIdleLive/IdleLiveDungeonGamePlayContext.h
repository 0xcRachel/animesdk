#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDungeonGamePlayContext_RewardInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7_6;
class Class_1_C821CB457FB5EBC6_9;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonGamePlayAssistData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_ADDBATTLEHISTORY_OFFSET UNITYSDK_OFFSET(0x1735AA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_EXITDUNGEON_OFFSET UNITYSDK_OFFSET(0x1735A900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GETFINALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1735AED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_ASSISTDATALIST_OFFSET UNITYSDK_OFFSET(0x1735B1E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_BATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1735B4A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_BATTLEHISTORY_OFFSET UNITYSDK_OFFSET(0x1735B410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_DUNGEONDATA_OFFSET UNITYSDK_OFFSET(0x1735B530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_INCOMEHPPROGRESSDELTA_OFFSET UNITYSDK_OFFSET(0x1735B1C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_ISINDUNGEON_OFFSET UNITYSDK_OFFSET(0x1735B540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_PROGRESSDELTA_OFFSET UNITYSDK_OFFSET(0x1735B1A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_RESULTLIST_OFFSET UNITYSDK_OFFSET(0x1735B1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x1735B380)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_HANDLEEARLYFINISHDUNGEON_OFFSET UNITYSDK_OFFSET(0x1735A950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x1735A230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1735AAE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SET_INCOMEHPPROGRESSDELTA_OFFSET UNITYSDK_OFFSET(0x1735B1D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SET_PROGRESSDELTA_OFFSET UNITYSDK_OFFSET(0x1735B1B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1735AB30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1735B550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT__GETRESULTLIST_OFFSET UNITYSDK_OFFSET(0x1735B200)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonGamePlayContext_TypeDefinitionIndex = 69266;

	class IdleLiveDungeonGamePlayContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BattleAvatarIdList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayContext_RewardInfo>* _RewardList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _BattleHistory; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* _DungeonData; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>* _AssistDataList; // 0x30
		::System::UInt32 _CurrentProgress; // 0x38
		::System::Boolean _IsInDungeon; // 0x3C
		::System::Int32 _IncomeHpProgressDelta_k__BackingField; // 0x40
		::System::Int32 _ProgressDelta_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_36E3880E987172D7_6* rsp, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* dungeonData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7_6*, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_INIT_OFFSET))(this, rsp, dungeonData);
		}

		::System::Void ExitDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_EXITDUNGEON_OFFSET))(this);
		}

		::System::Void HandleEarlyFinishDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_HANDLEEARLYFINISHDUNGEON_OFFSET))(this);
		}

		::System::Void AddBattleHistory(::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_ADDBATTLEHISTORY_OFFSET))(this, progress);
		}

		::System::Void SetCurrentProgress(::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SETCURRENTPROGRESS_OFFSET))(this, progress);
		}

		::System::Void Update(::Class_1_C821CB457FB5EBC6_9* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_UPDATE_OFFSET))(this, rsp);
		}

		::System::UInt32 GetFinalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GETFINALPROGRESS_OFFSET))(this);
		}

		::System::Int32 get_ProgressDelta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_PROGRESSDELTA_OFFSET))(this);
		}

		::System::Void set_ProgressDelta(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SET_PROGRESSDELTA_OFFSET))(this, value);
		}

		::System::Int32 get_IncomeHpProgressDelta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_INCOMEHPPROGRESSDELTA_OFFSET))(this);
		}

		::System::Void set_IncomeHpProgressDelta(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SET_INCOMEHPPROGRESSDELTA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>* get_AssistDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_ASSISTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>* get_ResultList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_RESULTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>* _GetResultList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT__GETRESULTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayContext_RewardInfo>* get_RewardList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayContext_RewardInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_REWARDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleHistory()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_BATTLEHISTORY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleAvatarIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_BATTLEAVATARIDLIST_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* get_DungeonData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_DUNGEONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsInDungeon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_ISINDUNGEON_OFFSET))(this);
		}
	};
}
