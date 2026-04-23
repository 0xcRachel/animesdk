#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_43;
namespace RPG::Client { class GridFightConsumableItemConfig; }

#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1606A4D0)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0x1606A820)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1606A7E0)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1606A7C0)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_ITEMPREVIOUSCOUNT_OFFSET UNITYSDK_OFFSET(0x1606A800)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1606A7A0)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SETORDER_OFFSET UNITYSDK_OFFSET(0x1606A700)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SETPREVIOUSCOUNT_OFFSET UNITYSDK_OFFSET(0x1606A750)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0x1606A830)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1606A7F0)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1606A7D0)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_ITEMPREVIOUSCOUNT_OFFSET UNITYSDK_OFFSET(0x1606A810)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1606A7B0)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1606A6A0)
#define RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1606A620)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusConsumableItemData_TypeDefinitionIndex = 59275;

	class GridFightBonusConsumableItemData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightConsumableItemConfig* _ConsumableConfig_k__BackingField; // 0x10
		::System::UInt32 _ItemCount_k__BackingField; // 0x18
		::System::UInt32 _ItemPreviousCount_k__BackingField; // 0x1C
		::System::UInt32 _Order_k__BackingField; // 0x20
		::System::UInt32 _ItemID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA__CTOR_OFFSET))(this, itemID);
		}

		static ::RPG::Client::GridFightBonusConsumableItemData* CreateFromServer(::Class_1_D1E0AD3915BCCF29_43* consumable)
		{
			return ((::RPG::Client::GridFightBonusConsumableItemData*(*)(::Class_1_D1E0AD3915BCCF29_43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET))(consumable);
		}

		::System::Void Sync(::Class_1_D1E0AD3915BCCF29_43* consumable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SYNC_OFFSET))(this, consumable);
		}

		::System::Void SetOrder(::System::UInt32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SETORDER_OFFSET))(this, order);
		}

		::System::Void SetPreviousCount(::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SETPREVIOUSCOUNT_OFFSET))(this, count);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_ORDER_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemPreviousCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_ITEMPREVIOUSCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemPreviousCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_ITEMPREVIOUSCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightConsumableItemConfig* get_ConsumableConfig()
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET))(this);
		}

		::System::Void set_ConsumableConfig(::RPG::Client::GridFightConsumableItemConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET))(this, value);
		}
	};
}
