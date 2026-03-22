#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceToastType_TypeDefinitionIndex = 19486;

	enum class ConvinceToastType : ::System::Int32
	{
		Start = 0,
		Success = 1,
		Failure = 2,
		SkillCast = 3,
	};
}
