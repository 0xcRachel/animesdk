#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A50D00)
#define CLASS_1_A0360CE19DA90CEC_10_CLONE_OFFSET UNITYSDK_OFFSET(0x17A50A00)
#define CLASS_1_A0360CE19DA90CEC_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A50B80)
#define CLASS_1_A0360CE19DA90CEC_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A50AC0)
#define CLASS_1_A0360CE19DA90CEC_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A50BF0)
#define CLASS_1_A0360CE19DA90CEC_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A50D70)
#define CLASS_1_A0360CE19DA90CEC_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A50D30)
#define CLASS_1_A0360CE19DA90CEC_10_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17A50AB0)
#define CLASS_1_A0360CE19DA90CEC_10_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17A50A90)
#define CLASS_1_A0360CE19DA90CEC_10_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17A50AA0)
#define CLASS_1_A0360CE19DA90CEC_10_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17A50A80)
#define CLASS_1_A0360CE19DA90CEC_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A509A0)
#define CLASS_1_A0360CE19DA90CEC_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A50C20)
#define CLASS_1_A0360CE19DA90CEC_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A50C80)
#define CLASS_1_A0360CE19DA90CEC_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A509C0)
#define CLASS_1_A0360CE19DA90CEC_10__CTOR_OFFSET UNITYSDK_OFFSET(0x17A509B0)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_10_TypeDefinitionIndex = 23984;

class Class_1_A0360CE19DA90CEC_10 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_10*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_10* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_10*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_10*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
