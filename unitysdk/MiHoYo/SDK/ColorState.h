#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ColorState_TypeDefinitionIndex = 6895;

	enum class ColorState : ::System::Int32
	{
		Normal = 0,
		Highlighted = 1,
		Pressed = 2,
		Disabled = 3,
	};
}
