#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E7EF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorEnableControlBehaviour_TypeDefinitionIndex = 38062;

	class AnimatorEnableControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
