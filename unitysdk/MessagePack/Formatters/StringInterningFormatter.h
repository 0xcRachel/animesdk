#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class String; }

#define MESSAGEPACK_FORMATTERS_STRINGINTERNINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1563A6E0)
#define MESSAGEPACK_FORMATTERS_STRINGINTERNINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1563AC10)
#define MESSAGEPACK_FORMATTERS_STRINGINTERNINGFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1563AC20)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int StringInterningFormatter_TypeDefinitionIndex = 9828;

	class StringInterningFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGINTERNINGFORMATTER__CTOR_OFFSET))(this);
		}

		::System::String* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::String*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGINTERNINGFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::String* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::String*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGINTERNINGFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}
	};
}
