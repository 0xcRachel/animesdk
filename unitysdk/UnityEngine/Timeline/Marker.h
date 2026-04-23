#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_MARKER_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x18A9DD80)
#define UNITYENGINE_TIMELINE_MARKER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x18A9DDA0)
#define UNITYENGINE_TIMELINE_MARKER_ONDRAGGING_OFFSET UNITYSDK_OFFSET(0x18A9DEE0)
#define UNITYENGINE_TIMELINE_MARKER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18A9DEC0)
#define UNITYENGINE_TIMELINE_MARKER_ONSTOPDRAG_OFFSET UNITYSDK_OFFSET(0x18A9DED0)
#define UNITYENGINE_TIMELINE_MARKER_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x18A9DD90)
#define UNITYENGINE_TIMELINE_MARKER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x18A9DDB0)
#define UNITYENGINE_TIMELINE_MARKER_UNITYENGINE_TIMELINE_IMARKER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18A9DE00)
#define UNITYENGINE_TIMELINE_MARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9DEF0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Marker_TypeDefinitionIndex = 35590;

	class Marker : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Double m_Time; // 0x18
		::UnityEngine::Timeline::TrackAsset* _parent_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* get_parent()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::UnityEngine::Timeline::TrackAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_SET_PARENT_OFFSET))(this, value);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_SET_TIME_OFFSET))(this, value);
		}

		::System::Void UnityEngine_Timeline_IMarker_Initialize(::UnityEngine::Timeline::TrackAsset* parentTrack)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_UNITYENGINE_TIMELINE_IMARKER_INITIALIZE_OFFSET))(this, parentTrack);
		}

		::System::Void OnInitialize(::UnityEngine::Timeline::TrackAsset* aPent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_ONINITIALIZE_OFFSET))(this, aPent);
		}

		::System::Void OnStopDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_ONSTOPDRAG_OFFSET))(this);
		}

		::System::Void OnDragging()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_ONDRAGGING_OFFSET))(this);
		}
	};
}
