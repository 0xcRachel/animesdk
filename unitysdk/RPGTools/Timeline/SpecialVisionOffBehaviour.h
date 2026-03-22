#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class SpecialVisionOffClip; }

#define RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA667680)
#define RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA6676A0)
#define RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xA667690)
#define RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xA667850)
#define RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA667860)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SpecialVisionOffBehaviour_TypeDefinitionIndex = 38161;

	class SpecialVisionOffBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::SpecialVisionOffClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::SpecialVisionOffClip* get_Clip()
		{
			return ((::RPGTools::Timeline::SpecialVisionOffClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::SpecialVisionOffClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::SpecialVisionOffClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONOFFBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
