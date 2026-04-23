#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_D17272E82AE804C2_361;
class Class_1_D1E0AD3915BCCF29_43;
namespace RPG::Client { class GridFightConsumableItemConfig; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_1_OFFSET UNITYSDK_OFFSET(0x1803B940)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1803C260)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0x1803E230)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ISTIMED_OFFSET UNITYSDK_OFFSET(0x1803E250)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1803E210)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1803E1F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0x1803E240)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1803E220)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1803E200)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1803B860)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1803C180)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1803E060)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__ISTIMEDCONSUMABLE_OFFSET UNITYSDK_OFFSET(0x1803E0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableItemData_TypeDefinitionIndex = 59752;

	class GridFightConsumableItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightConsumableItemConfig* _ConsumableConfig_k__BackingField; // 0x18
		::System::UInt32 _ItemID_k__BackingField; // 0x20
		::System::UInt32 _ItemCount_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__CTOR_OFFSET))(this, itemID);
		}

		static ::RPG::Client::GridFightConsumableItemData* CreateFromServer(::Class_1_D1E0AD3915BCCF29_43* consumable)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::Class_1_D1E0AD3915BCCF29_43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET))(consumable);
		}

		static ::RPG::Client::GridFightConsumableItemData* CreateFromServer_1(::Class_1_D17272E82AE804C2_361* consumable)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::Class_1_D17272E82AE804C2_361*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_1_OFFSET))(consumable);
		}

		::System::Void Sync(::Class_1_D1E0AD3915BCCF29_43* consumable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_OFFSET))(this, consumable);
		}

		::System::Void Sync_1(::Class_1_D17272E82AE804C2_361* consumable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_361*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_1_OFFSET))(this, consumable);
		}

		::System::Boolean _IsTimedConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__ISTIMEDCONSUMABLE_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightConsumableItemConfig* get_ConsumableConfig()
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET))(this);
		}

		::System::Void set_ConsumableConfig(::RPG::Client::GridFightConsumableItemConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_IsTimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ISTIMED_OFFSET))(this);
		}
	};
}
