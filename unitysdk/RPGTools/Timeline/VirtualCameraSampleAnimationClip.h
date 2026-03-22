#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class VirtualCameraSampleAnimationConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA67F130)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA67F120)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xA67F100)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xA67F0E0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_GET_OFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xA67F0B0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xA67F110)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xA67F0F0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_SET_OFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xA67F0D0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xA67F340)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VirtualCameraSampleAnimationClip_TypeDefinitionIndex = 37741;

	class VirtualCameraSampleAnimationClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::VirtualCameraSampleAnimationConfig* Config; // 0x18
		::UnityEngine::Vector3 _OffsetPosition_k__BackingField; // 0x20
		::System::Single _NearClipPlane_k__BackingField; // 0x2C
		::System::Single _FarClipPlane_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_OffsetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_GET_OFFSETPOSITION_OFFSET))(this);
		}

		::System::Void set_OffsetPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_SET_OFFSETPOSITION_OFFSET))(this, value);
		}

		::System::Single get_NearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_NearClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_SET_NEARCLIPPLANE_OFFSET))(this, value);
		}

		::System::Single get_FarClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_FarClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_SET_FARCLIPPLANE_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
