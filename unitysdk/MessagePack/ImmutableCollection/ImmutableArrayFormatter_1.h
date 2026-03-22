#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Collections/Immutable/ImmutableArray_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableArrayFormatter_1_TypeDefinitionIndex = 9648;

	template <typename T>
	class ImmutableArrayFormatter_1 : public ::System::Object
	{
	public:
	};
}
