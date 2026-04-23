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

#define RPG_CLIENT_SILVERWOLFMODULE_GETAVAILREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x153542B0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTEDNUM_OFFSET UNITYSDK_OFFSET(0x15353820)
#define RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTIONROWS_OFFSET UNITYSDK_OFFSET(0x153536B0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETNEWGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x15351AB0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETNEWTABGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x15351030)
#define RPG_CLIENT_SILVERWOLFMODULE_GETREWARDAVAILGROUPDATA_OFFSET UNITYSDK_OFFSET(0x15351690)
#define RPG_CLIENT_SILVERWOLFMODULE_GETSILVERWOLFGROUPDATA_OFFSET UNITYSDK_OFFSET(0x153531E0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETSORTEDSILVERWOLFGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x153534F0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ACTIVITYOPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x15351EF0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_COMPANIONMISSIONNEWFINISH_OFFSET UNITYSDK_OFFSET(0x153566C0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_DECALFUNCUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x153562E0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_DECALUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x15355AB0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ISDECALFUNCUNLOCK_OFFSET UNITYSDK_OFFSET(0x15356650)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ONLYSHOPSCHEDULE_OFFSET UNITYSDK_OFFSET(0x153564D0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_SILVERWOLFGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x153560E0)
#define RPG_CLIENT_SILVERWOLFMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x15354A50)
#define RPG_CLIENT_SILVERWOLFMODULE_SHOWCOMPANIONBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x15351840)
#define RPG_CLIENT_SILVERWOLFMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15354FE0)
#define RPG_CLIENT_SILVERWOLFMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15354F70)
#define RPG_CLIENT_SILVERWOLFMODULE__CHECKCOMPANIONMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x15355C00)
#define RPG_CLIENT_SILVERWOLFMODULE__CHECKDECALUNLOCK_OFFSET UNITYSDK_OFFSET(0x153558B0)
#define RPG_CLIENT_SILVERWOLFMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x153566D0)
#define RPG_CLIENT_SILVERWOLFMODULE__GETOPENGROUPDATA_OFFSET UNITYSDK_OFFSET(0x15353EF0)
#define RPG_CLIENT_SILVERWOLFMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0x15353300)
#define RPG_CLIENT_SILVERWOLFMODULE__INITPREMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x15354D70)
#define RPG_CLIENT_SILVERWOLFMODULE__INITUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x15354BC0)
#define RPG_CLIENT_SILVERWOLFMODULE__ISDECALUNLOCKMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x15356140)
#define RPG_CLIENT_SILVERWOLFMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x153539A0)
#define RPG_CLIENT_SILVERWOLFMODULE__ONNEWDECALDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x15355EC0)
#define RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEEND_OFFSET UNITYSDK_OFFSET(0x15355E60)
#define RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEREFRESH_OFFSET UNITYSDK_OFFSET(0x15355D30)
#define RPG_CLIENT_SILVERWOLFMODULE__ONTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x15355CC0)
#define RPG_CLIENT_SILVERWOLFMODULE__PREPARECONDITIONMISSION_OFFSET UNITYSDK_OFFSET(0x153553E0)
#define RPG_CLIENT_SILVERWOLFMODULE__PREPARETASKMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x153552D0)
#define RPG_CLIENT_SILVERWOLFMODULE__REFRESHPREMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x15355690)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x153566F0)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x153567E0)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15356780)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfModule_TypeDefinitionIndex = 62652;

	class SilverWolfModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0x10
		::RPG::Client::ScheduleData* _OnlyShopSchedule; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>* _DecalCollectionRows; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* PremissionList; // 0x28
		::RPG::Client::ScheduleData* _ActivityOpenSchedule; // 0x30
		::System::String* TutorialKeyAfterTrans; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* _SilverWolfGroupDatas; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockMissionList; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _DecalFuncUnlockMissionList; // 0x50
		::RPG::Client::ScheduleData* _DecalUnlockSchedule; // 0x58
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
