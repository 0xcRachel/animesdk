#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InventorySortType.h"
#include "unitysdk/RPG/GameCore/InventoryType.h"
#include "unitysdk/RPG/GameCore/ItemSellType.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_INVENTORYTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18893C20)
#define RPG_GAMECORE_INVENTORYTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18894530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventoryTabRow_TypeDefinitionIndex = 13106;

	class InventoryTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::InventorySortType>* ItemSortTypeList; // 0x10
		::RPG::GameCore::ConditionParam* UnlockCondition; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemSubType>* DisplayItemSubType; // 0x20
		::System::String* IconImagePath; // 0x28
		::RPG::Client::TextID TabName; // 0x30
		::System::UInt32 InventoryDisplayTag; // 0x40
		::System::Boolean NotDisplayPileLimit; // 0x44
		::System::UInt32 ID; // 0x48
		::System::UInt32 TabSortWeight; // 0x4C
		::RPG::GameCore::InventoryType DisplayInventoryType; // 0x50
		::System::UInt32 DisplayCapacityLimit; // 0x54
		::RPG::GameCore::ItemSellType SellType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::InventoryTabRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InventoryTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
