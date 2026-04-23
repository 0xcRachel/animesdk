#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_41.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/Struct_2_137AB23E3A00ECA1_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1B2F588DD05F2A7A;
class Class_1_34B28A5D6D3E2900;
namespace RPG::Client { class HeartDialScriptInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelHeartDialConfigCollection; }
namespace RPG::GameCore { class HeartDialDialogueRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HEARTDIALMODULE_ADDDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0x15219CD0)
#define RPG_CLIENT_HEARTDIALMODULE_ADDNPCINFO_OFFSET UNITYSDK_OFFSET(0x15221290)
#define RPG_CLIENT_HEARTDIALMODULE_ADDSCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x1521A040)
#define RPG_CLIENT_HEARTDIALMODULE_COLLECTCUSTOMGROUPS_OFFSET UNITYSDK_OFFSET(0x1521E3D0)
#define RPG_CLIENT_HEARTDIALMODULE_GETCURRENTTRACEINFO_OFFSET UNITYSDK_OFFSET(0x1521B170)
#define RPG_CLIENT_HEARTDIALMODULE_GETDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0x15220860)
#define RPG_CLIENT_HEARTDIALMODULE_GETDIALOGUEROWBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1521F380)
#define RPG_CLIENT_HEARTDIALMODULE_GETFLOORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1521B0E0)
#define RPG_CLIENT_HEARTDIALMODULE_GETFULLCONDITIONDESCTEXTID_OFFSET UNITYSDK_OFFSET(0x1521FDE0)
#define RPG_CLIENT_HEARTDIALMODULE_GETFULLCONDITIONMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x152202C0)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALDIALOGUECAMERAINDEXBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1521F210)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALEMOBLACKLISTBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1521F110)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALEMOBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1521EFF0)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALMISSINGEMOBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1521F4A0)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALNPCBYSTEPANDEMO_OFFSET UNITYSDK_OFFSET(0x1521F920)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALNPCSBYSTEPTYPE_OFFSET UNITYSDK_OFFSET(0x1521F770)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALSTEPBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1521EEC0)
#define RPG_CLIENT_HEARTDIALMODULE_GETLOCKITEMDATABYNPCID_OFFSET UNITYSDK_OFFSET(0x1521FC40)
#define RPG_CLIENT_HEARTDIALMODULE_GETMISSINGITEMDATABYNPCID_OFFSET UNITYSDK_OFFSET(0x1521FAA0)
#define RPG_CLIENT_HEARTDIALMODULE_GETNEXTEMOTYPE_OFFSET UNITYSDK_OFFSET(0x15220720)
#define RPG_CLIENT_HEARTDIALMODULE_GETNPCINFOBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1521E970)
#define RPG_CLIENT_HEARTDIALMODULE_GETNPCOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x15221480)
#define RPG_CLIENT_HEARTDIALMODULE_GETNPCSCRIPTID_OFFSET UNITYSDK_OFFSET(0x1521F640)
#define RPG_CLIENT_HEARTDIALMODULE_GETPREEMOTYPE_OFFSET UNITYSDK_OFFSET(0x15220530)
#define RPG_CLIENT_HEARTDIALMODULE_GETSCRIPTCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1521B340)
#define RPG_CLIENT_HEARTDIALMODULE_GETSCRIPTINFOBYSCRIPTID_OFFSET UNITYSDK_OFFSET(0x1521D6E0)
#define RPG_CLIENT_HEARTDIALMODULE_GETTRACEINFOBYFLOORID_OFFSET UNITYSDK_OFFSET(0x15220920)
#define RPG_CLIENT_HEARTDIALMODULE_GET_HEARTDIALUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x152215A0)
#define RPG_CLIENT_HEARTDIALMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x152197A0)
#define RPG_CLIENT_HEARTDIALMODULE_ISCHANGEEMOTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x15220CC0)
#define RPG_CLIENT_HEARTDIALMODULE_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1521B8C0)
#define RPG_CLIENT_HEARTDIALMODULE_ONADVENTUREPHASEMAPCREATED_OFFSET UNITYSDK_OFFSET(0x1521A520)
#define RPG_CLIENT_HEARTDIALMODULE_ONCHANGESCRIPTEMOTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1521C9C0)
#define RPG_CLIENT_HEARTDIALMODULE_ONFINISHEMOTIONDIALOGUEPERFORMANCESCRSP_OFFSET UNITYSDK_OFFSET(0x1521CD80)
#define RPG_CLIENT_HEARTDIALMODULE_ONGETHEARTDIALINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1521BBD0)
#define RPG_CLIENT_HEARTDIALMODULE_ONHEARTDIALSCRIPTCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1521D820)
#define RPG_CLIENT_HEARTDIALMODULE_ONHEARTDIALTRACESCRIPTSCRSP_OFFSET UNITYSDK_OFFSET(0x1521D1E0)
#define RPG_CLIENT_HEARTDIALMODULE_ONNPCCREATE_OFFSET UNITYSDK_OFFSET(0x1521B4D0)
#define RPG_CLIENT_HEARTDIALMODULE_ONNPCDESTROY_OFFSET UNITYSDK_OFFSET(0x1521B6D0)
#define RPG_CLIENT_HEARTDIALMODULE_ONSUBMITEMOTIONITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x1521CC50)
#define RPG_CLIENT_HEARTDIALMODULE_SENDCHANGESCRIPTEMOTIONCSREQ_OFFSET UNITYSDK_OFFSET(0x1521E7D0)
#define RPG_CLIENT_HEARTDIALMODULE_SENDCONTROLSTEPFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x15220F10)
#define RPG_CLIENT_HEARTDIALMODULE_SENDGETHEARTDIALINFOCSREQ_OFFSET UNITYSDK_OFFSET(0x152211D0)
#define RPG_CLIENT_HEARTDIALMODULE_SENDHEARTDIALTRACESCRIPTCSREQ_OFFSET UNITYSDK_OFFSET(0x1521EE20)
#define RPG_CLIENT_HEARTDIALMODULE_SENDSUBMITEMOTIONITEMCSREQ_OFFSET UNITYSDK_OFFSET(0x1521EA50)
#define RPG_CLIENT_HEARTDIALMODULE_SET_HEARTDIALUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x152215B0)
#define RPG_CLIENT_HEARTDIALMODULE_SHOWCURRENTSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x152209A0)
#define RPG_CLIENT_HEARTDIALMODULE_SHOWSCRIPTANYCHANGEPLAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1521B9D0)
#define RPG_CLIENT_HEARTDIALMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1521A190)
#define RPG_CLIENT_HEARTDIALMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1521A3A0)
#define RPG_CLIENT_HEARTDIALMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x152215C0)
#define RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x15221850)
#define RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x152218E0)
#define RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15221940)

