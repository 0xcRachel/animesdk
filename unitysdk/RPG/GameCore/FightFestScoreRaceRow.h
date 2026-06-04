#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ScoreRaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A417530)
#define RPG_GAMECORE_FIGHTFESTSCORERACEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A417B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestScoreRaceRow_TypeDefinitionIndex = 12641;

	class FightFestScoreRaceRow : public ::System::Object
	{
	public:
		::System::String* RaceBgFigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* EventIDList; // 0x18
		::System::String* DetailImgPath; // 0x20
		::System::String* TutorialImgPath; // 0x28
		::System::String* ResultImgPath; // 0x30
		::System::UInt32 SortWeight; // 0x38
		::System::UInt32 RewardID; // 0x3C
		::System::UInt32 RewardScore; // 0x40
		::System::UInt32 TutorialID; // 0x44
		::RPG::Client::TextID RaceDesc; // 0x48
		::System::UInt32 ScoreRaceID; // 0x58
		::System::UInt32 TakeMainMissionID; // 0x5C
		::RPG::GameCore::ScoreRaceType ScoreRaceType; // 0x60
		::System::UInt32 BlueAvatarID; // 0x64
		::System::UInt32 RedAvatarID; // 0x68
		::System::UInt32 PhaseID; // 0x6C
		::System::UInt32 EventID; // 0x70
		::RPG::Client::TextID StageName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestScoreRaceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestScoreRaceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
