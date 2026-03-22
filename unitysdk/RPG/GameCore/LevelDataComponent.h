#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarGlobalBuffData.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleTargetDetailData.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/LevelDataComponent_BattleScoringData.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

class Class_0_16E4307DCC419505_347;
class Class_1_2B2C39A45CFC5540;
class Class_1_B523573B0FEEC688;
class Class_2_1DB6C02CA182EEBA;
class Class_2_7AC6AB23E79B2263;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace RPG::GameCore { class LevelDataComponent_MonsterSequence; }
namespace RPG::GameCore { class LineUpContext; }
namespace RPG::GameCore { class StageParamEntry; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELDATACOMPONENT_ADDSTAGEABILITY_OFFSET UNITYSDK_OFFSET(0xA49DDC0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_APPLYDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xA4A0440)
#define RPG_GAMECORE_LEVELDATACOMPONENT_CREATEBATTLETARGET_OFFSET UNITYSDK_OFFSET(0xA49F3C0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_CREATEGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xA49DFD0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_DISABLEBATTLETARGET_OFFSET UNITYSDK_OFFSET(0xA49F9F0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A07B0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_EVALUATESTAGEMAZEBUFFDESCPARAM_OFFSET UNITYSDK_OFFSET(0xA49FEB0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_FORCETREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xA49EBD0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETAVATARGLOBALBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xA4A06F0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETBATTLETARGETINFO_OFFSET UNITYSDK_OFFSET(0xA49F930)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETCURRENTSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0xA49ED90)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETPROTECTINGGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xA49E110)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALGLOBALSHIELDAMT_OFFSET UNITYSDK_OFFSET(0xA49EAC0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCOREBYDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xA49FCD0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCORE_OFFSET UNITYSDK_OFFSET(0xA49FB50)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETWAVELISTFORINFINITEBATTLE_OFFSET UNITYSDK_OFFSET(0xA49ECE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_BATTLESCORINGTOTAL_OFFSET UNITYSDK_OFFSET(0xA4A1880)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_ISINFINITEWAVE_OFFSET UNITYSDK_OFFSET(0xA49CA40)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_MONSTERSEQ_OFFSET UNITYSDK_OFFSET(0xA49CB00)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_STAGEABILITYLIST_OFFSET UNITYSDK_OFFSET(0xA4A1860)
#define RPG_GAMECORE_LEVELDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA49CF40)
#define RPG_GAMECORE_LEVELDATACOMPONENT_INITEVENTS_OFFSET UNITYSDK_OFFSET(0xA49DB30)
#define RPG_GAMECORE_LEVELDATACOMPONENT_NEEDDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xA4A02D0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REGISTERDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xA4A0380)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEDEPLETEDSHIELDS_OFFSET UNITYSDK_OFFSET(0xA49E300)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xA49E1E0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_1_OFFSET UNITYSDK_OFFSET(0xA49DF40)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_OFFSET UNITYSDK_OFFSET(0xA49DEB0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SETAVATARGLOBALBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xA4A05B0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SETBATTLETARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0xA49F5F0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SET_STAGEABILITYLIST_OFFSET UNITYSDK_OFFSET(0xA4A1870)
#define RPG_GAMECORE_LEVELDATACOMPONENT_STATISTICBATTLETARGETLIST_OFFSET UNITYSDK_OFFSET(0xA49EE60)
#define RPG_GAMECORE_LEVELDATACOMPONENT_TREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xA49EC10)
#define RPG_GAMECORE_LEVELDATACOMPONENT_UNINITEVENTS_OFFSET UNITYSDK_OFFSET(0xA4A0940)
#define RPG_GAMECORE_LEVELDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA49CB10)
#define RPG_GAMECORE_LEVELDATACOMPONENT__INITMONSTERSEQUENCE_OFFSET UNITYSDK_OFFSET(0xA49C400)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0xA4A1290)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERDIEORESCAPE_OFFSET UNITYSDK_OFFSET(0xA4A0DF0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERHPCHANGED_OFFSET UNITYSDK_OFFSET(0xA4A1760)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELWAVEMONSTERBEGINEVENT_OFFSET UNITYSDK_OFFSET(0xA4A0BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_TypeDefinitionIndex = 45346;

