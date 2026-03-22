#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9350370)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__GETEQUIPSCOUNTBYITEMID_B__0_OFFSET UNITYSDK_OFFSET(0x9353B40)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__GETEQUIPSCOUNTBYITEMID_B__1_OFFSET UNITYSDK_OFFSET(0x9353B70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass8_0_TypeDefinitionIndex = 51622;

	class GridFightEquipInfo___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsCountByItemID_b__0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__GETEQUIPSCOUNTBYITEMID_B__0_OFFSET))(this, x);
		}

		::System::Boolean _GetEquipsCountByItemID_b__1(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__GETEQUIPSCOUNTBYITEMID_B__1_OFFSET))(this, x);
		}
	};
}
