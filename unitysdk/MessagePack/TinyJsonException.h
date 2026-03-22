#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSerializationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define MESSAGEPACK_TINYJSONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156A9610)
#define MESSAGEPACK_TINYJSONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x156A95B0)

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonException_TypeDefinitionIndex = 9401;

	class TinyJsonException : public ::MessagePack::MessagePackSerializationException
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONEXCEPTION__CTOR_OFFSET))(this, message);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}
	};
}
