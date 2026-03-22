#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EGameDevPhasePage_TypeDefinitionIndex = 48453;

	enum class EGameDevPhasePage : ::System::Int32
	{
		Main = 0,
		Maze = 1,
	};
}
