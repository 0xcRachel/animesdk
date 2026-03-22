#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/StoryPropMoveClip_ESpeedMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_STORYPROPMOVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA66D870)
#define RPGTOOLS_TIMELINE_STORYPROPMOVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA66D860)
#define RPGTOOLS_TIMELINE_STORYPROPMOVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xA66DA60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropMoveClip_TypeDefinitionIndex = 38194;

	class StoryPropMoveClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::StoryPropMoveClip_ESpeedMode SpeedMode; // 0x20
		::System::Single Speed; // 0x24
		::System::Single Duration; // 0x28
		::System::String* TargetAreaName; // 0x30
		::System::String* TargetAnchorName; // 0x38
		::System::Boolean MoveUseCustomCurve; // 0x40
		::UnityEngine::AnimationCurve* MoveCustomCurve; // 0x48
		::System::Boolean ChangeScale; // 0x50
		::UnityEngine::Vector3 TargetScale; // 0x54
		::System::Boolean ScaleUseCustomCurve; // 0x60
		::UnityEngine::AnimationCurve* ScaleCustomCurve; // 0x68
		::System::Boolean ChangeRotation; // 0x70
		::UnityEngine::Vector3 TargetRotation; // 0x74
		::System::Boolean RotationUseCustomCurve; // 0x80
		::UnityEngine::AnimationCurve* RotationCustomCurve; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
