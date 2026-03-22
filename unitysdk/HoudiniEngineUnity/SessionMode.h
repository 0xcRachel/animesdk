#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int SessionMode_TypeDefinitionIndex = 36831;

	enum class SessionMode : ::System::Int32
	{
		Socket = 0,
		Pipe = 1,
	};
}
