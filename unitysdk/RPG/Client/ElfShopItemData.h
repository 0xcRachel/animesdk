#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_22;
namespace RPG::GameCore { class RestaurantShopItemRow; }

#define RPG_CLIENT_ELFSHOPITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9155730)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_AVAILABLEREMAINDAYS_OFFSET UNITYSDK_OFFSET(0x9156880)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x91565D0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ISDISCOUNT_OFFSET UNITYSDK_OFFSET(0x9156810)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ISLIMITED_OFFSET UNITYSDK_OFFSET(0x91568C0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ISREFRESHBYDAY_OFFSET UNITYSDK_OFFSET(0x9156930)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ISSHOPONLYPRODUCT_OFFSET UNITYSDK_OFFSET(0x9155940)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x91567A0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_PRODUCTCOUNT_OFFSET UNITYSDK_OFFSET(0x91566C0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9156650)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_SHOPITEMLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x9156730)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_SHOPITEMREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x91568A0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x91565F0)
#define RPG_CLIENT_ELFSHOPITEMDATA_SET_AVAILABLEREMAINDAYS_OFFSET UNITYSDK_OFFSET(0x9156890)
#define RPG_CLIENT_ELFSHOPITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x91565E0)
#define RPG_CLIENT_ELFSHOPITEMDATA_SET_SHOPITEMREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x91568B0)
#define RPG_CLIENT_ELFSHOPITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x91556D0)
#define RPG_CLIENT_ELFSHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91565C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfShopItemData_TypeDefinitionIndex = 50670;

	class ElfShopItemData : public ::System::Object
	{
	public:
		::System::UInt32 _ShopItemRemainCount_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::System::UInt32 _AvailableRemainDays_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfShopItemData* Create(::System::UInt32 shopItemID)
		{
			return ((::RPG::Client::ElfShopItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_CREATE_OFFSET))(shopItemID);
		}

		::System::Void Sync(::Class_1_120319518E6F6581_22* shopItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_SYNC_OFFSET))(this, shopItem);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::RestaurantShopItemRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantShopItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ProductID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_PRODUCTID_OFFSET))(this);
		}

		::System::UInt32 get_ProductCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_PRODUCTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ShopItemLimitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_SHOPITEMLIMITCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_PRICE_OFFSET))(this);
		}

		::System::Boolean get_IsDiscount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ISDISCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AvailableRemainDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_AVAILABLEREMAINDAYS_OFFSET))(this);
		}

		::System::Void set_AvailableRemainDays(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_SET_AVAILABLEREMAINDAYS_OFFSET))(this, value);
		}

		::System::UInt32 get_ShopItemRemainCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_SHOPITEMREMAINCOUNT_OFFSET))(this);
		}

		::System::Void set_ShopItemRemainCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_SET_SHOPITEMREMAINCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsLimited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ISLIMITED_OFFSET))(this);
		}

		::System::Boolean get_IsRefreshByDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ISREFRESHBYDAY_OFFSET))(this);
		}

		::System::Boolean get_IsShopOnlyProduct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ISSHOPONLYPRODUCT_OFFSET))(this);
		}
	};
}
