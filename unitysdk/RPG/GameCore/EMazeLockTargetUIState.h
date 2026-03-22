#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EMazeLockTargetUIState_TypeDefinitionIndex = 45400;

	enum class EMazeLockTargetUIState : ::System::Int32
	{
		OutOfUIOffset = 0,
		InUIOffset = 1,
	};
}
