#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15430FF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CLONE_OFFSET UNITYSDK_OFFSET(0x15430D30)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15431670)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15430E60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x15430DC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15430EC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15430A70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_NANOS_OFFSET UNITYSDK_OFFSET(0x15430DA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15430A10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x15430D80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x15431390)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15431310)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15431170)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x154312A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15430BF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_NANOS_OFFSET UNITYSDK_OFFSET(0x15430DB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_SECONDS_OFFSET UNITYSDK_OFFSET(0x15430D90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x15431700)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOJSON_OFFSET UNITYSDK_OFFSET(0x154313C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15430F00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x15430F60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15431760)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15430C60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15430C50)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Timestamp_TypeDefinitionIndex = 6126;

	class Timestamp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Timestamp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Timestamp*>**)Il2CppClass::FromTypeDefinitionIndex(Timestamp_TypeDefinitionIndex)->GetStaticField(0xBDA0);
		}
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(Timestamp_TypeDefinitionIndex)->GetStaticField(0x4260);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 nanos_; // 0x18
		::System::Int64 seconds_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Timestamp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Timestamp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Timestamp*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Timestamp* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Timestamp*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CLONE_OFFSET))(this);
		}

		::System::Int64 get_Seconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_SECONDS_OFFSET))(this);
		}

		::System::Void set_Seconds(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_SECONDS_OFFSET))(this, value);
		}

		::System::Int32 get_Nanos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_NANOS_OFFSET))(this);
		}

		::System::Void set_Nanos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_NANOS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Timestamp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Timestamp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_1_OFFSET))(this, input);
		}

		static ::System::Boolean IsNormalized(::System::Int64 seconds, ::System::Int32 nanoseconds)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_ISNORMALIZED_OFFSET))(seconds, nanoseconds);
		}

		static ::System::String* ToJson(::System::Int64 seconds, ::System::Int32 nanoseconds, ::System::Boolean diagnosticOnly)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOJSON_OFFSET))(seconds, nanoseconds, diagnosticOnly);
		}

		::System::Int32 CompareTo(::Google::Protobuf::WellKnownTypes::Timestamp* other)
		{
			return ((::System::Int32(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_COMPARETO_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::Google::Protobuf::WellKnownTypes::Timestamp* a, ::Google::Protobuf::WellKnownTypes::Timestamp* b)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::WellKnownTypes::Timestamp*, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_OP_EQUALITY_OFFSET))(a, b);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TODIAGNOSTICSTRING_OFFSET))(this);
		}
	};
}
