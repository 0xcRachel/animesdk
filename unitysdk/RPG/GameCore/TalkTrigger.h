#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/Client/DialoguePhase.h"
#include "unitysdk/RPG/Client/DialogueType.h"
#include "unitysdk/RPG/GameCore/DialogueUtil_TalkSourceType.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/RPG/GameCore/TalkTrigger_DialogueGroupInfo.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class FetchAdvNPCData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class TalkTrigger_ShowTalkBtnParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TALKTRIGGER_CHECKDIALOGUECONDITIONS_OFFSET UNITYSDK_OFFSET(0x9F712A0)
#define RPG_GAMECORE_TALKTRIGGER_CHECKLOCALPLAYERCANINTERACT_OFFSET UNITYSDK_OFFSET(0x9F71D20)
#define RPG_GAMECORE_TALKTRIGGER_DELAYDIALOGUE_OFFSET UNITYSDK_OFFSET(0x9F70C90)
#define RPG_GAMECORE_TALKTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x9F70A30)
#define RPG_GAMECORE_TALKTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9F70CE0)
#define RPG_GAMECORE_TALKTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0x9F70FC0)
#define RPG_GAMECORE_TALKTRIGGER_ENDDIALOGUE_OFFSET UNITYSDK_OFFSET(0x9F71260)
#define RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEGRAPH_OFFSET UNITYSDK_OFFSET(0x9F71EA0)
#define RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEPARAM_OFFSET UNITYSDK_OFFSET(0x9F71EF0)
#define RPG_GAMECORE_TALKTRIGGER_GET_ENABLEDIALOGCAMERA_OFFSET UNITYSDK_OFFSET(0x9F71EC0)
#define RPG_GAMECORE_TALKTRIGGER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x9F71EE0)
#define RPG_GAMECORE_TALKTRIGGER_SETTARGETFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x9F71DA0)
#define RPG_GAMECORE_TALKTRIGGER_SET_DIALOGUEGRAPH_OFFSET UNITYSDK_OFFSET(0x9F71EB0)
#define RPG_GAMECORE_TALKTRIGGER_SET_ENABLEDIALOGCAMERA_OFFSET UNITYSDK_OFFSET(0x9F71ED0)
#define RPG_GAMECORE_TALKTRIGGER_STARTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x9F711B0)
#define RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUEFIRSTPHASE_OFFSET UNITYSDK_OFFSET(0x9F719D0)
#define RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUESECONDPHASE_OFFSET UNITYSDK_OFFSET(0x9F71BE0)
#define RPG_GAMECORE_TALKTRIGGER_UPDATECONDITIONDATA_OFFSET UNITYSDK_OFFSET(0x9F71C50)
#define RPG_GAMECORE_TALKTRIGGER__CHECKDIALOGUEBYGROUPID_OFFSET UNITYSDK_OFFSET(0x9F6F7A0)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERANGLE_OFFSET UNITYSDK_OFFSET(0x9F71580)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERHEIGHT_OFFSET UNITYSDK_OFFSET(0x9F71DF0)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFISBLOCKEDBYCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9F718C0)
#define RPG_GAMECORE_TALKTRIGGER__CHECKROGUEDIALOGUE_OFFSET UNITYSDK_OFFSET(0x9F71810)
#define RPG_GAMECORE_TALKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6F8A0)
#define RPG_GAMECORE_TALKTRIGGER__GETCURCHINWAGDIALOGUE_OFFSET UNITYSDK_OFFSET(0x9F6E920)
#define RPG_GAMECORE_TALKTRIGGER__GETFIRSTDIALOGUEID_OFFSET UNITYSDK_OFFSET(0x9F6F0A0)
#define RPG_GAMECORE_TALKTRIGGER__GETMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0x9F6E340)
#define RPG_GAMECORE_TALKTRIGGER__GETSHOWNMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0x9F6EAD0)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKBTNPARAM_OFFSET UNITYSDK_OFFSET(0x9F71B10)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKCHOSENTYPE_OFFSET UNITYSDK_OFFSET(0x9F6F480)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEIDLIST_OFFSET UNITYSDK_OFFSET(0x9F6F5B0)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEID_OFFSET UNITYSDK_OFFSET(0x9F6F1D0)
#define RPG_GAMECORE_TALKTRIGGER__HASCONFIG_OFFSET UNITYSDK_OFFSET(0x9F6EFD0)
#define RPG_GAMECORE_TALKTRIGGER__INITDIALOGUETYPE_OFFSET UNITYSDK_OFFSET(0x9F6FBA0)
#define RPG_GAMECORE_TALKTRIGGER__INITIALIZEDIALOGUEGROUPPOOL_OFFSET UNITYSDK_OFFSET(0x9F6E2B0)
#define RPG_GAMECORE_TALKTRIGGER__ISDIALOGUEASSOCIATEWITHTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x9F6ED50)
#define RPG_GAMECORE_TALKTRIGGER__RETARGETREPEATEDRANDOMVALUE_OFFSET UNITYSDK_OFFSET(0x9F6F6E0)
#define RPG_GAMECORE_TALKTRIGGER__SORTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x9F6F830)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDAILYDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0x9F6E530)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0x9F6E4A0)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0x9F6E680)
#define RPG_GAMECORE_TALKTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x9F71F00)
#define RPG_GAMECORE_TALKTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9F71F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkTrigger_TypeDefinitionIndex = 53032;

	class TalkTrigger : public ::Class_1_59305B446B42427E
	{
	public:
		// static const ::System::UInt32 INVALID_ID = 0x0; // 0x0
		// static const ::System::Int32 _ParallelDialogueMaxCount = 0x5; // 0x0
		::System::String* _DialogueGraph_k__BackingField; // 0x98
		::RPG::GameCore::LevelGroupMissionConditionSet* _ConditionSet; // 0xA0
		::Il2CppArray<::System::UInt32>* _MissionDialogueGroups; // 0xA8
		::RPG::GameCore::TalkTrigger_ShowTalkBtnParam* _ShowTalkBtnParam; // 0xB0
		::System::Single _dialogueCDConfig; // 0xB8
		::System::Single _dialogueCD; // 0xBC
		::System::Boolean _EnableDialogCamera_k__BackingField; // 0xC0
		::System::Single DialogueTriggerAngle; // 0xC4
		::RPG::GameCore::DialogueUtil_TalkSourceType _TalkSourceType; // 0xC8
		::RPG::Client::DialogueType DialogueType; // 0xCC

		::System::Void _ctor(::RPG::GameCore::GameEntity* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CTOR_OFFSET))(this, owner);
		}

		::System::Void _InitializeDialogueGroupPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__INITIALIZEDIALOGUEGROUPPOOL_OFFSET))(this);
		}

		::RPG::Client::DialoguePhase _TryUpdateDialogueGroups(::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*& targetArr, ::System::UInt32 talkCount, ::System::Int32 maxCount)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*&, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDIALOGUEGROUPS_OFFSET))(this, targetArr, talkCount, maxCount);
		}

		::System::Boolean _TryUpdateDailyDialogueGroups(::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*& targetArr, ::System::UInt32 talkCount, ::System::Int32 maxCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*&, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDAILYDIALOGUEGROUPS_OFFSET))(this, targetArr, talkCount, maxCount);
		}

		::System::Boolean _TryUpdateMissionDialogueGroups(::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*& targetArr, ::System::Int32 maxCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEMISSIONDIALOGUEGROUPS_OFFSET))(this, targetArr, maxCount);
		}

		::RPG::GameCore::TalkTrigger_DialogueGroupInfo _GetCurChinwagDialogue(::System::UInt32 talkCount)
		{
			return ((::RPG::GameCore::TalkTrigger_DialogueGroupInfo(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETCURCHINWAGDIALOGUE_OFFSET))(this, talkCount);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo>>* _GetShownMissionDialogueGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETSHOWNMISSIONDIALOGUEGROUPS_OFFSET))(this);
		}

		::System::Boolean _IsDialogueAssociateWithTrackingMission(::System::UInt32 DialogueGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__ISDIALOGUEASSOCIATEWITHTRACKINGMISSION_OFFSET))(this, DialogueGroupID);
		}

		::System::Int32 _SortDialogue(::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo> a, ::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo>, ::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__SORTDIALOGUE_OFFSET))(this, a, b);
		}

		::System::Boolean _HasConfig(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__HASCONFIG_OFFSET))(this, pEntity);
		}

		::Il2CppArray<::System::UInt32>* _GetMissionDialogueGroups()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETMISSIONDIALOGUEGROUPS_OFFSET))(this);
		}

		::System::Void _RetargetRepeatedRandomValue(::System::UInt32& curDialogueId, ::Il2CppArray<::System::UInt32>* idPool)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__RETARGETREPEATEDRANDOMVALUE_OFFSET))(this, curDialogueId, idPool);
		}

		::System::UInt32 _GetFirstDialogueID(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETFIRSTDIALOGUEID_OFFSET))(this, pEntity);
		}

		::RPG::GameCore::TalkChosenType _GetTalkChosenType(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::RPG::GameCore::TalkChosenType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKCHOSENTYPE_OFFSET))(this, pEntity);
		}

		::System::UInt32 _GetTalkDialogueID(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEID_OFFSET))(this, pEntity);
		}

		::Il2CppArray<::System::UInt32>* _GetTalkDialogueIDList(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEIDLIST_OFFSET))(this, pEntity);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* guestEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONENTER_OFFSET))(this, guestEntity);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* guestEntity, ::RPG::GameCore::TriggerExitReason exitReason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONEXIT_OFFSET))(this, guestEntity, exitReason);
		}

		::System::Void DoOnTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONTICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void StartDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_STARTDIALOGUE_OFFSET))(this);
		}

		::System::Void DelayDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DELAYDIALOGUE_OFFSET))(this);
		}

		::System::Void EndDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_ENDDIALOGUE_OFFSET))(this);
		}

		::System::Boolean CheckDialogueConditions(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_CHECKDIALOGUECONDITIONS_OFFSET))(this, entity);
		}

		::RPG::Client::DialoguePhase UpdataDialogueFirstPhase(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUEFIRSTPHASE_OFFSET))(this, entity);
		}

		::System::Boolean UpdataDialogueSecondPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUESECONDPHASE_OFFSET))(this);
		}

		::System::Void UpdateConditionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATECONDITIONDATA_OFFSET))(this);
		}

		::System::Boolean CheckLocalPlayerCanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_CHECKLOCALPLAYERCANINTERACT_OFFSET))(this);
		}

		::System::Void SetTargetFakeAvatar(::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>* targetNPC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SETTARGETFAKEAVATAR_OFFSET))(this, targetNPC);
		}

		::System::Boolean _CheckIfInTriggerHeight(::RPG::GameCore::GameEntity* hostEntity, ::RPG::GameCore::GameEntity* guestEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERHEIGHT_OFFSET))(this, hostEntity, guestEntity);
		}

		::System::Boolean _CheckIfInTriggerAngle(::RPG::GameCore::GameEntity* hostEntity, ::RPG::GameCore::GameEntity* guestEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERANGLE_OFFSET))(this, hostEntity, guestEntity);
		}

		::System::Boolean _CheckIfIsBlockedByCustomTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFISBLOCKEDBYCUSTOMTRIGGER_OFFSET))(this);
		}

		::System::Boolean _CheckRogueDialogue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKROGUEDIALOGUE_OFFSET))(this);
		}

		::RPG::Client::DialoguePhase _GetTalkBtnParam(::System::UInt32 talkCount)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKBTNPARAM_OFFSET))(this, talkCount);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::UInt32> _CheckDialogueByGroupID(::System::UInt32 dialogueGroupId)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKDIALOGUEBYGROUPID_OFFSET))(this, dialogueGroupId);
		}

		::System::Void _InitDialogueType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__INITDIALOGUETYPE_OFFSET))(this);
		}

		::System::String* get_DialogueGraph()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEGRAPH_OFFSET))(this);
		}

		::System::Void set_DialogueGraph(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SET_DIALOGUEGRAPH_OFFSET))(this, value);
		}

		::System::Boolean get_EnableDialogCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_ENABLEDIALOGCAMERA_OFFSET))(this);
		}

		::System::Void set_EnableDialogCamera(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SET_ENABLEDIALOGCAMERA_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_Owner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_OWNER_OFFSET))(this);
		}

		::RPG::GameCore::TalkTrigger_ShowTalkBtnParam* get_DialogueParam()
		{
			return ((::RPG::GameCore::TalkTrigger_ShowTalkBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEPARAM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
		}
	};
}
