#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_942D40AEEDD1812F;
class Class_1_A88C3AAF0DD46F4C_3;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171C41B0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171C6340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStageRow_TypeDefinitionIndex = 10665;

	class EvolveBuildStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StagePeriod3; // 0x10
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x18
		::Il2CppArray<::System::UInt32>* InitialWeapon; // 0x20
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_3*>* RecommendList; // 0x28
		::Il2CppArray<::System::UInt32>* StagePeriod1; // 0x30
		::Il2CppArray<::System::UInt32>* FirstWinQuest; // 0x38
		::System::String* TeamBonusIconPath; // 0x40
		::Il2CppArray<::Class_1_942D40AEEDD1812F*>* RankList; // 0x48
		::Il2CppArray<::System::UInt32>* GearRecommendList; // 0x50
		::Il2CppArray<::System::UInt32>* StagePeriod4; // 0x58
		::Il2CppArray<::System::UInt32>* StagePeriod2; // 0x60
		::RPG::Client::TextID Desc; // 0x68
		::RPG::Client::TextID DevilDesc; // 0x78
		::System::UInt32 IntroID; // 0x88
		::System::Int32 Difficulty; // 0x8C
		::RPG::GameCore::EvolveBuildSeason Season; // 0x90
		::RPG::Client::TextID Name; // 0x98
		::RPG::Client::TextID TeamBonusShortDesc; // 0xA8
		::RPG::Client::TextID PreName; // 0xB8
		::RPG::Client::TextID BuffTextFormat; // 0xC8
		::System::Boolean WeaponSelectable; // 0xD8
		::System::UInt32 TeamBonusMazeBuffID; // 0xDC
		::System::UInt32 StageMergedID; // 0xE0
		::System::UInt32 UnlockQuest; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EvolveBuildStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
