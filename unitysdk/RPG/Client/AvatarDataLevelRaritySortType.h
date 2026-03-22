#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataLevelRaritySortType_TypeDefinitionIndex = 49669;

	enum class AvatarDataLevelRaritySortType : ::System::Int32
	{
		None = 0,
		Level = 1,
		Rarity = 2,
	};
}
