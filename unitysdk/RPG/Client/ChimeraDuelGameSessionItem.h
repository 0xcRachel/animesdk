#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_15;
class Class_1_FA4F4A67B1C04320_185;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelItemData; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CANAPPLYTO_OFFSET UNITYSDK_OFFSET(0x8F0BAF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0x8F0BA40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_2_OFFSET UNITYSDK_OFFSET(0x8F0A710)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x8F0A370)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x8F0B070)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x8F0BA20)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x8F0BA10)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8F0BAD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8F0BA30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionItem_TypeDefinitionIndex = 50254;

	class ChimeraDuelGameSessionItem : public ::System::Object
	{
	public:
		::System::UInt32 _ItemID_k__BackingField; // 0x10
		::System::UInt32 _UniqueID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 uniqueID, ::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_OFFSET))(this, uniqueID, itemID);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_1_OFFSET))(this, other);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelItemData* get_ItemData()
		{
			return ((::RPG::Client::ChimeraDuelItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMDATA_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create(::Class_1_FA4F4A67B1C04320_185* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::Class_1_FA4F4A67B1C04320_185*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create_1(::Class_1_4CF8088A158DCE25_15* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::Class_1_4CF8088A158DCE25_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_1_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create_2(::System::UInt32 itemID)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_2_OFFSET))(itemID);
		}

		::System::Boolean CanApplyTo(::RPG::Client::ChimeraDuelGameSessionChimera* chimera)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CANAPPLYTO_OFFSET))(this, chimera);
		}
	};
}
