#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::IO { class Stream; }
namespace System::Threading::Tasks { class Task; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15695B00)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x156955D0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x156957C0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x156958B0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x156959E0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x156954F0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_GET_DEFAULTOPTIONS_OFFSET UNITYSDK_OFFSET(0x15694E30)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x156953F0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x15694FE0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x15695200)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x156952F0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15694EF0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SET_DEFAULTOPTIONS_OFFSET UNITYSDK_OFFSET(0x15694E90)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15695C20)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_Typeless_TypeDefinitionIndex = 9454;

	class MessagePackSerializer_Typeless : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet__DefaultOptions_k__BackingField()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_Typeless_TypeDefinitionIndex)->GetStaticField(0x27330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS__CCTOR_OFFSET))();
		}

		static ::MessagePack::MessagePackSerializerOptions* get_DefaultOptions()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_GET_DEFAULTOPTIONS_OFFSET))();
		}

		static ::System::Void set_DefaultOptions(::MessagePack::MessagePackSerializerOptions* value)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SET_DEFAULTOPTIONS_OFFSET))(value);
		}

		static ::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZE_OFFSET))(writer, obj, options);
		}

		static ::System::Void Serialize_1(::System::Buffers::IBufferWriter_1<::System::Byte>* writer, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::System::Buffers::IBufferWriter_1<::System::Byte>*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZE_1_OFFSET))(writer, obj, options, cancellationToken);
		}

		static ::Il2CppArray<::System::Byte>* Serialize_2(::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZE_2_OFFSET))(obj, options, cancellationToken);
		}

		static ::System::Void Serialize_3(::System::IO::Stream* stream, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZE_3_OFFSET))(stream, obj, options, cancellationToken);
		}

		static ::System::Threading::Tasks::Task* SerializeAsync(::System::IO::Stream* stream, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_SERIALIZEASYNC_OFFSET))(stream, obj, options, cancellationToken);
		}

		static ::System::Object* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_OFFSET))(reader, options);
		}

		static ::System::Object* Deserialize_1(::System::Buffers::ReadOnlySequence_1<::System::Byte>& byteSequence, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Object*(*)(::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_1_OFFSET))(byteSequence, options, cancellationToken);
		}

		static ::System::Object* Deserialize_2(::System::IO::Stream* stream, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Object*(*)(::System::IO::Stream*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_2_OFFSET))(stream, options, cancellationToken);
		}

		static ::System::Object* Deserialize_3(::System::Memory_1<::System::Byte> bytes, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Object*(*)(::System::Memory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_3_OFFSET))(bytes, options, cancellationToken);
		}

		static ::System::Object* Deserialize_4(::System::ReadOnlyMemory_1<::System::Byte> bytes, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Object*(*)(::System::ReadOnlyMemory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZE_4_OFFSET))(bytes, options, cancellationToken);
		}

		static ::System::Threading::Tasks::ValueTask_1<::System::Object*> DeserializeAsync(::System::IO::Stream* stream, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Object*>(*)(::System::IO::Stream*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TYPELESS_DESERIALIZEASYNC_OFFSET))(stream, options, cancellationToken);
		}
	};
}
