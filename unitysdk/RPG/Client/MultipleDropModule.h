#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"

class Class_1_D17272E82AE804C2_632;
namespace RPG::Client { class MultipleDropData; }
namespace RPG::Client { class MultipleDropUsedData; }
namespace RPG::Client { class ScheduleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLEDROPMODULE_GETMULTIPLEDROPDATABYID_OFFSET UNITYSDK_OFFSET(0x13740A90)
#define RPG_CLIENT_MULTIPLEDROPMODULE_GET_MULTIPLEDROPDICBYID_OFFSET UNITYSDK_OFFSET(0x13741E80)
#define RPG_CLIENT_MULTIPLEDROPMODULE_GET_MULTIPLEDROPDICBYTYPE_OFFSET UNITYSDK_OFFSET(0x13741E70)
#define RPG_CLIENT_MULTIPLEDROPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x13741640)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ADDMULTIPLEDROPDATA_OFFSET UNITYSDK_OFFSET(0x13743020)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x13741CD0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x13741BB0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__CLEARDICS_OFFSET UNITYSDK_OFFSET(0x13742150)
#define RPG_CLIENT_MULTIPLEDROPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x13743EE0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONACTIVITYREFRESH_OFFSET UNITYSDK_OFFSET(0x13743BB0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONGETMULTIPLEDROPINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x13741E90)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONGETPLAYERRETURNMULTIDROPINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x137438E0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONMULTIPLEDROPINFONOTIFY_OFFSET UNITYSDK_OFFSET(0x13742D60)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONMULTIPLEDROPINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x13743440)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONPLAYERDAILYREFRESHING_OFFSET UNITYSDK_OFFSET(0x13743C00)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x13743980)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x13743D10)
#define RPG_CLIENT_MULTIPLEDROPMODULE__REGISTERSCHEDULECALLBACK_OFFSET UNITYSDK_OFFSET(0x13741930)
#define RPG_CLIENT_MULTIPLEDROPMODULE__SYNCGAMEPLAYMULTIDROPINFO_OFFSET UNITYSDK_OFFSET(0x13742340)
#define RPG_CLIENT_MULTIPLEDROPMODULE__SYNCMULTIPLEDROPDATA_OFFSET UNITYSDK_OFFSET(0x13742260)
#define RPG_CLIENT_MULTIPLEDROPMODULE__SYNCSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x137439D0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__TRYREFRESHACTIVITYPANELREDDOT_OFFSET UNITYSDK_OFFSET(0x137427A0)
#define RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x13743F00)
#define RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x13743FF0)
#define RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x13743F90)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropModule_TypeDefinitionIndex = 61086;

	class MultipleDropModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MultipleDropUsedData*>* LastBattleMultipleDropUsedDataList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultipleDropTypeConfig, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>*>*>* _MultipleDropDicByType; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultipleDropData*>* _MultipleDropDicByID; // 0x20
		::System::Boolean _ActivityFirstStart; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::MultipleDropData* GetMultipleDropDataByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::MultipleDropData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE_GETMULTIPLEDROPDATABYID_OFFSET))(this, ID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultipleDropTypeConfig, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>*>*>* get_MultipleDropDicByType()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultipleDropTypeConfig, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE_GET_MULTIPLEDROPDICBYTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultipleDropData*>* get_MultipleDropDicByID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultipleDropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE_GET_MULTIPLEDROPDICBYID_OFFSET))(this);
		}

		::System::Void _OnGetMultipleDropInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONGETMULTIPLEDROPINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMultipleDropInfoNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONMULTIPLEDROPINFONOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMultipleDropInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONMULTIPLEDROPINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetPlayerReturnMultiDropInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONGETPLAYERRETURNMULTIDROPINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncGamePlayMultiDropInfo(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_632*>* infoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_632*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__SYNCGAMEPLAYMULTIDROPINFO_OFFSET))(this, infoList);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnActivityRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONACTIVITYREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnPlayerDailyRefreshing(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONPLAYERDAILYREFRESHING_OFFSET))(this, arg);
		}

		::System::Void _TryRefreshActivityPanelReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__TRYREFRESHACTIVITYPANELREDDOT_OFFSET))(this);
		}

		::System::Void _RegisterScheduleCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__REGISTERSCHEDULECALLBACK_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONSCHEDULESTART_OFFSET))(this, scheduleData);
		}

		::System::Void _SyncMultipleDropData(::System::UInt32 id, ::System::UInt32 remainTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__SYNCMULTIPLEDROPDATA_OFFSET))(this, id, remainTimes);
		}

		::System::Void _SyncScheduleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__SYNCSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void _ClearDics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__CLEARDICS_OFFSET))(this);
		}

		::System::Void _AddMultipleDropData(::System::UInt32 id, ::System::UInt32 remainTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ADDMULTIPLEDROPDATA_OFFSET))(this, id, remainTimes);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
