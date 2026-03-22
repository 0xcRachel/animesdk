#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17111E80)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171126A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonAvatarConfigRow_TypeDefinitionIndex = 11366;

	class TreasureDungeonAvatarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* FigureDiff; // 0x10
		::System::Single FigureScale; // 0x18
		::RPG::Client::TextID Dialogue1; // 0x20
		::RPG::Client::TextID Dialogue3; // 0x30
		::System::UInt32 SpecialAvataID; // 0x40
		::System::UInt32 AvatarPickID; // 0x44
		::RPG::Client::TextID Dialogue2; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
