#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictType_TypeDefinitionIndex = 15500;

	enum class DistrictType : ::System::Int32
	{
		Sound = 0,
		Level = 1,
	};
}
