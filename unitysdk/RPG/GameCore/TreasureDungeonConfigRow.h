#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1910ADD0)
#define RPG_GAMECORE_TREASUREDUNGEONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1910B3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonConfigRow_TypeDefinitionIndex = 11817;

	class TreasureDungeonConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DisplayMonsterIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x18
		::System::String* ImgPath; // 0x20
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x28
		::System::String* EntranceIconPath; // 0x30
		::System::UInt32 UnlockID; // 0x38
		::System::UInt32 InitialExplore; // 0x3C
		::System::UInt32 DungeonID; // 0x40
		::System::UInt32 GroupID; // 0x44
		::RPG::Client::TextID Desc; // 0x48
		::System::UInt32 PreDungeonID; // 0x58
		::System::UInt32 GridExploreCost; // 0x5C
		::System::UInt32 MaxExplore; // 0x60
		::System::UInt32 ExploreSubHpRatio; // 0x64
		::System::UInt32 DisplayEventID; // 0x68
		::System::UInt32 GridPrefabType; // 0x6C
		::RPG::Client::TextID Name; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
