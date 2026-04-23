#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityCursorInfo.h"
#include "unitysdk/RPG/GameCore/AdventureSkillAbortReason.h"
#include "unitysdk/RPG/GameCore/AdventureSkillCharacterComponent_CustomForbidTag.h"
#include "unitysdk/RPG/GameCore/AdventureSkillCharacterComponent_SkillAllowUseCheckResult.h"
#include "unitysdk/RPG/GameCore/AdventureSkillSlotState.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_22;
class Class_0_16E4307DCC419505_382;
class Class_1_512CC108C22F737B;
class Class_1_A2D8E5AB4B623162;
class Class_2_1A037263741137E5;
class Class_2_C14C025AFA60DCA2;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent_AdventureCharacterUseSkillNotifyData; }
namespace RPG::GameCore { class AdventureSkillConfig; }
namespace RPG::GameCore { class AdventureSkillData; }
namespace RPG::GameCore { class AdventureSkillSlotData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTMANUALTRIGGERABILITY_OFFSET UNITYSDK_OFFSET(0xC777820)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTSKILL_OFFSET UNITYSDK_OFFSET(0xC778020)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADDWAITABILITY_OFFSET UNITYSDK_OFFSET(0xC7798C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_1_OFFSET UNITYSDK_OFFSET(0xC776870)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_CUSTOM_OFFSET UNITYSDK_OFFSET(0xC7773B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_FORBIDPLOTCHARACTER_OFFSET UNITYSDK_OFFSET(0xC777070)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_LOCKMODULE_OFFSET UNITYSDK_OFFSET(0xC7772D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xC7771D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_OFFSET UNITYSDK_OFFSET(0xC761B00)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CLEARSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xC77B3F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC775710)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ENDSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xC77B060)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GENERATESKILLCURSORBYSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xC761B80)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCURRENTSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xC77AB10)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMHASH_OFFSET UNITYSDK_OFFSET(0xC77ABE0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMS_OFFSET UNITYSDK_OFFSET(0xC77ADB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLCDREMAINED_OFFSET UNITYSDK_OFFSET(0xC777470)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xC776660)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLINDEXBYSKILLNAME_OFFSET UNITYSDK_OFFSET(0xC77A8C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLNAMEBYABILITYNAME_OFFSET UNITYSDK_OFFSET(0xC7780D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0xC761A30)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETCURSORINFO_OFFSET UNITYSDK_OFFSET(0xC776440)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xC776820)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLUSETIMEBYINDEX_OFFSET UNITYSDK_OFFSET(0xC77AB60)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSYNCSERVERSKILLINDEXBYJSONSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xC7790A0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLMAINABILITY_OFFSET UNITYSDK_OFFSET(0xC77B7A0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0xC77B790)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0xC77B3B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTUSESKILLUSEID_OFFSET UNITYSDK_OFFSET(0xC77B7B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_ISWAITINGSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xC77B7C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xC77B770)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLCOUNT_OFFSET UNITYSDK_OFFSET(0xC77B2C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xC77B750)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_USETYPEAHEADSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xC77A7E0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7759F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ISCURRENTSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xC777420)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_MANUALTRIGGERABILITY_OFFSET UNITYSDK_OFFSET(0xC77A060)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONCHARACTERFOREGROUND_OFFSET UNITYSDK_OFFSET(0xC777610)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xC776070)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xC776400)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_PRECOSTMPWHENHITVALIDTARGET_OFFSET UNITYSDK_OFFSET(0xC778970)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_RESETSKILL_OFFSET UNITYSDK_OFFSET(0xC7776F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SETSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0xC77B0F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0xC77B3C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_ISWAITINGSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xC77B7D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xC77B780)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xC77B760)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SHOWNOTALLOWUSESKILLTOAST_OFFSET UNITYSDK_OFFSET(0xC7774F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_STARTSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xC77AFA0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SUMMITSKILLTOSERVER_OFFSET UNITYSDK_OFFSET(0xC779B50)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLABORT_OFFSET UNITYSDK_OFFSET(0xC77B5F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xC77B490)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xC77A5E0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYGETCOMBOSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xC761910)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYUSESKILL_OFFSET UNITYSDK_OFFSET(0xC779CB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_USESKILL_OFFSET UNITYSDK_OFFSET(0xC761C00)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_INTERNALCONFIG_OFFSET UNITYSDK_OFFSET(0xC776C50)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_LIGHTTEAMMPCOST_OFFSET UNITYSDK_OFFSET(0xC776E40)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_TARGETVAILD_OFFSET UNITYSDK_OFFSET(0xC776D90)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKSKILLFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xC779680)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__COSTMAZESKILLMP_OFFSET UNITYSDK_OFFSET(0xC778CB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC775640)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__GETNEXTSKILLUSEID_OFFSET UNITYSDK_OFFSET(0xC779D70)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__INITSKILLDATAALL_OFFSET UNITYSDK_OFFSET(0xC775BB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__NOTIFYMAZESKILLCASTEVENT_OFFSET UNITYSDK_OFFSET(0xC779960)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xC779A70)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xC777C10)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONTELEPORT_OFFSET UNITYSDK_OFFSET(0xC779AC0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SHOWUSINGMAZESKILLNAME_OFFSET UNITYSDK_OFFSET(0xC779100)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SKILLABILITYFINISH_OFFSET UNITYSDK_OFFSET(0xC777A60)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__STARTSKILLABILITY_OFFSET UNITYSDK_OFFSET(0xC779C10)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SYNCNPCSTATUSWHENUSESKILL_OFFSET UNITYSDK_OFFSET(0xC779FB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKSKILLCD_OFFSET UNITYSDK_OFFSET(0xC77A530)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKWAITABILITY_OFFSET UNITYSDK_OFFSET(0xC77A6B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TRYUSEPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0xC7760F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC77B7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillCharacterComponent_TypeDefinitionIndex = 52406;

	class AdventureSkillCharacterComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::UInt32* StaticGet__SkillUseID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AdventureSkillCharacterComponent_TypeDefinitionIndex)->GetStaticField(0x10BC0);
		}
		::Il2CppArray<::RPG::GameCore::AdventureSkillSlotData*>* _SkillSlots; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _CustomSkillAnims; // 0x20
		::Class_2_C14C025AFA60DCA2* _TargetingComponentRef; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CurrentSkillTargetList_k__BackingField; // 0x30
		::RPG::GameCore::AdventureCharacterController* _AdvCharacterController; // 0x38
		::Class_1_A2D8E5AB4B623162* _MainAbility; // 0x40
		::RPG::GameCore::AdventureAbilityComponent* _AdvAbilityComponentRef; // 0x48
		::Class_0_16E4307DCC419505_22* _JsonConfigRef; // 0x50
		::System::Collections::Generic::List_1<::Class_1_A2D8E5AB4B623162*>* _WaitAbilityList; // 0x58
		::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x60
		::RPG::GameCore::AdventureCharacterDataComponent* _CharacterDataRef; // 0x68
		::RPG::GameCore::GameEntity* _SkillActualAttacker_k__BackingField; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _CustomSkillAnimToHash; // 0x78
		::RPG::GameCore::AbilityComponent* _AbilityComponentRef; // 0x80
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureSkillData*>* _SkillDataList; // 0x88
		::RPG::GameCore::AdventureSkillCharacterComponent_AdventureCharacterUseSkillNotifyData* _AdvUseSkillNotifyData; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureSkillType, ::System::Int32>* _SkillComboMap; // 0x98
		::System::Int32 _CurrentUseSkillIndex; // 0xA0
		::System::UInt32 _CurrentUseSkillUseId; // 0xA4
		::RPG::GameCore::AdventureSkillCharacterComponent_CustomForbidTag ForbidTag; // 0xA8
		::System::Int32 _CurrentCacheCustomSkillAnimsSkillIndex; // 0xAC
		::System::Boolean _IsUseSkillFirstFrame; // 0xB0
		::System::Boolean _AllWaitAbilityFinish; // 0xB1
		::System::Boolean _IsAbortSkillFirstFrame; // 0xB2
		::System::Boolean _IsWaitingSkillInput_k__BackingField; // 0xB3

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::Class_0_16E4307DCC419505_22* skillConfig, ::RPG::GameCore::AdventureCharacterDataComponent* characterData, ::RPG::GameCore::AdventureAbilityComponent* advAbilityComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_22*, ::RPG::GameCore::AdventureCharacterDataComponent*, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_INITCOMPONENT_OFFSET))(this, skillConfig, characterData, advAbilityComponent);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCursorInfo GetSkillTargetCursorInfo(::System::Int32 skillIndex)
		{
			return ((::RPG::GameCore::AbilityCursorInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETCURSORINFO_OFFSET))(this, skillIndex);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetSkillTargetEntityList(::System::Int32 skillIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETENTITYLIST_OFFSET))(this, skillIndex);
		}

		::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult CheckAllowUseSkill(::System::Int32 skillIndex, ::System::Boolean isCombo, ::System::Boolean isSkillInput)
		{
			return ((::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_OFFSET))(this, skillIndex, isCombo, isSkillInput);
		}

		::System::Boolean _CheckAllowUseSkill_InternalConfig(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_INTERNALCONFIG_OFFSET))(this, skillIndex);
		}

		::System::Boolean _CheckAllowUseSkill_TargetVaild(::RPG::GameCore::AdventureSkillData* skillData, ::RPG::GameCore::GameEntity* pointEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureSkillData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_TARGETVAILD_OFFSET))(this, skillData, pointEntity);
		}

		::System::Boolean _CheckAllowUseSkill_LightTeamMPCost(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_LIGHTTEAMMPCOST_OFFSET))(this, skillIndex);
		}

		::System::Boolean CheckAllowUseSkill_ForbidPlotCharacter(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_FORBIDPLOTCHARACTER_OFFSET))(this, skillIndex);
		}

		::System::Boolean CheckAllowUseSkill_MapRotation(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_MAPROTATION_OFFSET))(this, skillIndex);
		}

		::System::Boolean CheckAllowUseSkill_LockModule(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_LOCKMODULE_OFFSET))(this, skillIndex);
		}

		::System::Boolean CheckAllowUseSkill_Custom(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_CUSTOM_OFFSET))(this, skillIndex);
		}

		::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult CheckAllowUseSkill_1(::System::Int32 skillIndex, ::RPG::GameCore::GameEntity* pointEntity, ::System::Boolean isCombo, ::System::Boolean isSkillInput)
		{
			return ((::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_1_OFFSET))(this, skillIndex, pointEntity, isCombo, isSkillInput);
		}

		::System::Void ShowNotAllowUseSkillToast(::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult skillAllowCheck, ::System::Int32 skillIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SHOWNOTALLOWUSESKILLTOAST_OFFSET))(this, skillAllowCheck, skillIndex);
		}

		::System::Single GetSkillCDRemained(::System::Int32 skillIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLCDREMAINED_OFFSET))(this, skillIndex);
		}

		::System::Void OnCharacterForeGround(::System::Boolean foreGround)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONCHARACTERFOREGROUND_OFFSET))(this, foreGround);
		}

		::System::Void ResetSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_RESETSKILL_OFFSET))(this);
		}

		::System::Void AbortSkill(::RPG::GameCore::AdventureSkillAbortReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillAbortReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTSKILL_OFFSET))(this, reason);
		}

		::System::Void AbortManualTriggerAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTMANUALTRIGGERABILITY_OFFSET))(this);
		}

		::System::String* GetSkillNameByAbilityName(::System::String* strAbilityName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLNAMEBYABILITYNAME_OFFSET))(this, strAbilityName);
		}

		::System::Void PreCostMpWhenHitValidTarget(::RPG::GameCore::TaskContext* context, ::System::UInt32 skillIndex, ::System::Int32 preCostCount, ::System::UInt32 overrideMPNeed)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_PRECOSTMPWHENHITVALIDTARGET_OFFSET))(this, context, skillIndex, preCostCount, overrideMPNeed);
		}

		::System::Int32 GetSyncServerSkillIndexByJsonSkillIndex(::System::Int32 skillIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSYNCSERVERSKILLINDEXBYJSONSKILLINDEX_OFFSET))(this, skillIndex);
		}

		::System::Void _SkillAbilityFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SKILLABILITYFINISH_OFFSET))(this);
		}

		::System::Void _ShowUsingMazeSkillName(::RPG::GameCore::AdventureSkillData* skillData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SHOWUSINGMAZESKILLNAME_OFFSET))(this, skillData);
		}

		::System::Void _CostMazeSkillMp(::System::UInt32 mpNeed, ::System::UInt32 skillJsonIndex, ::System::UInt32 skillUseID, ::System::Int32 multiples, ::System::Boolean notifyToServer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__COSTMAZESKILLMP_OFFSET))(this, mpNeed, skillJsonIndex, skillUseID, multiples, notifyToServer);
		}

		::System::Void _CheckSkillFinishState(::Class_2_1A037263741137E5* abilityInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A037263741137E5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKSKILLFINISHSTATE_OFFSET))(this, abilityInstance);
		}

		::System::Void _NotifyMazeSkillCastEvent(::System::Int32 skillIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__NOTIFYMAZESKILLCASTEVENT_OFFSET))(this, skillIndex);
		}

		::System::Void _OnBeforeDestroy(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONBEFOREDESTROY_OFFSET))(this, evt);
		}

		::System::Void _OnTeleport(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONTELEPORT_OFFSET))(this, arg);
		}

		::System::Void SummitSkillToServer(::Class_2_1A037263741137E5* abilityInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A037263741137E5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SUMMITSKILLTOSERVER_OFFSET))(this, abilityInstance);
		}

		::Class_2_1A037263741137E5* _StartSkillAbility(::RPG::GameCore::AdventureSkillConfig* pUsingConfig, ::Class_1_512CC108C22F737B* abilityParam)
		{
			return ((::Class_2_1A037263741137E5*(*)(::PVOID, ::RPG::GameCore::AdventureSkillConfig*, ::Class_1_512CC108C22F737B*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__STARTSKILLABILITY_OFFSET))(this, pUsingConfig, abilityParam);
		}

		::System::Boolean TryUseSkill(::System::Int32 skillIndex, ::RPG::GameCore::AbilityCursorInfo cursorInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AbilityCursorInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYUSESKILL_OFFSET))(this, skillIndex, cursorInfo);
		}

		::System::Void UseSkill(::System::Int32 skillIndex, ::RPG::GameCore::AbilityCursorInfo cursorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AbilityCursorInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_USESKILL_OFFSET))(this, skillIndex, cursorInfo);
		}

		::System::Boolean ManualTriggerAbility(::RPG::GameCore::GameEntity* triggerSounce, ::RPG::GameCore::AdventureSkillType skillType, ::System::String* abilityName, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* InheritTargets)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureSkillType, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_MANUALTRIGGERABILITY_OFFSET))(this, triggerSounce, skillType, abilityName, InheritTargets);
		}

		::System::Void _TickSkillCD(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKSKILLCD_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void AddWaitAbility(::Class_1_A2D8E5AB4B623162* Ability)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADDWAITABILITY_OFFSET))(this, Ability);
		}

		::System::Boolean get_UseTypeAheadSkillInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_USETYPEAHEADSKILLINPUT_OFFSET))(this);
		}

		::System::Boolean IsCurrentSkillFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ISCURRENTSKILLFINISH_OFFSET))(this);
		}

		::System::Int32 GetSkillIndexBySkillName(::System::String* skillName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLINDEXBYSKILLNAME_OFFSET))(this, skillName);
		}

		::RPG::GameCore::AbilityCursorInfo GenerateSkillCursorBySkillIndex(::System::Int32 skillIndex)
		{
			return ((::RPG::GameCore::AbilityCursorInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GENERATESKILLCURSORBYSKILLINDEX_OFFSET))(this, skillIndex);
		}

		::System::Int32 GetCurrentSkillindex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCURRENTSKILLINDEX_OFFSET))(this);
		}

		::System::Int32 GetSkillUseTimeByIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLUSETIMEBYINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetCustomSkillAnimHash(::System::String* animStateName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMHASH_OFFSET))(this, animStateName);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetCustomSkillAnims(::System::Int32 skillIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMS_OFFSET))(this, skillIndex);
		}

		::System::Void StartSkillCombo(::RPG::GameCore::AdventureSkillType inputType, ::System::Int32 comboSkillIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_STARTSKILLCOMBO_OFFSET))(this, inputType, comboSkillIndex);
		}

		::System::Void EndSkillCombo(::RPG::GameCore::AdventureSkillType inputType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ENDSKILLCOMBO_OFFSET))(this, inputType);
		}

		::System::Boolean TryGetComboSkillIndex(::RPG::GameCore::AdventureSkillType inputType, ::System::Int32& comboSkillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureSkillType, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYGETCOMBOSKILLINDEX_OFFSET))(this, inputType, comboSkillIndex);
		}

		::RPG::GameCore::AdventureSkillData* GetSkillDataByIndex(::System::Int32 skillIndex)
		{
			return ((::RPG::GameCore::AdventureSkillData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLDATABYINDEX_OFFSET))(this, skillIndex);
		}

		::System::Void SetSkillSlotData(::RPG::GameCore::AdventureSkillType slot, ::RPG::GameCore::AdventureSkillSlotState state, ::System::Int32 bindSkillIndex, ::System::String* skillBtnPrefabPath)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType, ::RPG::GameCore::AdventureSkillSlotState, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SETSKILLSLOTDATA_OFFSET))(this, slot, state, bindSkillIndex, skillBtnPrefabPath);
		}

		::RPG::GameCore::AdventureSkillSlotData* GetSkillSlotData(::RPG::GameCore::AdventureSkillType slot)
		{
			return ((::RPG::GameCore::AdventureSkillSlotData*(*)(::PVOID, ::RPG::GameCore::AdventureSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLSLOTDATA_OFFSET))(this, slot);
		}

		::System::Int32 get_SkillCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET))(this);
		}

		::System::Void set_CurrentSkillTargetList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_CURRENTSKILLTARGETLIST_OFFSET))(this, value);
		}

		::System::Void _InitSkillDataAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__INITSKILLDATAALL_OFFSET))(this);
		}

		::System::Void ClearSkillCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CLEARSKILLCOMBO_OFFSET))(this);
		}

		::System::UInt32 _GetNextSkillUseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__GETNEXTSKILLUSEID_OFFSET))(this);
		}

		::System::Void _OnSkillFinish(::System::Boolean isAbort, ::RPG::GameCore::AdventureSkillAbortReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureSkillAbortReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONSKILLFINISH_OFFSET))(this, isAbort, reason);
		}

		::System::Void _TryUsePassiveSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TRYUSEPASSIVESKILL_OFFSET))(this);
		}

		::System::Void _TickWaitAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKWAITABILITY_OFFSET))(this);
		}

		::System::Void _SyncNpcStatusWhenUseSkill(::RPG::GameCore::AdventureSkillData* skillData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SYNCNPCSTATUSWHENUSESKILL_OFFSET))(this, skillData);
		}

		::System::Void SyncNpcStatusWhenSkillFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLFINISH_OFFSET))(this);
		}

		::System::Void SyncNpcStatusWhenSkillAbort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLABORT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SkillPointEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLPOINTENTITY_OFFSET))(this);
		}

		::System::Void set_SkillPointEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLPOINTENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_SkillActualAttacker()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLACTUALATTACKER_OFFSET))(this);
		}

		::System::Void set_SkillActualAttacker(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLACTUALATTACKER_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillSubTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET))(this);
		}

		::Class_1_A2D8E5AB4B623162* get_CurrentSkillMainAbility()
		{
			return ((::Class_1_A2D8E5AB4B623162*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLMAINABILITY_OFFSET))(this);
		}

		::System::UInt32 get_CurrentUseSkillUseId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTUSESKILLUSEID_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingSkillInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_ISWAITINGSKILLINPUT_OFFSET))(this);
		}

		::System::Void set_IsWaitingSkillInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_ISWAITINGSKILLINPUT_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
