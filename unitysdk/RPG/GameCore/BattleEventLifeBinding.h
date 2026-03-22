#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventLifeBinding_TypeDefinitionIndex = 14879;

	enum class BattleEventLifeBinding : ::System::Int32
	{
		None = 0,
		Caster = 1,
		OrignalCaster = 2,
	};
}
