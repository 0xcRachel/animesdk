#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F14160)
#define RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F14510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLocalLegendStageConfigRow_TypeDefinitionIndex = 10877;

	class ActivityLocalLegendStageConfigRow : public ::System::Object
	{
	public:
		::System::String* ManikinPrefabPath; // 0x10
		::System::String* ManikinConfigPath; // 0x18
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x20
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x28
		::System::UInt32 UnlockQuest; // 0x30
		::System::UInt32 BattleAreaID; // 0x34
		::System::UInt32 EventID; // 0x38
		::System::UInt32 GroupID; // 0x3C
		::RPG::Client::TextID FearlessStageMechanism; // 0x40
		::RPG::GameCore::ActivityLocalLegendDifficulty DifficultyLevel; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
