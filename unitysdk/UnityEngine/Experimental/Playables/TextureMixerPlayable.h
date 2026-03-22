#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x203E9E0)
#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x1465FE0)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int TextureMixerPlayable_TypeDefinitionIndex = 4699;

	struct alignas(8) TextureMixerPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Playables::TextureMixerPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Playables::TextureMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_EQUALS_OFFSET))(this, other);
		}
	};
}
