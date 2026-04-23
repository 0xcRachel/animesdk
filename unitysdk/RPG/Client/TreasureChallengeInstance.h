#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_51.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_10;
namespace Proto { class ItemList; }
namespace RPG::GameCore { class RaidConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1683CBD0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1683C6C0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1683E360)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_FORCEUPDATEPROGRESSANDSTATUS_OFFSET UNITYSDK_OFFSET(0x1683E7A0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D4E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D500)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ISTARGETFINISHEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1683D520)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1683D3B0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D4C0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D4A0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D480)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_INITPROGRESSANDSTATUS_OFFSET UNITYSDK_OFFSET(0x1683D540)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEINBATTLESTATUS_OFFSET UNITYSDK_OFFSET(0x1683FDE0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEPROGRESSHINT_OFFSET UNITYSDK_OFFSET(0x1683E020)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGESTATUS_OFFSET UNITYSDK_OFFSET(0x1683DA90)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1683FB80)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONCLIENTRAIDTARGETVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1683E9D0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1683F070)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONINBATTLEPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1683FCE0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0x1683FBD0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0x1683F410)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMISSIONSYNCED_OFFSET UNITYSDK_OFFSET(0x1683F840)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0x1683ECF0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONSETCLIENTRAIDTARGETCOUNTSCRSP_OFFSET UNITYSDK_OFFSET(0x1683EC30)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D4F0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D510)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ISTARGETFINISHEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1683D530)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1683D430)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D4D0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D4B0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1683D490)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_TRYTRACKFIRSTSTARTMISSION_OFFSET UNITYSDK_OFFSET(0x1683F8F0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_UPDATESTATUSONGETRAIDINFORSP_OFFSET UNITYSDK_OFFSET(0x1683E540)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITEREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1683E3E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSHOTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1683E4D0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSTATUS_OFFSET UNITYSDK_OFFSET(0x1683E430)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1683CC30)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1683C740)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeInstance_TypeDefinitionIndex = 61497;

	class TreasureChallengeInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TargetProgressSnapShot_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _IsTargetFinishedBefore_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* PreBattleAchievedTarget; // 0x20
		::RPG::GameCore::RaidConfigRow* _Row; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* _TargetProgressHintStepSnapShot_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _InBattleTargetProgressSnapShot_k__BackingField; // 0x38
		::Proto::ItemList* CachedRewardList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* _TargetStatusSnapShot_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* _InBattleTargetStatusSnapShot_k__BackingField; // 0x50
		::System::UInt64 FinishTime; // 0x58
		::System::UInt32 CurrentRaidID; // 0x60
		::System::UInt32 CurrentRaidLevel; // 0x64
		::System::Boolean HasUnshownRewards; // 0x68
		::System::Boolean TeamHintEnqueued; // 0x69
		::Enum_3_DB663931210BBC27_51 RaidStatus; // 0x6C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_OFFSET))(this, id, level);
		}

		::System::Void _ctor_1(::Class_1_BB4B99DE4C2501EC_10* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_1_OFFSET))(this, ntf);
		}

		static ::RPG::Client::TreasureChallengeInstance* Create(::System::UInt32 raidID, ::System::UInt32 level, ::Enum_3_DB663931210BBC27_51 status)
		{
			return ((::RPG::Client::TreasureChallengeInstance*(*)(::System::UInt32, ::System::UInt32, ::Enum_3_DB663931210BBC27_51))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_OFFSET))(raidID, level, status);
		}

		static ::RPG::Client::TreasureChallengeInstance* Create_1(::Class_1_BB4B99DE4C2501EC_10* ntf)
		{
			return ((::RPG::Client::TreasureChallengeInstance*(*)(::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_1_OFFSET))(ntf);
		}

		::RPG::GameCore::RaidConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RaidConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* get_TargetStatusSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETSTATUSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetStatusSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETSTATUSSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TargetProgressSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetProgressSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* get_TargetProgressHintStepSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetProgressHintStepSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_InBattleTargetProgressSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_InBattleTargetProgressSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* get_InBattleTargetStatusSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_InBattleTargetStatusSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* get_IsTargetFinishedBefore()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ISTARGETFINISHEDBEFORE_OFFSET))(this);
		}

		::System::Void set_IsTargetFinishedBefore(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ISTARGETFINISHEDBEFORE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void WriteRewardList(::Proto::ItemList* rewards)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITEREWARDLIST_OFFSET))(this, rewards);
		}

		::System::Void WriteSnapStatus(::System::UInt32 targetID, ::RPG::Client::TreasureChallengeTargetStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSTATUS_OFFSET))(this, targetID, status);
		}

		::System::Void WriteSnapShotProgress(::System::UInt32 targetID, ::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSHOTPROGRESS_OFFSET))(this, targetID, progress);
		}

		::System::Void UpdateStatusOnGetRaidInfoRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_UPDATESTATUSONGETRAIDINFORSP_OFFSET))(this);
		}

		::System::Void ForceUpdateProgressAndStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_FORCEUPDATEPROGRESSANDSTATUS_OFFSET))(this);
		}

		::System::Void InitProgressAndStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_INITPROGRESSANDSTATUS_OFFSET))(this);
		}

		::System::Void OnClientRaidTargetValueChanged(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONCLIENTRAIDTARGETVALUECHANGED_OFFSET))(this, obj);
		}

		::System::Void OnSetClientRaidTargetCountScRsp(::System::UInt16 cmdID, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONSETCLIENTRAIDTARGETCOUNTSCRSP_OFFSET))(this, cmdID, obj);
		}

		::System::Void OnRaidInfoNotify(::System::UInt16 cmdID, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONRAIDINFONOTIFY_OFFSET))(this, cmdID, obj);
		}

		::System::Void OnEnterBattle(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONENTERBATTLE_OFFSET))(this, obj);
		}

		::System::Void OnMainMissionFinished(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMAINMISSIONFINISHED_OFFSET))(this, obj);
		}

		::System::Void OnMissionSynced(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMISSIONSYNCED_OFFSET))(this, obj);
		}

		::System::Void TryTrackFirstStartMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_TRYTRACKFIRSTSTARTMISSION_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseEntered(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONADVENTUREPHASEENTERED_OFFSET))(this, o);
		}

		::System::Void OnLeaveBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONLEAVEBATTLE_OFFSET))(this);
		}

		::System::Void OnInBattleProgressChanged(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONINBATTLEPROGRESSCHANGED_OFFSET))(this, obj);
		}

		::System::Void JudgeStatus(::System::UInt32 targetID, ::System::Boolean silent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGESTATUS_OFFSET))(this, targetID, silent);
		}

		::System::Void JudgeProgressHint(::System::UInt32 targetID, ::System::Boolean silent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEPROGRESSHINT_OFFSET))(this, targetID, silent);
		}

		::System::Void JudgeInBattleStatus(::System::UInt32 targetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEINBATTLESTATUS_OFFSET))(this, targetID);
		}
	};
}
