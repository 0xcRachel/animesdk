#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceTypelessFormatter_1_TypeDefinitionIndex = 9837;

	template <typename T>
	class ForceTypelessFormatter_1 : public ::System::Object
	{
	public:
	};
}
