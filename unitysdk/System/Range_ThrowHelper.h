#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RANGE_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x156AD0E0)

namespace System
{
	inline static constexpr unsigned int Range_ThrowHelper_TypeDefinitionIndex = 9857;

	class Range_ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowArgumentOutOfRangeException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RANGE_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))();
		}
	};
}
