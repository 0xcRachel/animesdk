#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class BattlePassQuestData; }
namespace RPG::Client { class BattlePassRewardPointData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEPASSFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x8DC5770)
#define RPG_CLIENT_BATTLEPASSFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DC5670)
#define RPG_CLIENT_BATTLEPASSFILTER_GET_ACTIVITYQUESTAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x8DC5530)
#define RPG_CLIENT_BATTLEPASSFILTER_GET_WEEKLYQUESTAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x8DC5510)
#define RPG_CLIENT_BATTLEPASSFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x8DC5550)
#define RPG_CLIENT_BATTLEPASSFILTER_SET_ACTIVITYQUESTAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x8DC5540)
#define RPG_CLIENT_BATTLEPASSFILTER_SET_WEEKLYQUESTAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x8DC5520)
#define RPG_CLIENT_BATTLEPASSFILTER__ADDAVAILABLEQUESTIDS_OFFSET UNITYSDK_OFFSET(0x8DC6BD0)
#define RPG_CLIENT_BATTLEPASSFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC7040)
#define RPG_CLIENT_BATTLEPASSFILTER__NEEDREDDOT_OFFSET UNITYSDK_OFFSET(0x8DC6940)
#define RPG_CLIENT_BATTLEPASSFILTER__ONBATTLEPASSCHANGED_OFFSET UNITYSDK_OFFSET(0x8DC5B50)
#define RPG_CLIENT_BATTLEPASSFILTER__ONQUESTREFRESH_OFFSET UNITYSDK_OFFSET(0x8DC63D0)
#define RPG_CLIENT_BATTLEPASSFILTER__ONREFRESH_OFFSET UNITYSDK_OFFSET(0x8DC68B0)
#define RPG_CLIENT_BATTLEPASSFILTER__ONREWARDREFRESH_OFFSET UNITYSDK_OFFSET(0x8DC5BE0)
#define RPG_CLIENT_BATTLEPASSFILTER__UPDATEAVAILABLEQUESTREDDOT_OFFSET UNITYSDK_OFFSET(0x8DC6430)
#define RPG_CLIENT_BATTLEPASSFILTER__UPDATENEWQUESTREDDOT_OFFSET UNITYSDK_OFFSET(0x8DC6560)
#define RPG_CLIENT_BATTLEPASSFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x8DC5610)
#define RPG_CLIENT_BATTLEPASSFILTER__UPDATEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x8DC5C30)
#define RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x8DC7230)
#define RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DC71B0)
#define RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8DC7130)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassFilter_TypeDefinitionIndex = 53236;

	class BattlePassFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewActivityQuestIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* AvailableQuestIDs; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* AvailableRewardKeys; // 0x20
		::System::UInt32 _WeeklyQuestAvailableCount_k__BackingField; // 0x28
		::System::UInt32 _ActivityQuestAvailableCount_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WeeklyQuestAvailableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_GET_WEEKLYQUESTAVAILABLECOUNT_OFFSET))(this);
		}

		::System::Void set_WeeklyQuestAvailableCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_SET_WEEKLYQUESTAVAILABLECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivityQuestAvailableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_GET_ACTIVITYQUESTAVAILABLECOUNT_OFFSET))(this);
		}

		::System::Void set_ActivityQuestAvailableCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_SET_ACTIVITYQUESTAVAILABLECOUNT_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBattlePassChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ONBATTLEPASSCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnRewardRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ONREWARDREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnQuestRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ONQUESTREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ONREFRESH_OFFSET))(this, arg);
		}

		::System::Void _UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__UPDATEREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateAvailableQuestRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__UPDATEAVAILABLEQUESTREDDOT_OFFSET))(this);
		}

		::System::UInt32 _AddAvailableQuestIDs(::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* datas)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ADDAVAILABLEQUESTIDS_OFFSET))(this, datas);
		}

		::System::Void _UpdateNewQuestRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__UPDATENEWQUESTREDDOT_OFFSET))(this);
		}

		::System::Boolean _NeedRedDot(::RPG::Client::BattlePassRewardPointData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattlePassRewardPointData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__NEEDREDDOT_OFFSET))(this, data);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
