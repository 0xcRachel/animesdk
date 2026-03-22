#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2FirstRoleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEV2LEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C664D0)
#define RPG_GAMECORE_MATCHTHREEV2LEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16C66C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2LevelRow_TypeDefinitionIndex = 10901;

	class MatchThreeV2LevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendBirdList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OpponentBattleItemMap; // 0x18
		::Il2CppArray<::System::UInt32>* VSTalk; // 0x20
		::Il2CppArray<::System::UInt32>* EnvironmentIDList; // 0x28
		::Il2CppArray<::System::UInt32>* RecommendBattleItemList; // 0x30
		::Il2CppArray<::System::UInt32>* SpecialRuleIDList; // 0x38
		::System::String* LevelImage; // 0x40
		::RPG::Client::TextID LevelName; // 0x48
		::System::UInt32 PlayerID; // 0x58
		::System::UInt32 OpponentBirdID; // 0x5C
		::System::UInt32 PlayerBirdID; // 0x60
		::RPG::GameCore::MatchThreeV2FirstRoleType FirstType; // 0x64
		::System::UInt32 OpponentID; // 0x68
		::System::UInt32 PreLevel; // 0x6C
		::System::UInt32 MaxRatioPowerDiff; // 0x70
		::System::UInt32 LevelID; // 0x74
		::RPG::Client::TextID LoseDesc; // 0x78
		::RPG::Client::TextID VictoryDesc; // 0x88
		::System::UInt32 PreSubmission; // 0x98
		::System::UInt32 TurnStep; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2LEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2LevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2LevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2LEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
