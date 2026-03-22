#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSpecialStatisticsType_TypeDefinitionIndex = 20913;

	enum class AvatarSpecialStatisticsType : ::System::Int32
	{
		FirstUltraDelay = 0,
		SkillTarget = 1,
	};
}
