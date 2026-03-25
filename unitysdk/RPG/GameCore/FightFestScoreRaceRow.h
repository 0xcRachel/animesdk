#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ScoreRaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171E8270)
#define RPG_GAMECORE_FIGHTFESTSCORERACEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171E8870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestScoreRaceRow_TypeDefinitionIndex = 12115;

	class FightFestScoreRaceRow : public ::System::Object
	{
	public:
		::System::String* TutorialImgPath; // 0x10
		::Il2CppArray<::System::UInt32>* EventIDList; // 0x18
		::System::String* ResultImgPath; // 0x20
		::System::String* DetailImgPath; // 0x28
		::System::String* RaceBgFigurePath; // 0x30
		::RPG::Client::TextID StageName; // 0x38
		::System::UInt32 TutorialID; // 0x48
		::System::UInt32 PhaseID; // 0x4C
		::RPG::Client::TextID RaceDesc; // 0x50
		::RPG::GameCore::ScoreRaceType ScoreRaceType; // 0x60
		::System::UInt32 SortWeight; // 0x64
		::System::UInt32 EventID; // 0x68
		::System::UInt32 RedAvatarID; // 0x6C
		::System::UInt32 ScoreRaceID; // 0x70
		::System::UInt32 TakeMainMissionID; // 0x74
		::System::UInt32 RewardScore; // 0x78
		::System::UInt32 RewardID; // 0x7C
		::System::UInt32 BlueAvatarID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestScoreRaceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestScoreRaceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