	class LevelDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _StageAbilityList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleClientAchievementList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleTargetDetailData>* BattleTargetList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* DisabledBattleTargetList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleAchievementList; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarGlobalBuffData>* AvatarGlobalBuffList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleConditionList; // 0x48
		::RPG::GameCore::LevelDataComponent_MonsterSequence* _MonsterSeq; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleRougeGoalList; // 0x58
		::RPG::GameCore::InfiniteBattleData* InfiniteBattleData; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelDataComponent_BattleScoringData>* BattleScoringList; // 0x68
		::RPG::GameCore::TurnBasedAbilityComponent* _TBAbility; // 0x70
		::System::Collections::Generic::List_1<::Class_2_7AC6AB23E79B2263*>* _GlobalShieldList; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleRaidTargetList; // 0x80
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BattleTargetList_FinishOnEnterBattle; // 0x88
		::System::Collections::Generic::List_1<::Class_1_B523573B0FEEC688*>* _DelayExeQueue; // 0x90
		::System::Int32 _GlobalShieldIDIncr; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _InitMonsterSequence(::RPG::GameCore::LineUpContext* lineUpContext)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LineUpContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__INITMONSTERSEQUENCE_OFFSET))(this, lineUpContext);
		}

		::RPG::GameCore::LevelDataComponent_MonsterSequence* get_MonsterSeq()
		{
			return ((::RPG::GameCore::LevelDataComponent_MonsterSequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_MONSTERSEQ_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::TurnBasedAbilityComponent* levelAbilityComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_INITCOMPONENT_OFFSET))(this, levelAbilityComponent);
		}

		::Class_2_1DB6C02CA182EEBA* AddStageAbility(::System::String* sStageAbilityName, ::System::Collections::Generic::IList_1<::RPG::GameCore::StageParamEntry*>* ParamList)
		{
			return ((::Class_2_1DB6C02CA182EEBA*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::RPG::GameCore::StageParamEntry*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_ADDSTAGEABILITY_OFFSET))(this, sStageAbilityName, ParamList);
		}

		::System::Boolean RemoveStageAbility(::System::String* sStageAbilityName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_OFFSET))(this, sStageAbilityName);
		}

		::System::Boolean RemoveStageAbility_1(::Class_2_1DB6C02CA182EEBA* pAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_1_OFFSET))(this, pAbility);
		}

		::System::Int32 CreateGlobalShield(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pTargetList, ::RPG::GameCore::FixPoint fInitHP, ::Class_3_BCCE950C2E8DF1F0* pOnRemove)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::FixPoint, ::Class_3_BCCE950C2E8DF1F0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_CREATEGLOBALSHIELD_OFFSET))(this, pTargetList, fInitHP, pOnRemove);
		}

		::RPG::GameCore::GameEntity* GetProtectingGlobalShield(::RPG::GameCore::GameEntity* pTarget)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETPROTECTINGGLOBALSHIELD_OFFSET))(this, pTarget);
		}

		::System::Void RemoveGlobalShield(::System::Int32 nShieldID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEGLOBALSHIELD_OFFSET))(this, nShieldID);
		}

		::System::Void RemoveDepletedShields()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEDEPLETEDSHIELDS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetTotalGlobalShieldAmt()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALGLOBALSHIELDAMT_OFFSET))(this);
		}

		::System::Boolean ForceTreatWavesAsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_FORCETREATWAVESASINFINITE_OFFSET))(this);
		}

		::System::Boolean TreatWavesAsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_TREATWAVESASINFINITE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_2B2C39A45CFC5540*>* GetWaveListForInfiniteBattle()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2B2C39A45CFC5540*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETWAVELISTFORINFINITEBATTLE_OFFSET))(this);
		}

		::RPG::GameCore::StageRow* GetCurrentStageConfig()
		{
			return ((::RPG::GameCore::StageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETCURRENTSTAGECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* StatisticBattleTargetList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_STATISTICBATTLETARGETLIST_OFFSET))(this);
		}

		::System::Void CreateBattleTarget(::System::UInt32 battleTargetID, ::RPG::GameCore::FixPoint currentProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_CREATEBATTLETARGET_OFFSET))(this, battleTargetID, currentProgress);
		}

		::System::Void SetBattleTargetProgress(::System::UInt32 battleTargetID, ::RPG::GameCore::PropertyModifyFunction ModifyFunction, ::RPG::GameCore::FixPoint ModifyValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SETBATTLETARGETPROGRESS_OFFSET))(this, battleTargetID, ModifyFunction, ModifyValue);
		}

		::System::Boolean GetBattleTargetInfo(::System::UInt32 battleTargetID, ::RPG::GameCore::BattleTargetDetailData& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BattleTargetDetailData&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETBATTLETARGETINFO_OFFSET))(this, battleTargetID, info);
		}

		::System::Void DisableBattleTarget(::System::UInt32 targetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_DISABLEBATTLETARGET_OFFSET))(this, targetID);
		}

		::RPG::GameCore::FixPoint GetTotalScore()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCORE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetTotalScoreByDisplayType(::RPG::GameCore::BattleScoringDisplayType displayType, ::System::Boolean useDisplayValue)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::BattleScoringDisplayType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCOREBYDISPLAYTYPE_OFFSET))(this, displayType, useDisplayValue);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* EvaluateStageMazeBuffDescParam(::System::UInt32 mazeBuffId, ::System::UInt32 mazeBuffLv)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_EVALUATESTAGEMAZEBUFFDESCPARAM_OFFSET))(this, mazeBuffId, mazeBuffLv);
		}

		::System::Boolean NeedDelayExecuteOnNextWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_NEEDDELAYEXECUTEONNEXTWAVE_OFFSET))(this);
		}

		::System::Void RegisterDelayExecuteOnNextWave(::Class_1_B523573B0FEEC688* delayInsertMonster)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B523573B0FEEC688*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REGISTERDELAYEXECUTEONNEXTWAVE_OFFSET))(this, delayInsertMonster);
		}

		::System::Void ApplyDelayExecuteOnNextWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_APPLYDELAYEXECUTEONNEXTWAVE_OFFSET))(this);
		}

		::System::Void SetAvatarGlobalBuffState(::System::UInt32 buffId, ::System::Boolean isActive, ::System::Int32 leftcount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SETAVATARGLOBALBUFFSTATE_OFFSET))(this, buffId, isActive, leftcount);
		}

		::System::Boolean GetAvatarGlobalBuffState(::System::UInt32 buffId, ::RPG::GameCore::AvatarGlobalBuffData& state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AvatarGlobalBuffData&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETAVATARGLOBALBUFFSTATE_OFFSET))(this, buffId, state);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnLevelWaveMonsterBeginEvent(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELWAVEMONSTERBEGINEVENT_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCharacterDieOrEscape(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERDIEORESCAPE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCharacterCreate(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERCREATE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCharacterHPChanged(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERHPCHANGED_OFFSET))(this, evt);
		}

		::System::Void InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_INITEVENTS_OFFSET))(this);
		}

		::System::Void UninitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_UNINITEVENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StageAbilityList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_STAGEABILITYLIST_OFFSET))(this);
		}

		::System::Void set_StageAbilityList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SET_STAGEABILITYLIST_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_BattleScoringTotal()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_BATTLESCORINGTOTAL_OFFSET))(this);
		}

		::System::Boolean get_IsInfiniteWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_ISINFINITEWAVE_OFFSET))(this);
		}
	};
}
