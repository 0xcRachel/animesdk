#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMonsterDropType_TypeDefinitionIndex = 13337;

	enum class RogueMonsterDropType : ::System::Int32
	{
		None = 0,
		AreaDrop = 1,
	};
}
