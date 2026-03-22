#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Text { class Encoding; }

#define GOOGLE_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET UNITYSDK_OFFSET(0x153D3D70)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROMUTF8_OFFSET UNITYSDK_OFFSET(0x153D4220)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET UNITYSDK_OFFSET(0x153D4030)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_2_OFFSET UNITYSDK_OFFSET(0x153D40C0)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_3_OFFSET UNITYSDK_OFFSET(0x153D41D0)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x153D3F40)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYTO_OFFSET UNITYSDK_OFFSET(0x153D4A30)
#define GOOGLE_PROTOBUF_BYTESTRING_CREATECODEDINPUT_OFFSET UNITYSDK_OFFSET(0x153D4500)
#define GOOGLE_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x153D48C0)
#define GOOGLE_PROTOBUF_BYTESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x153D4770)
#define GOOGLE_PROTOBUF_BYTESTRING_FINALIZE_OFFSET UNITYSDK_OFFSET(0x153D3DF0)
#define GOOGLE_PROTOBUF_BYTESTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x153D4410)
#define GOOGLE_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x153D47C0)
#define GOOGLE_PROTOBUF_BYTESTRING_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x153D3E70)
#define GOOGLE_PROTOBUF_BYTESTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x153D3EA0)
#define GOOGLE_PROTOBUF_BYTESTRING_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x153D3EB0)
#define GOOGLE_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x153D4640)
#define GOOGLE_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x153D4730)
#define GOOGLE_PROTOBUF_BYTESTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x153D44F0)
#define GOOGLE_PROTOBUF_BYTESTRING_TOBASE64_OFFSET UNITYSDK_OFFSET(0x153D3F20)
#define GOOGLE_PROTOBUF_BYTESTRING_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x153D3EE0)
#define GOOGLE_PROTOBUF_BYTESTRING_TOSTRINGUTF8_OFFSET UNITYSDK_OFFSET(0x153D4360)
#define GOOGLE_PROTOBUF_BYTESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x153D4320)
#define GOOGLE_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET UNITYSDK_OFFSET(0x153D4900)
#define GOOGLE_PROTOBUF_BYTESTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x153D4A60)
#define GOOGLE_PROTOBUF_BYTESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x153D3DC0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ByteString_TypeDefinitionIndex = 6052;

	class ByteString : public ::System::Object
	{
	public:
		static ::Google::Protobuf::ByteString** StaticGet_empty()
		{
			return (::Google::Protobuf::ByteString**)Il2CppClass::FromTypeDefinitionIndex(ByteString_TypeDefinitionIndex)->GetStaticField(0x2940);
		}
		::Il2CppArray<::System::Byte>* bytes; // 0x10
		::System::Int32 length; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING__CTOR_OFFSET))(this, bytes, length);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::ByteString* AttachBytes(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 length)
		{
			return ((::Google::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET))(bytes, length);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_FINALIZE_OFFSET))(this);
		}

		static ::Google::Protobuf::ByteString* get_Empty()
		{
			return ((::Google::Protobuf::ByteString*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GET_EMPTY_OFFSET))();
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GET_LENGTH_OFFSET))(this);
		}

		::System::ReadOnlyMemory_1<::System::Byte> get_Memory()
		{
			return ((::System::ReadOnlyMemory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GET_MEMORY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_TOBYTEARRAY_OFFSET))(this);
		}

		::System::String* ToBase64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_TOBASE64_OFFSET))(this);
		}

		static ::Google::Protobuf::ByteString* CopyFrom(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Google::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_OFFSET))(bytes);
		}

		static ::Google::Protobuf::ByteString* CopyFrom_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Google::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET))(bytes, offset, count);
		}

		static ::Google::Protobuf::ByteString* CopyFrom_2(::System::ReadOnlySpan_1<::System::Byte> bytes)
		{
			return ((::Google::Protobuf::ByteString*(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_2_OFFSET))(bytes);
		}

		static ::Google::Protobuf::ByteString* CopyFrom_3(::System::String* text, ::System::Text::Encoding* encoding)
		{
			return ((::Google::Protobuf::ByteString*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_3_OFFSET))(text, encoding);
		}

		static ::Google::Protobuf::ByteString* CopyFromUtf8(::System::String* text)
		{
			return ((::Google::Protobuf::ByteString*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROMUTF8_OFFSET))(text);
		}

		::System::String* ToString(::System::Text::Encoding* encoding)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_TOSTRING_OFFSET))(this, encoding);
		}

		::System::String* ToStringUtf8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_TOSTRINGUTF8_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Byte>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::Google::Protobuf::CodedInputStream* CreateCodedInput()
		{
			return ((::Google::Protobuf::CodedInputStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_CREATECODEDINPUT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Google::Protobuf::ByteString* lhs, ::Google::Protobuf::ByteString* rhs)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::ByteString*, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::Google::Protobuf::ByteString* lhs, ::Google::Protobuf::ByteString* rhs)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::ByteString*, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::Google::Protobuf::ByteString* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET))(this, other);
		}

		::System::Void WriteRawBytesTo(::Google::Protobuf::CodedOutputStream* outputStream)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET))(this, outputStream);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Byte>* array, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYTO_OFFSET))(this, array, position);
		}
	};
}
