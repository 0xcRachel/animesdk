#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectEventBubbleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTSELECTEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16DF14B0)
#define RPG_GAMECORE_RESTAURANTSELECTEVENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF1720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSelectEventConfigRow_TypeDefinitionIndex = 10572;

	class RestaurantSelectEventConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RestaurantSelectEventBubbleType Type; // 0x10
		::System::UInt32 SelectEventID; // 0x14
		::RPG::Client::TextID Describe; // 0x18
		::System::UInt32 OpEffect2; // 0x28
		::System::UInt32 ContactsID; // 0x2C
		::System::UInt32 OpEffect1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSELECTEVENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantSelectEventConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantSelectEventConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSELECTEVENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