namespace RPG::Client
{
	inline static constexpr unsigned int HeartDialModule_TypeDefinitionIndex = 60455;

	class HeartDialModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* FloorConfigPath; // 0x0
		// static const ::System::String* ScriptConfigPath; // 0x0
		// static const ::System::String* _UNLOCK_FIRST_SCRIPT_ID; // 0x0
		// static const ::System::String* _UNLOCK_STORY_LINE_LIST_ID; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeartDialScriptInfo*>* _heartDialScriptDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::Struct_2_137AB23E3A00ECA1_1, ::Class_1_34B28A5D6D3E2900*>* _npcInfoDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_34B28A5D6D3E2900*>* _npcRuntimeIDDict; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockStoryLineList; // 0x28
		::RPG::GameCore::GameLevelHeartDialConfigCollection* _floorConfig; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1B2F588DD05F2A7A*>* _heartDialDialogueDict; // 0x38
		::System::String* _floorConfigPath; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _traceInfoDict; // 0x48
		::System::UInt32 _floorID; // 0x50
		::System::UInt32 _UnlockFirstScriptID; // 0x54
		::Enum_3_0A3761FE34514D6C_41 _HeartDialUnlockStatus_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseMapCreated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONADVENTUREPHASEMAPCREATED_OFFSET))(this, arg);
		}

		::System::Void OnNpcCreate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONNPCCREATE_OFFSET))(this, arg);
		}

		::System::Void OnNpcDestroy(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONNPCDESTROY_OFFSET))(this, arg);
		}

		::System::Void OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void OnGetHeartDialInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONGETHEARTDIALINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnChangeScriptEmotionScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONCHANGESCRIPTEMOTIONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnSubmitEmotionItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONSUBMITEMOTIONITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnFinishEmotionDialoguePerformanceScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONFINISHEMOTIONDIALOGUEPERFORMANCESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnHeartDialTraceScriptScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONHEARTDIALTRACESCRIPTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnHeartDialScriptChangeScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONHEARTDIALSCRIPTCHANGESCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CollectCustomGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_COLLECTCUSTOMGROUPS_OFFSET))(this);
		}

		::System::Void SendChangeScriptEmotionCsReq(::System::UInt32 runtimeID, ::RPG::GameCore::HeartDialEmoType emotionType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDCHANGESCRIPTEMOTIONCSREQ_OFFSET))(this, runtimeID, emotionType);
		}

		::System::Void SendSubmitEmotionItemCsReq(::System::UInt32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDSUBMITEMOTIONITEMCSREQ_OFFSET))(this, scriptID);
		}

		::System::Void SendHeartDialTraceScriptCsReq(::System::UInt32 traceID, ::System::UInt32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDHEARTDIALTRACESCRIPTCSREQ_OFFSET))(this, traceID, scriptID);
		}

		::Class_1_34B28A5D6D3E2900* GetNpcInfoByRuntimeID(::System::UInt32 runtimeID)
		{
			return ((::Class_1_34B28A5D6D3E2900*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETNPCINFOBYRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::RPG::Client::HeartDialScriptInfo* GetScriptInfoByScriptID(::System::UInt32 scriptID)
		{
			return ((::RPG::Client::HeartDialScriptInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETSCRIPTINFOBYSCRIPTID_OFFSET))(this, scriptID);
		}

		::RPG::GameCore::HeartDialStepType GetHeartDialStepByRuntimeID(::System::UInt32 runtimeID)
		{
			return ((::RPG::GameCore::HeartDialStepType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALSTEPBYRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::RPG::GameCore::HeartDialEmoType GetHeartDialEmoByRuntimeID(::System::UInt32 runtimeID)
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALEMOBYRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* GetHeartDialEmoBlackListByRuntimeID(::System::UInt32 runtimeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALEMOBLACKLISTBYRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::System::UInt32 GetHeartDialDialogueCameraIndexByRuntimeID(::System::UInt32 runtimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALDIALOGUECAMERAINDEXBYRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::RPG::GameCore::HeartDialDialogueRow* GetDialogueRowByRuntimeID(::System::UInt32 runtimeID)
		{
			return ((::RPG::GameCore::HeartDialDialogueRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETDIALOGUEROWBYRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::RPG::GameCore::HeartDialEmoType GetHeartDialMissingEmoByRuntimeID(::System::UInt32 runtimeID)
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALMISSINGEMOBYRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::System::UInt32 GetNpcScriptID(::System::UInt32 runtimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETNPCSCRIPTID_OFFSET))(this, runtimeID);
		}

		::System::Collections::Generic::List_1<::Class_1_34B28A5D6D3E2900*>* GetHeartDialNpcsByStepType(::RPG::GameCore::HeartDialStepType stepType)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_34B28A5D6D3E2900*>*(*)(::PVOID, ::RPG::GameCore::HeartDialStepType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALNPCSBYSTEPTYPE_OFFSET))(this, stepType);
		}

		::Class_1_34B28A5D6D3E2900* GetHeartDialNpcByStepAndEmo(::RPG::GameCore::HeartDialStepType step, ::RPG::GameCore::HeartDialEmoType emo)
		{
			return ((::Class_1_34B28A5D6D3E2900*(*)(::PVOID, ::RPG::GameCore::HeartDialStepType, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALNPCBYSTEPANDEMO_OFFSET))(this, step, emo);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetMissingItemDataByNpcID(::System::UInt32 runtimeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETMISSINGITEMDATABYNPCID_OFFSET))(this, runtimeID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetLockItemDataByNpcID(::System::UInt32 runtimeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETLOCKITEMDATABYNPCID_OFFSET))(this, runtimeID);
		}

		::RPG::Client::TextID GetFullConditionDescTextID(::System::UInt32 runtimeID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETFULLCONDITIONDESCTEXTID_OFFSET))(this, runtimeID);
		}

		::System::UInt32 GetFullConditionMainMissionID(::System::UInt32 runtimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETFULLCONDITIONMAINMISSIONID_OFFSET))(this, runtimeID);
		}

		::RPG::GameCore::HeartDialEmoType GetPreEmoType(::System::UInt32 runtimeID, ::RPG::GameCore::HeartDialEmoType emoType)
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETPREEMOTYPE_OFFSET))(this, runtimeID, emoType);
		}

		::RPG::GameCore::HeartDialEmoType GetNextEmoType(::System::UInt32 runtimeID, ::RPG::GameCore::HeartDialEmoType emoType)
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETNEXTEMOTYPE_OFFSET))(this, runtimeID, emoType);
		}

		::Class_1_1B2F588DD05F2A7A* GetDialogueInfo(::System::UInt32 dialogueID)
		{
			return ((::Class_1_1B2F588DD05F2A7A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETDIALOGUEINFO_OFFSET))(this, dialogueID);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetTraceInfoByFloorID(::System::UInt32 floorID)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETTRACEINFOBYFLOORID_OFFSET))(this, floorID);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetCurrentTraceInfo()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETCURRENTTRACEINFO_OFFSET))(this);
		}

		::System::Void ShowCurrentStartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SHOWCURRENTSTARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void ShowScriptAnyChangePlayPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SHOWSCRIPTANYCHANGEPLAYPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean IsChangeEmotionUnlock(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ISCHANGEEMOTIONUNLOCK_OFFSET))(this, entity);
		}

		::System::Void SendControlStepFinishEvent(::RPG::GameCore::GameEntity* dialogueNPCEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDCONTROLSTEPFINISHEVENT_OFFSET))(this, dialogueNPCEntity);
		}

		::System::Void SendGetHeartDialInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDGETHEARTDIALINFOCSREQ_OFFSET))(this);
		}

		::System::Void AddScriptInfo(::System::UInt32 scriptID, ::RPG::Client::HeartDialScriptInfo* scriptInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ADDSCRIPTINFO_OFFSET))(this, scriptID, scriptInfo);
		}

		::System::Void AddNpcInfo(::Struct_2_137AB23E3A00ECA1_1 index, ::Class_1_34B28A5D6D3E2900* npc)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1_1, ::Class_1_34B28A5D6D3E2900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ADDNPCINFO_OFFSET))(this, index, npc);
		}

		::System::Void AddDialogueInfo(::System::UInt32 dialogueID, ::Class_1_1B2F588DD05F2A7A* dialogue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_1B2F588DD05F2A7A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ADDDIALOGUEINFO_OFFSET))(this, dialogueID, dialogue);
		}

		::RPG::GameCore::LevelNPCInfoOverride* GetNpcOverrideInfo(::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETNPCOVERRIDEINFO_OFFSET))(this, npcDef);
		}

		::System::String* GetFloorConfigPath(::System::UInt32 floorID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETFLOORCONFIGPATH_OFFSET))(this, floorID);
		}

		::System::String* GetScriptConfigPath(::System::UInt32 scriptID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETSCRIPTCONFIGPATH_OFFSET))(this, scriptID);
		}

		::Enum_3_0A3761FE34514D6C_41 get_HeartDialUnlockStatus()
		{
			return ((::Enum_3_0A3761FE34514D6C_41(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GET_HEARTDIALUNLOCKSTATUS_OFFSET))(this);
		}

		::System::Void set_HeartDialUnlockStatus(::Enum_3_0A3761FE34514D6C_41 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_41))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SET_HEARTDIALUNLOCKSTATUS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
