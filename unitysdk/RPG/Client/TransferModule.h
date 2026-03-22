#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_BDE6C85312507530;
namespace RPG::Client { class TransferExtraInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRANSFERMODULE_ADDTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xA0FD240)
#define RPG_CLIENT_TRANSFERMODULE_CANTRANSFER_OFFSET UNITYSDK_OFFSET(0xA0FCFC0)
#define RPG_CLIENT_TRANSFERMODULE_FETCHTELEPORTS_OFFSET UNITYSDK_OFFSET(0xA0FCC30)
#define RPG_CLIENT_TRANSFERMODULE_GETMAPENTRYUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xA0FC680)
#define RPG_CLIENT_TRANSFERMODULE_GET_WAITINGPOSTTELEPORTUI_OFFSET UNITYSDK_OFFSET(0xA0FE1B0)
#define RPG_CLIENT_TRANSFERMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA0FC400)
#define RPG_CLIENT_TRANSFERMODULE_ISENTRYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA0FCF10)
#define RPG_CLIENT_TRANSFERMODULE_ISINCURRENTSCENEBYDIMENSION_OFFSET UNITYSDK_OFFSET(0xA0FC8E0)
#define RPG_CLIENT_TRANSFERMODULE_ISINCURRENTSCENEBYFLOORANDDIMENSION_OFFSET UNITYSDK_OFFSET(0xA0FCBD0)
#define RPG_CLIENT_TRANSFERMODULE_ISTELEPORTSHORTCUT_OFFSET UNITYSDK_OFFSET(0xA0FD130)
#define RPG_CLIENT_TRANSFERMODULE_ISTELEPORTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA0FD0C0)
#define RPG_CLIENT_TRANSFERMODULE_PREPAREENTRYMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA0FC760)
#define RPG_CLIENT_TRANSFERMODULE_SETTRANSFERAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA0FD370)
#define RPG_CLIENT_TRANSFERMODULE_SETTRANSFERFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0FD320)
#define RPG_CLIENT_TRANSFERMODULE_SET_WAITINGPOSTTELEPORTUI_OFFSET UNITYSDK_OFFSET(0xA0FE1C0)
#define RPG_CLIENT_TRANSFERMODULE_TRANSFER_OFFSET UNITYSDK_OFFSET(0xA0F9420)
#define RPG_CLIENT_TRANSFERMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA0FD3C0)
#define RPG_CLIENT_TRANSFERMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0FDFF0)
#define RPG_CLIENT_TRANSFERMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0FD5B0)
#define RPG_CLIENT_TRANSFERMODULE__ADDTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xA0FD2A0)
#define RPG_CLIENT_TRANSFERMODULE__BUILDMAPENTRIES_OFFSET UNITYSDK_OFFSET(0xA0FC490)
#define RPG_CLIENT_TRANSFERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0FE1D0)
#define RPG_CLIENT_TRANSFERMODULE__ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xA0FC9C0)
#define RPG_CLIENT_TRANSFERMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xA0FE110)
#define RPG_CLIENT_TRANSFERMODULE__ONEMITTRANSFERFINISHEVENT_OFFSET UNITYSDK_OFFSET(0xA0FE160)
#define RPG_CLIENT_TRANSFERMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0xA0FDDE0)
#define RPG_CLIENT_TRANSFERMODULE__ONGETSCENEMAPINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA0FDA70)
#define RPG_CLIENT_TRANSFERMODULE__ONGETUNLOCKTELEPORTSCRSP_OFFSET UNITYSDK_OFFSET(0xA0FD7F0)
#define RPG_CLIENT_TRANSFERMODULE__ONUNLOCKTELEPORTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA0FD6D0)
#define RPG_CLIENT_TRANSFERMODULE__TRYNOTIFYTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xA0FD420)
#define RPG_CLIENT_TRANSFERMODULE__UPDATETELEPORTS_1_OFFSET UNITYSDK_OFFSET(0xA0FD760)
#define RPG_CLIENT_TRANSFERMODULE__UPDATETELEPORTS_OFFSET UNITYSDK_OFFSET(0xA0FD8C0)
#define RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA0FE310)
#define RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0FE400)
#define RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0FE3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferModule_TypeDefinitionIndex = 54096;

	class TransferModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _CURRENT_LINE = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 _CURRENT_CONTENT = 0xFFFFFFFF; // 0x0
		::System::Action* _AutoShowAction; // 0x10
		::System::String* _MobilePhonePageName; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedTeleportIDs; // 0x20
		::System::Action* _TransferFinishedAction; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BDE6C85312507530*>* _EntryID2EntryUnlockDatas; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _TeleportIDsToNotify; // 0x38
		::System::Boolean _WaitingPostTeleportUI_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_INIT_OFFSET))(this);
		}

		::Class_1_BDE6C85312507530* GetMapEntryUnlockData(::System::UInt32 entryID)
		{
			return ((::Class_1_BDE6C85312507530*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_GETMAPENTRYUNLOCKDATA_OFFSET))(this, entryID);
		}

		::System::Void PrepareEntryMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_PREPAREENTRYMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean IsInCurrentSceneByDimension(::System::UInt32 entranceID, ::System::UInt32 dimensionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ISINCURRENTSCENEBYDIMENSION_OFFSET))(this, entranceID, dimensionID);
		}

		::System::Boolean IsInCurrentSceneByFloorAndDimension(::System::UInt32 floorID, ::System::UInt32 dimensionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ISINCURRENTSCENEBYFLOORANDDIMENSION_OFFSET))(this, floorID, dimensionID);
		}

		::System::Void FetchTeleports(::System::Collections::Generic::List_1<::System::UInt32>* entranceIDs, ::System::Boolean forceFetch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_FETCHTELEPORTS_OFFSET))(this, entranceIDs, forceFetch);
		}

		::System::Boolean CanTransfer(::System::UInt32 mappingInfoID, ::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_CANTRANSFER_OFFSET))(this, mappingInfoID, entranceID);
		}

		::System::Boolean IsEntryUnlocked(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ISENTRYUNLOCKED_OFFSET))(this, entranceID);
		}

		::System::Boolean IsTeleportUnlocked(::System::UInt32 teleportID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ISTELEPORTUNLOCKED_OFFSET))(this, teleportID);
		}

		::System::Boolean IsTeleportShortCut(::System::UInt32 entranceID, ::System::UInt32 teleportID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ISTELEPORTSHORTCUT_OFFSET))(this, entranceID, teleportID);
		}

		::System::Void Transfer(::System::UInt32 entranceID, ::System::UInt32 mappingInfoID, ::System::UInt32 storyLineID, ::System::UInt32 contentID, ::RPG::Client::TransferExtraInfo* extraInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::TransferExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_TRANSFER_OFFSET))(this, entranceID, mappingInfoID, storyLineID, contentID, extraInfo);
		}

		::System::Void AddTransferFinishedEvent(::System::UInt32 mappingInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ADDTRANSFERFINISHEDEVENT_OFFSET))(this, mappingInfoID);
		}

		::System::Void SetTransferFinishedCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_SETTRANSFERFINISHEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetTransferAutoShow(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_SETTRANSFERAUTOSHOW_OFFSET))(this, action);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _BuildMapEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__BUILDMAPENTRIES_OFFSET))(this);
		}

		::System::Boolean _IsInCurrentScene(::System::UInt32 floorID, ::System::UInt32 dimensionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ISINCURRENTSCENE_OFFSET))(this, floorID, dimensionID);
		}

		::System::Void _AddTransferFinishedEvent(::System::UInt32 teleportID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ADDTRANSFERFINISHEDEVENT_OFFSET))(this, teleportID);
		}

		::System::Void _TryNotifyTransferFinishedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__TRYNOTIFYTRANSFERFINISHEDEVENT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUnlockTeleportNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONUNLOCKTELEPORTNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnGetUnlockTeleportScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONGETUNLOCKTELEPORTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetSceneMapInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONGETSCENEMAPINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONENTERSCENESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean _UpdateTeleports(::System::Collections::Generic::List_1<::System::UInt32>* unlockedIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__UPDATETELEPORTS_OFFSET))(this, unlockedIDs);
		}

		::System::Boolean _UpdateTeleports_1(::System::UInt32 unlockedID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__UPDATETELEPORTS_1_OFFSET))(this, unlockedID);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnEmitTransferFinishEvent(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONEMITTRANSFERFINISHEVENT_OFFSET))(this, arg);
		}

		::System::Boolean get_WaitingPostTeleportUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_GET_WAITINGPOSTTELEPORTUI_OFFSET))(this);
		}

		::System::Void set_WaitingPostTeleportUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_SET_WAITINGPOSTTELEPORTUI_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
