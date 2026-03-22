#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_22.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_FLOORCUSTOMVALUESNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A7E900)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x17A7E210)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A7E420)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A7E3C0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A7E590)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_BOOLVAL_OFFSET UNITYSDK_OFFSET(0x17A7E320)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_FLOATVAL_OFFSET UNITYSDK_OFFSET(0x17A7E340)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17A7E2A0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_STRVAL_OFFSET UNITYSDK_OFFSET(0x17A7E360)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A7E300)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A7EC50)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A7EBD0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A7E180)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_BOOLVAL_OFFSET UNITYSDK_OFFSET(0x17A7E330)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_FLOATVAL_OFFSET UNITYSDK_OFFSET(0x17A7E350)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17A7E2B0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_STRVAL_OFFSET UNITYSDK_OFFSET(0x17A7E370)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A7E310)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A7E750)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A7E7B0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A7E1B0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7E190)

namespace Proto
{
	inline static constexpr unsigned int FloorCustomValueSnapshot_TypeDefinitionIndex = 22643;

	class FloorCustomValueSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 NameFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 TypeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 BoolValFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 FloatValFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 StrValFieldNumber = 0x5; // 0x0
		::System::String* name_; // 0x10
		::System::String* strVal_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Enum_3_0A3761FE34514D6C_22 type_; // 0x28
		::System::Boolean boolVal_; // 0x2C
		::System::Single floatVal_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::FloorCustomValueSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::FloorCustomValueSnapshot* Clone()
		{
			return ((::Proto::FloorCustomValueSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_NAME_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_22 get_Type()
		{
			return ((::Enum_3_0A3761FE34514D6C_22(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_0A3761FE34514D6C_22 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_22))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_BoolVal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_BOOLVAL_OFFSET))(this);
		}

		::System::Void set_BoolVal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_BOOLVAL_OFFSET))(this, value);
		}

		::System::Single get_FloatVal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_FLOATVAL_OFFSET))(this);
		}

		::System::Void set_FloatVal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_FLOATVAL_OFFSET))(this, value);
		}

		::System::String* get_StrVal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_STRVAL_OFFSET))(this);
		}

		::System::Void set_StrVal(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_STRVAL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::FloorCustomValueSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::FloorCustomValueSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
