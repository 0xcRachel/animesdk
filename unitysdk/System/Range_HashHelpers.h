#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RANGE_HASHHELPERS_COMBINE_OFFSET UNITYSDK_OFFSET(0x156ACDA0)

namespace System
{
	inline static constexpr unsigned int Range_HashHelpers_TypeDefinitionIndex = 9856;

	class Range_HashHelpers : public ::System::Object
	{
	public:
		static ::System::Int32 Combine(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_HASHHELPERS_COMBINE_OFFSET))(h1, h2);
		}
	};
}
