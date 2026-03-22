#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/CharacterDataComponent.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterViewPhaseType.h"
#include "unitysdk/Struct_2_52A902145F5BE513_4.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_347;
class Class_0_16E4307DCC419505_358;
class Class_1_1A3239354F9648CA;
class Class_1_2EC0EF10CE4B8713;
class Class_1_70697F531F566942_1;
class Class_1_B8FB38F0526A59B0;
class Class_2_6729AC3ED949BE6A;
class Class_3_C1B871875244D398;
namespace RPG::GameCore { class CharacterPhaseOverrideConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterRowData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_GAMECORE_MONSTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4BB5D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETAISKILLSEQUENCE_OFFSET UNITYSDK_OFFSET(0xA4BB770)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERID_OFFSET UNITYSDK_OFFSET(0xA4BB3E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERTEMPLATEID_OFFSET UNITYSDK_OFFSET(0xA4BB470)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA4BB4E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHPRATIO_OFFSET UNITYSDK_OFFSET(0xA4BD7E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHP_OFFSET UNITYSDK_OFFSET(0xA4BD120)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CREATEPARAMS_OFFSET UNITYSDK_OFFSET(0xA4BDA40)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASEHPRECOVERED_OFFSET UNITYSDK_OFFSET(0xA4BCC50)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xA4BCC40)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTVIEWPHASE_OFFSET UNITYSDK_OFFSET(0xA4BDA70)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_EXTRALINEUP_OFFSET UNITYSDK_OFFSET(0xA4BDA50)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0xA4BDA20)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMAINMONSTER_OFFSET UNITYSDK_OFFSET(0xA4BDB00)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xA4BCBF0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MAXPHASENUMBER_OFFSET UNITYSDK_OFFSET(0xA4BCC10)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MONSTERROWDATA_OFFSET UNITYSDK_OFFSET(0xA4BDA30)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MULTIACTIONCOUNTER_OFFSET UNITYSDK_OFFSET(0xA4BDB80)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_OVERRIDERANKSCORE_OFFSET UNITYSDK_OFFSET(0xA4BDAE0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PHASECOUNT_OFFSET UNITYSDK_OFFSET(0xA4BD0C0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALHP_OFFSET UNITYSDK_OFFSET(0xA4BD480)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0xA4BCC60)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHP_OFFSET UNITYSDK_OFFSET(0xA4BD5C0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_VIEWPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA4BDAD0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xA4B8C10)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_MUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xA4BCBA0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA4B9AB0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xA4BAAE0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SETVIEWPHASE_OFFSET UNITYSDK_OFFSET(0xA4BD780)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ISMUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xA4BCC00)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_OVERRIDERANKSCORE_OFFSET UNITYSDK_OFFSET(0xA4BDAF0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xA4BDB90)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_1_OFFSET UNITYSDK_OFFSET(0xA4BCB20)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_OFFSET UNITYSDK_OFFSET(0xA4BC6B0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEPHASECONFIG_OFFSET UNITYSDK_OFFSET(0xA4BC010)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4BDC20)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWSADV_OFFSET UNITYSDK_OFFSET(0xA4BA250)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWS_OFFSET UNITYSDK_OFFSET(0xA4BACE0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITEVENT_OFFSET UNITYSDK_OFFSET(0xA4BB2D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONHPCHANGE_OFFSET UNITYSDK_OFFSET(0xA4BB890)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA4B8B70)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONPREABILITYADD_OFFSET UNITYSDK_OFFSET(0xA4BB800)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__SETUPDEFAULTPHASECONFIG_OFFSET UNITYSDK_OFFSET(0xA4B98F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0xA4BB660)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTYHPADDRATIOBIG_OFFSET UNITYSDK_OFFSET(0xA4BBD90)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xA4BB950)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4BDD70)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xA4BDC90)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA4BDD00)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xA4BDDF0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA4BDC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDataComponent_TypeDefinitionIndex = 45391;

	class MonsterDataComponent : public ::RPG::GameCore::CharacterDataComponent
	{
	public:
		::Class_2_6729AC3ED949BE6A* _CreateParams; // 0x110
		::Class_1_1A3239354F9648CA* _MultiActionCounter; // 0x118
		::RPG::GameCore::CharacterPhaseOverrideConfig* _DefaultPhaseConfig; // 0x120
		::RPG::GameCore::MonsterRowData* _MonsterRowData; // 0x128
		::Class_1_70697F531F566942_1* EnergyBarState; // 0x130
		::Class_3_C1B871875244D398* _CustomDataRef; // 0x138
		::RPG::GameCore::FixPoint _DefaultMaxHP; // 0x140
		::System::UInt32 _CurrentPhase; // 0x148
		::System::Int32 _PhaseMaxStanceStackIndex; // 0x14C
		::RPG::GameCore::MonsterViewPhaseType _ViewPhaseType; // 0x150
		::System::Int32 MonsterWave; // 0x154
		::System::Boolean _CurrentPhaseHPRecovered; // 0x158
		::System::Boolean _IsMuteLastKill_k__BackingField; // 0x159
		::System::Int32 MonsterIndexInWave; // 0x15C
		::RPG::GameCore::FixPoint _DefaultMaxStance; // 0x160
		::System::Int32 _PhaseMaxHPStackIndex; // 0x168
		::System::UInt32 _OverrideViewPhase; // 0x16C
		::System::Nullable_1<::RPG::GameCore::FixPoint> _OverrideRankScore_k__BackingField; // 0x170

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

		::System::Void _OnPreAbilityAdd(::Class_0_16E4307DCC419505_347* pEvtRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONPREABILITYADD_OFFSET))(this, pEvtRef);
		}

		::System::Void _OnHPChange(::Class_0_16E4307DCC419505_347* pEvtRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONHPCHANGE_OFFSET))(this, pEvtRef);
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

		::System::Void UpdateEnergyBarState_1(::Class_1_70697F531F566942_1* newState)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_1_OFFSET))(this, newState);
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

		::Class_0_16E4307DCC419505_358* get_ExtraLineup()
		{
			return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_EXTRALINEUP_OFFSET))(this);
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
