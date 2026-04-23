#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraArrangementPresetData; }
namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraEndlessManager; }
namespace RPG::Client { class ChimeraWorkRoundInfo; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177A42C0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GETCOMMONMEMBERSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x177A5BC0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GETRECOMMENDEDARRANGEMENTPRESETS_OFFSET UNITYSDK_OFFSET(0x177A6090)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ALLCOMMONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A4140)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ALLLEADERCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A4180)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ARRANGEDLEADER_OFFSET UNITYSDK_OFFSET(0x177A41E0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ARRANGEMENTCOMMON_OFFSET UNITYSDK_OFFSET(0x177A41C0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ISLEADERLOCKED_OFFSET UNITYSDK_OFFSET(0x177A4200)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_NEWCOMMONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A4160)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_NEWLEADERCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A41A0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_STAGECOMMON_OFFSET UNITYSDK_OFFSET(0x177A4220)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_STOCKCOMMON_OFFSET UNITYSDK_OFFSET(0x177A4240)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x177A4260)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISCOMMONARRANGED_OFFSET UNITYSDK_OFFSET(0x177A5F70)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISCOMMONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x177A5FD0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISDEAD_1_OFFSET UNITYSDK_OFFSET(0x177A6030)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISDEAD_OFFSET UNITYSDK_OFFSET(0x177A5D30)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISNEW_OFFSET UNITYSDK_OFFSET(0x177A5E60)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISSTAGEUNMODIFIED_OFFSET UNITYSDK_OFFSET(0x177A5EC0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYCHIMERAUNLOCKINGUPDATE_OFFSET UNITYSDK_OFFSET(0x177A4300)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYDEATHUPDATE_OFFSET UNITYSDK_OFFSET(0x177A56E0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYNORMALWORKROUNDUPDATE_OFFSET UNITYSDK_OFFSET(0x177A5130)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEDCOMMON_OFFSET UNITYSDK_OFFSET(0x177A64A0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEDLEADER_OFFSET UNITYSDK_OFFSET(0x177A6520)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x177A62C0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ALLCOMMONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A4150)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ALLLEADERCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A4190)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ARRANGEDLEADER_OFFSET UNITYSDK_OFFSET(0x177A41F0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ARRANGEMENTCOMMON_OFFSET UNITYSDK_OFFSET(0x177A41D0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ISLEADERLOCKED_OFFSET UNITYSDK_OFFSET(0x177A4210)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_NEWCOMMONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A4170)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_NEWLEADERCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A41B0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_STAGECOMMON_OFFSET UNITYSDK_OFFSET(0x177A4230)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_STOCKCOMMON_OFFSET UNITYSDK_OFFSET(0x177A4250)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SYNCARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x177A5B30)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_TRYLOADARRANGEMENTFROMUSERPREFS_OFFSET UNITYSDK_OFFSET(0x177A5960)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x177A6580)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__FILTERARRANGEMENTBYDEATH_OFFSET UNITYSDK_OFFSET(0x177A5730)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__REFRESHSTOCKANDSTAGE_OFFSET UNITYSDK_OFFSET(0x177A4F30)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SAVEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x177A6340)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCARRANGEDCOMMON_OFFSET UNITYSDK_OFFSET(0x177A51B0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCARRANGEDLEADER_OFFSET UNITYSDK_OFFSET(0x177A5610)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCSTAGEDCOMMON_OFFSET UNITYSDK_OFFSET(0x177A54B0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0x177A43F0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___REFRESHSTOCKANDSTAGE_B__54_0_OFFSET UNITYSDK_OFFSET(0x177A6640)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraArrangementInfo_TypeDefinitionIndex = 58410;

	class ChimeraArrangementInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 EmptySeat = 0x0; // 0x0
		// static const ::System::UInt32 MaxStageCount = 0x3; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _IsNew; // 0x10
		::Il2CppArray<::System::UInt32>* _AllLeaderChimeras_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _IsCommonUnlocked; // 0x20
		::Il2CppArray<::System::UInt32>* _StockCommon_k__BackingField; // 0x28
		::RPG::Client::ChimeraEndlessManager* _EndlessManager; // 0x30
		::Il2CppArray<::System::UInt32>* _NewLeaderChimeras_k__BackingField; // 0x38
		::Il2CppArray<::System::UInt32>* _NewCommonChimeras_k__BackingField; // 0x40
		::Il2CppArray<::System::UInt32>* _ArrangementCommon_k__BackingField; // 0x48
		::RPG::Client::ChimeraWorkRoundInfo* _WorkRoundInfo; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _IsCommonArranged; // 0x58
		::Il2CppArray<::System::UInt32>* _AllCommonChimeras_k__BackingField; // 0x60
		::Il2CppArray<::System::UInt32>* _StageCommon_k__BackingField; // 0x68
		::System::UInt32 _ArrangedLeader_k__BackingField; // 0x70
		::System::Boolean _IsLeaderLocked_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_AllCommonChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ALLCOMMONCHIMERAS_OFFSET))(this);
		}

		::System::Void set_AllCommonChimeras(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ALLCOMMONCHIMERAS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_NewCommonChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_NEWCOMMONCHIMERAS_OFFSET))(this);
		}

		::System::Void set_NewCommonChimeras(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_NEWCOMMONCHIMERAS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_AllLeaderChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ALLLEADERCHIMERAS_OFFSET))(this);
		}

		::System::Void set_AllLeaderChimeras(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ALLLEADERCHIMERAS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_NewLeaderChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_NEWLEADERCHIMERAS_OFFSET))(this);
		}

		::System::Void set_NewLeaderChimeras(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_NEWLEADERCHIMERAS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_ArrangementCommon()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ARRANGEMENTCOMMON_OFFSET))(this);
		}

		::System::Void set_ArrangementCommon(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ARRANGEMENTCOMMON_OFFSET))(this, value);
		}

		::System::UInt32 get_ArrangedLeader()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ARRANGEDLEADER_OFFSET))(this);
		}

		::System::Void set_ArrangedLeader(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ARRANGEDLEADER_OFFSET))(this, value);
		}

		::System::Boolean get_IsLeaderLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ISLEADERLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLeaderLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ISLEADERLOCKED_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_StageCommon()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_STAGECOMMON_OFFSET))(this);
		}

		::System::Void set_StageCommon(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_STAGECOMMON_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_StockCommon()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_STOCKCOMMON_OFFSET))(this);
		}

		::System::Void set_StockCommon(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_STOCKCOMMON_OFFSET))(this, value);
		}

		::System::Void Init(::RPG::Client::ChimeraWorkRoundInfo* workRoundInfo, ::RPG::Client::ChimeraEndlessManager* endlessManager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundInfo*, ::RPG::Client::ChimeraEndlessManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_INIT_OFFSET))(this, workRoundInfo, endlessManager);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void NotifyChimeraUnlockingUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYCHIMERAUNLOCKINGUPDATE_OFFSET))(this);
		}

		::System::Void NotifyNormalWorkRoundUpdate(::System::Boolean forceUsingNewChimeras)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYNORMALWORKROUNDUPDATE_OFFSET))(this, forceUsingNewChimeras);
		}

		::System::Void NotifyDeathUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYDEATHUPDATE_OFFSET))(this);
		}

		::System::Boolean TryLoadArrangementFromUserPrefs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_TRYLOADARRANGEMENTFROMUSERPREFS_OFFSET))(this);
		}

		::System::Void SyncArrangement(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* arrangementCommon, ::System::UInt32 arrangedLeader, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* stage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SYNCARRANGEMENT_OFFSET))(this, arrangementCommon, arrangedLeader, stage);
		}

		::System::Void _SyncArrangedCommon(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* arrangementCommon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCARRANGEDCOMMON_OFFSET))(this, arrangementCommon);
		}

		::System::Void _SyncStagedCommon(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* stage, ::System::Boolean forceUsingNewChimeras)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCSTAGEDCOMMON_OFFSET))(this, stage, forceUsingNewChimeras);
		}

		::System::Void _SyncArrangedLeader(::System::UInt32 arrangedLeader)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCARRANGEDLEADER_OFFSET))(this, arrangedLeader);
		}

		::System::Void _SyncUnlockedChimeras(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* allUnlocked, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* newlyUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCUNLOCKEDCHIMERAS_OFFSET))(this, allUnlocked, newlyUnlocked);
		}

		::System::Void _RefreshStockAndStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__REFRESHSTOCKANDSTAGE_OFFSET))(this);
		}

		::System::Void _FilterArrangementByDeath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__FILTERARRANGEMENTBYDEATH_OFFSET))(this);
		}

		::System::Boolean IsNew(::System::UInt32 chimeraID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISNEW_OFFSET))(this, chimeraID);
		}

		::System::Boolean IsStageUnmodified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISSTAGEUNMODIFIED_OFFSET))(this);
		}

		::System::Boolean IsCommonArranged(::System::UInt32 chimeraID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISCOMMONARRANGED_OFFSET))(this, chimeraID);
		}

		::System::Boolean IsCommonUnlocked(::System::UInt32 chimeraID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISCOMMONUNLOCKED_OFFSET))(this, chimeraID);
		}

		::System::Boolean IsDead(::System::UInt32 chimeraID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISDEAD_OFFSET))(this, chimeraID);
		}

		::System::Boolean IsDead_1(::RPG::Client::ChimeraData* chimeraData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISDEAD_1_OFFSET))(this, chimeraData);
		}

		::System::UInt32 GetCommonMemberSlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GETCOMMONMEMBERSLOTCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ChimeraArrangementPresetData*>* GetRecommendedArrangementPresets()
		{
			return ((::Il2CppArray<::RPG::Client::ChimeraArrangementPresetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GETRECOMMENDEDARRANGEMENTPRESETS_OFFSET))(this);
		}

		::System::Void SaveArrangement(::Il2CppArray<::System::UInt32>* arrangedCommon, ::System::UInt32 arrangedLeader, ::Il2CppArray<::System::UInt32>* stage)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEMENT_OFFSET))(this, arrangedCommon, arrangedLeader, stage);
		}

		::System::Void SaveArrangedCommon(::Il2CppArray<::System::UInt32>* arrangedCommon, ::Il2CppArray<::System::UInt32>* stage)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEDCOMMON_OFFSET))(this, arrangedCommon, stage);
		}

		::System::Void SaveArrangedLeader(::System::UInt32 arrangedLeader)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEDLEADER_OFFSET))(this, arrangedLeader);
		}

		::System::Void _SaveArrangement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SAVEARRANGEMENT_OFFSET))(this);
		}

		::System::Boolean __RefreshStockAndStage_b__54_0(::System::UInt32 oldChimera)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___REFRESHSTOCKANDSTAGE_B__54_0_OFFSET))(this, oldChimera);
		}
	};
}
