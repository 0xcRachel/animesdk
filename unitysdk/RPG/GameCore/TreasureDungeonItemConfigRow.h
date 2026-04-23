#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1910CF30)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1910D7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonItemConfigRow_TypeDefinitionIndex = 11832;

	class TreasureDungeonItemConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath2D; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* AudioEventName; // 0x20
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID Desc; // 0x40
		::System::UInt32 ItemID; // 0x50
		::System::UInt32 ParamInt; // 0x54
		::RPG::GameCore::TreasureDungeonItemType Type; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonItemConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
