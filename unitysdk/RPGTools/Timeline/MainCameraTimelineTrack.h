#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA63E650)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraTimelineTrack_TypeDefinitionIndex = 38283;

	class MainCameraTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
