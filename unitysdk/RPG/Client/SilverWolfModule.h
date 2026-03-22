#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class SilverWolfGroupData; }
namespace RPG::GameCore { class SilverWolfCollectionRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SILVERWOLFMODULE_GETAVAILREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x9F79EB0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTEDNUM_OFFSET UNITYSDK_OFFSET(0x9F793F0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTIONROWS_OFFSET UNITYSDK_OFFSET(0x9F79280)
#define RPG_CLIENT_SILVERWOLFMODULE_GETNEWGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x9F77670)
#define RPG_CLIENT_SILVERWOLFMODULE_GETNEWTABGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x9F76BF0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETREWARDAVAILGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9F77250)
#define RPG_CLIENT_SILVERWOLFMODULE_GETSILVERWOLFGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9F78DB0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETSORTEDSILVERWOLFGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x9F790C0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ACTIVITYOPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F77AB0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_COMPANIONMISSIONNEWFINISH_OFFSET UNITYSDK_OFFSET(0x9F7C2C0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_DECALFUNCUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x9F7BEE0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_DECALUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F7B6B0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ISDECALFUNCUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F7C250)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ONLYSHOPSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F7C0D0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_SILVERWOLFGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x9F7BCE0)
#define RPG_CLIENT_SILVERWOLFMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9F7A650)
#define RPG_CLIENT_SILVERWOLFMODULE_SHOWCOMPANIONBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x9F77400)
#define RPG_CLIENT_SILVERWOLFMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F7ABE0)
#define RPG_CLIENT_SILVERWOLFMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F7AB70)
#define RPG_CLIENT_SILVERWOLFMODULE__CHECKCOMPANIONMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x9F7B800)
#define RPG_CLIENT_SILVERWOLFMODULE__CHECKDECALUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F7B4B0)
#define RPG_CLIENT_SILVERWOLFMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F7C2D0)
#define RPG_CLIENT_SILVERWOLFMODULE__GETOPENGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9F79AF0)
#define RPG_CLIENT_SILVERWOLFMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9F78ED0)
#define RPG_CLIENT_SILVERWOLFMODULE__INITPREMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x9F7A970)
#define RPG_CLIENT_SILVERWOLFMODULE__INITUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x9F7A7C0)
#define RPG_CLIENT_SILVERWOLFMODULE__ISDECALUNLOCKMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x9F7BD40)
#define RPG_CLIENT_SILVERWOLFMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F79570)
#define RPG_CLIENT_SILVERWOLFMODULE__ONNEWDECALDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x9F7BAC0)
#define RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEEND_OFFSET UNITYSDK_OFFSET(0x9F7BA60)
#define RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEREFRESH_OFFSET UNITYSDK_OFFSET(0x9F7B930)
#define RPG_CLIENT_SILVERWOLFMODULE__ONTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x9F7B8C0)
#define RPG_CLIENT_SILVERWOLFMODULE__PREPARECONDITIONMISSION_OFFSET UNITYSDK_OFFSET(0x9F7AFE0)
#define RPG_CLIENT_SILVERWOLFMODULE__PREPARETASKMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9F7AED0)
#define RPG_CLIENT_SILVERWOLFMODULE__REFRESHPREMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x9F7B290)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9F7C2F0)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F7C3E0)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F7C380)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfModule_TypeDefinitionIndex = 53907;

	class SilverWolfModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ScheduleData* _DecalUnlockSchedule; // 0x10
		::RPG::Client::ScheduleData* _ActivityOpenSchedule; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>* _DecalCollectionRows; // 0x20
		::System::String* TutorialKeyAfterTrans; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* _SilverWolfGroupDatas; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* PremissionList; // 0x38
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0x40
		::RPG::Client::ScheduleData* _OnlyShopSchedule; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _DecalFuncUnlockMissionList; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockMissionList; // 0x58
		::System::Boolean _CompanionMissionNewFinish; // 0x60
		::System::UInt32 _CompanionMissionID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::SilverWolfGroupData* GetSilverWolfGroupData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::SilverWolfGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETSILVERWOLFGROUPDATA_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* GetSortedSilverWolfGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETSORTEDSILVERWOLFGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>* GetDecalCollectionRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTIONROWS_OFFSET))(this);
		}

		::System::UInt32 GetDecalCollectedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTEDNUM_OFFSET))(this);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewGroupIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETNEWGROUPIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* GetNewTabGroupIDList()
		{
			return ((::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETNEWTABGROUPIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailRewardQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETAVAILREWARDQUESTIDLIST_OFFSET))(this);
		}

		::System::Boolean ShowCompanionBtnReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_SHOWCOMPANIONBTNREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* GetRewardAvailGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETREWARDAVAILGROUPDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _InitUnlockMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITUNLOCKMISSIONLIST_OFFSET))(this);
		}

		::System::Void _InitPremissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITPREMISSIONLIST_OFFSET))(this);
		}

		::System::Void _PrepareTaskMainMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__PREPARETASKMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Void _InitGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITGROUPDATA_OFFSET))(this);
		}

		::System::Void _RefreshPremissionState(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__REFRESHPREMISSIONSTATE_OFFSET))(this, arg);
		}

		::System::Void _CheckDecalUnlock(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__CHECKDECALUNLOCK_OFFSET))(this, arg);
		}

		::System::Void _CheckCompanionMissionFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__CHECKCOMPANIONMISSIONFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnTransferFinishedEvent(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONTRANSFERFINISHEDEVENT_OFFSET))(this, arg);
		}

		::System::Void _OnScheduleRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnScheduleEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEEND_OFFSET))(this, arg);
		}

		::System::Void _OnNewDecalDialogExit(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONNEWDECALDIALOGEXIT_OFFSET))(this, arg);
		}

		::System::Void _PrepareConditionMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__PREPARECONDITIONMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* _GetOpenGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__GETOPENGROUPDATA_OFFSET))(this);
		}

		::System::Boolean _IsDecalUnlockMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ISDECALUNLOCKMISSIONFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* get_SilverWolfGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_SILVERWOLFGROUPDATAS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_OnlyShopSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ONLYSHOPSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ActivityOpenSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ACTIVITYOPENSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_DecalUnlockSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_DECALUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsDecalFuncUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ISDECALFUNCUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_CompanionMissionNewFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_COMPANIONMISSIONNEWFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DecalFuncUnlockMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_DECALFUNCUNLOCKMISSIONLIST_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
