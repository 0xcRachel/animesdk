#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RecordType.h"
#include "unitysdk/RPG/GameCore/ShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACHIEVEMENTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x167754E0)
#define RPG_GAMECORE_ACHIEVEMENTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16775C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementDataRow_TypeDefinitionIndex = 10214;

	class AchievementDataRow : public ::System::Object
	{
	public:
		::System::String* Rarity; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::String* PSTrophyID; // 0x20
		::System::UInt32 LinearQuestID; // 0x28
		::RPG::GameCore::ShowType ShowType; // 0x2C
		::RPG::Client::TextID AchievementDescPS; // 0x30
		::RPG::Client::TextID HideAchievementDesc; // 0x40
		::RPG::Client::TextID AchievementDesc; // 0x50
		::System::UInt32 QuestID; // 0x60
		::System::UInt32 Advance; // 0x64
		::System::UInt32 Priority; // 0x68
		::System::UInt32 ShowParamInt1; // 0x6C
		::RPG::GameCore::RecordType RecordType; // 0x70
		::RPG::Client::TextID AchievementTitlePS; // 0x78
		::RPG::Client::TextID AchievementTitle; // 0x88
		::System::UInt32 SeriesID; // 0x98
		::System::UInt32 AchievementID; // 0x9C
		::RPG::Client::TextID RecordText; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AchievementDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
