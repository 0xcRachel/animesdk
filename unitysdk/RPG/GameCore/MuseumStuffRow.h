#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CF2790)
#define RPG_GAMECORE_MUSEUMSTUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF2D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStuffRow_TypeDefinitionIndex = 12950;

	class MuseumStuffRow : public ::System::Object
	{
	public:
		::System::UInt32 StatsC; // 0x10
		::System::UInt32 StatsB; // 0x14
		::System::UInt32 UnlockPhase; // 0x18
		::System::Boolean IsInitial; // 0x1C
		::System::Boolean IsTargetReward; // 0x1D
		::RPG::GameCore::StuffType Type; // 0x20
		::RPG::Client::TextID MuseumStuffDesc; // 0x28
		::System::UInt32 DisplayOrder; // 0x38
		::System::UInt32 StatsA; // 0x3C
		::System::UInt32 ItemID; // 0x40
		::System::UInt32 CollectedReward; // 0x44
		::System::UInt32 SceneGroupID; // 0x48
		::System::UInt32 RecruitUnlockMission; // 0x4C
		::System::UInt32 ScenePropID; // 0x50
		::System::UInt32 RecruitPrice; // 0x54
		::RPG::Client::TextID EvidenceInfoTextID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumStuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumStuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
