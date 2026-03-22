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
class Class_0_16E4307DCC419505_347;
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
namespace RPG::GameCore { class MazeSkillRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTMANUALTRIGGERABILITY_OFFSET UNITYSDK_OFFSET(0xA31E940)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTSKILL_OFFSET UNITYSDK_OFFSET(0xA31F130)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADDWAITABILITY_OFFSET UNITYSDK_OFFSET(0xA320950)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_1_OFFSET UNITYSDK_OFFSET(0xA31D950)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_CUSTOM_OFFSET UNITYSDK_OFFSET(0xA31E550)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_FORBIDPLOTCHARACTER_OFFSET UNITYSDK_OFFSET(0xA31E0F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_LOCKMODULE_OFFSET UNITYSDK_OFFSET(0xA31E470)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xA31E250)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_OFFSET UNITYSDK_OFFSET(0xA31D8D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CLEARSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xA322C80)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA31C780)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ENDSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xA322820)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GENERATESKILLCURSORBYSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA322240)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCURRENTSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA3222C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMHASH_OFFSET UNITYSDK_OFFSET(0xA322390)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMS_OFFSET UNITYSDK_OFFSET(0xA322580)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLCDREMAINED_OFFSET UNITYSDK_OFFSET(0xA31E610)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xA31D6C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLINDEXBYSKILLNAME_OFFSET UNITYSDK_OFFSET(0xA321FF0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLNAMEBYABILITYNAME_OFFSET UNITYSDK_OFFSET(0xA31F1E0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0xA321B80)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETCURSORINFO_OFFSET UNITYSDK_OFFSET(0xA31D4A0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA31D880)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLUSETIMEBYINDEX_OFFSET UNITYSDK_OFFSET(0xA322310)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSYNCSERVERSKILLINDEXBYJSONSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA3201B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLMAINABILITY_OFFSET UNITYSDK_OFFSET(0xA323030)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0xA323020)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0xA322C40)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTUSESKILLUSEID_OFFSET UNITYSDK_OFFSET(0xA323040)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_ISWAITINGSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xA323050)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xA323000)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLCOUNT_OFFSET UNITYSDK_OFFSET(0xA322B50)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xA322FE0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_USETYPEAHEADSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xA321F10)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA31CA60)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ISCURRENTSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xA31E5C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_MANUALTRIGGERABILITY_OFFSET UNITYSDK_OFFSET(0xA3216B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONCHARACTERFOREGROUND_OFFSET UNITYSDK_OFFSET(0xA31E7B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xA31D0D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA31D460)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_PRECOSTMPWHENHITVALIDTARGET_OFFSET UNITYSDK_OFFSET(0xA31FA80)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_RESETSKILL_OFFSET UNITYSDK_OFFSET(0xA31E890)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SETSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0xA322980)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0xA322C50)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_ISWAITINGSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xA323060)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xA323010)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xA322FF0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SHOWNOTALLOWUSESKILLTOAST_OFFSET UNITYSDK_OFFSET(0xA31E690)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_STARTSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xA322760)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SUMMITSKILLTOSERVER_OFFSET UNITYSDK_OFFSET(0xA320BD0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLABORT_OFFSET UNITYSDK_OFFSET(0xA322E80)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xA322D20)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xA321D10)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYGETCOMBOSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA3228B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYUSESKILL_OFFSET UNITYSDK_OFFSET(0xA320E10)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_USESKILL_OFFSET UNITYSDK_OFFSET(0xA320ED0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_INTERNALCONFIG_OFFSET UNITYSDK_OFFSET(0xA31DD00)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_LIGHTTEAMMPCOST_OFFSET UNITYSDK_OFFSET(0xA31DEF0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_TARGETVAILD_OFFSET UNITYSDK_OFFSET(0xA31DE40)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKSKILLFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xA320710)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__COSTMAZESKILLMP_OFFSET UNITYSDK_OFFSET(0xA31FDB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA31C6B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__GETNEXTSKILLUSEID_OFFSET UNITYSDK_OFFSET(0xA3213C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__INITSKILLDATAALL_OFFSET UNITYSDK_OFFSET(0xA31CC20)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__NOTIFYMAZESKILLCASTEVENT_OFFSET UNITYSDK_OFFSET(0xA3209F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA320AF0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xA31ED30)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONTELEPORT_OFFSET UNITYSDK_OFFSET(0xA320B40)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SHOWUSINGMAZESKILLNAME_OFFSET UNITYSDK_OFFSET(0xA320210)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SKILLABILITYFINISH_OFFSET UNITYSDK_OFFSET(0xA31EB70)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__STARTSKILLABILITY_OFFSET UNITYSDK_OFFSET(0xA320D70)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SYNCNPCSTATUSWHENUSESKILL_OFFSET UNITYSDK_OFFSET(0xA321600)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKSKILLCD_OFFSET UNITYSDK_OFFSET(0xA321C60)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKWAITABILITY_OFFSET UNITYSDK_OFFSET(0xA321DE0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TRYUSEPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0xA31D150)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA323070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillCharacterComponent_TypeDefinitionIndex = 44690;

	class AdventureSkillCharacterComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::UInt32* StaticGet__SkillUseID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AdventureSkillCharacterComponent_TypeDefinitionIndex)->GetStaticField(0xEC70);
		}
		::Class_0_16E4307DCC419505_22* _JsonConfigRef; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureSkillData*>* _SkillDataList; // 0x20
		::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CurrentSkillTargetList_k__BackingField; // 0x30
		::RPG::GameCore::GameEntity* _SkillActualAttacker_k__BackingField; // 0x38
		::Class_2_C14C025AFA60DCA2* _TargetingComponentRef; // 0x40
		::RPG::GameCore::AbilityComponent* _AbilityComponentRef; // 0x48
		::RPG::GameCore::AdventureSkillCharacterComponent_AdventureCharacterUseSkillNotifyData* _AdvUseSkillNotifyData; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _CustomSkillAnimToHash; // 0x58
		::RPG::GameCore::AdventureCharacterController* _AdvCharacterController; // 0x60
		::RPG::GameCore::AdventureAbilityComponent* _AdvAbilityComponentRef; // 0x68
		::System::Collections::Generic::List_1<::Class_1_A2D8E5AB4B623162*>* _WaitAbilityList; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* _CustomSkillAnims; // 0x78
		::Class_1_A2D8E5AB4B623162* _MainAbility; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureSkillType, ::System::Int32>* _SkillComboMap; // 0x88
		::RPG::GameCore::AdventureCharacterDataComponent* _CharacterDataRef; // 0x90
		::Il2CppArray<::RPG::GameCore::AdventureSkillSlotData*>* _SkillSlots; // 0x98
		::System::UInt32 _CurrentUseSkillUseId; // 0xA0
		::System::Int32 _CurrentCacheCustomSkillAnimsSkillIndex; // 0xA4
		::System::Boolean _IsWaitingSkillInput_k__BackingField; // 0xA8
		::System::Boolean _AllWaitAbilityFinish; // 0xA9
		::System::Boolean _IsAbortSkillFirstFrame; // 0xAA
		::System::Boolean _IsUseSkillFirstFrame; // 0xAB
		::RPG::GameCore::AdventureSkillCharacterComponent_CustomForbidTag ForbidTag; // 0xAC
		::System::Int32 _CurrentUseSkillIndex; // 0xB0

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

		::System::Void PreCostMpWhenHitValidTarget(::RPG::GameCore::TaskContext* context, ::System::UInt32 skillIndex, ::System::Int32 preCostCount)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_PRECOSTMPWHENHITVALIDTARGET_OFFSET))(this, context, skillIndex, preCostCount);
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

		::System::Void _CostMazeSkillMp(::RPG::GameCore::MazeSkillRow* row, ::System::UInt32 skillJsonIndex, ::System::UInt32 skillUseID, ::System::Int32 multiples, ::System::Boolean notifyToServer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeSkillRow*, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__COSTMAZESKILLMP_OFFSET))(this, row, skillJsonIndex, skillUseID, multiples, notifyToServer);
		}

		::System::Void _CheckSkillFinishState(::Class_2_1A037263741137E5* abilityInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A037263741137E5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKSKILLFINISHSTATE_OFFSET))(this, abilityInstance);
		}

		::System::Void _NotifyMazeSkillCastEvent(::System::Int32 skillIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__NOTIFYMAZESKILLCASTEVENT_OFFSET))(this, skillIndex);
		}

		::System::Void _OnBeforeDestroy(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONBEFOREDESTROY_OFFSET))(this, evt);
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
