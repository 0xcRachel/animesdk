#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x17357450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x17357510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x173574F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x17357520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x17357500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173574E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonAssistData_TypeDefinitionIndex = 69254;

	class IdleLiveDungeonAssistData : public ::System::Object
	{
	public:
		::System::UInt32 _UID_k__BackingField; // 0x10
		::System::UInt32 _Progress_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData* Create(::System::UInt32 uid, ::System::UInt32 progress)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_CREATE_OFFSET))(uid, progress);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTDATA_SET_PROGRESS_OFFSET))(this, value);
		}
	};
}
