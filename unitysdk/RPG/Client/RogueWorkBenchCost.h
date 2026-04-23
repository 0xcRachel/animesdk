#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHCOST_GETCOSTCONFIGID_OFFSET UNITYSDK_OFFSET(0x15BA5260)
#define RPG_CLIENT_ROGUEWORKBENCHCOST_GETCOSTNUM_OFFSET UNITYSDK_OFFSET(0x15BA51F0)
#define RPG_CLIENT_ROGUEWORKBENCHCOST_GET_COSTCOUNT_OFFSET UNITYSDK_OFFSET(0x15BA52F0)
#define RPG_CLIENT_ROGUEWORKBENCHCOST_GET_FREECOUNT_OFFSET UNITYSDK_OFFSET(0x15BA52D0)
#define RPG_CLIENT_ROGUEWORKBENCHCOST_REFRESH_1_OFFSET UNITYSDK_OFFSET(0x15BA4660)
#define RPG_CLIENT_ROGUEWORKBENCHCOST_REFRESH_OFFSET UNITYSDK_OFFSET(0x15BA5160)
#define RPG_CLIENT_ROGUEWORKBENCHCOST_SET_COSTCOUNT_OFFSET UNITYSDK_OFFSET(0x15BA5300)
#define RPG_CLIENT_ROGUEWORKBENCHCOST_SET_FREECOUNT_OFFSET UNITYSDK_OFFSET(0x15BA52E0)
#define RPG_CLIENT_ROGUEWORKBENCHCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA4500)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchCost_TypeDefinitionIndex = 62042;

	class RogueWorkBenchCost : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _CostList; // 0x10
		::System::UInt32 _FreeCount_k__BackingField; // 0x18
		::System::Int32 _CostCount_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 freeCount, ::System::Int32 costCount, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* costList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST__CTOR_OFFSET))(this, freeCount, costCount, costList);
		}

		::System::Void Refresh(::System::UInt32 freeCount, ::System::Int32 costCount, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* costList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST_REFRESH_OFFSET))(this, freeCount, costCount, costList);
		}

		::System::Void Refresh_1(::RPG::Client::RogueWorkBenchCost* costData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST_REFRESH_1_OFFSET))(this, costData);
		}

		::System::UInt32 GetCostNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST_GETCOSTNUM_OFFSET))(this);
		}

		::System::UInt32 GetCostConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST_GETCOSTCONFIGID_OFFSET))(this);
		}

		::System::UInt32 get_FreeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST_GET_FREECOUNT_OFFSET))(this);
		}

		::System::Void set_FreeCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST_SET_FREECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_CostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST_GET_COSTCOUNT_OFFSET))(this);
		}

		::System::Void set_CostCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOST_SET_COSTCOUNT_OFFSET))(this, value);
		}
	};
}
