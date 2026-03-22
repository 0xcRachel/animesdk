#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_VIDEO_VIDEOCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18370820)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoClip_TypeDefinitionIndex = 5901;

	class VideoClip : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOCLIP__CTOR_OFFSET))(this);
		}
	};
}
