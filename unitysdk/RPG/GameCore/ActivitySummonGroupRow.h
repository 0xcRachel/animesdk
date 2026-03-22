#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x167B37C0)
#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x167B4170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonGroupRow_TypeDefinitionIndex = 11264;

	class ActivitySummonGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* MasterImagePath; // 0x10
		::System::String* OriginalImagePath; // 0x18
		::Il2CppArray<::System::UInt32>* MonsterSkillList; // 0x20
		::Il2CppArray<::RPG::Client::TextID>* MonsterSkillDescList; // 0x28
		::System::String* MonsterMiddleIcon; // 0x30
		::Il2CppArray<::System::UInt32>* AvatarSkillList; // 0x38
		::Il2CppArray<::System::String*>* BackgroundTrashImageList; // 0x40
		::System::String* ImagePath; // 0x48
		::System::String* OriginalMiniImagePath; // 0x50
		::System::String* MiniImagePath; // 0x58
		::System::String* MonsterImagePath; // 0x60
		::System::UInt32 MonsterEventID; // 0x68
		::System::UInt32 ActivityModuleID; // 0x6C
		::RPG::Client::TextID OriginalStageName; // 0x70
		::System::UInt32 EntranceID; // 0x80
		::System::UInt32 SubMissionID; // 0x84
		::RPG::Client::TextID Desc; // 0x88
		::RPG::Client::TextID OriginalDesc; // 0x98
		::RPG::Client::TextID MonsterDesc; // 0xA8
		::RPG::Client::TextID MonsterName; // 0xB8
		::System::UInt32 MazeBuffID; // 0xC8
		::System::UInt32 MappingInfo; // 0xCC
		::RPG::Client::TextID StageName; // 0xD0
		::System::UInt32 GroupID; // 0xE0
		::System::UInt32 GotoID; // 0xE4

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
