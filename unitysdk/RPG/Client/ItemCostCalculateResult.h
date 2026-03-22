#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemCostState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GETACQUIREDDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x94F6080)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GETCOMPOSEANDCONVERTDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x94F5E30)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTIBLEITEMCONSUMEDQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5DC0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTIBLEITEMID_OFFSET UNITYSDK_OFFSET(0x94F5DA0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5DE0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMCOMPOSECOST_OFFSET UNITYSDK_OFFSET(0x94F5D60)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMCOMPOSEQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5D80)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x94F5D00)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_REQUIREQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5D20)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x94F5D40)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_TARGETQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5E00)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTIBLEITEMCONSUMEDQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5DD0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTIBLEITEMID_OFFSET UNITYSDK_OFFSET(0x94F5DB0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5DF0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMCOMPOSECOST_OFFSET UNITYSDK_OFFSET(0x94F5D70)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMCOMPOSEQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5D90)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x94F5D10)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_REQUIREQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5D30)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x94F5D50)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_TARGETQUANTITY_OFFSET UNITYSDK_OFFSET(0x94F5E10)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x94F5E20)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculateResult_TypeDefinitionIndex = 52224;

	class ItemCostCalculateResult : public ::System::Object
	{
	public:
		::RPG::Client::ComposeItemCost* _ItemComposeCost_k__BackingField; // 0x10
		::System::UInt32 _ItemComposeQuantity_k__BackingField; // 0x18
		::System::UInt32 _RequireQuantity_k__BackingField; // 0x1C
		::System::UInt32 _TargetQuantity_k__BackingField; // 0x20
		::System::UInt32 _ConvertQuantity_k__BackingField; // 0x24
		::System::UInt32 _ConvertibleItemID_k__BackingField; // 0x28
		::RPG::Client::ItemCostState _State_k__BackingField; // 0x2C
		::System::UInt32 _ConvertibleItemConsumedQuantity_k__BackingField; // 0x30
		::System::UInt32 _ItemID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 itemID, ::System::UInt32 requireQuantity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT__CTOR_OFFSET))(this, itemID, requireQuantity);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_RequireQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_REQUIREQUANTITY_OFFSET))(this);
		}

		::System::Void set_RequireQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_REQUIREQUANTITY_OFFSET))(this, value);
		}

		::RPG::Client::ItemCostState get_State()
		{
			return ((::RPG::Client::ItemCostState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ItemCostState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemCostState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_STATE_OFFSET))(this, value);
		}

		::RPG::Client::ComposeItemCost* get_ItemComposeCost()
		{
			return ((::RPG::Client::ComposeItemCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMCOMPOSECOST_OFFSET))(this);
		}

		::System::Void set_ItemComposeCost(::RPG::Client::ComposeItemCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMCOMPOSECOST_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemComposeQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMCOMPOSEQUANTITY_OFFSET))(this);
		}

		::System::Void set_ItemComposeQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMCOMPOSEQUANTITY_OFFSET))(this, value);
		}

		::System::UInt32 get_ConvertibleItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTIBLEITEMID_OFFSET))(this);
		}

		::System::Void set_ConvertibleItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTIBLEITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_ConvertibleItemConsumedQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTIBLEITEMCONSUMEDQUANTITY_OFFSET))(this);
		}

		::System::Void set_ConvertibleItemConsumedQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTIBLEITEMCONSUMEDQUANTITY_OFFSET))(this, value);
		}

		::System::UInt32 get_ConvertQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTQUANTITY_OFFSET))(this);
		}

		::System::Void set_ConvertQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTQUANTITY_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_TARGETQUANTITY_OFFSET))(this);
		}

		::System::Void set_TargetQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_TARGETQUANTITY_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetComposeAndConvertDisplayDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GETCOMPOSEANDCONVERTDISPLAYDATAS_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* GetAcquiredDisplayData()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GETACQUIREDDISPLAYDATA_OFFSET))(this);
		}
	};
}
