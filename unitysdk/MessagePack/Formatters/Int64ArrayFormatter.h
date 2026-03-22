#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT64ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15630140)
#define MESSAGEPACK_FORMATTERS_INT64ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15630010)
#define MESSAGEPACK_FORMATTERS_INT64ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15630330)
#define MESSAGEPACK_FORMATTERS_INT64ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15630000)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int64ArrayFormatter_TypeDefinitionIndex = 9774;

	class Int64ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int64ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int64ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(Int64ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x23D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Int64>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Int64>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Int64>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
