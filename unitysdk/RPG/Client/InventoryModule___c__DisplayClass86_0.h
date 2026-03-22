#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvertibleItemData; }

#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x94E9E00)
#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS86_0__GETCONVERTIBLEITEMDATABYITEMSUBTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x94E9E10)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c__DisplayClass86_0_TypeDefinitionIndex = 52219;

	class InventoryModule___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ItemSubType itemSubType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetConvertibleItemDataByitemSubType_b__0(::RPG::Client::ConvertibleItemData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ConvertibleItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS86_0__GETCONVERTIBLEITEMDATABYITEMSUBTYPE_B__0_OFFSET))(this, item);
		}
	};
}
