#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C608B0)
#define RPG_GAMECORE_MATCHTHREELEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16C614E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeLevelRow_TypeDefinitionIndex = 10866;

	class MatchThreeLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnvironmentID; // 0x10
		::System::String* LevelImage; // 0x18
		::Il2CppArray<::System::UInt32>* VSTalkList; // 0x20
		::System::UInt32 Mode; // 0x28
		::System::UInt32 OpponentBirdID; // 0x2C
		::System::UInt32 GoMissionCondition; // 0x30
		::System::UInt32 UnlockID; // 0x34
		::RPG::Client::TextID VictoryDesc; // 0x38
		::RPG::Client::TextID LevelDescription; // 0x48
		::System::UInt32 LevelMission; // 0x58
		::System::UInt32 PlayerBirdID; // 0x5C
		::System::UInt32 PlayerID; // 0x60
		::System::UInt32 OpponentID; // 0x64
		::System::UInt32 RewardID; // 0x68
		::System::UInt32 LevelID; // 0x6C
		::RPG::Client::TextID LoseDesc; // 0x70
		::System::UInt32 HPmax; // 0x80
		::System::UInt32 TurnStep; // 0x84
		::RPG::Client::TextID LevelName; // 0x88
		::RPG::Client::TextID MissionDescription; // 0x98

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
