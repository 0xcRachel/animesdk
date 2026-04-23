#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A0182B0)
#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0185A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantOptionEffectConfigRow_TypeDefinitionIndex = 10893;

	class RestaurantOptionEffectConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 EventRewardID; // 0x10
		::RPG::Client::TextID ResultText; // 0x18
		::System::UInt32 ContactsID; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID OptionText; // 0x30
		::System::UInt32 Param; // 0x40
		::RPG::GameCore::RestaurantSelectionType Type; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantOptionEffectConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantOptionEffectConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
