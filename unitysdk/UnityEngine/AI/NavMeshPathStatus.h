#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshPathStatus_TypeDefinitionIndex = 5253;

	enum class NavMeshPathStatus : ::System::Int32
	{
		PathComplete = 0,
		PathPartial = 1,
		PathInvalid = 2,
	};
}
