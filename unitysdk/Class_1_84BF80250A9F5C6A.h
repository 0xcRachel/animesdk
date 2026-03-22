#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_12;
class Class_1_E3724F6DA9607B7D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_84BF80250A9F5C6A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1783D9C0)
#define CLASS_1_84BF80250A9F5C6A_CLONE_OFFSET UNITYSDK_OFFSET(0x1783D5B0)
#define CLASS_1_84BF80250A9F5C6A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1783D790)
#define CLASS_1_84BF80250A9F5C6A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1783D6A0)
#define CLASS_1_84BF80250A9F5C6A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1783D870)
#define CLASS_1_84BF80250A9F5C6A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1783DAF0)
#define CLASS_1_84BF80250A9F5C6A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1783DA50)
#define CLASS_1_84BF80250A9F5C6A_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1783D680)
#define CLASS_1_84BF80250A9F5C6A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1783D660)
#define CLASS_1_84BF80250A9F5C6A_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1783D690)
#define CLASS_1_84BF80250A9F5C6A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1783D670)
#define CLASS_1_84BF80250A9F5C6A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1783D4F0)
#define CLASS_1_84BF80250A9F5C6A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1783D8D0)
#define CLASS_1_84BF80250A9F5C6A_WRITETO_OFFSET UNITYSDK_OFFSET(0x1783D930)
#define CLASS_1_84BF80250A9F5C6A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1783D510)
#define CLASS_1_84BF80250A9F5C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1783D500)

inline static constexpr unsigned int Class_1_84BF80250A9F5C6A_TypeDefinitionIndex = 25623;

class Class_1_84BF80250A9F5C6A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6F8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x357; // 0x0
	::Class_1_E3724F6DA9607B7D* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_C9DFE5EE7107C629_12* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_84BF80250A9F5C6A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_84BF80250A9F5C6A* Clone()
	{
		return ((::Class_1_84BF80250A9F5C6A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_CLONE_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_E3724F6DA9607B7D* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_E3724F6DA9607B7D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_E3724F6DA9607B7D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3724F6DA9607B7D*))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_84BF80250A9F5C6A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_84BF80250A9F5C6A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_84BF80250A9F5C6A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
