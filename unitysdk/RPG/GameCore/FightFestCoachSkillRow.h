#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestCoachType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCOACHSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D14120)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D14940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestCoachSkillRow_TypeDefinitionIndex = 12560;

	class FightFestCoachSkillRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::RPG::Client::TextID UnlockDesc; // 0x18
		::System::UInt32 MazeBuffID; // 0x28
		::RPG::GameCore::FightFestCoachType CoachType; // 0x2C
		::RPG::Client::TextID CoachSkillExtraDesc; // 0x30
		::System::UInt32 SortWeight; // 0x40
		::System::UInt32 CoachItemID; // 0x44
		::RPG::Client::TextID CoachSkillName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestCoachSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestCoachSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
