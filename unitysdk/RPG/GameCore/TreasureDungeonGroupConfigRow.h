#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1910C0E0)
#define RPG_GAMECORE_TREASUREDUNGEONGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1910C600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGroupConfigRow_TypeDefinitionIndex = 11820;

	class TreasureDungeonGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* ATKExchangeIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* DungeonIDList; // 0x18
		::System::String* ImgPath; // 0x20
		::System::UInt32 DEFMazeBuffID; // 0x28
		::System::UInt32 ATKMazeBuffID; // 0x2C
		::System::UInt32 DEFExchangeRatio; // 0x30
		::System::UInt32 HpConversionRate2; // 0x34
		::System::UInt32 ATKExchangeRatio; // 0x38
		::System::UInt32 MaxDEF; // 0x3C
		::System::UInt32 MaxATK; // 0x40
		::System::UInt32 ActivityModuleID; // 0x44
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 HpConversionRate; // 0x58
		::System::UInt32 GroupID; // 0x5C
		::RPG::Client::TextID ATKExchangeName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
