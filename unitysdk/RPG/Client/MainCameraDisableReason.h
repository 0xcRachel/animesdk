#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MainCameraDisableReason_TypeDefinitionIndex = 55337;

	enum class MainCameraDisableReason : ::System::Int32
	{
		ScreenTransfer = 0,
		Video = 1,
	};
}
