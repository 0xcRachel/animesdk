#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18B45CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_CHESTCOUNT_OFFSET UNITYSDK_OFFSET(0x66B8A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_CRYSTALCOUNT_OFFSET UNITYSDK_OFFSET(0x72B7E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_TICKETCOUNT_OFFSET UNITYSDK_OFFSET(0x72BBF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_CHESTCOUNT_OFFSET UNITYSDK_OFFSET(0x3723F90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_CRYSTALCOUNT_OFFSET UNITYSDK_OFFSET(0xFD2470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_TICKETCOUNT_OFFSET UNITYSDK_OFFSET(0xA18540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA__CHECKANDADDREWARD_OFFSET UNITYSDK_OFFSET(0x18B46420)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeRewardData_TypeDefinitionIndex = 70248;

	struct alignas(4) IdleLiveQuestTreeRewardData
	{
		::System::UInt32 _TicketCount_k__BackingField; // 0x10
		::System::UInt32 _CrystalCount_k__BackingField; // 0x14
		::System::UInt32 _ChestCount_k__BackingField; // 0x18

		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Void _CheckAndAddReward(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData& a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA__CHECKANDADDREWARD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 get_TicketCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_TICKETCOUNT_OFFSET))(this);
		}

		::System::Void set_TicketCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_TICKETCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CrystalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_CRYSTALCOUNT_OFFSET))(this);
		}

		::System::Void set_CrystalCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_CRYSTALCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChestCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_CHESTCOUNT_OFFSET))(this);
		}

		::System::Void set_ChestCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_CHESTCOUNT_OFFSET))(this, a1);
		}
	};
}
