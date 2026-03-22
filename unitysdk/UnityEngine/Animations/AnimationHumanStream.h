#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationHumanStream_TypeDefinitionIndex = 4967;

	struct alignas(8) AnimationHumanStream
	{
		::System::IntPtr stream; // 0x10
	};
}
