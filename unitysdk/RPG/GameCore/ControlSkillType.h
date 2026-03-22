#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ControlSkillType_TypeDefinitionIndex = 21230;

	enum class ControlSkillType : ::System::Int32
	{
		ControlSkill01 = 0,
		ControlSkill02 = 1,
		ControlSkill03 = 2,
		ControlSkill04 = 3,
		_Count = 4,
	};
}
