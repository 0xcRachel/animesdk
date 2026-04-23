#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_NULLABLE_GETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1950F840)

namespace System
{
	inline static constexpr unsigned int Nullable_TypeDefinitionIndex = 410;

	class Nullable : public ::System::Object
	{
	public:
		static ::System::Type* GetUnderlyingType(::System::Type* nullableType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE_GETUNDERLYINGTYPE_OFFSET))(nullableType);
		}
	};
}
