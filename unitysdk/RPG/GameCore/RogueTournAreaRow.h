#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_C744AC1912B4057C;

#define RPG_GAMECORE_ROGUETOURNAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EBD620)
#define RPG_GAMECORE_ROGUETOURNAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBDF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournAreaRow_TypeDefinitionIndex = 13601;

	class RogueTournAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DifficultyIDList; // 0x10
		::Class_1_C744AC1912B4057C* FirstRoom; // 0x18
		::Il2CppArray<::System::UInt32>* LayerIDList; // 0x20
		::System::UInt32 AreaID; // 0x28
		::RPG::GameCore::RogueTournAreaGroupID AreaGroupID; // 0x2C
		::System::Boolean IsHard; // 0x30
		::System::UInt32 FirstReward; // 0x34
		::RPG::GameCore::RogueTournDifficultyType Difficulty; // 0x38
		::RPG::GameCore::RogueTournMode TournMode; // 0x3C
		::System::UInt32 DivisionLevel; // 0x40
		::System::UInt32 MonsterEliteDropID; // 0x44
		::System::UInt32 UnlockID; // 0x48
		::System::UInt32 WorldLevelLimit; // 0x4C
		::System::UInt32 ExpScoreID; // 0x50
		::RPG::Client::TextID AreaNameID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournAreaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNAREAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
