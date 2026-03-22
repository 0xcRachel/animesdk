#pragma once
#include "unitysdk/unitysdk.h"

namespace IRIClusterBuilder::Test
{
	inline static constexpr unsigned int IRICarTestManager_EPositionMode_TypeDefinitionIndex = 37678;

	enum class IRICarTestManager_EPositionMode : ::System::Int32
	{
		Random = 0,
		Fix = 1,
	};
}
