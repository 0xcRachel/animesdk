#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int SerializationFormat_TypeDefinitionIndex = 1997;

	enum class SerializationFormat : ::System::Int32
	{
		Encoded = 0,
		Literal = 1,
	};
}
