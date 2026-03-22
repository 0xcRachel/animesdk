#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SuitRecommendDataType_TypeDefinitionIndex = 53271;

	enum class SuitRecommendDataType : ::System::Int32
	{
		BigData = 1,
		ConfigData = 2,
	};
}
