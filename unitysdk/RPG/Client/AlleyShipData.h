#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyShipType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyPackGoodItemConfig; }
namespace RPG::GameCore { class AlleyShipRow; }
namespace System { class String; }

#define RPG_CLIENT_ALLEYSHIPDATA_GET_PACKGOODITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x8C78810)
#define RPG_CLIENT_ALLEYSHIPDATA_GET_SHIPID_OFFSET UNITYSDK_OFFSET(0x8C788C0)
#define RPG_CLIENT_ALLEYSHIPDATA_GET_SHIPPROPPATH_OFFSET UNITYSDK_OFFSET(0x8C78900)
#define RPG_CLIENT_ALLEYSHIPDATA_GET_SHIPTYPE_OFFSET UNITYSDK_OFFSET(0x8C788E0)
#define RPG_CLIENT_ALLEYSHIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C66150)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyShipData_TypeDefinitionIndex = 49440;

	class AlleyShipData : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyShipRow* Row; // 0x10
		::System::Boolean IsUnlock; // 0x18

		::System::Void _ctor(::System::UInt32 shipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSHIPDATA__CTOR_OFFSET))(this, shipID);
		}

		::RPG::GameCore::AlleyPackGoodItemConfig* get_PackGoodItemConfig()
		{
			return ((::RPG::GameCore::AlleyPackGoodItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSHIPDATA_GET_PACKGOODITEMCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_ShipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSHIPDATA_GET_SHIPID_OFFSET))(this);
		}

		::RPG::GameCore::AlleyShipType get_ShipType()
		{
			return ((::RPG::GameCore::AlleyShipType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSHIPDATA_GET_SHIPTYPE_OFFSET))(this);
		}

		::System::String* get_ShipPropPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSHIPDATA_GET_SHIPPROPPATH_OFFSET))(this);
		}
	};
}
