#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTargetType_TypeDefinitionIndex = 19694;

	enum class MarbleTargetType : ::System::Int32
	{
		None = 0,
		DeadSeal = 1,
	};
}
