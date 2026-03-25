#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_6.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B9C1E0)
#define CLASS_1_4DC6841D62972C54_18_CLONE_OFFSET UNITYSDK_OFFSET(0x17B9BF60)
#define CLASS_1_4DC6841D62972C54_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B9C090)
#define CLASS_1_4DC6841D62972C54_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B9BFF0)
#define CLASS_1_4DC6841D62972C54_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B9C0E0)
#define CLASS_1_4DC6841D62972C54_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B9C2E0)
#define CLASS_1_4DC6841D62972C54_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B9C2B0)
#define CLASS_1_4DC6841D62972C54_18_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17B9BFE0)
#define CLASS_1_4DC6841D62972C54_18_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17B9BFD0)
#define CLASS_1_4DC6841D62972C54_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B9BF10)
#define CLASS_1_4DC6841D62972C54_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B9C110)
#define CLASS_1_4DC6841D62972C54_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B9C170)
#define CLASS_1_4DC6841D62972C54_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B9BF30)
#define CLASS_1_4DC6841D62972C54_18__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9BF20)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_18_TypeDefinitionIndex = 26202;

class Class_1_4DC6841D62972C54_18 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_01618AD0437C8486_6 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_18*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_18* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_CLONE_OFFSET))(this);
	}

	::Enum_3_01618AD0437C8486_6 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486_6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_6))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_18*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_18*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
