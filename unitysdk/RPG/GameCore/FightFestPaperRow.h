#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTPAPERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D15E80)
#define RPG_GAMECORE_FIGHTFESTPAPERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D16480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestPaperRow_TypeDefinitionIndex = 12562;

	class FightFestPaperRow : public ::System::Object
	{
	public:
		::System::String* InterviewBgPath; // 0x10
		::System::String* CollectionBgPath; // 0x18
		::System::String* GameAdFigurePath; // 0x20
		::System::String* InterviewFgPath; // 0x28
		::System::String* CollectionFgPath; // 0x30
		::Il2CppArray<::System::String*>* MainBgPathList; // 0x38
		::Il2CppArray<::System::String*>* MainFgPathList; // 0x40
		::RPG::Client::TextID MainPageDesc; // 0x48
		::RPG::Client::TextID IssueNumberText; // 0x58
		::RPG::Client::TextID IssueNumber; // 0x68
		::System::UInt32 UnlockSubMissionID; // 0x78
		::System::UInt32 PaperID; // 0x7C
		::RPG::Client::TextID MainPageTitle; // 0x80
		::RPG::Client::TextID GameAdDesc; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPAPERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestPaperRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestPaperRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPAPERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
