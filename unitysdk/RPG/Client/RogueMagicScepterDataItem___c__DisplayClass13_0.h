#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E14110)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM___C__DISPLAYCLASS13_0__FINDHAVINGUNITBYCATEGORY_B__0_OFFSET UNITYSDK_OFFSET(0x9E152A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterDataItem___c__DisplayClass13_0_TypeDefinitionIndex = 53582;

	class RogueMagicScepterDataItem___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicUnitCategory category; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindHavingUnitByCategory_b__0(::RPG::Client::RogueMagicUnitDataItem* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM___C__DISPLAYCLASS13_0__FINDHAVINGUNITBYCATEGORY_B__0_OFFSET))(this, data);
		}
	};
}
