#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EAudienceHideReason_TypeDefinitionIndex = 54949;

	enum class EAudienceHideReason : ::System::Int32
	{
		Default = 0,
		BattleArea = 1,
	};
}
