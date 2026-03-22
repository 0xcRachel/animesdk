#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Timeline/ActivationControlPlayable_InitialState.h"
#include "unitysdk/UnityEngine/Timeline/ActivationControlPlayable_PostPlaybackState.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x181852F0)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x18185430)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18185410)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x18185480)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x181854C0)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18185460)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18185520)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationControlPlayable_TypeDefinitionIndex = 29008;

	class ActivationControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlayback; // 0x18
		::UnityEngine::Timeline::ActivationControlPlayable_InitialState m_InitialState; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlaybackState)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_CREATE_OFFSET))(graph, gameObject, postPlaybackState);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* userData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_PROCESSFRAME_OFFSET))(this, playable, info, userData);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONGRAPHSTART_OFFSET))(this, playable);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
