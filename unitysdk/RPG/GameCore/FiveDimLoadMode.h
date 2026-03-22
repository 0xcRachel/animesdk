#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLoadMode_TypeDefinitionIndex = 17232;

	enum class FiveDimLoadMode : ::System::Int32
	{
		All = 0,
		Visible = 1,
		None = 2,
	};
}
