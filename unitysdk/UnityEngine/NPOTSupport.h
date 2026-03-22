#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NPOTSupport_TypeDefinitionIndex = 3958;

	enum class NPOTSupport : ::System::Int32
	{
		None = 0,
		Restricted = 1,
		Full = 2,
	};
}
