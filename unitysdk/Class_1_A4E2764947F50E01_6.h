#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_49.h"
#include "unitysdk/System/Object.h"

class Class_1_01FA9B67F39C1E6F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A4E2764947F50E01_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17434D90)
#define CLASS_1_A4E2764947F50E01_6_CLONE_OFFSET UNITYSDK_OFFSET(0x174349D0)
#define CLASS_1_A4E2764947F50E01_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17434BB0)
#define CLASS_1_A4E2764947F50E01_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17434AD0)
#define CLASS_1_A4E2764947F50E01_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17434C60)
#define CLASS_1_A4E2764947F50E01_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17434F30)
#define CLASS_1_A4E2764947F50E01_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17434EA0)
#define CLASS_1_A4E2764947F50E01_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17434AB0)
#define CLASS_1_A4E2764947F50E01_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17434AA0)
#define CLASS_1_A4E2764947F50E01_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17434AC0)
#define CLASS_1_A4E2764947F50E01_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17434A90)
#define CLASS_1_A4E2764947F50E01_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17434930)
#define CLASS_1_A4E2764947F50E01_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17434CA0)
#define CLASS_1_A4E2764947F50E01_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x17434D00)
#define CLASS_1_A4E2764947F50E01_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17434950)
#define CLASS_1_A4E2764947F50E01_6__CTOR_OFFSET UNITYSDK_OFFSET(0x17434940)

inline static constexpr unsigned int Class_1_A4E2764947F50E01_6_TypeDefinitionIndex = 25177;

class Class_1_A4E2764947F50E01_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_01FA9B67F39C1E6F* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_0A3761FE34514D6C_49 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A4E2764947F50E01_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_6*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A4E2764947F50E01_6* Clone()
	{
		return ((::Class_1_A4E2764947F50E01_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_49 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_49(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_49 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_49))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_01FA9B67F39C1E6F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_01FA9B67F39C1E6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_01FA9B67F39C1E6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_01FA9B67F39C1E6F*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A4E2764947F50E01_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A4E2764947F50E01_6*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A4E2764947F50E01_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_6*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
