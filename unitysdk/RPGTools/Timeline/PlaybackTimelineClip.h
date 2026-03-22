#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PlaybackTimelineClip_TimelinePlaybackOptions.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

class Class_2_9BE17B1876EBB2C2;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA649EA0)
#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA649E80)
#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_METHOD_4_82EEA22421A23CFF_OFFSET UNITYSDK_OFFSET(0xA64A100)
#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_SET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA649E90)
#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xA64A180)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaybackTimelineClip_TypeDefinitionIndex = 38290;

	class PlaybackTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x18
		::RPGTools::Timeline::PlaybackTimelineClip_TimelinePlaybackOptions Option; // 0x1C
		::System::String* MarkerName; // 0x20
		::System::Double TargetTime; // 0x28
		::Il2CppArray<::System::String*>* JumpPredicates; // 0x30
		::Class_2_9BE17B1876EBB2C2* template_; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void set_clipCaps(::UnityEngine::Timeline::ClipCaps value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_SET_CLIPCAPS_OFFSET))(this, value);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_82EEA22421A23CFF(::UnityEngine::Playables::PlayableGraph a1, ::Class_2_9BE17B1876EBB2C2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::Class_2_9BE17B1876EBB2C2*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_METHOD_4_82EEA22421A23CFF_OFFSET))(this, a1, a2);
		}
	};
}
