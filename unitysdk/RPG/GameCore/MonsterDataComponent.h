#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/CharacterDataComponent.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterViewPhaseType.h"
#include "unitysdk/Struct_2_52A902145F5BE513_4.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_469;
class Class_1_1A3239354F9648CA;
class Class_1_2EC0EF10CE4B8713;
class Class_1_70697F531F566942_2;
class Class_1_B8FB38F0526A59B0;
class Class_2_6729AC3ED949BE6A;
class Class_3_C1B871875244D398;
namespace RPG::GameCore { class CharacterPhaseOverrideConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterRowData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_GAMECORE_MONSTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF530470)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETAISKILLSEQUENCE_OFFSET UNITYSDK_OFFSET(0xF530610)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERID_OFFSET UNITYSDK_OFFSET(0xF530280)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERTEMPLATEID_OFFSET UNITYSDK_OFFSET(0xF530310)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF530380)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHPRATIO_OFFSET UNITYSDK_OFFSET(0xF532510)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHP_OFFSET UNITYSDK_OFFSET(0xF531E50)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CREATEPARAMS_OFFSET UNITYSDK_OFFSET(0xF532770)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASEHPRECOVERED_OFFSET UNITYSDK_OFFSET(0xF531980)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xF531970)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTVIEWPHASE_OFFSET UNITYSDK_OFFSET(0xF5327B0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_EXTRALINEUP_OFFSET UNITYSDK_OFFSET(0xF532780)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0xF532750)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMAINMONSTER_OFFSET UNITYSDK_OFFSET(0xF532840)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xF531920)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MAXPHASENUMBER_OFFSET UNITYSDK_OFFSET(0xF531940)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MONSTERROWDATA_OFFSET UNITYSDK_OFFSET(0xF532760)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MULTIACTIONCOUNTER_OFFSET UNITYSDK_OFFSET(0xF5328C0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_OVERRIDERANKSCORE_OFFSET UNITYSDK_OFFSET(0xF532820)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PHASECOUNT_OFFSET UNITYSDK_OFFSET(0xF531DF0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALHP_OFFSET UNITYSDK_OFFSET(0xF5321B0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0xF531990)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHP_OFFSET UNITYSDK_OFFSET(0xF5322F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_VIEWPHASETYPE_OFFSET UNITYSDK_OFFSET(0xF532810)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xF52DA80)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_MUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xF5318D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xF52E960)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xF52F990)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SETVIEWPHASE_OFFSET UNITYSDK_OFFSET(0xF5324B0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ISMUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xF531930)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_OVERRIDERANKSCORE_OFFSET UNITYSDK_OFFSET(0xF532830)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xF5328D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_1_OFFSET UNITYSDK_OFFSET(0xF531850)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_OFFSET UNITYSDK_OFFSET(0xF531590)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEPHASECONFIG_OFFSET UNITYSDK_OFFSET(0xF530EE0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF532960)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWSADV_OFFSET UNITYSDK_OFFSET(0xF52F100)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWS_OFFSET UNITYSDK_OFFSET(0xF52FB80)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITEVENT_OFFSET UNITYSDK_OFFSET(0xF530170)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONHPCHANGE_OFFSET UNITYSDK_OFFSET(0xF530750)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xF52D9E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONPREABILITYADD_OFFSET UNITYSDK_OFFSET(0xF5306C0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__SETUPDEFAULTPHASECONFIG_OFFSET UNITYSDK_OFFSET(0xF52E7A0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0xF530500)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTYHPADDRATIOBIG_OFFSET UNITYSDK_OFFSET(0xF530C60)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xF530810)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF532AB0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xF5329D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xF532A40)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xF532B30)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xF532970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDataComponent_TypeDefinitionIndex = 53140;

	class MonsterDataComponent : public ::RPG::GameCore::CharacterDataComponent
	{
	public:
		::Class_3_C1B871875244D398* _CustomDataRef; // 0x118
		::Class_2_6729AC3ED949BE6A* _CreateParams; // 0x120
		::Class_1_1A3239354F9648CA* _MultiActionCounter; // 0x128
		::RPG::GameCore::MonsterRowData* _MonsterRowData; // 0x130
		::Class_1_70697F531F566942_2* EnergyBarState; // 0x138
		::RPG::GameCore::CharacterPhaseOverrideConfig* _DefaultPhaseConfig; // 0x140
		::RPG::GameCore::FixPoint _DefaultMaxStance; // 0x148
		::System::Int32 MonsterWave; // 0x150
		::System::Int32 _PhaseMaxStanceStackIndex; // 0x154
		::System::Int32 MonsterIndexInWave; // 0x158
		::System::UInt32 _CurrentPhase; // 0x15C
		::System::UInt32 _OverrideViewPhase; // 0x160
		::RPG::GameCore::MonsterViewPhaseType _ViewPhaseType; // 0x164
		::System::Boolean _IsMuteLastKill_k__BackingField; // 0x168
		::System::Boolean _CurrentPhaseHPRecovered; // 0x169
		::System::Int32 _PhaseMaxHPStackIndex; // 0x16C
		::RPG::GameCore::FixPoint _DefaultMaxHP; // 0x170
		::System::Nullable_1<::RPG::GameCore::FixPoint> _OverrideRankScore_k__BackingField; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* createParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET))(this, createParam);
		}

		::System::Void OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, pTurnBasedAbility);
		}

		::System::Void _InitCommonDataFromMonsterRowsAdv(::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbility, ::Il2CppArray<::RPG::GameCore::MonsterRow*>* monsterRows)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Il2CppArray<::RPG::GameCore::MonsterRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWSADV_OFFSET))(this, pTurnBasedAbility, monsterRows);
		}

		::System::Void _InitCommonDataFromMonsterRows(::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbility, ::Il2CppArray<::RPG::GameCore::MonsterRow*>* monsterRows)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Il2CppArray<::RPG::GameCore::MonsterRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWS_OFFSET))(this, pTurnBasedAbility, monsterRows);
		}

		::System::UInt32 GetMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERID_OFFSET))(this);
		}

		::System::UInt32 GetMonsterTemplateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERTEMPLATEID_OFFSET))(this);
		}

		::System::UInt32 GetMonsterUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERUNIQUEID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* GetAISkillSequence()
		{
			return ((::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETAISKILLSEQUENCE_OFFSET))(this);
		}

		::System::Void _InitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITEVENT_OFFSET))(this);
		}

		::System::Void _UnInitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__UNINITEVENT_OFFSET))(this);
		}

		::System::Void _OnPreAbilityAdd(::Class_0_16E4307DCC419505_382* pEvtRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONPREABILITYADD_OFFSET))(this, pEvtRef);
		}

		::System::Void _OnHPChange(::Class_0_16E4307DCC419505_382* pEvtRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONHPCHANGE_OFFSET))(this, pEvtRef);
		}

		::System::Void _UpdatePhaseStackProperty(::RPG::GameCore::TurnBasedAbilityComponent* pAbilityCom, ::RPG::GameCore::AbilityProperty propType, ::RPG::GameCore::FixPoint defaultVal, ::RPG::GameCore::DynamicFloat* ratio, ::System::Int32& propStackIndex, ::System::Boolean roundToInt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTY_OFFSET))(this, pAbilityCom, propType, defaultVal, ratio, propStackIndex, roundToInt);
		}

		::System::Void _UpdatePhaseStackPropertyHpAddRatioBig(::RPG::GameCore::TurnBasedAbilityComponent* pAbilityCom, ::RPG::GameCore::DynamicFloat* ratio, ::System::Int32& propStackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::DynamicFloat*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTYHPADDRATIOBIG_OFFSET))(this, pAbilityCom, ratio, propStackIndex);
		}

		::System::Void UpdatePhaseConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEPHASECONFIG_OFFSET))(this);
		}

		::System::Void _SetupDefaultPhaseConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__SETUPDEFAULTPHASECONFIG_OFFSET))(this);
		}

		::System::Void UpdateEnergyBarState(::Struct_2_52A902145F5BE513_4 rtData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_52A902145F5BE513_4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_OFFSET))(this, rtData);
		}

		::System::Void UpdateEnergyBarState_1(::Class_1_70697F531F566942_2* newState)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_1_OFFSET))(this, newState);
		}

		::System::Void MuteLastKill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_MUTELASTKILL_OFFSET))(this);
		}

		::System::Boolean get_IsMuteLastKill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMUTELASTKILL_OFFSET))(this);
		}

		::System::Void set_IsMuteLastKill(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ISMUTELASTKILL_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxPhaseNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MAXPHASENUMBER_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASE_OFFSET))(this);
		}

		::System::Boolean get_CurrentPhaseHPRecovered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASEHPRECOVERED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalLeftHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalLeftHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHP_OFFSET))(this);
		}

		::System::Void SetCurrentPhase(::System::UInt32 value, ::System::Boolean applyOverrideConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SETCURRENTPHASE_OFFSET))(this, value, applyOverrideConfig);
		}

		::System::Void SetViewPhase(::System::UInt32 value, ::RPG::GameCore::MonsterViewPhaseType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MonsterViewPhaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SETVIEWPHASE_OFFSET))(this, value, type);
		}

		::RPG::GameCore::FixPoint GetPhaseMaxHP(::System::UInt32 phase)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHP_OFFSET))(this, phase);
		}

		::RPG::GameCore::FixPoint GetPhaseMaxHPRatio(::System::UInt32 phase)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHPRATIO_OFFSET))(this, phase);
		}

		::System::Boolean get_HasLife()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_HASLIFE_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRowData* get_MonsterRowData()
		{
			return ((::RPG::GameCore::MonsterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MONSTERROWDATA_OFFSET))(this);
		}

		::Class_2_6729AC3ED949BE6A* get_CreateParams()
		{
			return ((::Class_2_6729AC3ED949BE6A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CREATEPARAMS_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_469* get_ExtraLineup()
		{
			return ((::Class_0_16E4307DCC419505_469*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_EXTRALINEUP_OFFSET))(this);
		}

		::System::Int32 get_PhaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PHASECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurrentViewPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTVIEWPHASE_OFFSET))(this);
		}

		::RPG::GameCore::MonsterViewPhaseType get_ViewPhaseType()
		{
			return ((::RPG::GameCore::MonsterViewPhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_VIEWPHASETYPE_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::GameCore::FixPoint> get_OverrideRankScore()
		{
			return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_OVERRIDERANKSCORE_OFFSET))(this);
		}

		::System::Void set_OverrideRankScore(::System::Nullable_1<::RPG::GameCore::FixPoint> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_OVERRIDERANKSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMainMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMAINMONSTER_OFFSET))(this);
		}

		::Class_1_1A3239354F9648CA* get_MultiActionCounter()
		{
			return ((::Class_1_1A3239354F9648CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MULTIACTIONCOUNTER_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::ICharacterRowData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ROWDATA_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_INITBATTLECHARACTERDATA_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_set_RowData(::RPG::GameCore::ICharacterRowData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_SET_ROWDATA_OFFSET))(this, P0);
		}
	};
}
