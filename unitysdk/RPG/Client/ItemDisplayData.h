#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayDataExtraInfo; }

#define RPG_CLIENT_ITEMDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x94F85C0)
#define RPG_CLIENT_ITEMDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94F8640)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemDisplayData_TypeDefinitionIndex = 52237;

	class ItemDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayDataExtraInfo* ExtraInfo; // 0x10
		::System::UInt32 Level; // 0x18
		::System::UInt32 UID; // 0x1C
		::System::UInt32 Count; // 0x20
		::System::UInt32 ConfigID; // 0x24
		::RPG::GameCore::ItemMainType ItemMainType; // 0x28
		::System::UInt32 Rank; // 0x2C
		::RPG::GameCore::ItemRarity Rarity; // 0x30
		::RPG::GameCore::ItemSubType ItemSubType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ItemDisplayData* Create(::RPG::Client::ItemDisplayData* origin)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_CREATE_OFFSET))(origin);
		}
	};
}
