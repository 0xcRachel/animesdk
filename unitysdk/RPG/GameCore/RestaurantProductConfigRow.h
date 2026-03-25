#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175BA9A0)
#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175BABF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantProductConfigRow_TypeDefinitionIndex = 10631;

	class RestaurantProductConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::Boolean IsCrops; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::UInt32 ProductID; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantProductConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantProductConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
