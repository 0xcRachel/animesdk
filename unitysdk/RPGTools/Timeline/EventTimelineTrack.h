#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_EVENTTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C31B40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EventTimelineTrack_TypeDefinitionIndex = 45705;

	class EventTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
