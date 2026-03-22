#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StimulusPositionType_TypeDefinitionIndex = 18345;

	enum class StimulusPositionType : ::System::Int32
	{
		Owner = 0,
		Target = 1,
	};
}
