#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPopupSkillDescShowType_TypeDefinitionIndex = 70652;

	enum class DiceCombatPopupSkillDescShowType : ::System::Int32
	{
		PreparePage = 0,
		ResultWin = 1,
		ResultLose = 2,
	};
}
