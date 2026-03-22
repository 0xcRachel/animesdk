#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AdaptiveTessellationDrawControl_TypeDefinitionIndex = 4629;

	enum class AdaptiveTessellationDrawControl : ::System::Int32
	{
		DrawProceduralIndirect = 0,
		DrawInstancedIndirect = 1,
	};
}
