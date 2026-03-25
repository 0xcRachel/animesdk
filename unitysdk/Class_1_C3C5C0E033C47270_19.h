#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6242EC2CDE685F28;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C3C5C0E033C47270_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181ABBF0)
#define CLASS_1_C3C5C0E033C47270_19_CLONE_OFFSET UNITYSDK_OFFSET(0x181AB8D0)
#define CLASS_1_C3C5C0E033C47270_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181ABA40)
#define CLASS_1_C3C5C0E033C47270_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x181AB990)
#define CLASS_1_C3C5C0E033C47270_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181ABAE0)
#define CLASS_1_C3C5C0E033C47270_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181ABD30)
#define CLASS_1_C3C5C0E033C47270_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181ABC50)
#define CLASS_1_C3C5C0E033C47270_19_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x181AB970)
#define CLASS_1_C3C5C0E033C47270_19_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x181AB980)
#define CLASS_1_C3C5C0E033C47270_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181AB820)
#define CLASS_1_C3C5C0E033C47270_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181ABB30)
#define CLASS_1_C3C5C0E033C47270_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x181ABB90)
#define CLASS_1_C3C5C0E033C47270_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181AB840)
#define CLASS_1_C3C5C0E033C47270_19__CTOR_OFFSET UNITYSDK_OFFSET(0x181AB830)

inline static constexpr unsigned int Class_1_C3C5C0E033C47270_19_TypeDefinitionIndex = 27598;

class Class_1_C3C5C0E033C47270_19 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Class_1_6242EC2CDE685F28* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C3C5C0E033C47270_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_19*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C3C5C0E033C47270_19* Clone()
	{
		return ((::Class_1_C3C5C0E033C47270_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_CLONE_OFFSET))(this);
	}

	::Class_1_6242EC2CDE685F28* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6242EC2CDE685F28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6242EC2CDE685F28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6242EC2CDE685F28*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C3C5C0E033C47270_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C3C5C0E033C47270_19*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C3C5C0E033C47270_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_19*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
