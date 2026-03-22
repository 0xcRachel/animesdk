#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 9400;

	enum class ValueType : ::System::Byte
	{
		Null = 0x0,
		True = 0x1,
		False = 0x2,
		Double = 0x3,
		Long = 0x4,
		ULong = 0x5,
		Decimal = 0x6,
		String = 0x7,
	};
}
