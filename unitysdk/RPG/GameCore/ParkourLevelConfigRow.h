#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourLevelUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFEEF0)
#define RPG_GAMECORE_PARKOURLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFF570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelConfigRow_TypeDefinitionIndex = 11482;

	class ParkourLevelConfigRow : public ::System::Object
	{
	public:
		::System::String* GameAssetPathOnClear; // 0x10
		::Il2CppArray<::System::UInt32>* BGMIDList; // 0x18
		::System::String* TriggerCarTaskUnlock; // 0x20
		::System::String* GameAssetPath; // 0x28
		::System::String* MinimapResPath; // 0x30
		::System::UInt32 UnlockParam; // 0x38
		::System::UInt32 RailBallLimit; // 0x3C
		::System::UInt32 ID; // 0x40
		::System::Single LevelRegionState; // 0x44
		::RPG::GameCore::ParkourLevelUnlockType UnlockType; // 0x48
		::System::Boolean StoryLevel; // 0x4C
		::System::Single MinimapAngle; // 0x50
		::System::UInt32 TargetRank; // 0x54
		::System::UInt32 LapCount; // 0x58
		::System::UInt32 NextStorySubMissionID; // 0x5C
		::RPG::Client::TextID Name; // 0x60
		::RPG::Client::TextID FinishDisplay; // 0x70
		::RPG::Client::TextID Desc; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ParkourLevelConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
