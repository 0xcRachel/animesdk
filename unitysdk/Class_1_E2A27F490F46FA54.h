#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2A27F490F46FA54_Enum_3_2E741879C8CDBAFC_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E2A27F490F46FA54_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177F0C30)
#define CLASS_1_E2A27F490F46FA54_CLONE_OFFSET UNITYSDK_OFFSET(0x177F0750)
#define CLASS_1_E2A27F490F46FA54_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177F07D0)
#define CLASS_1_E2A27F490F46FA54_EQUALS_OFFSET UNITYSDK_OFFSET(0x177F07A0)
#define CLASS_1_E2A27F490F46FA54_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177F0900)
#define CLASS_1_E2A27F490F46FA54_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177F0F50)
#define CLASS_1_E2A27F490F46FA54_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177F0CA0)
#define CLASS_1_E2A27F490F46FA54_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x177F0780)
#define CLASS_1_E2A27F490F46FA54_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x177F0790)
#define CLASS_1_E2A27F490F46FA54_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x177F0730)
#define CLASS_1_E2A27F490F46FA54_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x177F06C0)
#define CLASS_1_E2A27F490F46FA54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177F0610)
#define CLASS_1_E2A27F490F46FA54_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177F0B50)
#define CLASS_1_E2A27F490F46FA54_WRITETO_OFFSET UNITYSDK_OFFSET(0x177F0BB0)
#define CLASS_1_E2A27F490F46FA54__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177F0630)
#define CLASS_1_E2A27F490F46FA54__CTOR_OFFSET UNITYSDK_OFFSET(0x177F0620)

inline static constexpr unsigned int Class_1_E2A27F490F46FA54_TypeDefinitionIndex = 22455;

class Class_1_E2A27F490F46FA54 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x65; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_2; // 0x18
	::Class_1_E2A27F490F46FA54_Enum_3_2E741879C8CDBAFC_1 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E2A27F490F46FA54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2A27F490F46FA54*))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E2A27F490F46FA54* Clone()
	{
		return ((::Class_1_E2A27F490F46FA54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_CLONE_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_5FEFAED860528596*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FEFAED860528596* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596*))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_E2A27F490F46FA54_Enum_3_2E741879C8CDBAFC_1 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_E2A27F490F46FA54_Enum_3_2E741879C8CDBAFC_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E2A27F490F46FA54* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E2A27F490F46FA54*))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E2A27F490F46FA54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2A27F490F46FA54*))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E2A27F490F46FA54_MERGEFROM_1_OFFSET))(this, a1);
	}
};
