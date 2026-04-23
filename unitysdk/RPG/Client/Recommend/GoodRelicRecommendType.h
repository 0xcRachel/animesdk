#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int GoodRelicRecommendType_TypeDefinitionIndex = 68726;

	enum class GoodRelicRecommendType : ::System::Int32
	{
		None = 0,
		GoodRecommend = 1,
		GrowthRecommend = 2,
	};
}
