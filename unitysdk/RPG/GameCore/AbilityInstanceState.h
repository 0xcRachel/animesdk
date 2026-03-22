#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityInstanceState_TypeDefinitionIndex = 42431;

	enum class AbilityInstanceState : ::System::Int32
	{
		EUnkonw = 0,
		Ready = 1,
		Executing = 2,
	};
}
