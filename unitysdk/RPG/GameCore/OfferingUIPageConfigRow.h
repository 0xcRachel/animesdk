#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OFFERINGUIPAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D07BA0)
#define RPG_GAMECORE_OFFERINGUIPAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D08080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfferingUIPageConfigRow_TypeDefinitionIndex = 13023;

	class OfferingUIPageConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID LevelTitle; // 0x10
		::RPG::Client::TextID LongTailDesc; // 0x20
		::RPG::Client::TextID LongTailTitle; // 0x30
		::RPG::Client::TextID MaxTip; // 0x40
		::RPG::Client::TextID SubmitBtnName; // 0x50
		::RPG::Client::TextID Name; // 0x60
		::RPG::Client::TextID CostTitle; // 0x70
		::System::UInt32 ID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGUIPAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::OfferingUIPageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OfferingUIPageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGUIPAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
