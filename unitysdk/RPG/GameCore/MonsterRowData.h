#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
class Class_1_15C380EE9BA3240C;
class Class_1_7A36342401039887;
class Class_2_6729AC3ED949BE6A;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class EliteGroupRow; }
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace RPG::GameCore { class HardLevelGroupRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterSkillRow; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace RPG::GameCore { class StageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xA4C2800)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xA4C2780)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xA4C26F0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xA4C2300)
#define RPG_GAMECORE_MONSTERROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xA4BF580)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ALLPHASESKILLS_OFFSET UNITYSDK_OFFSET(0xA4BF630)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xA4C05A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xA4C23F0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0xA4C1F20)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BASEMONSTERROW_OFFSET UNITYSDK_OFFSET(0xA4BF440)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BIGINITHP_OFFSET UNITYSDK_OFFSET(0xA4C04F0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BIGMAXHP_OFFSET UNITYSDK_OFFSET(0xA4BFE00)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA4C2050)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xA4BB450)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xA4C1EC0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xA4C1EE0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xA4C25B0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA4C2590)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0xA4C0BB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUP2ROW_OFFSET UNITYSDK_OFFSET(0xA4BF470)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUPROW_OFFSET UNITYSDK_OFFSET(0xA4BF460)
#define RPG_GAMECORE_MONSTERROWDATA_GET_EXTRALINEUP_OFFSET UNITYSDK_OFFSET(0xA4BF480)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HARDLEVELROW_OFFSET UNITYSDK_OFFSET(0xA4BF450)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xA4C2610)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA4C2240)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0xA4C2020)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0xA4C0480)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITSTANCE_OFFSET UNITYSDK_OFFSET(0xA4C1E60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xA4C2100)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0xA4BF660)
#define RPG_GAMECORE_MONSTERROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xA4BF560)
#define RPG_GAMECORE_MONSTERROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0xA4BF550)
#define RPG_GAMECORE_MONSTERROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA4BF600)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA4BF670)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xA4C1810)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0xA4C1F00)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xA4C2040)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MONSTERROW_OFFSET UNITYSDK_OFFSET(0xA4BF420)
#define RPG_GAMECORE_MONSTERROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xA4C2570)
#define RPG_GAMECORE_MONSTERROWDATA_GET_PHASEHIDESKILLS_OFFSET UNITYSDK_OFFSET(0xA4BF640)
#define RPG_GAMECORE_MONSTERROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0xA4C1F60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xA4C22A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA4BF490)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA4C2350)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xA4BF620)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA4C11C0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xA4C25D0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STANCECOUNT_OFFSET UNITYSDK_OFFSET(0xA4C2620)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STANCEWEAKLIST_OFFSET UNITYSDK_OFFSET(0xA4BAA80)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0xA4C2000)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STRATEGIES_OFFSET UNITYSDK_OFFSET(0xA4C21B0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_TEMPLATEROW_OFFSET UNITYSDK_OFFSET(0xA4BF430)
#define RPG_GAMECORE_MONSTERROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA4C23A0)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xA4C2690)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xA4C2440)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDESTRATEGIES_OFFSET UNITYSDK_OFFSET(0xA4C2520)
#define RPG_GAMECORE_MONSTERROWDATA_SET_PHASEHIDESKILLS_OFFSET UNITYSDK_OFFSET(0xA4BF650)
#define RPG_GAMECORE_MONSTERROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA4BF4A0)
#define RPG_GAMECORE_MONSTERROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B9220)
#define RPG_GAMECORE_MONSTERROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA4BDE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRowData_TypeDefinitionIndex = 44749;

	class MonsterRowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterRowData_TypeDefinitionIndex)->GetStaticField(0x43F60);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRow*>** StaticGet__TmpSkillRowList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterRowData_TypeDefinitionIndex)->GetStaticField(0x43F68);
		}
		::Il2CppArray<::RPG::Client::TextID>* _OverrideStrategies; // 0x10
		::RPG::GameCore::CharacterConfig* _Json; // 0x18
		::RPG::GameCore::BigFixPoint _MaxHPBig; // 0x20
		::Class_0_16E4307DCC419505_358* _ExtraLineup; // 0x30
		::System::String* _modelPath; // 0x38
		::RPG::GameCore::MonsterRow* _Row; // 0x40
		::Class_1_7A36342401039887* _AllPhaseSkills; // 0x48
		::RPG::GameCore::MonsterTemplateRow* _TemplateRow; // 0x50
		::RPG::GameCore::MonsterRow* _BaseMonsterRow; // 0x58
		::RPG::GameCore::BigFixPoint _InitHPBig; // 0x60
		::RPG::GameCore::EliteGroupRow* _EliteGroupRow; // 0x70
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* _DifficultyLvRow; // 0x78
		::RPG::GameCore::HardLevelGroupRow* _HardLevelRow; // 0x80
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _OverrideStanceWeakList; // 0x88
		::Class_1_15C380EE9BA3240C* _PhaseHideSkills_k__BackingField; // 0x90
		::Struct_2_88A74A9E9AE5BA51 _OverrideDisplay; // 0x98
		::RPG::GameCore::EliteGroupRow* _EliteGroup2Row; // 0xF8
		::RPG::GameCore::EliteGroupRow* _EliteGroup3Row; // 0x100
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x108
		::RPG::GameCore::FixPoint _MaxHP; // 0x110
		::RPG::GameCore::FixPoint _InitHP; // 0x118
		::RPG::GameCore::FixPoint _WorldHPMulRatio; // 0x120
		::System::Nullable_1<::RPG::GameCore::FixPoint> _InitStance; // 0x128
		::System::Nullable_1<::RPG::GameCore::FixPoint> _MaxStance; // 0x138
		::System::Boolean _InheritPBig; // 0x148

		::System::Void _ctor(::RPG::GameCore::MonsterRow* row, ::Class_2_6729AC3ED949BE6A* createaParams, ::RPG::GameCore::StageRow* stageRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*, ::Class_2_6729AC3ED949BE6A*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA__CTOR_OFFSET))(this, row, createaParams, stageRow);
		}

		::RPG::GameCore::MonsterRow* get_MonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterTemplateRow* get_TemplateRow()
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_TEMPLATEROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRow* get_BaseMonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BASEMONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::HardLevelGroupRow* get_HardLevelRow()
		{
			return ((::RPG::GameCore::HardLevelGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HARDLEVELROW_OFFSET))(this);
		}

		::RPG::GameCore::EliteGroupRow* get_EliteGroupRow()
		{
			return ((::RPG::GameCore::EliteGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUPROW_OFFSET))(this);
		}

		::RPG::GameCore::EliteGroupRow* get_EliteGroup2Row()
		{
			return ((::RPG::GameCore::EliteGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUP2ROW_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_358* get_ExtraLineup()
		{
			return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_EXTRALINEUP_OFFSET))(this);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_JSON_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::Class_1_7A36342401039887* get_AllPhaseSkills()
		{
			return ((::Class_1_7A36342401039887*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ALLPHASESKILLS_OFFSET))(this);
		}

		::Class_1_15C380EE9BA3240C* get_PhaseHideSkills()
		{
			return ((::Class_1_15C380EE9BA3240C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_PHASEHIDESKILLS_OFFSET))(this);
		}

		::System::Void set_PhaseHideSkills(::Class_1_15C380EE9BA3240C* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_15C380EE9BA3240C*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SET_PHASEHIDESKILLS_OFFSET))(this, value);
		}

		::System::Boolean get_IsAetherDivide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::BigFixPoint get_BigMaxHP()
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BIGMAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::BigFixPoint get_BigInitHP()
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BIGINITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TextID>* get_Strategies()
		{
			return ((::Il2CppArray<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STRATEGIES_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDISPLAY_OFFSET))(this, overrideData);
		}

		::System::Void OverrideStrategies(::Il2CppArray<::RPG::Client::TextID>* strategies)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDESTRATEGIES_OFFSET))(this, strategies);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_StanceWeakList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STANCEWEAKLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::Int32 get_StanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STANCECOUNT_OFFSET))(this);
		}

		::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDATA_OFFSET))(this, overrideData);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATA_OFFSET))(this, nSkillIndex);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* skillName)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, skillName);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYID_OFFSET))(this, skillID);
		}

		static ::System::Void _SetupSkillList(::RPG::GameCore::MonsterRow* monsterRow, ::RPG::GameCore::CharacterConfig* monsterJson, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* skillRowDatas)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterRow*, ::RPG::GameCore::CharacterConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA__SETUPSKILLLIST_OFFSET))(monsterRow, monsterJson, skillRowDatas);
		}
	};
}
