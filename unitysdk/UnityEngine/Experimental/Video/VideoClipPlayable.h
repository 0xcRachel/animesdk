#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x203E9E0)
#define UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x1465FE0)

namespace UnityEngine::Experimental::Video
{
	inline static constexpr unsigned int VideoClipPlayable_TypeDefinitionIndex = 5900;

	struct alignas(8) VideoClipPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Video::VideoClipPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Video::VideoClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_EQUALS_OFFSET))(this, other);
		}
	};
}
