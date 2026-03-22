#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectMutexResult.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/ServantSelectType.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
#include "unitysdk/RPG/GameCore/SkillDamageRange.h"
#include "unitysdk/RPG/GameCore/SkillTreeTemplateType.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/Struct_2_3271D18CDCC3AB1D.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_433;
class Class_1_120319518E6F6581_7;
class Class_1_152140BAFD2DB102;
class Class_1_1D0B4E25DB90BF59;
class Class_1_35B19D34B208E77E;
class Class_1_48AADA497C3F117F_2;
class Class_1_50D7577ADBD39E1A;
class Class_1_752172F3794CD86F;
class Class_1_7AB88D713F5121B3_38;
class Class_1_A2D8E5AB4B623162;
class Class_1_BF43A923389D144C;
class Class_1_C9DFE5EE7107C629;
namespace RPG::Client { class EntityCollisionBodyParts; }
namespace RPG::Client { class LevelDirector; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class CharacterPreloadConfig; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class MonsterPreloadConfig; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace RPG::GameCore { class StageMonsterWave; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_GAMEPLAYSTATIC_ABILITYPROPERTYTOAVATARPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA427CA0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ADVENTUREGETSPECIALAVATARROWBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA4285E0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_1_OFFSET UNITYSDK_OFFSET(0xA428260)
#define RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_2_OFFSET UNITYSDK_OFFSET(0xA4282F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_3_OFFSET UNITYSDK_OFFSET(0xA427F90)
#define RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_OFFSET UNITYSDK_OFFSET(0xA427F00)
#define RPG_GAMECORE_GAMEPLAYSTATIC_AVATARBATTLEINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xA430880)
#define RPG_GAMECORE_GAMEPLAYSTATIC_AVATARPROPERTYTYPETOABILITYPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA427B60)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEAVATARGLOBALBUFFINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xA430FD0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEAVATARSERVANTINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xA430EA0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEEVENTBATTLEINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xA430CD0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BOSSMULTIINSTCHECK_OFFSET UNITYSDK_OFFSET(0xA432020)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDCHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA42BF70)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAMEBYGROUPINFO_OFFSET UNITYSDK_OFFSET(0xA42C6F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAMEBYSTR_OFFSET UNITYSDK_OFFSET(0xA42C820)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA42C5E0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAMEBYGROUPINFO_OFFSET UNITYSDK_OFFSET(0xA42C3F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAMEBYSTR_OFFSET UNITYSDK_OFFSET(0xA42C550)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA42C340)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDPROPUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA42C220)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCRELICMAINAFFIXVALUE_OFFSET UNITYSDK_OFFSET(0xA42B670)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCRELICSUBAFFIXVALUE_OFFSET UNITYSDK_OFFSET(0xA42B7C0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTATTACKBASE_OFFSET UNITYSDK_OFFSET(0xA42B370)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTDEFENCEBASE_OFFSET UNITYSDK_OFFSET(0xA42B4F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTHPBASE_OFFSET UNITYSDK_OFFSET(0xA42B1F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCULATENEWACTIONDELAYWHENSPEEDCHANGE_OFFSET UNITYSDK_OFFSET(0xA42B180)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CANINSERTACTIONUSE_OFFSET UNITYSDK_OFFSET(0xA42AC10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLOPAPPLY_OFFSET UNITYSDK_OFFSET(0xA429D10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLUSE_1_OFFSET UNITYSDK_OFFSET(0xA42A610)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLUSE_OFFSET UNITYSDK_OFFSET(0xA42A3B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CHECKEFFECTMUTEX_OFFSET UNITYSDK_OFFSET(0xA42EB30)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CHECKENTITYLOCKABLE_OFFSET UNITYSDK_OFFSET(0xA4244A0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CREATEBATTLESTATSPROTO_OFFSET UNITYSDK_OFFSET(0xA431250)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CREATEPRESHOWENTITY_OFFSET UNITYSDK_OFFSET(0xA424740)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ENABLEEFFECTLOWLOD_OFFSET UNITYSDK_OFFSET(0xA42F490)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FILTERSKILLTARGETLISTBYSUMMONUNITMATCHED_OFFSET UNITYSDK_OFFSET(0xA42F6C0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FINDBODYPARTINDEX_OFFSET UNITYSDK_OFFSET(0xA42BEE0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FINDSCEPTER_OFFSET UNITYSDK_OFFSET(0xA42CB20)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FINDTYPEDCHARACTERBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA42CA90)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FORCEEFFECTSMANUALFOLLOW_OFFSET UNITYSDK_OFFSET(0xA42F1B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GENRELICSETABILITYKEY_1_OFFSET UNITYSDK_OFFSET(0xA42BA70)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GENRELICSETABILITYKEY_OFFSET UNITYSDK_OFFSET(0xA42B990)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETABILITYPROPERTYANDSKILLLEVELBYAVATARSKILLTREEANDRANK_OFFSET UNITYSDK_OFFSET(0xA4286B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETAREANAMEBYTASK_OFFSET UNITYSDK_OFFSET(0xA42CEE0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYNPCMONSTERENTITY_OFFSET UNITYSDK_OFFSET(0xA42DA50)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYNPCMONSTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA42DC80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xA42D8B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYWAVE_OFFSET UNITYSDK_OFFSET(0xA42D6F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETAVATARSKILLNAMEBYID_OFFSET UNITYSDK_OFFSET(0xA427A70)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETCOLLISIONBODYPARTSFROMHITBOX_OFFSET UNITYSDK_OFFSET(0xA42BE00)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETCOMBATPOWERWARNPERCENTMONSTERRATE_OFFSET UNITYSDK_OFFSET(0xA42FEE0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xA432060)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETCURRENTLEVELDIRECTOR_OFFSET UNITYSDK_OFFSET(0xA431CD0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETDISPLAYATTACKDAMAGETYPESTATISTICSINFOBYWAVE_OFFSET UNITYSDK_OFFSET(0xA42D530)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETEFFECTFLAGMASK_OFFSET UNITYSDK_OFFSET(0xA42F320)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xA423FD0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYFROMGAMEOBEJCT_OFFSET UNITYSDK_OFFSET(0xA42BB50)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYLOCATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA427A00)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYMANAGER_OFFSET UNITYSDK_OFFSET(0xA424020)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETMAINATTACKDAMAGETYPEDICTBYNPCMONSTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA42DE10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETMEMBERCOUNTINGOPTIONBYSERVANTSELECTTYPE_OFFSET UNITYSDK_OFFSET(0xA42F950)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETMONSTERDROPREWARDDATA_OFFSET UNITYSDK_OFFSET(0xA42DF80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA4321F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLTREEPOINTLEVELSBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA429340)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLTREEPOINTSUITLEVEL_OFFSET UNITYSDK_OFFSET(0xA429A60)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSPECIALAVATARROWBYAVATARIDANDWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xA428540)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSTAGEROWBYNPCMONSTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA42DAD0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETTOTALMONSTERRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA430240)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETULTRASKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA429C20)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GET_BATTLEID_OFFSET UNITYSDK_OFFSET(0xA42FD60)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GET_LEGALSERVER_OFFSET UNITYSDK_OFFSET(0xA42FE40)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISALLTEAMMATESTEALTH_OFFSET UNITYSDK_OFFSET(0xA4242D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISAVATAROWNEDEFFECT_OFFSET UNITYSDK_OFFSET(0xA42F9A0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISENABLESPCHECKADDOPCOUNT_OFFSET UNITYSDK_OFFSET(0xA42A370)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISENTITYINCIRCULARSECTOR_OFFSET UNITYSDK_OFFSET(0xA42CBF0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISINULTRASKILLINSERTSTATE_OFFSET UNITYSDK_OFFSET(0xA42B0E0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISMATERIALSCALEHUGEMONSTER_OFFSET UNITYSDK_OFFSET(0xA42EE10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISMODIFIERPHASEENDSTATE_OFFSET UNITYSDK_OFFSET(0xA42B130)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISMONSTERCONTAINSMAINATTACKDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA42DED0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISMONSTEROWNEDEFFECT_OFFSET UNITYSDK_OFFSET(0xA42FB80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISSUMMONUNITMATCHED_OFFSET UNITYSDK_OFFSET(0xA42F850)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISTARGETMATCHED_OFFSET UNITYSDK_OFFSET(0xA4245E0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISTESELLATIONENABLE_OFFSET UNITYSDK_OFFSET(0xA42EFD0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISTRIGGEREFFECTMUTEXENTITY_OFFSET UNITYSDK_OFFSET(0xA42E8D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISTRIGGEREFFECTMUTEXGLOBAL_OFFSET UNITYSDK_OFFSET(0xA42E4B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISULTRASKILL_OFFSET UNITYSDK_OFFSET(0xA429BA0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_MAKENPCAIGOBACK_OFFSET UNITYSDK_OFFSET(0xA42C880)
#define RPG_GAMECORE_GAMEPLAYSTATIC_MONSTERBATTLEINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xA430A30)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSKILLHPCHANGES_OFFSET UNITYSDK_OFFSET(0xA424A80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSKILLSTANCE_OFFSET UNITYSDK_OFFSET(0xA425A60)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSTANCECHANGE_OFFSET UNITYSDK_OFFSET(0xA426550)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKDAMAGEBREAKSTANCE_1_OFFSET UNITYSDK_OFFSET(0xA4272A0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKDAMAGEBREAKSTANCE_OFFSET UNITYSDK_OFFSET(0xA427750)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLBREAKREDSTANCE_OFFSET UNITYSDK_OFFSET(0xA4274D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLBREAKSTANCE_OFFSET UNITYSDK_OFFSET(0xA427180)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLFORCESTANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0xA4278C0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PREPARECOMMONBATTLEEVENTCREATE_OFFSET UNITYSDK_OFFSET(0xA4306B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDEJSONPATH_OFFSET UNITYSDK_OFFSET(0xA432360)
#define RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDESKILLLIST_OFFSET UNITYSDK_OFFSET(0xA432560)
#define RPG_GAMECORE_GAMEPLAYSTATIC_SOLVESTANCEWEAKNESSPRESHOW_OFFSET UNITYSDK_OFFSET(0xA4255E0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_STATISTICEVENTLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xA431110)
#define RPG_GAMECORE_GAMEPLAYSTATIC_TRYGETSTANCESLOTPERCENT_OFFSET UNITYSDK_OFFSET(0xA424170)
#define RPG_GAMECORE_GAMEPLAYSTATIC_TRYREPLAYMUTEXEFFECT_OFFSET UNITYSDK_OFFSET(0xA42ECC0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_UPDATEATTACKDAMAGETYPESTATISTICSINFOBYSINGLEMONSTERFORDISPLAY_OFFSET UNITYSDK_OFFSET(0xA42D1F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_UPDATEATTACKDAMAGETYPESTATISTICSINFOBYSINGLEMONSTER_OFFSET UNITYSDK_OFFSET(0xA42CF80)
#define RPG_GAMECORE_GAMEPLAYSTATIC__CANINSERTACTIONUSEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA42ACA0)
#define RPG_GAMECORE_GAMEPLAYSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xA432760)
#define RPG_GAMECORE_GAMEPLAYSTATIC__SHOULDCHECKFADEOUTMUTEXMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xA42E6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic_TypeDefinitionIndex = 46638;

