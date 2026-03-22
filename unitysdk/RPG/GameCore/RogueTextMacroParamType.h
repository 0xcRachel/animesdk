#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTextMacroParamType_TypeDefinitionIndex = 13354;

	enum class RogueTextMacroParamType : ::System::Int32
	{
		None = 0,
		Number = 1,
		Buff = 100,
		Miracle = 101,
		Formula = 102,
		MagicUnit = 103,
		MagicScepter = 104,
		TitanBless = 105,
		MagicArea = 200,
	};
}
