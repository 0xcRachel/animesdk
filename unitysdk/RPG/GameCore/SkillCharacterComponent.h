#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AbilityCursorInfo.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RedirectSkillTargetAffectTeam.h"
#include "unitysdk/RPG/GameCore/SelfSkillPerformState.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/Struct_2_8792219C039E2D7A.h"
#include "unitysdk/Struct_2_C26D61ECD9375585.h"

class Class_0_16E4307DCC419505_347;
class Class_1_29327D508CD1E435;
class Class_1_77E96ACE7A0E87CA;
class Class_1_83D980B81C9B9AFA;
class Class_1_93251EBB84CD1CB1;
class Class_1_DA7AFD2A0834A588;
class Class_1_EABAA0FA9B3BC305;
class Class_1_F6CF5FB460BC6CBB;
class Class_2_8F285BFA404E1032;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class ElationConfigList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_CHECKSKILLUSABLEBYCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0xA4FB420)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTECURRENTSKILLMAINANDSUBTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA4FA0D0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTECURRENTSKILLSUBTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA4FAF60)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTECURRENTSKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA4FA2D0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTESKILLMAINANDSUBTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA4FA180)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTESKILLSUBTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA4F91B0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTESKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA4F8200)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4F4AD0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_FILLALLSKILLDATABYTAG_OFFSET UNITYSDK_OFFSET(0xA501740)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_FILLALLSKILLDATA_OFFSET UNITYSDK_OFFSET(0xA4FE440)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETALLALLOWSKILLIDXLIST_OFFSET UNITYSDK_OFFSET(0xA501B40)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCONTROLSKILLMAPPING_OFFSET UNITYSDK_OFFSET(0xA4FB390)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCONTROLSKILLTYPEBYSKILLINDEX_1_OFFSET UNITYSDK_OFFSET(0xA4FB220)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCONTROLSKILLTYPEBYSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA4FB1C0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCOOLDOWN_OFFSET UNITYSDK_OFFSET(0xA5029D0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTRECORDSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA4FDFB0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xA4FD160)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTSKILLDATA_OFFSET UNITYSDK_OFFSET(0xA4FE060)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTSKILLEXTRAUSEPARAM_OFFSET UNITYSDK_OFFSET(0xA4FDF60)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA4FDF10)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURULTRASKILLDATA_OFFSET UNITYSDK_OFFSET(0xA4FE3F0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETDEFAULTSKILLDATABYCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0xA4FE2F0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETELATIONSKILLDATABYSKILLDATA_OFFSET UNITYSDK_OFFSET(0xA4F4150)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETELATIONSKILLDATABYTAG_OFFSET UNITYSDK_OFFSET(0xA4F3F90)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETFIRSTALLOWUSESKILL_OFFSET UNITYSDK_OFFSET(0xA500600)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETFIRSTSKILLCONFIGBYSKILLTYPE_OFFSET UNITYSDK_OFFSET(0xA4FDCB0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETLEFTCASTTIMES_OFFSET UNITYSDK_OFFSET(0xA502850)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETMAXCASTTIMES_OFFSET UNITYSDK_OFFSET(0xA502910)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLACTUALATTACKERINCLUDEPRESHOWENTITY_OFFSET UNITYSDK_OFFSET(0xA4FDAE0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xA4F9FB0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0xA4FDD50)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLDATABYCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0xA4FE150)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLDATABYTAG_OFFSET UNITYSDK_OFFSET(0xA501640)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLDATABYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xA4FB0A0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0xA4FA380)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLMAXHITCOUNT_OFFSET UNITYSDK_OFFSET(0xA4FDDE0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLTYPEDISABLETEXT_OFFSET UNITYSDK_OFFSET(0xA4FFF30)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLTYPEDISABLETIP_OFFSET UNITYSDK_OFFSET(0xA502AE0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSPNEEDBYSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA504370)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0xA504A30)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0xA504A20)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ELATIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA4F46A0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ELATIONSKILLDATALIST_OFFSET UNITYSDK_OFFSET(0xA4F46C0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISNOBPCOSTBYTASK_OFFSET UNITYSDK_OFFSET(0xA504A60)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISNOBPCOSTSPECIALAVATAR_OFFSET UNITYSDK_OFFSET(0xA504A40)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISNOBPCOST_OFFSET UNITYSDK_OFFSET(0xA501AE0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISNOSPCOST_OFFSET UNITYSDK_OFFSET(0xA504A80)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISULTRASKILLSKIPSPCHECK_OFFSET UNITYSDK_OFFSET(0xA4FB9C0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0xA504930)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_PASSIVEUSED_OFFSET UNITYSDK_OFFSET(0xA504AA0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SELFPERFORMSTATE_OFFSET UNITYSDK_OFFSET(0xA504940)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xA5049E0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SKILLCOUNT_OFFSET UNITYSDK_OFFSET(0xA504960)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0xA504950)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xA5049C0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xA504AC0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASNONPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0xA5030B0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASOPINSKILL_OFFSET UNITYSDK_OFFSET(0xA503CD0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASRECORDSKILL_OFFSET UNITYSDK_OFFSET(0xA503BC0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASSKILLTAG_OFFSET UNITYSDK_OFFSET(0xA5032B0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASSKILLTYPE_OFFSET UNITYSDK_OFFSET(0xA503210)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA4F4CE0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISALLOWUSESKILL_OFFSET UNITYSDK_OFFSET(0xA501D00)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISCURRENTSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xA4FF3B0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISSELFALLOWINSERTULTRA_OFFSET UNITYSDK_OFFSET(0xA4FF790)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISSELFALLOWUSESKILL_OFFSET UNITYSDK_OFFSET(0xA500A20)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISSKILLDISABLE_OFFSET UNITYSDK_OFFSET(0xA4FFE60)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISSKILLTYPEDISABLE_OFFSET UNITYSDK_OFFSET(0xA502A60)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MAKESKILLPERFORMWORKING_OFFSET UNITYSDK_OFFSET(0xA4FF740)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MAYREDIRECTSKILLTARGET_OFFSET UNITYSDK_OFFSET(0xA503680)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MODIFYSKILLDATAPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xA4FF320)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MODIFYSKILLDATAPROPERTY_OFFSET UNITYSDK_OFFSET(0xA4FEE90)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MODIFYSKILLSLOTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA4FE610)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MODIFYSKILLTYPEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA4FEA30)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ONAFTERSKILLPERFORM_OFFSET UNITYSDK_OFFSET(0xA4FF420)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ONREFRESHSELECTAIMATTARGETS_OFFSET UNITYSDK_OFFSET(0xA503DD0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_OVERRIDEELATIONPOINTINSKILLUSE_OFFSET UNITYSDK_OFFSET(0xA4F4470)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_POPSKILLTYPEDISABLE_OFFSET UNITYSDK_OFFSET(0xA502EF0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_PROCESSOPINSKILL_OFFSET UNITYSDK_OFFSET(0xA503D80)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_PUSHSKILLTYPEDISABLE_OFFSET UNITYSDK_OFFSET(0xA502D20)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_RECORDOPINSKILL_OFFSET UNITYSDK_OFFSET(0xA503D20)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_RECORDUSESKILL_OFFSET UNITYSDK_OFFSET(0xA503950)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_REFRESHCURRENTSKILLPERFORM_OFFSET UNITYSDK_OFFSET(0xA4FF4D0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_RPG_GAMECORE_ISKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0xA504A10)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_RPG_GAMECORE_ISKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0xA504A00)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETCONTROLSKILLMAPPING_OFFSET UNITYSDK_OFFSET(0xA4FB000)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETCOOLDOWN_OFFSET UNITYSDK_OFFSET(0xA4FD270)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETCURRENTSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA4FE010)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETLEFTCASTTIMES_OFFSET UNITYSDK_OFFSET(0xA502770)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETSKILLCUSTOMTOASTPATH_OFFSET UNITYSDK_OFFSET(0xA5038E0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETSKILLPERFORMFINISH_OFFSET UNITYSDK_OFFSET(0xA502410)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETUPELATIONSKILLDATA_OFFSET UNITYSDK_OFFSET(0xA4F4220)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_ELATIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA4F46B0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_ISNOBPCOSTBYTASK_OFFSET UNITYSDK_OFFSET(0xA504A70)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_ISNOBPCOSTSPECIALAVATAR_OFFSET UNITYSDK_OFFSET(0xA504A50)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_ISNOSPCOST_OFFSET UNITYSDK_OFFSET(0xA504A90)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_PASSIVEUSED_OFFSET UNITYSDK_OFFSET(0xA504AB0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xA5049F0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xA5049D0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xA504AD0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_STACKSKILLTARGETREDIRECT_OFFSET UNITYSDK_OFFSET(0xA5033F0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_TRYGETSKILLPRECOMPUTEDRESULT_OFFSET UNITYSDK_OFFSET(0xA4F7210)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_TRYUSEPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0xA4F6FA0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_UNMODIFYSKILLSLOTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA4FE820)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_UNMODIFYSKILLTYPEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA4FEC60)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_UNSTACKSKILLTARGETREDIRECT_OFFSET UNITYSDK_OFFSET(0xA503560)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USERECORDSKILL_OFFSET UNITYSDK_OFFSET(0xA503C10)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILL_OFFSET UNITYSDK_OFFSET(0xA4FBA30)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ADDBPAFTERSKILLUSE_OFFSET UNITYSDK_OFFSET(0xA4FD690)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ADDPREMODIFIERBEFOREENTRYABILITY_OFFSET UNITYSDK_OFFSET(0xA4FD7F0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ADDSPAFTERSKILLUSE_OFFSET UNITYSDK_OFFSET(0xA4FD470)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F46D0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__DECBPBEFORESKILLUSE_OFFSET UNITYSDK_OFFSET(0xA4FCFD0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__DECCASTTIMEBEFORESKILLUSE_OFFSET UNITYSDK_OFFSET(0xA4FD090)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__DECSPBEFORESKILLUSE_OFFSET UNITYSDK_OFFSET(0xA4FCDD0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__GETSKILLUSEBPPOINT_OFFSET UNITYSDK_OFFSET(0xA4FCCD0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__INITEVENT_OFFSET UNITYSDK_OFFSET(0xA4F7100)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ISININSERTNORMALACTION_OFFSET UNITYSDK_OFFSET(0xA5018C0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ONENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0xA504780)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ONLEVELTURNENDEVENT_OFFSET UNITYSDK_OFFSET(0xA504610)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ONUSEACTIVESKILLSHOWUI_OFFSET UNITYSDK_OFFSET(0xA4FD1F0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__OVERRIDEELATIONPOINTAFTERSKILLUSE_OFFSET UNITYSDK_OFFSET(0xA4F44C0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__REDIRECTSKILLTARGET_OFFSET UNITYSDK_OFFSET(0xA4FA4F0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__REVERTOVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0xA4F45C0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__SETUPCHARACTERSKILL_OFFSET UNITYSDK_OFFSET(0xA4F4D80)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__TRYLOADELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA4F43C0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0xA4F4BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCharacterComponent_TypeDefinitionIndex = 45415;

	class SkillCharacterComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__CachedSkillSubTargetList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterComponent_TypeDefinitionIndex)->GetStaticField(0x447F0);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__CachedSkillTargetListWithSub()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterComponent_TypeDefinitionIndex)->GetStaticField(0x447F8);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__CachedSkillTargetList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterComponent_TypeDefinitionIndex)->GetStaticField(0x44800);
		}
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CurrentSkillTargetList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* _SkillDataList; // 0x20
		::Il2CppArray<::System::Int32>* _SkillTypeDisableCountArr; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CurrentAimAtMainTargetList; // 0x30
		::Il2CppArray<::Class_1_93251EBB84CD1CB1*>* _SkillTypeOverrideProperty; // 0x38
		::RPG::GameCore::CharacterConfig* _JsonConfigRef; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CurrentSkillTargetCharacterId; // 0x48
		::System::Collections::Generic::HashSet_1<::Class_1_29327D508CD1E435*>* _SkillTypeDisableSlots; // 0x50
		::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CurrentSkillSubTargetList_k__BackingField; // 0x60
		::RPG::GameCore::GameEntity* _SkillActualAttacker_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CurrentAimAtSubTargetList; // 0x70
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x78
		::RPG::GameCore::TurnBasedAbilityComponent* _TBAbilityRef; // 0x80
		::System::Collections::Generic::List_1<::System::Action_1<::RPG::GameCore::SkillData*>*>* OnSkillSetup; // 0x88
		::System::Collections::Generic::List_1<::Class_1_DA7AFD2A0834A588*>* _SkillTargetRedirectEntries; // 0x90
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CurrentAimAtTargetList; // 0x98
		::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* _ElationSkillDataList; // 0xA0
		::Il2CppArray<::Class_1_EABAA0FA9B3BC305*>* _SkillSlots; // 0xA8
		::RPG::GameCore::AbilityCursorInfo _recordAbilityInfo; // 0xB0
		::Class_1_77E96ACE7A0E87CA* _BattleSkillToastManager; // 0xE0
		::RPG::GameCore::CharacterDataComponent* _CharacterDataRef; // 0xE8
		::Class_1_F6CF5FB460BC6CBB* AutoUseUltraParams; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* CurrentSkillTargetDamageHP; // 0xF8
		::RPG::GameCore::ElationConfigList* _ElationConfigList_k__BackingField; // 0x100
		::System::Boolean _hasRecordSkill; // 0x108
		::System::Boolean CharmAction; // 0x109
		::System::Boolean _IsNoSpCost_k__BackingField; // 0x10A
		::System::Boolean _IsNoBpCostByTask_k__BackingField; // 0x10B
		::System::Int32 _RecordSkillExtraUseParam; // 0x10C
		::System::Int32 _CurrentSkillIndex; // 0x110
		::System::Int32 _CurrentSkillExtraUseParam; // 0x114
		::System::Int32 _actionSkillIndex; // 0x118
		::System::Int32 _RedirectTargetIDIncr; // 0x11C
		::System::Single _TargetPerformTimeCounter; // 0x120
		::RPG::GameCore::SelfSkillPerformState _SelfSkillPerformState; // 0x124
		::System::Int32 CurrentSkillKilledCount; // 0x128
		::RPG::GameCore::FixPoint _OverrideElationPointInSkillUse; // 0x130
		::System::Boolean CurrentSkillHasTriggerEffect; // 0x138
		::System::Boolean _hasOpInSkill; // 0x139
		::System::Boolean CurrentSkillKillAllOrBoss; // 0x13A
		::System::Boolean _AutoStandbyOnCurSkillFinish; // 0x13B
		::System::Int32 SelfWaitActiveSkillIndex; // 0x13C
		::System::Boolean CurrentSkillBreakStance; // 0x140
		::System::Boolean _IsNoBpCostSpecialAvatar_k__BackingField; // 0x141
		::System::Boolean _isPassive; // 0x142
		::System::Boolean _PassiveUsed_k__BackingField; // 0x143
		::System::Int32 _OpIndexInSkill; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__CTOR_OFFSET))(this);
		}

		::Class_2_8F285BFA404E1032* GetElationSkillDataByTag(::RPG::GameCore::JsonEnum* skillTag)
		{
			return ((::Class_2_8F285BFA404E1032*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETELATIONSKILLDATABYTAG_OFFSET))(this, skillTag);
		}

		::Class_1_83D980B81C9B9AFA* GetElationSkillDataBySkillData(::RPG::GameCore::SkillData* targetSkillData)
		{
			return ((::Class_1_83D980B81C9B9AFA*(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETELATIONSKILLDATABYSKILLDATA_OFFSET))(this, targetSkillData);
		}

		::System::Void SetupElationSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETUPELATIONSKILLDATA_OFFSET))(this);
		}

		::System::Void OverrideElationPointInSkillUse(::RPG::GameCore::FixPoint elationPoint)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_OVERRIDEELATIONPOINTINSKILLUSE_OFFSET))(this, elationPoint);
		}

		::System::Void _TryLoadElationConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__TRYLOADELATIONCONFIG_OFFSET))(this);
		}

		::System::Void _OverrideElationPointAfterSkillUse(::RPG::GameCore::SkillData* skillData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__OVERRIDEELATIONPOINTAFTERSKILLUSE_OFFSET))(this, skillData);
		}

		::System::Void _RevertOverrideElationPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__REVERTOVERRIDEELATIONPOINT_OFFSET))(this);
		}

		::RPG::GameCore::ElationConfigList* get_ElationConfigList()
		{
			return ((::RPG::GameCore::ElationConfigList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ELATIONCONFIGLIST_OFFSET))(this);
		}

		::System::Void set_ElationConfigList(::RPG::GameCore::ElationConfigList* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_ELATIONCONFIGLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* get_ElationSkillDataList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ELATIONSKILLDATALIST_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::CharacterConfig* JsonConfig, ::RPG::GameCore::CharacterDataComponent* CharacterData, ::RPG::GameCore::TurnBasedAbilityComponent* turnBasedAbility, ::System::Boolean pForbidPassiveSkill)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*, ::RPG::GameCore::CharacterDataComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_INITCOMPONENT_OFFSET))(this, JsonConfig, CharacterData, turnBasedAbility, pForbidPassiveSkill);
		}

		::System::Boolean TryGetSkillPrecomputedResult(::System::UInt32 nTargetRuntimeID, ::System::Int32 nSkillIndex, ::System::Boolean isAI, ::Struct_2_C26D61ECD9375585& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean, ::Struct_2_C26D61ECD9375585&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_TRYGETSKILLPRECOMPUTEDRESULT_OFFSET))(this, nTargetRuntimeID, nSkillIndex, isAI, result);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* ComputeCurrentSkillMainAndSubTargetEntityList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTECURRENTSKILLMAINANDSUBTARGETENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* ComputeSkillMainAndSubTargetEntityList(::System::Int32 nSkillIndex, ::RPG::GameCore::AliveStateMask eAliveStateMask)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTESKILLMAINANDSUBTARGETENTITYLIST_OFFSET))(this, nSkillIndex, eAliveStateMask);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* ComputeCurrentSkillTargetEntityList(::System::Boolean lockTargetAsSkillPoint)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTECURRENTSKILLTARGETENTITYLIST_OFFSET))(this, lockTargetAsSkillPoint);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* ComputeSkillTargetEntityList(::System::Int32 nSkillIndex, ::RPG::GameCore::AliveStateMask eAliveStateMask, ::System::Boolean lockTargetAsSkillPoint)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AliveStateMask, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTESKILLTARGETENTITYLIST_OFFSET))(this, nSkillIndex, eAliveStateMask, lockTargetAsSkillPoint);
		}

		::Class_1_DA7AFD2A0834A588* _RedirectSkillTarget(::RPG::GameCore::GameEntity*& target, ::System::Int32 nSkillIndex, ::RPG::GameCore::AliveStateMask eAliveStateMask)
		{
			return ((::Class_1_DA7AFD2A0834A588*(*)(::PVOID, ::RPG::GameCore::GameEntity*&, ::System::Int32, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__REDIRECTSKILLTARGET_OFFSET))(this, target, nSkillIndex, eAliveStateMask);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* ComputeCurrentSkillSubTargetEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* mainTargetList)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTECURRENTSKILLSUBTARGETENTITYLIST_OFFSET))(this, mainTargetList);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* ComputeSkillSubTargetEntityList(::RPG::GameCore::GameEntity* pSkillTargetEntity, ::System::Int32 nSkillIndex, ::RPG::GameCore::AliveStateMask eAliveStateMask)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_COMPUTESKILLSUBTARGETENTITYLIST_OFFSET))(this, pSkillTargetEntity, nSkillIndex, eAliveStateMask);
		}

		::System::Void SetControlSkillMapping(::RPG::GameCore::ControlSkillType eControlSkillType, ::System::String* sSkillTriggerKey)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETCONTROLSKILLMAPPING_OFFSET))(this, eControlSkillType, sSkillTriggerKey);
		}

		::RPG::GameCore::ControlSkillType GetControlSkillTypeBySkillIndex(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCONTROLSKILLTYPEBYSKILLINDEX_OFFSET))(this, nSkillIndex);
		}

		::RPG::GameCore::ControlSkillType GetControlSkillTypeBySkillIndex_1(::System::Int32 nSkillIndex, ::System::Int32& childIndex)
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCONTROLSKILLTYPEBYSKILLINDEX_1_OFFSET))(this, nSkillIndex, childIndex);
		}

		::System::String* GetControlSkillMapping(::RPG::GameCore::ControlSkillType eControlSkillType)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCONTROLSKILLMAPPING_OFFSET))(this, eControlSkillType);
		}

		::System::Boolean CheckSkillUsableByControlType(::RPG::GameCore::ControlSkillType eControlSkillType, ::System::Int32 nSkillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_CHECKSKILLUSABLEBYCONTROLTYPE_OFFSET))(this, eControlSkillType, nSkillIndex);
		}

		::System::Boolean UseSkill(::System::Int32 SkillIndex, ::RPG::GameCore::AbilityCursorInfo CursorInfo, ::System::Boolean bIsPassive, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>* dynamicValues, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>* dynamicStrings, ::System::Int32 extraUseParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AbilityCursorInfo, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>*, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILL_OFFSET))(this, SkillIndex, CursorInfo, bIsPassive, dynamicValues, dynamicStrings, extraUseParam);
		}

		::RPG::GameCore::GameEntity* GetSkillActualAttacker(::RPG::GameCore::SkillConfig* pUsingConfig)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLACTUALATTACKER_OFFSET))(this, pUsingConfig);
		}

		::RPG::GameCore::GameEntity* GetSkillActualAttackerIncludePreshowEntity(::RPG::GameCore::SkillConfig* pUsingConfig)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLACTUALATTACKERINCLUDEPRESHOWENTITY_OFFSET))(this, pUsingConfig);
		}

		::RPG::GameCore::SkillConfig* GetFirstSkillConfigBySkillType(::RPG::GameCore::SkillType eSkillType, ::System::Int32& nSkillIndex)
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID, ::RPG::GameCore::SkillType, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETFIRSTSKILLCONFIGBYSKILLTYPE_OFFSET))(this, eSkillType, nSkillIndex);
		}

		::RPG::GameCore::SkillConfig* GetSkillConfigByIndex(::System::Int32 skillIndex)
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLCONFIGBYINDEX_OFFSET))(this, skillIndex);
		}

		::RPG::GameCore::SkillConfig* GetCurrentSkillConfig()
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTSKILLCONFIG_OFFSET))(this);
		}

		::System::Int32 GetSkillMaxHitCount(::System::String* skillName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLMAXHITCOUNT_OFFSET))(this, skillName);
		}

		::System::Int32 GetCurrentSkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTSKILLINDEX_OFFSET))(this);
		}

		::System::Int32 GetCurrentSkillExtraUseParam()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTSKILLEXTRAUSEPARAM_OFFSET))(this);
		}

		::System::Int32 GetCurrentRecordSkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTRECORDSKILLINDEX_OFFSET))(this);
		}

		::System::Void SetCurrentSkillIndex(::System::Int32 iSkillIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETCURRENTSKILLINDEX_OFFSET))(this, iSkillIndex);
		}

		::RPG::GameCore::SkillData* GetCurrentSkillData()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURRENTSKILLDATA_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* GetSkillData(::System::Int32 nSkillIndex, ::System::Int32 childIndex)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLDATA_OFFSET))(this, nSkillIndex, childIndex);
		}

		::RPG::GameCore::SkillData* GetSkillDataByTriggerKey(::System::String* sTriggerKey, ::System::Int32 childIndex)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLDATABYTRIGGERKEY_OFFSET))(this, sTriggerKey, childIndex);
		}

		::RPG::GameCore::SkillData* GetSkillDataByControlType(::RPG::GameCore::ControlSkillType eControlSkillType, ::System::Int32 childIndex)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLDATABYCONTROLTYPE_OFFSET))(this, eControlSkillType, childIndex);
		}

		::RPG::GameCore::SkillData* GetDefaultSkillDataByControlType(::RPG::GameCore::ControlSkillType eControlSkillType, ::System::Int32 childIndex)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETDEFAULTSKILLDATABYCONTROLTYPE_OFFSET))(this, eControlSkillType, childIndex);
		}

		::RPG::GameCore::SkillData* GetCurUltraSkillData()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCURULTRASKILLDATA_OFFSET))(this);
		}

		::System::Void FillAllSkillData(::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* pContainer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_FILLALLSKILLDATA_OFFSET))(this, pContainer);
		}

		::System::Void ModifySkillSlotProperty(::RPG::GameCore::ControlSkillType ctrlType, ::RPG::GameCore::SkillPropertyType propertyType, ::RPG::GameCore::SkillPropertyModifyType func, ::RPG::GameCore::FixPoint val)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MODIFYSKILLSLOTPROPERTY_OFFSET))(this, ctrlType, propertyType, func, val);
		}

		::System::Void UnModifySkillSlotProperty(::RPG::GameCore::ControlSkillType ctrlType, ::RPG::GameCore::SkillPropertyType propertyType, ::RPG::GameCore::SkillPropertyModifyType func, ::RPG::GameCore::FixPoint val)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_UNMODIFYSKILLSLOTPROPERTY_OFFSET))(this, ctrlType, propertyType, func, val);
		}

		::System::Void ModifySkillTypeProperty(::Struct_2_8792219C039E2D7A& property)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8792219C039E2D7A&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MODIFYSKILLTYPEPROPERTY_OFFSET))(this, property);
		}

		::System::Void UnModifySkillTypeProperty(::Struct_2_8792219C039E2D7A& property)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8792219C039E2D7A&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_UNMODIFYSKILLTYPEPROPERTY_OFFSET))(this, property);
		}

		::System::Boolean ModifySkillDataProperty(::Il2CppArray<::System::String*>* skillNames, ::RPG::GameCore::SkillPropertyType propertyType, ::RPG::GameCore::SkillPropertyModifyType func, ::RPG::GameCore::FixPoint val)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MODIFYSKILLDATAPROPERTY_OFFSET))(this, skillNames, propertyType, func, val);
		}

		::System::Boolean ModifySkillDataProperty_1(::System::String* skillName, ::RPG::GameCore::SkillPropertyType propertyType, ::RPG::GameCore::SkillPropertyModifyType func, ::RPG::GameCore::FixPoint val)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MODIFYSKILLDATAPROPERTY_1_OFFSET))(this, skillName, propertyType, func, val);
		}

		::System::Boolean IsCurrentSkillFinish(::System::Boolean bAllowReady)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISCURRENTSKILLFINISH_OFFSET))(this, bAllowReady);
		}

		::System::Void OnAfterSkillPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ONAFTERSKILLPERFORM_OFFSET))(this);
		}

		::System::Void RefreshCurrentSkillPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_REFRESHCURRENTSKILLPERFORM_OFFSET))(this);
		}

		::System::Void MakeSkillPerformWorking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MAKESKILLPERFORMWORKING_OFFSET))(this);
		}

		::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo IsSelfAllowInsertUltra(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISSELFALLOWINSERTULTRA_OFFSET))(this, nSkillIndex);
		}

		::RPG::GameCore::SkillData* GetFirstAllowUseSkill(::System::Boolean checkTarget, ::System::Boolean checkTurnState, ::System::Boolean includeNormal, ::System::Boolean includeUltra, ::System::Boolean includeChild)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETFIRSTALLOWUSESKILL_OFFSET))(this, checkTarget, checkTurnState, includeNormal, includeUltra, includeChild);
		}

		::RPG::GameCore::SkillData* GetSkillDataByTag(::RPG::GameCore::JsonEnum* skillTag)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLDATABYTAG_OFFSET))(this, skillTag);
		}

		::System::Void FillAllSkillDataByTag(::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* fillList, ::RPG::GameCore::JsonEnum* skillTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_FILLALLSKILLDATABYTAG_OFFSET))(this, fillList, skillTag);
		}

		::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo IsSelfAllowUseSkill(::System::Int32 SkillIndex, ::System::Boolean checkCaster, ::System::Boolean checkTarget, ::System::Boolean checkTurnState, ::System::Boolean checkBp, ::System::Boolean checkSkillPerformState)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISSELFALLOWUSESKILL_OFFSET))(this, SkillIndex, checkCaster, checkTarget, checkTurnState, checkBp, checkSkillPerformState);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetAllAllowSkillIdxList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETALLALLOWSKILLIDXLIST_OFFSET))(this);
		}

		::System::Boolean IsAllowUseSkill(::System::Int32 SkillIndex, ::RPG::GameCore::AbilityCursorInfo CursorInfo, ::System::String*& ErrorMsg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AbilityCursorInfo, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISALLOWUSESKILL_OFFSET))(this, SkillIndex, CursorInfo, ErrorMsg);
		}

		::System::Void SetSkillPerformFinish(::System::Boolean bSkipAttackSettlement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETSKILLPERFORMFINISH_OFFSET))(this, bSkipAttackSettlement);
		}

		::System::Void SetLeftCastTimes(::System::Int32 SkillIndex, ::System::Int32 castTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETLEFTCASTTIMES_OFFSET))(this, SkillIndex, castTimes);
		}

		::System::Int32 GetLeftCastTimes(::System::Int32 SkillIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETLEFTCASTTIMES_OFFSET))(this, SkillIndex);
		}

		::System::Int32 GetMaxCastTimes(::System::Int32 SkillIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETMAXCASTTIMES_OFFSET))(this, SkillIndex);
		}

		::System::Void SetCoolDown(::System::Int32 SkillIndex, ::System::Int32 CoolDownValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETCOOLDOWN_OFFSET))(this, SkillIndex, CoolDownValue);
		}

		::System::Int32 GetCoolDown(::System::Int32 SkillIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETCOOLDOWN_OFFSET))(this, SkillIndex);
		}

		::System::Boolean IsSkillDisable(::RPG::GameCore::SkillType Type, ::RPG::GameCore::ControlSkillType ControlType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillType, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISSKILLDISABLE_OFFSET))(this, Type, ControlType);
		}

		::System::Boolean IsSkillTypeDisable(::RPG::GameCore::SkillType Type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ISSKILLTYPEDISABLE_OFFSET))(this, Type);
		}

		::RPG::Client::TextID GetSkillTypeDisableText(::RPG::GameCore::SkillType Type, ::RPG::GameCore::ControlSkillType ControlType)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::SkillType, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLTYPEDISABLETEXT_OFFSET))(this, Type, ControlType);
		}

		::RPG::Client::TextID GetSkillTypeDisableTip(::RPG::GameCore::SkillType Type, ::RPG::GameCore::ControlSkillType ControlType)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::SkillType, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSKILLTYPEDISABLETIP_OFFSET))(this, Type, ControlType);
		}

		::System::Void PushSkillTypeDisable(::Class_1_29327D508CD1E435* slot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_29327D508CD1E435*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_PUSHSKILLTYPEDISABLE_OFFSET))(this, slot);
		}

		::System::Void PopSkillTypeDisable(::Class_1_29327D508CD1E435* slot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_29327D508CD1E435*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_POPSKILLTYPEDISABLE_OFFSET))(this, slot);
		}

		::System::Boolean HasNonPassiveSkill(::System::Boolean checkSkillTypeDisable)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASNONPASSIVESKILL_OFFSET))(this, checkSkillTypeDisable);
		}

		::System::Boolean HasSkillType(::RPG::GameCore::SkillType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASSKILLTYPE_OFFSET))(this, type);
		}

		::System::Boolean HasSkillTag(::RPG::GameCore::JsonEnum* skillTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASSKILLTAG_OFFSET))(this, skillTag);
		}

		::System::Void StackSkillTargetRedirect(::RPG::GameCore::TurnBasedModifierInstance* modifier, ::RPG::GameCore::FixPoint probability, ::RPG::GameCore::RedirectSkillTargetAffectTeam affectTeam, ::RPG::GameCore::GameEntity* redirectTarget, ::System::Int32 maxDistance, ::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* successCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::RedirectSkillTargetAffectTeam, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_STACKSKILLTARGETREDIRECT_OFFSET))(this, modifier, probability, affectTeam, redirectTarget, maxDistance, successCallback);
		}

		::System::Void UnstackSkillTargetRedirect(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_UNSTACKSKILLTARGETREDIRECT_OFFSET))(this, modifier);
		}

		::System::Boolean MayRedirectSkillTarget(::System::Int32 nSkillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_MAYREDIRECTSKILLTARGET_OFFSET))(this, nSkillIndex);
		}

		::System::Void TryUsePassiveSkill(::System::Boolean bIsAfterRevive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_TRYUSEPASSIVESKILL_OFFSET))(this, bIsAfterRevive);
		}

		::System::Void SetSkillCustomToastPath(::Il2CppArray<::RPG::GameCore::SkillType>* skillTypes, ::RPG::GameCore::SkillTextDialogType dialogType)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SkillType>*, ::RPG::GameCore::SkillTextDialogType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SETSKILLCUSTOMTOASTPATH_OFFSET))(this, skillTypes, dialogType);
		}

		::System::Void RecordUseSkill(::System::Int32 skillIndex, ::RPG::GameCore::AbilityCursorInfo pCursorInfo, ::System::Boolean isPassive, ::System::Int32 extraUseParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AbilityCursorInfo, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_RECORDUSESKILL_OFFSET))(this, skillIndex, pCursorInfo, isPassive, extraUseParam);
		}

		::System::Boolean HasRecordSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASRECORDSKILL_OFFSET))(this);
		}

		::System::Void UseRecordSkill(::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>* dynamicValues, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>* dynamicStrings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>*, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USERECORDSKILL_OFFSET))(this, dynamicValues, dynamicStrings);
		}

		::System::Boolean HasOpInSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_HASOPINSKILL_OFFSET))(this);
		}

		::System::Void RecordOpInSkill(::System::Int32 iOpIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_RECORDOPINSKILL_OFFSET))(this, iOpIndex);
		}

		::System::Void ProcessOpInSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_PROCESSOPINSKILL_OFFSET))(this);
		}

		::System::Void OnRefreshSelectAimAtTargets(::System::Int32 activeSkillIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_ONREFRESHSELECTAIMATTARGETS_OFFSET))(this, activeSkillIndex);
		}

		::RPG::GameCore::FixPoint GetSPNeedBySkillIndex(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GETSPNEEDBYSKILLINDEX_OFFSET))(this, nSkillIndex);
		}

		::System::Void _InitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__INITEVENT_OFFSET))(this);
		}

		::System::Void _UnInitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__UNINITEVENT_OFFSET))(this);
		}

		::System::Void _SetupCharacterSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__SETUPCHARACTERSKILL_OFFSET))(this);
		}

		::System::Void _OnLevelTurnEndEvent(::Class_0_16E4307DCC419505_347* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ONLEVELTURNENDEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnEntityRevive(::Class_0_16E4307DCC419505_347* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ONENTITYREVIVE_OFFSET))(this, Evt);
		}

		::System::Boolean _IsInInsertNormalAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ISININSERTNORMALACTION_OFFSET))(this);
		}

		::System::Void _DecSPBeforeSkillUse(::System::Int32 SkillIndex, ::System::Boolean isUltra)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__DECSPBEFORESKILLUSE_OFFSET))(this, SkillIndex, isUltra);
		}

		::RPG::GameCore::FixPoint _GetSkillUseBPPoint(::System::Int32 SkillIndex)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__GETSKILLUSEBPPOINT_OFFSET))(this, SkillIndex);
		}

		::System::Void _DecBPBeforeSkillUse(::System::Int32 SkillIndex, ::RPG::GameCore::GameEntity* pTeamEntity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__DECBPBEFORESKILLUSE_OFFSET))(this, SkillIndex, pTeamEntity);
		}

		::System::Void _DecCastTimeBeforeSkillUse(::System::Int32 SkillIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__DECCASTTIMEBEFORESKILLUSE_OFFSET))(this, SkillIndex);
		}

		::System::Void _AddSPAfterSkillUse(::System::Int32 SkillIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ADDSPAFTERSKILLUSE_OFFSET))(this, SkillIndex);
		}

		::System::Void _AddBPAfterSkillUse(::System::Int32 SkillIndex, ::RPG::GameCore::GameEntity* pTeamEntity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ADDBPAFTERSKILLUSE_OFFSET))(this, SkillIndex, pTeamEntity);
		}

		::System::Void _AddPreModifierBeforeEntryAbility(::RPG::GameCore::SkillData* pSkillData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ADDPREMODIFIERBEFOREENTRYABILITY_OFFSET))(this, pSkillData);
		}

		::System::Void _OnUseActiveSkillShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT__ONUSEACTIVESKILLSHOWUI_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* get_JsonConfig()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_JSONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::SelfSkillPerformState get_SelfPerformState()
		{
			return ((::RPG::GameCore::SelfSkillPerformState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SELFPERFORMSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* get_SkillDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SKILLDATALIST_OFFSET))(this);
		}

		::System::Int32 get_SkillCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SKILLCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SkillPointEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SKILLPOINTENTITY_OFFSET))(this);
		}

		::System::Void set_SkillPointEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_SKILLPOINTENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_SkillActualAttacker()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_SKILLACTUALATTACKER_OFFSET))(this);
		}

		::System::Void set_SkillActualAttacker(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_SKILLACTUALATTACKER_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* RPG_GameCore_ISkillCharacterComponent_get_CurrentSkillTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_RPG_GAMECORE_ISKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* RPG_GameCore_ISkillCharacterComponent_get_CurrentSkillSubTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_RPG_GAMECORE_ISKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillSubTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET))(this);
		}

		::System::Boolean get_IsUltraSkillSkipSpCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISULTRASKILLSKIPSPCHECK_OFFSET))(this);
		}

		::System::Boolean get_IsNoBpCostSpecialAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISNOBPCOSTSPECIALAVATAR_OFFSET))(this);
		}

		::System::Void set_IsNoBpCostSpecialAvatar(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_ISNOBPCOSTSPECIALAVATAR_OFFSET))(this, value);
		}

		::System::Boolean get_IsNoBpCostByTask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISNOBPCOSTBYTASK_OFFSET))(this);
		}

		::System::Void set_IsNoBpCostByTask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_ISNOBPCOSTBYTASK_OFFSET))(this, value);
		}

		::System::Boolean get_IsNoBpCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISNOBPCOST_OFFSET))(this);
		}

		::System::Boolean get_IsNoSpCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_ISNOSPCOST_OFFSET))(this);
		}

		::System::Void set_IsNoSpCost(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_ISNOSPCOST_OFFSET))(this, value);
		}

		::System::Boolean get_PassiveUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_PASSIVEUSED_OFFSET))(this);
		}

		::System::Void set_PassiveUsed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_PASSIVEUSED_OFFSET))(this, value);
		}

		::RPG::GameCore::TaskContext* get_TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_GET_TASKCONTEXT_OFFSET))(this);
		}

		::System::Void set_TaskContext(::RPG::GameCore::TaskContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_SET_TASKCONTEXT_OFFSET))(this, value);
		}
	};
}
