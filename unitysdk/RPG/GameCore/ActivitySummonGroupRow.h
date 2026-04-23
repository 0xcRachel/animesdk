#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DAAC50)
#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAB600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonGroupRow_TypeDefinitionIndex = 11734;

	class ActivitySummonGroupRow : public ::System::Object
	{
	public:
		::System::String* OriginalImagePath; // 0x10
		::System::String* MonsterMiddleIcon; // 0x18
		::Il2CppArray<::RPG::Client::TextID>* MonsterSkillDescList; // 0x20
		::Il2CppArray<::System::String*>* BackgroundTrashImageList; // 0x28
		::Il2CppArray<::System::String*>* MasterImagePath; // 0x30
		::System::String* OriginalMiniImagePath; // 0x38
		::Il2CppArray<::System::UInt32>* MonsterSkillList; // 0x40
		::System::String* ImagePath; // 0x48
		::System::String* MiniImagePath; // 0x50
		::Il2CppArray<::System::UInt32>* AvatarSkillList; // 0x58
		::System::String* MonsterImagePath; // 0x60
		::System::UInt32 MappingInfo; // 0x68
		::System::UInt32 GroupID; // 0x6C
		::RPG::Client::TextID OriginalDesc; // 0x70
		::RPG::Client::TextID MonsterName; // 0x80
		::RPG::Client::TextID StageName; // 0x90
		::RPG::Client::TextID MonsterDesc; // 0xA0
		::System::UInt32 GotoID; // 0xB0
		::System::UInt32 EntranceID; // 0xB4
		::System::UInt32 SubMissionID; // 0xB8
		::System::UInt32 MazeBuffID; // 0xBC
		::System::UInt32 MonsterEventID; // 0xC0
		::System::UInt32 ActivityModuleID; // 0xC4
		::RPG::Client::TextID Desc; // 0xC8
		::RPG::Client::TextID OriginalStageName; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivitySummonGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivitySummonGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
