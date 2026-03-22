#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DefaultMatType_TypeDefinitionIndex = 28290;

	enum class DefaultMatType : ::System::Int32
	{
		Unlit = 0,
		Particle = 1,
		UI = 2,
	};
}
