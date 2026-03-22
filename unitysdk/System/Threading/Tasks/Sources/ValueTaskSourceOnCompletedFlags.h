#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks::Sources
{
	inline static constexpr unsigned int ValueTaskSourceOnCompletedFlags_TypeDefinitionIndex = 8760;

	enum class ValueTaskSourceOnCompletedFlags : ::System::Int32
	{
		None = 0,
		UseSchedulingContext = 1,
		FlowExecutionContext = 2,
	};
}
