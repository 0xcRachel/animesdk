#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C37D70)
#define RPG_GAMECORE_MATCHTHREELEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C389E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeLevelRow_TypeDefinitionIndex = 11338;

	class MatchThreeLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* VSTalkList; // 0x10
		::System::String* LevelImage; // 0x18
		::Il2CppArray<::System::UInt32>* EnvironmentID; // 0x20
		::RPG::Client::TextID VictoryDesc; // 0x28
		::System::UInt32 LevelID; // 0x38
		::System::UInt32 UnlockID; // 0x3C
		::System::UInt32 RewardID; // 0x40
		::System::UInt32 TurnStep; // 0x44
		::RPG::Client::TextID LevelName; // 0x48
		::RPG::Client::TextID LoseDesc; // 0x58
		::System::UInt32 OpponentID; // 0x68
		::System::UInt32 PlayerBirdID; // 0x6C
		::RPG::Client::TextID MissionDescription; // 0x70
		::System::UInt32 Mode; // 0x80
		::System::UInt32 PlayerID; // 0x84
		::System::UInt32 GoMissionCondition; // 0x88
		::System::UInt32 HPmax; // 0x8C
		::RPG::Client::TextID LevelDescription; // 0x90
		::System::UInt32 OpponentBirdID; // 0xA0
		::System::UInt32 LevelMission; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
