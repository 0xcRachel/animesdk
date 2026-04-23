#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_20;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x17357B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x17357CF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x17357D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x17357CD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x17357D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x17357D20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x17357CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17357CC0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonAssistRewardHistoryData_TypeDefinitionIndex = 69256;

	class IdleLiveDungeonAssistRewardHistoryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardList_k__BackingField; // 0x10
		::System::UInt32 _UID_k__BackingField; // 0x18
		::System::UInt32 _Count_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData* Create(::Class_1_21DCD4640D389503_20* history)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*(*)(::Class_1_21DCD4640D389503_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_CREATE_OFFSET))(history);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_SET_COUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_GET_REWARDLIST_OFFSET))(this);
		}

		::System::Void set_RewardList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDHISTORYDATA_SET_REWARDLIST_OFFSET))(this, value);
		}
	};
}
