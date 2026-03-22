#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowTargetType_TypeDefinitionIndex = 17893;

	enum class FollowTargetType : ::System::Int32
	{
		LocalPlayer = 0,
		DetectAwardTarget = 1,
	};
}
