#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BenefitActivityState.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_963E317C37FB5E9A;
class Class_1_E577B5580A99D425_2;
class Class_1_F91AD0C5A85E4AFA_7;
namespace Proto { class ItemList; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_ASSESACTIVITYSTATEBYTIME_OFFSET UNITYSDK_OFFSET(0x171C2A00)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x171C22C0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETLUCKYKOIINFOLIST_OFFSET UNITYSDK_OFFSET(0x171C2390)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETREWARDLISTBYREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x171C26A0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETREWARDREVEALDATETIME_OFFSET UNITYSDK_OFFSET(0x171C2FF0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETSPECIALREWARDNUM_OFFSET UNITYSDK_OFFSET(0x171C3260)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLCHOOSEEND_OFFSET UNITYSDK_OFFSET(0x171C2E20)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLNEXTTIMEWINDOW_OFFSET UNITYSDK_OFFSET(0x171C2BB0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLREWARDREVEAL_OFFSET UNITYSDK_OFFSET(0x171C3090)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GET_DATE_OFFSET UNITYSDK_OFFSET(0x171C32B0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GET_STATE_OFFSET UNITYSDK_OFFSET(0x171C32D0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_ISVALIDCHOOSETIME_OFFSET UNITYSDK_OFFSET(0x171C2D10)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_SET_DATE_OFFSET UNITYSDK_OFFSET(0x171C32C0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_SET_STATE_OFFSET UNITYSDK_OFFSET(0x171C32E0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x171C21E0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO__INITDAILYINFO_OFFSET UNITYSDK_OFFSET(0x171C2250)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitDailyInfo_TypeDefinitionIndex = 56614;

	class ActivityBenefitDailyInfo : public ::System::Object
	{
	public:
		::Class_1_E577B5580A99D425_2* _Config; // 0x10
		::RPG::Client::BenefitActivityState _State_k__BackingField; // 0x18
		::System::UInt32 _Date_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_963E317C37FB5E9A* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO__CTOR_OFFSET))(this, info);
		}

		static ::RPG::Client::ActivityBenefitDailyInfo* Create(::Class_1_963E317C37FB5E9A* info)
		{
			return ((::RPG::Client::ActivityBenefitDailyInfo*(*)(::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_CREATE_OFFSET))(info);
		}

		::System::Collections::Generic::List_1<::Class_1_F91AD0C5A85E4AFA_7*>* GetLuckyKoiInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F91AD0C5A85E4AFA_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETLUCKYKOIINFOLIST_OFFSET))(this);
		}

		::Proto::ItemList* GetRewardListByRewardLevel(::System::UInt32 level)
		{
			return ((::Proto::ItemList*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETREWARDLISTBYREWARDLEVEL_OFFSET))(this, level);
		}

		::System::Void AssesActivityStateByTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_ASSESACTIVITYSTATEBYTIME_OFFSET))(this);
		}

		::System::Int64 GetTimeTillNextTimeWindow()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLNEXTTIMEWINDOW_OFFSET))(this);
		}

		::System::Boolean IsValidChooseTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_ISVALIDCHOOSETIME_OFFSET))(this);
		}

		::System::TimeSpan GetTimeTillChooseEnd()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLCHOOSEEND_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetRewardRevealDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETREWARDREVEALDATETIME_OFFSET))(this);
		}

		::System::TimeSpan GetTimeTillRewardReveal()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLREWARDREVEAL_OFFSET))(this);
		}

		::System::UInt32 GetSpecialRewardNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETSPECIALREWARDNUM_OFFSET))(this);
		}

		::System::Void _InitDailyInfo(::Class_1_963E317C37FB5E9A* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO__INITDAILYINFO_OFFSET))(this, info);
		}

		::System::UInt32 get_Date()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_SET_DATE_OFFSET))(this, value);
		}

		::RPG::Client::BenefitActivityState get_State()
		{
			return ((::RPG::Client::BenefitActivityState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::BenefitActivityState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BenefitActivityState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_SET_STATE_OFFSET))(this, value);
		}
	};
}
