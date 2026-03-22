#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonToken_TypeDefinitionIndex = 9399;

	enum class TinyJsonToken : ::System::Int32
	{
		None = 0,
		StartObject = 1,
		EndObject = 2,
		StartArray = 3,
		EndArray = 4,
		Number = 5,
		String = 6,
		True = 7,
		False = 8,
		Null = 9,
	};
}
