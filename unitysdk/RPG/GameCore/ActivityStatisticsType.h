#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityStatisticsType_TypeDefinitionIndex = 20915;

	enum class ActivityStatisticsType : ::System::Int32
	{
		Common_BattleTargetScore = 0,
		LocalLegend_MonsterChangeCnt = 1,
	};
}
