#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class String; }

#define RPG_CLIENT_MISSIONTIMELINEMODULE_GETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x152A0240)
#define RPG_CLIENT_MISSIONTIMELINEMODULE_SELECTTIMELINESEG_OFFSET UNITYSDK_OFFSET(0x152A03F0)
#define RPG_CLIENT_MISSIONTIMELINEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x152A0590)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionTimelineModule_TypeDefinitionIndex = 60926;

	class MissionTimelineModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTIMELINEMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetGroupState(::System::UInt32 groupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTIMELINEMODULE_GETGROUPSTATE_OFFSET))(this, groupID);
		}

		::System::Void SelectTimelineSeg(::System::UInt32 groupID, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTIMELINEMODULE_SELECTTIMELINESEG_OFFSET))(this, groupID, eventName);
		}
	};
}
