#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_RUNTIMEANIMATORCONTROLLER_GET_ANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x181C6950)
#define UNITYENGINE_RUNTIMEANIMATORCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x181C5A60)

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeAnimatorController_TypeDefinitionIndex = 4950;

	class RuntimeAnimatorController : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEANIMATORCONTROLLER__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::AnimationClip*>* get_animationClips()
		{
			return ((::Il2CppArray<::UnityEngine::AnimationClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEANIMATORCONTROLLER_GET_ANIMATIONCLIPS_OFFSET))(this);
		}
	};
}
