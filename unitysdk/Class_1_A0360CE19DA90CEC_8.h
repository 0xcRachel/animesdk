#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x178E5C00)
#define CLASS_1_A0360CE19DA90CEC_8_CLONE_OFFSET UNITYSDK_OFFSET(0x178E5770)
#define CLASS_1_A0360CE19DA90CEC_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178E5990)
#define CLASS_1_A0360CE19DA90CEC_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x178E5890)
#define CLASS_1_A0360CE19DA90CEC_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178E5A50)
#define CLASS_1_A0360CE19DA90CEC_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178E5CD0)
#define CLASS_1_A0360CE19DA90CEC_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178E5C70)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x178E5820)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x178E5840)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x178E5860)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x178E5880)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x178E5800)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x178E5810)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x178E5830)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x178E5850)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x178E5870)
#define CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x178E57F0)
#define CLASS_1_A0360CE19DA90CEC_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178E5710)
#define CLASS_1_A0360CE19DA90CEC_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178E5AA0)
#define CLASS_1_A0360CE19DA90CEC_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x178E5B00)
#define CLASS_1_A0360CE19DA90CEC_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178E5730)
#define CLASS_1_A0360CE19DA90CEC_8__CTOR_OFFSET UNITYSDK_OFFSET(0x178E5720)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_8_TypeDefinitionIndex = 23924;

class Class_1_A0360CE19DA90CEC_8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_8; // 0x19
	::System::Boolean Field_1_4; // 0x1A
	::System::Boolean Field_1_6; // 0x1B
	::System::Boolean Field_1_10; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_8*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_8* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_METHOD_1_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_8*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_8*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
