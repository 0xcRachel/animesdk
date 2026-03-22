#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionItemStatus_TypeDefinitionIndex = 56761;

	enum class ActionItemStatus : ::System::Int32
	{
		Normal = 0,
		PreShow = 1,
	};
}
