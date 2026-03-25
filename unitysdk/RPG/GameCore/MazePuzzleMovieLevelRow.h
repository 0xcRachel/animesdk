#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MazePuzzleMovieGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173DBBC0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173DC430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleMovieLevelRow_TypeDefinitionIndex = 12876;

	class MazePuzzleMovieLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::String* TriggerCustomString; // 0x18
		::RPG::Client::TextID Description; // 0x20
		::RPG::GameCore::MazePuzzleMovieGameMode MovieMode; // 0x30
		::System::UInt32 UnlockSubmission; // 0x34
		::System::UInt32 MovieLevel; // 0x38
		::System::UInt32 Tutorial; // 0x3C
		::System::UInt32 UnlockConditionMode; // 0x40
		::System::UInt32 UnlockCondition; // 0x44
		::RPG::Client::TextID Title; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePuzzleMovieLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleMovieLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
