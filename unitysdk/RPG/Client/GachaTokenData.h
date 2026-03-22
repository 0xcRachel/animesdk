#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GachaTokenShopConfig; }
namespace RPG::GameCore { class ItemRow; }

#define RPG_CLIENT_GACHATOKENDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x92F2CF0)
#define RPG_CLIENT_GACHATOKENDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x92F2D00)
#define RPG_CLIENT_GACHATOKENDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92E8070)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaTokenData_TypeDefinitionIndex = 51094;

	class GachaTokenData : public ::System::Object
	{
	public:
		::RPG::GameCore::GachaTokenShopConfig* GachaTokenShop; // 0x10
		::RPG::GameCore::ItemRow* _Row_k__BackingField; // 0x18
		::System::UInt32 Price; // 0x20

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATOKENDATA__CTOR_OFFSET))(this, itemID);
		}

		::RPG::GameCore::ItemRow* get_Row()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATOKENDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ItemRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATOKENDATA_SET_ROW_OFFSET))(this, value);
		}
	};
}
