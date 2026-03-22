#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollisionDataFlag_TypeDefinitionIndex = 44207;

	enum class CollisionDataFlag : ::System::Int32
	{
		TransformChanged = 1,
		Removed = 2,
		Trigger = 4,
		Avoidance = 8,
	};
}
