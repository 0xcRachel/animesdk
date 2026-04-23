#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_1D0B4E25DB90BF59;
class Class_1_21DCD4640D389503_10;
class Class_1_23C1B7E6B450FFB8;
class Class_1_2C4471BA5FE34A73;
class Class_1_3C6018135E54E36D;
class Class_1_5DFA0229DED90FE5;
class Class_1_668FE281FA72D3E8;
class Class_1_82F5C77DD4957B13;
class Class_1_83178EB088CAD885;
class Class_1_85B61EA0E6D9987F;
class Class_1_923C1AF2DBD806BC_2;
class Class_1_BF43A923389D144C;
class Class_1_D17272E82AE804C2_36;
class Class_1_D1E0AD3915BCCF29_7;
class Class_1_EBB10EC01CCC4716_1;
class Class_2_AB410D28C98F5E0E;
class Class_2_AC65A8C362F818F7;
class Class_3_86E0535F5988D909;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CharacterSkillCustomStatisticConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PVECharacterStt; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_STATISTICSCOMPONENT_ADDCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x9F64A60)
#define RPG_GAMECORE_STATISTICSCOMPONENT_BUILDPVESTATISTICS_OFFSET UNITYSDK_OFFSET(0x9F5DF60)
#define RPG_GAMECORE_STATISTICSCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F5D610)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARGLOBALBUFFSTT_OFFSET UNITYSDK_OFFSET(0x9F66340)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARSTTBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9F63240)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETBATTLEEVENTSTT_OFFSET UNITYSDK_OFFSET(0x9F65A40)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETCHARACTERSTT_OFFSET UNITYSDK_OFFSET(0x9F66170)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x9F64710)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERWAVEINDEXLISTBYWAVE_OFFSET UNITYSDK_OFFSET(0x9F644B0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERPHASESTT_OFFSET UNITYSDK_OFFSET(0x9F65530)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTTFULL_OFFSET UNITYSDK_OFFSET(0x9F64F30)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTT_OFFSET UNITYSDK_OFFSET(0x9F654D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETSERVANTSTT_OFFSET UNITYSDK_OFFSET(0x9F65E70)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETSKILLUSEPROPERTYBYABILITYNAME_OFFSET UNITYSDK_OFFSET(0x9F66570)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETTURNTAKENDAMAGE_OFFSET UNITYSDK_OFFSET(0x9F648A0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GET_BATTLEEVENTSTT_OFFSET UNITYSDK_OFFSET(0x9F6C4F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GET_FEVERTIME_OFFSET UNITYSDK_OFFSET(0x9F6C4D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_HASTRIGGEREDCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x9F65930)
#define RPG_GAMECORE_STATISTICSCOMPONENT_INITPVESTATISTICS_OFFSET UNITYSDK_OFFSET(0x9F5CF60)
#define RPG_GAMECORE_STATISTICSCOMPONENT_RECORDAVATARINITIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x9F64940)
#define RPG_GAMECORE_STATISTICSCOMPONENT_SETREPORTCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x9F64BE0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_SET_FEVERTIME_OFFSET UNITYSDK_OFFSET(0x9F6C4E0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRIGGERSTATISTICEVENT_OFFSET UNITYSDK_OFFSET(0x9F64DC0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYCONFIGID_OFFSET UNITYSDK_OFFSET(0x9F65680)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x9F657E0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ADDSKILLPERFORMTIME_OFFSET UNITYSDK_OFFSET(0x9F6A740)
#define RPG_GAMECORE_STATISTICSCOMPONENT__BUILDACTIVITYSUBMODESTT_OFFSET UNITYSDK_OFFSET(0x9F640F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__CREATELIGHTTEAMPROPERTYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9F66B60)
#define RPG_GAMECORE_STATISTICSCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6C500)
#define RPG_GAMECORE_STATISTICSCOMPONENT__FILLATTACKANDDAMAGEINFO_OFFSET UNITYSDK_OFFSET(0x9F63010)
#define RPG_GAMECORE_STATISTICSCOMPONENT__FILLCHARACTERSKILLEQUIPANDRELIC_OFFSET UNITYSDK_OFFSET(0x9F63720)
#define RPG_GAMECORE_STATISTICSCOMPONENT__GETAVATARPROPERTY_OFFSET UNITYSDK_OFFSET(0x9F635C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INCREMENTCOUNTBYENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x9F68350)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INITBYSTAGE_OFFSET UNITYSDK_OFFSET(0x9F5D220)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INITEVENTS_OFFSET UNITYSDK_OFFSET(0x9F5C6A0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONBATTLEEVENTDIE_OFFSET UNITYSDK_OFFSET(0x9F674A0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0x9F67030)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERDIE_OFFSET UNITYSDK_OFFSET(0x9F670D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERLIMBO_OFFSET UNITYSDK_OFFSET(0x9F67520)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERREVIVE_OFFSET UNITYSDK_OFFSET(0x9F67C80)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYDIE_OFFSET UNITYSDK_OFFSET(0x9F67150)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYESCAPE_OFFSET UNITYSDK_OFFSET(0x9F67A70)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x9F5C610)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONCOUNTACTIVE_OFFSET UNITYSDK_OFFSET(0x9F68690)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONDELAYCHANGED_OFFSET UNITYSDK_OFFSET(0x9F6B270)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBEFOREADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x9F68A30)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBREAKSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9F687B0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERENDATTACK_OFFSET UNITYSDK_OFFSET(0x9F6C3B0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTBPCHANGE_OFFSET UNITYSDK_OFFSET(0x9F6B180)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTSPCHANGE_OFFSET UNITYSDK_OFFSET(0x9F6AD90)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCUSTOMSTRINGEVENT_OFFSET UNITYSDK_OFFSET(0x9F68CD0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITYPHASE1_OFFSET UNITYSDK_OFFSET(0x9F69A80)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITY_OFFSET UNITYSDK_OFFSET(0x9F690B0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDISPELMODIFIER_OFFSET UNITYSDK_OFFSET(0x9F68450)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENDUSESKILL_OFFSET UNITYSDK_OFFSET(0x9F6A8D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYINITSHIELD_OFFSET UNITYSDK_OFFSET(0x9F6B4B0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYSHIELDCHANGE_OFFSET UNITYSDK_OFFSET(0x9F6B750)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELHEALENTITY_OFFSET UNITYSDK_OFFSET(0x9F69C90)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELINSERTABILITY_OFFSET UNITYSDK_OFFSET(0x9F68270)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELMONSTERPHASECHANGE_OFFSET UNITYSDK_OFFSET(0x9F6B960)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNBEGIN_OFFSET UNITYSDK_OFFSET(0x9F667A0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNEND_OFFSET UNITYSDK_OFFSET(0x9F66F30)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNSTATEBEFORECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x9F68E30)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNULTRASKILLEXECUTINGBEGIN_OFFSET UNITYSDK_OFFSET(0x9F6B860)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSEABILITY_OFFSET UNITYSDK_OFFSET(0x9F67DC0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSESKILL_OFFSET UNITYSDK_OFFSET(0x9F69FD0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELWAVEMONSTERFINISH_OFFSET UNITYSDK_OFFSET(0x9F68B60)
#define RPG_GAMECORE_STATISTICSCOMPONENT__UNINITEVENTS_OFFSET UNITYSDK_OFFSET(0x9F5D6A0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x9F6CA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatisticsComponent_TypeDefinitionIndex = 53132;

	class StatisticsComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::CharacterSkillCustomStatisticConfig* _SkillStatisticConfig; // 0x18
		::Class_1_2C4471BA5FE34A73* _FeverTime_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AB410D28C98F5E0E*>* _BattleEventStt; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _AvatarTurnBPChain; // 0x30
		::RPG::GameCore::PVEGameStatistics* _StatisticSnapShot; // 0x38
		::System::Collections::Generic::List_1<::Class_1_668FE281FA72D3E8*>* _StatisticEvents; // 0x40
		::System::Collections::Generic::HashSet_1<::System::Int32>* _CustomStringHashSet; // 0x48
		::System::Collections::Generic::List_1<::Class_1_5DFA0229DED90FE5*>* _CharacterDeathStt; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* _ReportCustomValues; // 0x58
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_36*>* _actionBarEvents; // 0x60
		::System::Collections::Generic::List_1<::Class_1_83178EB088CAD885*>* _monsterPhaseChangeInfos; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EBB10EC01CCC4716_1*>* _AvatarInitialProperty; // 0x70
		::Il2CppArray<::System::UInt32>* _totalInsertAbilityTimes; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AC65A8C362F818F7*>* _MonsterStt; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_3<::Class_1_EBB10EC01CCC4716_1*, ::System::UInt32, ::System::UInt32>>* _LastTurnAvatarPropertySnapshot; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D1E0AD3915BCCF29_7*>* _AvatarGlobalBuffStt; // 0x90
		::Il2CppArray<::System::UInt32>* _totalSkillUseTimes; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_86E0535F5988D909*>* _ServantStt; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_85B61EA0E6D9987F*>* _TurnSttList; // 0xA8
		::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC_2*>* _WaveStt; // 0xB0
		::Il2CppArray<::RPG::GameCore::PVECharacterStt*>* _LightTeamStt; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _CustomValues; // 0xC0
		::System::Single _turnSkillPerformTime; // 0xC8
		::System::UInt32 _totalAvatarTurns; // 0xCC
		::System::UInt32 _currentLightTeamComboTurnCount; // 0xD0
		::System::UInt32 _lastSkillConfigID; // 0xD4
		::System::UInt32 _maxLightTeamComboTurnCount; // 0xD8
		::System::Single _lastPerformTime; // 0xDC
		::System::Single _lastSimulateTime; // 0xE0
		::System::UInt32 _totalBattleRounds; // 0xE4
		::System::UInt32 _totalAutoTurns; // 0xE8
		::System::UInt32 _totalServantTurns; // 0xEC
		::System::Single _totalSkillPerformTime; // 0xF0
		::System::UInt32 _totalMonsterTurns; // 0xF4
		::System::UInt32 _totalBattleTurns; // 0xF8
		::System::Boolean _lastIsLightTeamAction; // 0xFC
		::System::Int32 _CharacterDeathSttPendingInex; // 0x100
		::System::UInt32 _totalServantAutoTurns; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::PVEGameStatistics* BuildPVEStatistics()
		{
			return ((::RPG::GameCore::PVEGameStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_BUILDPVESTATISTICS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetKilledMonsterWaveIndexListByWave(::System::Int32 wave)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERWAVEINDEXLISTBYWAVE_OFFSET))(this, wave);
		}

		::System::Int32 GetKilledMonsterCount(::System::UInt32 nMonsterID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERCOUNT_OFFSET))(this, nMonsterID);
		}

		::RPG::GameCore::FixPoint GetTurnTakenDamage(::System::Int32 nTurnCounter, ::System::UInt32 nRuntimeID)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETTURNTAKENDAMAGE_OFFSET))(this, nTurnCounter, nRuntimeID);
		}

		::System::Void RecordAvatarInitialProperty(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_RECORDAVATARINITIALPROPERTY_OFFSET))(this, targetEntity);
		}

		::System::Void AddCustomValue(::System::String* sKey, ::RPG::GameCore::FixPoint fValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_ADDCUSTOMVALUE_OFFSET))(this, sKey, fValue);
		}

		::System::Void SetReportCustomValue(::System::String* sKey, ::RPG::GameCore::PropertyModifyFunction modifyFunc, ::RPG::GameCore::FixPoint fModifyValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_SETREPORTCUSTOMVALUE_OFFSET))(this, sKey, modifyFunc, fModifyValue);
		}

		::System::Void TriggerStatisticEvent(::Enum_3_F80BFD5B986D5503_2 eventType, ::System::UInt32 newValue)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRIGGERSTATISTICEVENT_OFFSET))(this, eventType, newValue);
		}

		::Class_2_AC65A8C362F818F7* GetMonsterSttFull(::System::UInt32 nRuntimeID)
		{
			return ((::Class_2_AC65A8C362F818F7*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTTFULL_OFFSET))(this, nRuntimeID);
		}

		::Class_1_1D0B4E25DB90BF59* GetMonsterStt(::System::UInt32 nRuntimeID)
		{
			return ((::Class_1_1D0B4E25DB90BF59*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTT_OFFSET))(this, nRuntimeID);
		}

		::Class_1_23C1B7E6B450FFB8* GetMonsterPhaseStt(::System::UInt32 nRuntimeID, ::System::UInt32 phaseID)
		{
			return ((::Class_1_23C1B7E6B450FFB8*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERPHASESTT_OFFSET))(this, nRuntimeID, phaseID);
		}

		::System::Boolean TryGetMonsterSttByConfigID(::System::UInt32 nMonsterID, ::Class_2_AC65A8C362F818F7*& pMonsterStt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_AC65A8C362F818F7*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYCONFIGID_OFFSET))(this, nMonsterID, pMonsterStt);
		}

		::System::Boolean TryGetMonsterSttByTemplateID(::System::UInt32 nMonsterTemplateID, ::Class_2_AC65A8C362F818F7*& pMonsterStt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_AC65A8C362F818F7*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYTEMPLATEID_OFFSET))(this, nMonsterTemplateID, pMonsterStt);
		}

		::System::Boolean HasTriggeredCustomString(::System::String* sCustomString)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_HASTRIGGEREDCUSTOMSTRING_OFFSET))(this, sCustomString);
		}

		::Class_2_AB410D28C98F5E0E* GetBattleEventStt(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::Class_2_AB410D28C98F5E0E*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETBATTLEEVENTSTT_OFFSET))(this, pEntity);
		}

		::Class_3_86E0535F5988D909* GetServantStt(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::Class_3_86E0535F5988D909*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETSERVANTSTT_OFFSET))(this, pEntity);
		}

		::RPG::GameCore::PVECharacterStt* GetAvatarSttByAvatarId(::System::UInt32 avatarId)
		{
			return ((::RPG::GameCore::PVECharacterStt*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARSTTBYAVATARID_OFFSET))(this, avatarId);
		}

		::Class_1_82F5C77DD4957B13* GetCharacterStt(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::Class_1_82F5C77DD4957B13*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETCHARACTERSTT_OFFSET))(this, pEntity);
		}

		::Class_1_D1E0AD3915BCCF29_7* GetAvatarGlobalBuffStt(::System::UInt32 mazeBuffId, ::System::Boolean autoCreate)
		{
			return ((::Class_1_D1E0AD3915BCCF29_7*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARGLOBALBUFFSTT_OFFSET))(this, mazeBuffId, autoCreate);
		}

		::Class_1_21DCD4640D389503_10* GetSkillUsePropertyByAbilityName(::Class_1_82F5C77DD4957B13* pCharacterStt, ::RPG::GameCore::GameEntity* pCaster, ::System::String* skillAbilityName)
		{
			return ((::Class_1_21DCD4640D389503_10*(*)(::PVOID, ::Class_1_82F5C77DD4957B13*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETSKILLUSEPROPERTYBYABILITYNAME_OFFSET))(this, pCharacterStt, pCaster, skillAbilityName);
		}

		::System::Void _InitByStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INITBYSTAGE_OFFSET))(this);
		}

		::System::Void InitPVEStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_INITPVESTATISTICS_OFFSET))(this);
		}

		::System::Void _InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INITEVENTS_OFFSET))(this);
		}

		::System::Void _UninitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__UNINITEVENTS_OFFSET))(this);
		}

		::System::Void _OnLevelTurnBegin(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNBEGIN_OFFSET))(this, evt);
		}

		::System::Void _OnLevelTurnEnd(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNEND_OFFSET))(this, evt);
		}

		::System::Void _OnCharacterCreate(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERCREATE_OFFSET))(this, evt);
		}

		::System::Void _OnCharacterDie(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERDIE_OFFSET))(this, evt);
		}

		::System::Void _OnBattleEventDie(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONBATTLEEVENTDIE_OFFSET))(this, evt);
		}

		::System::Void _OnEntityDie(::RPG::GameCore::GameEntity* pDieEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYDIE_OFFSET))(this, pDieEntity);
		}

		::System::Void _OnCharacterLimbo(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERLIMBO_OFFSET))(this, evt);
		}

		::System::Void _OnEntityEscape(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYESCAPE_OFFSET))(this, evt);
		}

		::System::Void _OnCharacterRevive(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERREVIVE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelUseAbility(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSEABILITY_OFFSET))(this, evt);
		}

		::System::Void _OnLevelInsertAbility(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELINSERTABILITY_OFFSET))(this, evt);
		}

		::System::Void _OnLevelDispelModifier(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDISPELMODIFIER_OFFSET))(this, evt);
		}

		::System::Void _OnLevelActionCountActive(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONCOUNTACTIVE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCharacterBreakStateChange(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBREAKSTATECHANGE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCharacterBeforeAddModifier(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBEFOREADDMODIFIER_OFFSET))(this, evt);
		}

		::System::Void _OnLevelWaveMonsterFinish(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELWAVEMONSTERFINISH_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCustomStringEvent(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCUSTOMSTRINGEVENT_OFFSET))(this, evt);
		}

		::System::Void _OnLevelTurnStateBeforeChangeEvent(::Class_0_16E4307DCC419505_382* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNSTATEBEFORECHANGEEVENT_OFFSET))(this, pEvt);
		}

		::System::Void _OnLevelDamageEntity(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITY_OFFSET))(this, evt);
		}

		::System::Void _OnLevelDamageEntityPhase1(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITYPHASE1_OFFSET))(this, evt);
		}

		::System::Void _OnLevelHealEntity(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELHEALENTITY_OFFSET))(this, evt);
		}

		::System::Void _OnLevelUseSkill(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSESKILL_OFFSET))(this, evt);
		}

		::System::Void _IncrementCountByEntityType(::Il2CppArray<::System::UInt32>* counterArray, ::RPG::GameCore::EntityType entityType)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INCREMENTCOUNTBYENTITYTYPE_OFFSET))(this, counterArray, entityType);
		}

		::System::Void _AddSkillPerformTime(::System::Single deltaTime, ::System::UInt32 skillConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ADDSKILLPERFORMTIME_OFFSET))(this, deltaTime, skillConfigID);
		}

		::System::Void _OnLevelEndUseSkill(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENDUSESKILL_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCurrentSPChange(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTSPCHANGE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCurrentBPChange(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTBPCHANGE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelActionDelayChanged(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONDELAYCHANGED_OFFSET))(this, evt);
		}

		::System::Void _OnLevelEntityInitShield(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYINITSHIELD_OFFSET))(this, evt);
		}

		::System::Void _OnLevelEntityShieldChange(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYSHIELDCHANGE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelTurnUltraSkillExecutingBegin(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNULTRASKILLEXECUTINGBEGIN_OFFSET))(this, evt);
		}

		::System::Void _OnLevelMonsterPhaseChange(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELMONSTERPHASECHANGE_OFFSET))(this, evt);
		}

		::System::Void _OnLevelCharacterEndAttack(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERENDATTACK_OFFSET))(this, evt);
		}

		::System::Void _CreateLightTeamPropertySnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__CREATELIGHTTEAMPROPERTYSNAPSHOT_OFFSET))(this);
		}

		::System::Void _FillCharacterSkillEquipAndRelic(::Class_1_BF43A923389D144C* battleInfo, ::System::UInt32 character_id)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF43A923389D144C*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__FILLCHARACTERSKILLEQUIPANDRELIC_OFFSET))(this, battleInfo, character_id);
		}

		::System::Void _FillAttackAndDamageInfo(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* dic, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>* propertys)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__FILLATTACKANDDAMAGEINFO_OFFSET))(this, dic, propertys);
		}

		::System::Void _BuildActivitySubModeStt(::RPG::GameCore::PVEGameStatistics* pFinalStt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__BUILDACTIVITYSUBMODESTT_OFFSET))(this, pFinalStt);
		}

		::Class_1_EBB10EC01CCC4716_1* _GetAvatarProperty(::RPG::GameCore::TurnBasedAbilityComponent* tbAbilityCmpt)
		{
			return ((::Class_1_EBB10EC01CCC4716_1*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__GETAVATARPROPERTY_OFFSET))(this, tbAbilityCmpt);
		}

		::Class_1_2C4471BA5FE34A73* get_FeverTime()
		{
			return ((::Class_1_2C4471BA5FE34A73*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GET_FEVERTIME_OFFSET))(this);
		}

		::System::Void set_FeverTime(::Class_1_2C4471BA5FE34A73* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C4471BA5FE34A73*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_SET_FEVERTIME_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AB410D28C98F5E0E*>* get_BattleEventStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AB410D28C98F5E0E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GET_BATTLEEVENTSTT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}
	};
}
