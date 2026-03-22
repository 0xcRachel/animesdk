#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGableRarity_TypeDefinitionIndex = 53426;

	enum class RogueGableRarity : ::System::Int32
	{
		Negative = 0,
		Common = 1,
		Rare = 2,
		SuperRare = 3,
	};
}
