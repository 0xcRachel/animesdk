#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_VECTORSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182B65C0)
#define PROTO_VECTORSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x182B6210)
#define PROTO_VECTORSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182B63A0)
#define PROTO_VECTORSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x182B62F0)
#define PROTO_VECTORSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182B6410)
#define PROTO_VECTORSNAPSHOT_GET_X_OFFSET UNITYSDK_OFFSET(0x182B6290)
#define PROTO_VECTORSNAPSHOT_GET_Y_OFFSET UNITYSDK_OFFSET(0x182B62B0)
#define PROTO_VECTORSNAPSHOT_GET_Z_OFFSET UNITYSDK_OFFSET(0x182B62D0)
#define PROTO_VECTORSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182B67C0)
#define PROTO_VECTORSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182B6770)
#define PROTO_VECTORSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182B61B0)
#define PROTO_VECTORSNAPSHOT_SET_X_OFFSET UNITYSDK_OFFSET(0x182B62A0)
#define PROTO_VECTORSNAPSHOT_SET_Y_OFFSET UNITYSDK_OFFSET(0x182B62C0)
#define PROTO_VECTORSNAPSHOT_SET_Z_OFFSET UNITYSDK_OFFSET(0x182B62E0)
#define PROTO_VECTORSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182B6440)
#define PROTO_VECTORSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x182B64A0)
#define PROTO_VECTORSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182B61D0)
#define PROTO_VECTORSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x182B61C0)

namespace Proto
{
	inline static constexpr unsigned int VectorSnapshot_TypeDefinitionIndex = 23212;

	class VectorSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 XFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 YFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 ZFieldNumber = 0x3; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 z_; // 0x18
		::System::Int32 y_; // 0x1C
		::System::Int32 x_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::VectorSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::VectorSnapshot* Clone()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_SET_X_OFFSET))(this, value);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_SET_Y_OFFSET))(this, value);
		}

		::System::Int32 get_Z()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GET_Z_OFFSET))(this);
		}

		::System::Void set_Z(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_SET_Z_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::VectorSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::VectorSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
