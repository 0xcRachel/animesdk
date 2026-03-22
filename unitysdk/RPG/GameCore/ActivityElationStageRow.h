#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16788D00)
#define RPG_GAMECORE_ACTIVITYELATIONSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16789440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationStageRow_TypeDefinitionIndex = 10502;

	class ActivityElationStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GiftBoxLevel; // 0x10
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x18
		::RPG::GameCore::ConditionParam* UnlockCondition; // 0x20
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x28
		::System::String* ImagePath; // 0x30
		::Il2CppArray<::System::UInt32>* AvailableAvatarList; // 0x38
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x40
		::Il2CppArray<::System::UInt32>* ModifiedAvatarIDList; // 0x48
		::RPG::Client::TextID LevelDes_In; // 0x50
		::System::UInt32 ID; // 0x60
		::System::UInt32 TutorialGuideGroupID; // 0x64
		::RPG::Client::TextID LevelDes_Out; // 0x68
		::System::UInt32 IsModifiedAvatarFixed; // 0x78
		::System::UInt32 PerfectWave; // 0x7C
		::RPG::Client::TextID StageName; // 0x80
		::RPG::Client::TextID LevelDes_In_Down; // 0x90
		::System::UInt32 UIEnterBattleAreaID; // 0xA0
		::System::UInt32 NewModifiedAvatarID; // 0xA4
		::System::UInt32 EventID; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityElationStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
