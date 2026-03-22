#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"

class Class_1_D2924896099E0408;
class Class_1_FA4F4A67B1C04320_333;
namespace RPG::GameCore { class GridFightSpecialGoodsConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0x93FE880)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_DESC_OFFSET UNITYSDK_OFFSET(0x93FE930)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0x93FEB40)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x93FE9D0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x93FEAE0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x93FE8D0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x93FDAB0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_COST_OFFSET UNITYSDK_OFFSET(0x93FEB50)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x93FEBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopSpecialGood_TypeDefinitionIndex = 51843;

	class GridFightShopSpecialGood : public ::RPG::Client::GridFightShopGood
	{
	public:
		::Class_1_FA4F4A67B1C04320_333* _GoodSpecial; // 0x20
		::RPG::GameCore::GridFightSpecialGoodsConfigRow* _ConfigRow; // 0x28

		::System::Void _ctor(::Class_1_D2924896099E0408* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2924896099E0408*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__CTOR_OFFSET))(this, goods);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_COST_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SHOPICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_DESC_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_GOODTYPE_OFFSET))(this);
		}

		::System::UInt32 __iFixBaseProxy_get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_COST_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_SHOPICON_OFFSET))(this);
		}
	};
}
