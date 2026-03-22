#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeBattleType_TypeDefinitionIndex = 11253;

	enum class StrongChallengeBattleType : ::System::Int32
	{
		Normal = 1,
		Hard = 2,
	};
}
