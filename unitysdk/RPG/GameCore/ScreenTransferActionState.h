#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferActionState_TypeDefinitionIndex = 42294;

	enum class ScreenTransferActionState : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Finish = 2,
	};
}
