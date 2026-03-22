#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16798120)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16798660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFindTrotterConfigRow_TypeDefinitionIndex = 10734;

	class ActivityFindTrotterConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 RewardQuestID; // 0x14
		::RPG::Client::TextID Title; // 0x18
		::RPG::Client::TextID Result01; // 0x28
		::RPG::Client::TextID Aim02; // 0x38
		::RPG::Client::TextID Aim01; // 0x48
		::System::UInt32 StartSubMissionID; // 0x58
		::System::UInt32 FinishSubMissionID; // 0x5C
		::System::UInt32 Order; // 0x60
		::System::UInt32 ActivityID; // 0x64
		::System::UInt32 MissionID; // 0x68
		::RPG::Client::TextID Result02; // 0x70

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
