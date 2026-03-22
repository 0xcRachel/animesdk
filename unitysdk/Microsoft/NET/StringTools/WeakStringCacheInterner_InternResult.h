#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::NET::StringTools
{
	inline static constexpr unsigned int WeakStringCacheInterner_InternResult_TypeDefinitionIndex = 8819;

	enum class WeakStringCacheInterner_InternResult : ::System::Int32
	{
		FoundInWeakStringCache = 0,
		AddedToWeakStringCache = 1,
	};
}
