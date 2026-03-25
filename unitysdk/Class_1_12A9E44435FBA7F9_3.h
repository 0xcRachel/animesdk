#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7EDAB23D97798C5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12A9E44435FBA7F9_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FFB290)
#define CLASS_1_12A9E44435FBA7F9_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17FFAF90)
#define CLASS_1_12A9E44435FBA7F9_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FFB0E0)
#define CLASS_1_12A9E44435FBA7F9_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FFB030)
#define CLASS_1_12A9E44435FBA7F9_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FFB180)
#define CLASS_1_12A9E44435FBA7F9_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FFB360)
#define CLASS_1_12A9E44435FBA7F9_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FFB2F0)
#define CLASS_1_12A9E44435FBA7F9_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FFB010)
#define CLASS_1_12A9E44435FBA7F9_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FFB020)
#define CLASS_1_12A9E44435FBA7F9_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FFAF00)
#define CLASS_1_12A9E44435FBA7F9_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FFB1D0)
#define CLASS_1_12A9E44435FBA7F9_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FFB230)
#define CLASS_1_12A9E44435FBA7F9_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FFAF20)
#define CLASS_1_12A9E44435FBA7F9_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17FFAF10)

inline static constexpr unsigned int Class_1_12A9E44435FBA7F9_3_TypeDefinitionIndex = 24284;

class Class_1_12A9E44435FBA7F9_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Class_1_E7EDAB23D97798C5* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12A9E44435FBA7F9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_3*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12A9E44435FBA7F9_3* Clone()
	{
		return ((::Class_1_12A9E44435FBA7F9_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_CLONE_OFFSET))(this);
	}

	::Class_1_E7EDAB23D97798C5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7EDAB23D97798C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7EDAB23D97798C5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7EDAB23D97798C5*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12A9E44435FBA7F9_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_3*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12A9E44435FBA7F9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_3*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
