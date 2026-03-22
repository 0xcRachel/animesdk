#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171137D0)
#define RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17113AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridBuffConfigRow_TypeDefinitionIndex = 11358;

	class TreasureDungeonGridBuffConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::RPG::GameCore::TreasureDungeonGridBuffType Type; // 0x28
		::System::UInt32 GridBuffID; // 0x2C
		::System::UInt32 GridBuffMaxLevel; // 0x30
		::System::UInt32 ParamInt; // 0x34
		::System::UInt32 DisplayMazeBuffID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
