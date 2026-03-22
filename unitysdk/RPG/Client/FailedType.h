#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FailedType_TypeDefinitionIndex = 47098;

	enum class FailedType : ::System::Int32
	{
		Immediate = 0,
		OnAllFinish = 1,
		Ingore = 2,
	};
}
