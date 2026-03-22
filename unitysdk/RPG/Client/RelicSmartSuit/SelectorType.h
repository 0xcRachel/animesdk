#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int SelectorType_TypeDefinitionIndex = 59442;

	enum class SelectorType : ::System::Int32
	{
		OneOuterSet = 0,
		TwoOuterSet = 1,
		Specific = 2,
		OneOuterSetEnum = 3,
		TwoOuterSetEnum = 4,
	};
}
