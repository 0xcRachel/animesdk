#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldSimpleTriggerType_TypeDefinitionIndex = 58885;

	enum class OpenWorldSimpleTriggerType : ::System::Int32
	{
		Sphere = 0,
		Prism = 1,
	};
}
