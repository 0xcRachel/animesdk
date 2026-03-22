#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class TypelessFormatter_DeserializeMethod; }
namespace MessagePack::Formatters { class TypelessFormatter_SerializeMethod; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { template <typename T1, typename T2, typename T3> class AsymmetricKeyHashTable_3; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_BUILDTYPENAME_OFFSET UNITYSDK_OFFSET(0x1563BAF0)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEBYTYPENAME_OFFSET UNITYSDK_OFFSET(0x1563E020)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1563DAA0)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1563BE10)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1563AD20)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1563BAE0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TypelessFormatter_TypeDefinitionIndex = 9838;

	class TypelessFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::AsymmetricKeyHashTable_3<::Il2CppArray<::System::Byte>*, ::System::ArraySegment_1<::System::Byte>, ::System::Type*>** StaticGet_TypeCache()
		{
			return (::MessagePack::Internal::AsymmetricKeyHashTable_3<::Il2CppArray<::System::Byte>*, ::System::ArraySegment_1<::System::Byte>, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter_TypeDefinitionIndex)->GetStaticField(0x24300);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_UseBuiltinTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter_TypeDefinitionIndex)->GetStaticField(0x24308);
		}
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::TypelessFormatter_DeserializeMethod*>** StaticGet_Deserializers()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::TypelessFormatter_DeserializeMethod*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter_TypeDefinitionIndex)->GetStaticField(0x24310);
		}
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::TypelessFormatter_SerializeMethod*>** StaticGet_Serializers()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::TypelessFormatter_SerializeMethod*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter_TypeDefinitionIndex)->GetStaticField(0x24318);
		}
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::Il2CppArray<::System::Byte>*>** StaticGet_ShortenedTypeNameCache()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter_TypeDefinitionIndex)->GetStaticField(0x24320);
		}
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::Il2CppArray<::System::Byte>*>** StaticGet_FullTypeNameCache()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter_TypeDefinitionIndex)->GetStaticField(0x24328);
		}
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter_TypeDefinitionIndex)->GetStaticField(0x24330);
		}
		static ::System::Boolean* StaticGet_IsMscorlib()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter_TypeDefinitionIndex)->GetStaticField(0x7630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER__CTOR_OFFSET))(this);
		}

		::System::String* BuildTypeName(::System::Type* type, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_BUILDTYPENAME_OFFSET))(this, type, options);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Object* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}

		::System::Object* DeserializeByTypeName(::System::ArraySegment_1<::System::Byte> typeName, ::MessagePack::MessagePackReader& byteSequence, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEBYTYPENAME_OFFSET))(this, typeName, byteSequence, options);
		}
	};
}
