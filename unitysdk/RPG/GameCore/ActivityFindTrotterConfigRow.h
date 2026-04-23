#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1887E450)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1887E990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFindTrotterConfigRow_TypeDefinitionIndex = 11051;

	class ActivityFindTrotterConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Aim02; // 0x10
		::RPG::Client::TextID Aim01; // 0x20
		::System::UInt32 StartSubMissionID; // 0x30
		::RPG::Client::TextID Title; // 0x38
		::System::UInt32 ActivityModuleID; // 0x48
		::System::UInt32 RewardQuestID; // 0x4C
		::System::UInt32 FinishSubMissionID; // 0x50
		::System::UInt32 Order; // 0x54
		::System::UInt32 MissionID; // 0x58
		::System::UInt32 ActivityID; // 0x5C
		::RPG::Client::TextID Result02; // 0x60
		::RPG::Client::TextID Result01; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityFindTrotterConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFindTrotterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