	class GamePlayStatic : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet__NameBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x43330);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>** StaticGet__WaveStatisticsInfoList()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x43338);
		}
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet__CombatPowerWarnPercentMonsterList()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x43340);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*>** StaticGet__WaveStatisticsList()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x43348);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarPropertyType>** StaticGet__Ability2AvatarPropertyMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x43350);
		}
		static ::System::Int32* StaticGet__WaveStatisticsIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0xF980);
		}
		static ::System::Int32* StaticGet__WaveStatisticsInfoIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0xF984);
		}
		// static const ::System::String* PROP_PREFIX; // 0x0
		// static const ::System::String* SUMMON_UNIT_PREFIX; // 0x0
		// static const ::System::String* NPC_PREFIX; // 0x0
		// static const ::System::String* NPCMONSTER_PREFIX; // 0x0
		// static const ::System::Int32 MAX_WAVE_CACHE_NUMBER = 0x14; // 0x0
		// static const ::System::Single INVISIBLE_POSITION_Y; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::TeamType GetEnemyTeam(::RPG::GameCore::TeamType Team)
		{
			return ((::RPG::GameCore::TeamType(*)(::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETENEMYTEAM_OFFSET))(Team);
		}

		static ::RPG::GameCore::EntityManager* GetEntityManager()
		{
			return ((::RPG::GameCore::EntityManager*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYMANAGER_OFFSET))();
		}

		static ::System::Boolean TryGetStanceSlotPercent(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::FixPoint& fResult, ::System::Boolean includeRedStance)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_TRYGETSTANCESLOTPERCENT_OFFSET))(pEntity, fResult, includeRedStance);
		}

		static ::System::Boolean IsAllTeammateStealth(::RPG::GameCore::GameEntity* member)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISALLTEAMMATESTEALTH_OFFSET))(member);
		}

		static ::System::Boolean CheckEntityLockable(::RPG::GameCore::EntityManager* pEntityManager, ::RPG::GameCore::GameEntity* pTargetEntity, ::RPG::GameCore::GameEntity* pCasterEntity, ::RPG::GameCore::SkillTargetConfig* targetConfig)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CHECKENTITYLOCKABLE_OFFSET))(pEntityManager, pTargetEntity, pCasterEntity, targetConfig);
		}

		static ::RPG::GameCore::GameEntity* CreatePreShowEntity(::RPG::GameCore::TurnBasedModifierInstance* modifierInstance)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CREATEPRESHOWENTITY_OFFSET))(modifierInstance);
		}

		static ::RPG::GameCore::FixPoint PreCalcSkillHPChanges(::RPG::GameCore::TurnBasedAbilityComponent* pAttackerTurnBasedAbility, ::RPG::GameCore::TurnBasedAbilityComponent* pTargetTurnBasedAbility, ::Class_1_A2D8E5AB4B623162* pEntryAbilityInstance, ::Class_0_16E4307DCC419505_433* pSkillConfigRowData, ::RPG::GameCore::SkillDamageRange eDamageRangeType, ::RPG::GameCore::SkillData* pSkillData)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_A2D8E5AB4B623162*, ::Class_0_16E4307DCC419505_433*, ::RPG::GameCore::SkillDamageRange, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSKILLHPCHANGES_OFFSET))(pAttackerTurnBasedAbility, pTargetTurnBasedAbility, pEntryAbilityInstance, pSkillConfigRowData, eDamageRangeType, pSkillData);
		}

		static ::RPG::GameCore::AttackDamageType SolveStanceWeaknessPreshow(::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::GameEntity* pTarget, ::System::Int32 skillIndex, ::System::Boolean ignoreWeaknessDuplicate)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_SOLVESTANCEWEAKNESSPRESHOW_OFFSET))(pAttacker, pTarget, skillIndex, ignoreWeaknessDuplicate);
		}

		static ::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType, ::System::Boolean> PreCalcSkillStance(::RPG::GameCore::TurnBasedAbilityComponent* pAttackerTurnBasedAbility, ::RPG::GameCore::TurnBasedAbilityComponent* pTargetTurnBasedAbility, ::Class_0_16E4307DCC419505_433* pAvatarSkillConfig, ::RPG::GameCore::SkillData* pSkillData, ::RPG::GameCore::SkillDamageRange eDamageRangeType)
		{
			return ((::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType, ::System::Boolean>(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_0_16E4307DCC419505_433*, ::RPG::GameCore::SkillData*, ::RPG::GameCore::SkillDamageRange))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSKILLSTANCE_OFFSET))(pAttackerTurnBasedAbility, pTargetTurnBasedAbility, pAvatarSkillConfig, pSkillData, eDamageRangeType);
		}

		static ::RPG::GameCore::FixPoint PreCalcStanceChange(::Struct_2_3271D18CDCC3AB1D& config, ::RPG::GameCore::AttackDamageType addweaknessList, ::System::Boolean& previewForceStanceDamage)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Struct_2_3271D18CDCC3AB1D&, ::RPG::GameCore::AttackDamageType, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSTANCECHANGE_OFFSET))(config, addweaknessList, previewForceStanceDamage);
		}

		static ::System::Boolean PreCheckSkillBreakStance(::RPG::GameCore::GameEntity* casterEntity, ::RPG::GameCore::GameEntity* targetEntity, ::System::Int32 skillIndex, ::System::Boolean& breakNormal, ::System::Boolean& breakRed)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLBREAKSTANCE_OFFSET))(casterEntity, targetEntity, skillIndex, breakNormal, breakRed);
		}

		static ::System::Boolean PreCheckSkillBreakRedStance(::RPG::GameCore::GameEntity* casterEntity, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* targetEntityList, ::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLBREAKREDSTANCE_OFFSET))(casterEntity, targetEntityList, skillIndex);
		}

		static ::System::Boolean PreCheckDamageBreakStance(::RPG::GameCore::FixPoint stanceChange, ::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKDAMAGEBREAKSTANCE_OFFSET))(stanceChange, targetEntity);
		}

		static ::System::Boolean PreCheckDamageBreakStance_1(::RPG::GameCore::FixPoint stanceChange, ::RPG::GameCore::GameEntity* targetEntity, ::System::Boolean& breakNormal, ::System::Boolean& breakRed)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKDAMAGEBREAKSTANCE_1_OFFSET))(stanceChange, targetEntity, breakNormal, breakRed);
		}

		static ::System::Boolean PreCheckSkillForceStanceDamage(::RPG::GameCore::TurnBasedAbilityComponent* pAttackerTurnBasedAbility, ::RPG::GameCore::TurnBasedAbilityComponent* pTargetTurnBasedAbility, ::RPG::GameCore::SkillConfig* pSkillJsonConfig)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLFORCESTANCEDAMAGE_OFFSET))(pAttackerTurnBasedAbility, pTargetTurnBasedAbility, pSkillJsonConfig);
		}

		static ::RPG::GameCore::LocationConfig* GetEntityLocationConfig(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::RPG::GameCore::LocationConfig*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYLOCATIONCONFIG_OFFSET))(pEntity);
		}

		static ::System::String* GetAvatarSkillNameByID(::System::UInt32 skillID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETAVATARSKILLNAMEBYID_OFFSET))(skillID);
		}

		static ::RPG::GameCore::AbilityProperty AvatarPropertyTypeToAbilityPropertyType(::RPG::GameCore::AvatarPropertyType avatarPropertyType)
		{
			return ((::RPG::GameCore::AbilityProperty(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_AVATARPROPERTYTYPETOABILITYPROPERTYTYPE_OFFSET))(avatarPropertyType);
		}

		static ::RPG::GameCore::AvatarPropertyType AbilityPropertyToAvatarPropertyType(::RPG::GameCore::AbilityProperty abilityProperty)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ABILITYPROPERTYTOAVATARPROPERTYTYPE_OFFSET))(abilityProperty);
		}

		static ::System::Void ApplyAvatarPropertyItem(::RPG::GameCore::AvatarPropertyValue* avatarProperty, ::RPG::GameCore::TurnBasedAbilityComponent* abilityComponent, ::System::Boolean stack)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPropertyValue*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_OFFSET))(avatarProperty, abilityComponent, stack);
		}

		static ::System::Void ApplyAvatarPropertyItem_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint> keyValue, ::RPG::GameCore::TurnBasedAbilityComponent* abilityComponent, ::System::Boolean stack)
		{
			return ((::System::Void(*)(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_1_OFFSET))(keyValue, abilityComponent, stack);
		}

		static ::System::Void ApplyAvatarPropertyItem_2(::Class_1_50D7577ADBD39E1A* avatarProperty, ::RPG::GameCore::TurnBasedAbilityComponent* abilityComponent, ::System::Boolean stack)
		{
			return ((::System::Void(*)(::Class_1_50D7577ADBD39E1A*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_2_OFFSET))(avatarProperty, abilityComponent, stack);
		}

		static ::System::Void ApplyAvatarPropertyItem_3(::RPG::GameCore::AbilityProperty abilityProperty, ::RPG::GameCore::FixPoint value, ::RPG::GameCore::TurnBasedAbilityComponent* abilityComponent, ::System::Boolean stack)
		{
			return ((::System::Void(*)(::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_3_OFFSET))(abilityProperty, value, abilityComponent, stack);
		}

		static ::RPG::GameCore::SpecialAvatarRow* GetSpecialAvatarRowByAvatarIDAndWorldLevel(::System::UInt32 specialAvatarID, ::System::UInt32 worldLevel)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSPECIALAVATARROWBYAVATARIDANDWORLDLEVEL_OFFSET))(specialAvatarID, worldLevel);
		}

		static ::RPG::GameCore::SpecialAvatarRow* AdventureGetSpecialAvatarRowByAvatarID(::System::UInt32 specialAvatarID, ::System::UInt32 worldLevel)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ADVENTUREGETSPECIALAVATARROWBYAVATARID_OFFSET))(specialAvatarID, worldLevel);
		}

		static ::System::Void GetAbilityPropertyAndSkillLevelByAvatarSkillTreeAndRank(::System::UInt32 avatarID, ::System::UInt32 enhancedID, ::System::UInt32 avatarRank, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>* skillTreeDataList, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>* changedSkillTreeDataList, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*& skillTreePropertyMap, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*& skillTreeSkillLevelMap)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>*, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETABILITYPROPERTYANDSKILLLEVELBYAVATARSKILLTREEANDRANK_OFFSET))(avatarID, enhancedID, avatarRank, skillTreeDataList, changedSkillTreeDataList, skillTreePropertyMap, skillTreeSkillLevelMap);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetSkillTreePointLevelsByTemplate(::System::UInt32 avatarLevel, ::System::UInt32 avatarPromotion, ::System::Collections::Generic::HashSet_1<::System::UInt32>* skillTreeIds, ::RPG::GameCore::SkillTreeTemplateType templateType, ::System::String* customKey)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::GameCore::SkillTreeTemplateType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLTREEPOINTLEVELSBYTEMPLATE_OFFSET))(avatarLevel, avatarPromotion, skillTreeIds, templateType, customKey);
		}

		static ::System::UInt32 GetSkillTreePointSuitLevel(::System::UInt32 pointID, ::System::UInt32 avatarLevel, ::System::UInt32 avatarPromotion)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLTREEPOINTSUITLEVEL_OFFSET))(pointID, avatarLevel, avatarPromotion);
		}

		static ::System::Boolean IsUltraSkill(::RPG::GameCore::GameEntity* pEntity, ::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISULTRASKILL_OFFSET))(pEntity, skillIndex);
		}

		static ::System::Int32 GetUltraSkillIndex(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETULTRASKILLINDEX_OFFSET))(pEntity);
		}

		static ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo CanUltraSkillOpApply(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLOPAPPLY_OFFSET))(pEntity);
		}

		static ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo CanUltraSkillUse(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLUSE_OFFSET))(pEntity);
		}

		static ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo CanUltraSkillUse_1(::System::Int32 nSkillIndex, ::RPG::GameCore::GameEntity* pEntity, ::System::Boolean checkTarget, ::System::Boolean checkLinkSkill, ::System::Boolean checkSp)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLUSE_1_OFFSET))(nSkillIndex, pEntity, checkTarget, checkLinkSkill, checkSp);
		}

		static ::System::Boolean CanInsertActionUse(::Class_1_152140BAFD2DB102* param, ::System::Boolean skipDarkTeamDieCheck)
		{
			return ((::System::Boolean(*)(::Class_1_152140BAFD2DB102*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CANINSERTACTIONUSE_OFFSET))(param, skipDarkTeamDieCheck);
		}

		static ::System::Boolean _CanInsertActionUseInternal(::Class_1_152140BAFD2DB102* param, ::System::Boolean skipDarkTeamDieCheck)
		{
			return ((::System::Boolean(*)(::Class_1_152140BAFD2DB102*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC__CANINSERTACTIONUSEINTERNAL_OFFSET))(param, skipDarkTeamDieCheck);
		}

		static ::System::Boolean IsInUltraSkillInsertState(::RPG::GameCore::TurnState eTurnState)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISINULTRASKILLINSERTSTATE_OFFSET))(eTurnState);
		}

		static ::System::Boolean IsModifierPhaseEndState(::RPG::GameCore::TurnState eTurnState)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISMODIFIERPHASEENDSTATE_OFFSET))(eTurnState);
		}

		static ::RPG::GameCore::FixPoint CalculateNewActionDelayWhenSpeedChange(::RPG::GameCore::FixPoint oldActionDelayDistance, ::RPG::GameCore::FixPoint newSpeed, ::RPG::GameCore::FixPoint oldSpeed)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCULATENEWACTIONDELAYWHENSPEEDCHANGE_OFFSET))(oldActionDelayDistance, newSpeed, oldSpeed);
		}

		static ::RPG::GameCore::FixPoint CalcualteBattleEquipmentHPBase(::System::UInt32 eid, ::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTHPBASE_OFFSET))(eid, promotion, level);
		}

		static ::RPG::GameCore::FixPoint CalcualteBattleEquipmentAttackBase(::System::UInt32 eid, ::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTATTACKBASE_OFFSET))(eid, promotion, level);
		}

		static ::RPG::GameCore::FixPoint CalcualteBattleEquipmentDefenceBase(::System::UInt32 eid, ::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTDEFENCEBASE_OFFSET))(eid, promotion, level);
		}

		static ::RPG::GameCore::FixPoint CalcRelicMainAffixValue(::RPG::GameCore::FixPoint fBaseValue, ::RPG::GameCore::FixPoint fLevelAdd, ::System::UInt32 iLevel)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCRELICMAINAFFIXVALUE_OFFSET))(fBaseValue, fLevelAdd, iLevel);
		}

		static ::RPG::GameCore::FixPoint CalcRelicSubAffixValue(::RPG::GameCore::FixPoint fBaseValue, ::RPG::GameCore::FixPoint fStepValue, ::System::UInt32 iCnt, ::System::UInt32 iStep)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCRELICSUBAFFIXVALUE_OFFSET))(fBaseValue, fStepValue, iCnt, iStep);
		}

		static ::System::String* GenRelicSetAbilityKey(::System::UInt32 iSetID, ::System::UInt32 iRequireNum)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GENRELICSETABILITYKEY_OFFSET))(iSetID, iRequireNum);
		}

		static ::System::String* GenRelicSetAbilityKey_1(::System::String* iSetID, ::System::String* iRequireNum)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GENRELICSETABILITYKEY_1_OFFSET))(iSetID, iRequireNum);
		}

		static ::RPG::GameCore::GameEntity* GetEntityFromGameObejct(::UnityEngine::GameObject* gameObject, ::System::Boolean tryFindFromParent, ::System::Boolean tryFindFromGrandParent)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYFROMGAMEOBEJCT_OFFSET))(gameObject, tryFindFromParent, tryFindFromGrandParent);
		}

		static ::RPG::Client::EntityCollisionBodyParts* GetCollisionBodyPartsFromHitBox(::UnityEngine::Collider* collider)
		{
			return ((::RPG::Client::EntityCollisionBodyParts*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETCOLLISIONBODYPARTSFROMHITBOX_OFFSET))(collider);
		}

		static ::System::Int32 FindBodyPartIndex(::UnityEngine::Collider* collider)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FINDBODYPARTINDEX_OFFSET))(collider);
		}

		static ::System::String* BuildCharacterUniqueName(::RPG::GameCore::EntityType entityType, ::System::String* inName)
		{
			return ((::System::String*(*)(::RPG::GameCore::EntityType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDCHARACTERUNIQUENAME_OFFSET))(entityType, inName);
		}

		static ::System::String* BuildPropUniqueName(::System::UInt32 groupID, ::System::UInt32 groupPropID)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDPROPUNIQUENAME_OFFSET))(groupID, groupPropID);
		}

		static ::System::String* BuildNpcUniqueName(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::String* nameString)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAME_OFFSET))(groupInstanceID, instanceID, nameString);
		}

		static ::System::String* BuildNpcUniqueNameByGroupInfo(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAMEBYGROUPINFO_OFFSET))(groupInstanceID, instanceID);
		}

		static ::System::String* BuildNpcUniqueNameByStr(::System::String* nameString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAMEBYSTR_OFFSET))(nameString);
		}

		static ::System::String* BuildNPCMonsterUniqueName(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::String* nameString)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAME_OFFSET))(groupInstanceID, instanceID, nameString);
		}

		static ::System::Void MakeNpcAIGoBack(::RPG::GameCore::GameEntity* entity, ::System::Boolean force)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_MAKENPCAIGOBACK_OFFSET))(entity, force);
		}

		static ::System::String* BuildNPCMonsterUniqueNameByGroupInfo(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAMEBYGROUPINFO_OFFSET))(groupInstanceID, instanceID);
		}

		static ::System::String* BuildNPCMonsterUniqueNameByStr(::System::String* nameString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAMEBYSTR_OFFSET))(nameString);
		}

		static ::RPG::GameCore::GameEntity* FindTypedCharacterByUniqueName(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::EntityType type, ::System::String* name)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::EntityType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FINDTYPEDCHARACTERBYUNIQUENAME_OFFSET))(pManager, type, name);
		}

		static ::RPG::GameCore::GameEntity* FindScepter(::RPG::GameCore::EntityManager* pManager, ::System::UInt32 nScepterID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FINDSCEPTER_OFFSET))(pManager, nScepterID);
		}

		static ::System::Boolean IsEntityInCircularSector(::UnityEngine::Vector3 centerPos, ::UnityEngine::Vector3 forwardDir, ::System::Single radius, ::System::Single angle, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISENTITYINCIRCULARSECTOR_OFFSET))(centerPos, forwardDir, radius, angle, entity);
		}

		static ::System::String* GetAreaNameByTask(::RPG::GameCore::TaskContext* context, ::System::String* configAreaName)
		{
			return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETAREANAMEBYTASK_OFFSET))(context, configAreaName);
		}

		static ::System::Void UpdateAttackDamageTypeStatisticsInfoBySingleMonster(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* info, ::System::UInt32 monsterID)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_UPDATEATTACKDAMAGETYPESTATISTICSINFOBYSINGLEMONSTER_OFFSET))(info, monsterID);
		}

		static ::System::Void UpdateAttackDamageTypeStatisticsInfoBySingleMonsterForDisplay(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>* info, ::System::UInt32 monsterID)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_UPDATEATTACKDAMAGETYPESTATISTICSINFOBYSINGLEMONSTERFORDISPLAY_OFFSET))(info, monsterID);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>* GetDisplayAttackDamageTypeStatisticsInfoByWave(::RPG::GameCore::StageMonsterWave* wave)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*(*)(::RPG::GameCore::StageMonsterWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETDISPLAYATTACKDAMAGETYPESTATISTICSINFOBYWAVE_OFFSET))(wave);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* GetAttackDamageTypeStatisticsInfoByWave(::RPG::GameCore::StageMonsterWave* wave)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*(*)(::RPG::GameCore::StageMonsterWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYWAVE_OFFSET))(wave);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>* GetAttackDamageTypeStatisticsInfoByStageID(::System::UInt32 stageID)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYSTAGEID_OFFSET))(stageID);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>* GetAttackDamageTypeStatisticsInfoByNpcMonsterEntity(::RPG::GameCore::GameEntity* npcMonster)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYNPCMONSTERENTITY_OFFSET))(npcMonster);
		}

		static ::RPG::GameCore::StageRow* GetStageRowByNpcMonsterRuntimeID(::System::UInt32 rid)
		{
			return ((::RPG::GameCore::StageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSTAGEROWBYNPCMONSTERRUNTIMEID_OFFSET))(rid);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>* GetAttackDamageTypeStatisticsInfoByNpcMonsterRuntimeID(::System::UInt32 rid)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYNPCMONSTERRUNTIMEID_OFFSET))(rid);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>* GetMainAttackDamageTypeDictByNpcMonsterRuntimeID(::System::UInt32 rid)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETMAINATTACKDAMAGETYPEDICTBYNPCMONSTERRUNTIMEID_OFFSET))(rid);
		}

		static ::System::Boolean IsMonsterContainsMainAttackDamageType(::System::UInt32 rid, ::RPG::GameCore::AttackDamageType damageType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISMONSTERCONTAINSMAINATTACKDAMAGETYPE_OFFSET))(rid, damageType);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::StageMonsterRewardItem*>* GetMonsterDropRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::StageMonsterRewardItem*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETMONSTERDROPREWARDDATA_OFFSET))();
		}

		static ::RPG::Client::EffectMutexResult IsTriggerEffectMutexGlobal(::RPG::Client::MonoEffectManager* pMonoEffManager, ::System::String* sEffectName, ::System::Single fMinMutexTime, ::System::Int32 iMinMutexCount)
		{
			return ((::RPG::Client::EffectMutexResult(*)(::RPG::Client::MonoEffectManager*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISTRIGGEREFFECTMUTEXGLOBAL_OFFSET))(pMonoEffManager, sEffectName, fMinMutexTime, iMinMutexCount);
		}

		static ::RPG::Client::EffectMutexResult IsTriggerEffectMutexEntity(::RPG::Client::MonoEffectManager* pMonoEffManager, ::System::String* sEffectName, ::System::Single fMinMutexTime, ::System::Int32 iMinMutexCount, ::RPG::GameCore::GameEntity* pTargetEntity, ::System::Single delayTime)
		{
			return ((::RPG::Client::EffectMutexResult(*)(::RPG::Client::MonoEffectManager*, ::System::String*, ::System::Single, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISTRIGGEREFFECTMUTEXENTITY_OFFSET))(pMonoEffManager, sEffectName, fMinMutexTime, iMinMutexCount, pTargetEntity, delayTime);
		}

		static ::System::Boolean CheckEffectMutex(::RPG::Client::MonoEffectManager* pMonoEffManager, ::RPG::GameCore::GameEntity* pTarget, ::System::String* strEffectPath, ::RPG::GameCore::EffectMutexType pMutexType, ::System::Single fMinMutexTime, ::System::Int32 iMaxMutexCount, ::RPG::Client::MonoEffect*& replayEffect)
		{
			return ((::System::Boolean(*)(::RPG::Client::MonoEffectManager*, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::RPG::Client::MonoEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CHECKEFFECTMUTEX_OFFSET))(pMonoEffManager, pTarget, strEffectPath, pMutexType, fMinMutexTime, iMaxMutexCount, replayEffect);
		}

		static ::RPG::Client::MonoEffect* TryReplayMutexEffect(::RPG::Client::MonoEffectManager* pMonoEffectManager, ::System::String* strEffectPath, ::RPG::Client::EffectMutexResult mutexResult, ::RPG::GameCore::GameEntity* pTargetEntity)
		{
			return ((::RPG::Client::MonoEffect*(*)(::RPG::Client::MonoEffectManager*, ::System::String*, ::RPG::Client::EffectMutexResult, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_TRYREPLAYMUTEXEFFECT_OFFSET))(pMonoEffectManager, strEffectPath, mutexResult, pTargetEntity);
		}

		static ::System::Boolean _ShouldCheckFadeOutMutexMaxCount()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC__SHOULDCHECKFADEOUTMUTEXMAXCOUNT_OFFSET))();
		}

		static ::System::Boolean IsMaterialScaleHugeMonster(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISMATERIALSCALEHUGEMONSTER_OFFSET))(targetEntity);
		}

		static ::System::Boolean IsTesellationEnable(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISTESELLATIONENABLE_OFFSET))(targetEntity);
		}

		static ::System::Void ForceEffectsManualFollow(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FORCEEFFECTSMANUALFOLLOW_OFFSET))(targetEntity);
		}

		static ::System::Int32 GetEffectFlagMask(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flags)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETEFFECTFLAGMASK_OFFSET))(flags);
		}

		static ::System::Boolean EnableEffectLowLod()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ENABLEEFFECTLOWLOD_OFFSET))();
		}

		static ::System::Void FilterSkillTargetListBySummonUnitMatched(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* targetList, ::RPG::GameCore::SkillTargetConfig* targetInfo, ::RPG::GameCore::GameEntity* caster)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::SkillTargetConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FILTERSKILLTARGETLISTBYSUMMONUNITMATCHED_OFFSET))(targetList, targetInfo, caster);
		}

		static ::RPG::GameCore::TeamMemberCountingOption GetMemberCountingOptionByServantSelectType(::RPG::GameCore::ServantSelectType servantSelectType)
		{
			return ((::RPG::GameCore::TeamMemberCountingOption(*)(::RPG::GameCore::ServantSelectType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETMEMBERCOUNTINGOPTIONBYSERVANTSELECTTYPE_OFFSET))(servantSelectType);
		}

		static ::System::Boolean IsEnableSPCheckAddOPCount()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISENABLESPCHECKADDOPCOUNT_OFFSET))();
		}

		static ::System::Boolean IsTargetMatched(::RPG::GameCore::SkillTargetConfig* targetInfo, ::RPG::GameCore::GameEntity* caster, ::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISTARGETMATCHED_OFFSET))(targetInfo, caster, target);
		}

		static ::System::Boolean IsSummonUnitMatched(::RPG::GameCore::SkillTargetConfig* targetInfo, ::RPG::GameCore::GameEntity* caster, ::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISSUMMONUNITMATCHED_OFFSET))(targetInfo, caster, target);
		}

		static ::System::Boolean IsAvatarOwnedEffect(::RPG::GameCore::CharacterPreloadConfig* preloadConfig, ::System::String* sEffectPath)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CharacterPreloadConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISAVATAROWNEDEFFECT_OFFSET))(preloadConfig, sEffectPath);
		}

		static ::System::Boolean IsMonsterOwnedEffect(::RPG::GameCore::MonsterPreloadConfig* preloadConfig, ::System::String* sEffectPath)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MonsterPreloadConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISMONSTEROWNEDEFFECT_OFFSET))(preloadConfig, sEffectPath);
		}

		static ::System::UInt32 get_BattleID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GET_BATTLEID_OFFSET))();
		}

		static ::System::Boolean get_LegalServer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GET_LEGALSERVER_OFFSET))();
		}

		static ::System::Single GetCombatPowerWarnPercentMonsterRate(::System::Int32 rank)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETCOMBATPOWERWARNPERCENTMONSTERRATE_OFFSET))(rank);
		}

		static ::RPG::GameCore::FixPoint GetTotalMonsterRankScore(::RPG::GameCore::EntityManager* entityManager)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETTOTALMONSTERRANKSCORE_OFFSET))(entityManager);
		}

		static ::RPG::GameCore::StageRow* PrepareCommonBattleEventCreate(::System::UInt32 battleEvtId, ::RPG::GameCore::TaskContext* taskContext, ::System::Boolean isDynamicPreload, ::System::Boolean& ret)
		{
			return ((::RPG::GameCore::StageRow*(*)(::System::UInt32, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PREPARECOMMONBATTLEEVENTCREATE_OFFSET))(battleEvtId, taskContext, isDynamicPreload, ret);
		}

		static ::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>* AvatarBattleInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>* pSourceList, ::System::Boolean clientAuthority)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>*(*)(::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_AVATARBATTLEINFOLISTFILLPRIMARY_OFFSET))(pSourceList, clientAuthority);
		}

		static ::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>* MonsterBattleInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>* pSourceList, ::System::Boolean clientAuthority)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>*(*)(::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_MONSTERBATTLEINFOLISTFILLPRIMARY_OFFSET))(pSourceList, clientAuthority);
		}

		static ::System::Collections::Generic::List_1<::Class_1_752172F3794CD86F*>* BattleEventBattleInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_752172F3794CD86F*>* pSourceList, ::System::Boolean clientAuthority)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_752172F3794CD86F*>*(*)(::System::Collections::Generic::List_1<::Class_1_752172F3794CD86F*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEEVENTBATTLEINFOLISTFILLPRIMARY_OFFSET))(pSourceList, clientAuthority);
		}

		static ::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>* BattleAvatarServantInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>* pSourceList, ::System::Boolean clientAuthority)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>*(*)(::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEAVATARSERVANTINFOLISTFILLPRIMARY_OFFSET))(pSourceList, clientAuthority);
		}

		static ::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_7*>* BattleAvatarGlobalBuffInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_7*>* pSourceList, ::System::Boolean clientAuthority)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_7*>*(*)(::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_7*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEAVATARGLOBALBUFFINFOLISTFILLPRIMARY_OFFSET))(pSourceList, clientAuthority);
		}

		static ::System::Collections::Generic::List_1<::Class_1_35B19D34B208E77E*>* StatisticEventListFillPrimary(::System::Collections::Generic::List_1<::Class_1_35B19D34B208E77E*>* pSourceList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_35B19D34B208E77E*>*(*)(::System::Collections::Generic::List_1<::Class_1_35B19D34B208E77E*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_STATISTICEVENTLISTFILLPRIMARY_OFFSET))(pSourceList);
		}

		static ::Class_1_C9DFE5EE7107C629* CreateBattleStatsProto(::RPG::GameCore::PVEGameStatistics* pLocalStatistics, ::System::Boolean clientAuthority)
		{
			return ((::Class_1_C9DFE5EE7107C629*(*)(::RPG::GameCore::PVEGameStatistics*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CREATEBATTLESTATSPROTO_OFFSET))(pLocalStatistics, clientAuthority);
		}

		static ::RPG::Client::LevelDirector* GetCurrentLevelDirector()
		{
			return ((::RPG::Client::LevelDirector*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETCURRENTLEVELDIRECTOR_OFFSET))();
		}

		static ::System::Void BossMultiInstCheck(::RPG::GameCore::GameWorld* pWorld)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BOSSMULTIINSTCHECK_OFFSET))(pWorld);
		}

		static ::System::String* GetConfig(::RPG::GameCore::BattleEventRow* pRow)
		{
			return ((::System::String*(*)(::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETCONFIG_OFFSET))(pRow);
		}

		static ::Il2CppArray<::System::UInt32>* GetSkillList(::RPG::GameCore::BattleEventRow* pRow)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLLIST_OFFSET))(pRow);
		}

		static ::System::Void SetOverrideJsonPath(::RPG::GameCore::BattleEventRow* pRow, ::System::String* overrideJsonPath)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventRow*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDEJSONPATH_OFFSET))(pRow, overrideJsonPath);
		}

		static ::System::Void SetOverrideSkillList(::RPG::GameCore::BattleEventRow* pRow, ::Il2CppArray<::System::UInt32>* overrideSkillList)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventRow*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDESKILLLIST_OFFSET))(pRow, overrideSkillList);
		}
	};
}
