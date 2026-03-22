#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class BrochureDiaryData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAVELBROCHUREMODULE_DATAINITED_OFFSET UNITYSDK_OFFSET(0xA106A00)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETALLDIARYDATAS_OFFSET UNITYSDK_OFFSET(0xA107110)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIARYDATA_OFFSET UNITYSDK_OFFSET(0xA1072F0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIRECTORYDIARYDATAS_OFFSET UNITYSDK_OFFSET(0xA106BD0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA107340)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETUNLOCKEDDIARYDATAS_OFFSET UNITYSDK_OFFSET(0xA106F20)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_HASSEENBROCHURE_OFFSET UNITYSDK_OFFSET(0xA109180)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWIMAGEPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA1067C0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA106780)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERIDS_OFFSET UNITYSDK_OFFSET(0xA106760)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWTEXTPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA1067A0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_SEENBROCHUREINDEX_OFFSET UNITYSDK_OFFSET(0xA109130)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_ISENTRANCESHOW_OFFSET UNITYSDK_OFFSET(0xA106A40)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_RECORDBROCHURESEEN_OFFSET UNITYSDK_OFFSET(0xA1073D0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SAFEINITREDDOT_OFFSET UNITYSDK_OFFSET(0xA105C80)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xA106920)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWIMAGEPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA1067D0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA106790)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERIDS_OFFSET UNITYSDK_OFFSET(0xA106770)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWTEXTPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA1067B0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xA1067E0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA1090E0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA1074A0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDREDDOTNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA1064D0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA109450)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA109200)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA108C60)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREDATASYNCED_OFFSET UNITYSDK_OFFSET(0xA106670)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERGOT_OFFSET UNITYSDK_OFFSET(0xA1066C0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERSEEN_OFFSET UNITYSDK_OFFSET(0xA106710)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREAPPLYPASTERLISTSCRSP_OFFSET UNITYSDK_OFFSET(0xA108670)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA1076C0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETPASTERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA108C10)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGERESETSCRSP_OFFSET UNITYSDK_OFFSET(0xA108840)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGEUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA108B30)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREREMOVEPASTERSCRSP_OFFSET UNITYSDK_OFFSET(0xA1087A0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHURESELECTMESSAGESCRSP_OFFSET UNITYSDK_OFFSET(0xA108970)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREUPDATEPASTERPOSSCRSP_OFFSET UNITYSDK_OFFSET(0xA1087F0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__REDDOTUNINIT_OFFSET UNITYSDK_OFFSET(0xA105B80)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__SAFECREATEDIARYDATA_OFFSET UNITYSDK_OFFSET(0xA106DC0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__UPDATEPASTERNEW_OFFSET UNITYSDK_OFFSET(0xA105CD0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA1094C0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA109460)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelBrochureModule_TypeDefinitionIndex = 54101;

	class TravelBrochureModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__SeenBrochureMaxIndex()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureModule_TypeDefinitionIndex)->GetStaticField(0xAE90);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _NewPasterIDs_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _DataInited; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NewImagePasterDiaryIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewPasterDiaryIDs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _NewTextPasterDiaryIDs_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BrochureDiaryData*>* _DiaryDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PasterCounts; // 0x40
		::System::UInt32 _RemoteHasSeenBrochureIndex; // 0x48
		::System::Boolean _IsRedDotPasterInited; // 0x4C
		::System::UInt32 _LocalHasSeenBrochureIndex; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__CCTOR_OFFSET))();
		}

		::System::Void _RedDotUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__REDDOTUNINIT_OFFSET))(this);
		}

		::System::Void SafeInitRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SAFEINITREDDOT_OFFSET))(this);
		}

		::System::Void _UpdatePasterNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__UPDATEPASTERNEW_OFFSET))(this);
		}

		::System::Void _AddRedDotNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDREDDOTNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRedDotTravelBrochureDataSynced(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREDATASYNCED_OFFSET))(this, obj);
		}

		::System::Void _OnRedDotTravelBrochurePasterGot(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERGOT_OFFSET))(this, obj);
		}

		::System::Void _OnRedDotTravelBrochurePasterSeen(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERSEEN_OFFSET))(this, obj);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewPasterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERIDS_OFFSET))(this);
		}

		::System::Void set_NewPasterIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewPasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewPasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERDIARYIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewTextPasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWTEXTPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewTextPasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWTEXTPASTERDIARYIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewImagePasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWIMAGEPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewImagePasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWIMAGEPASTERDIARYIDS_OFFSET))(this, value);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DataInited()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_DATAINITED_OFFSET))(this);
		}

		::System::Boolean IsEntranceShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_ISENTRANCESHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetDirectoryDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIRECTORYDIARYDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetUnlockedDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETUNLOCKEDDIARYDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetAllDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETALLDIARYDATAS_OFFSET))(this);
		}

		::RPG::Client::BrochureDiaryData* GetDiaryData(::System::UInt32 diaryID)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIARYDATA_OFFSET))(this, diaryID);
		}

		::System::UInt32 GetPasterCount(::System::UInt32 pasterID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETPASTERCOUNT_OFFSET))(this, pasterID);
		}

		::System::Void RecordBrochureSeen(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_RECORDBROCHURESEEN_OFFSET))(this, index);
		}

		::RPG::Client::BrochureDiaryData* _SafeCreateDiaryData(::System::UInt32 diaryID)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__SAFECREATEDIARYDATA_OFFSET))(this, diaryID);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnTravelBrochureGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochureApplyPasterListScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREAPPLYPASTERLISTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochureRemovePasterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREREMOVEPASTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochureUpdatePasterPosScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREUPDATEPASTERPOSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochurePageResetScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGERESETSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochureSelectMessageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHURESELECTMESSAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochurePageUnlockScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGEUNLOCKSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnTravelBrochureGetPasterScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETPASTERSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::UInt32 get_SeenBrochureIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_SEENBROCHUREINDEX_OFFSET))(this);
		}

		::System::Boolean get_HasSeenBrochure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_HASSEENBROCHURE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
