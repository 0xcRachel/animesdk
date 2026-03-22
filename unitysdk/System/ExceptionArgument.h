#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ExceptionArgument_TypeDefinitionIndex = 8757;

	enum class ExceptionArgument : ::System::Int32
	{
		task = 0,
		source = 1,
		state = 2,
	};
}
