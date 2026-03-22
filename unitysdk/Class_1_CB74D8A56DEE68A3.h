#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
class Class_1_E7C4009BCC22497A_75;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_CB74D8A56DEE68A3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176FDC20)
#define CLASS_1_CB74D8A56DEE68A3_CLONE_OFFSET UNITYSDK_OFFSET(0x176FD6D0)
#define CLASS_1_CB74D8A56DEE68A3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176FD940)
#define CLASS_1_CB74D8A56DEE68A3_EQUALS_OFFSET UNITYSDK_OFFSET(0x176FD840)
#define CLASS_1_CB74D8A56DEE68A3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176FDA40)
#define CLASS_1_CB74D8A56DEE68A3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176FDFA0)
#define CLASS_1_CB74D8A56DEE68A3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176FDE50)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x176FD800)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x176FD820)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x176FD7E0)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x176FD810)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x176FD830)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x176FD7F0)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x176FD7D0)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x176FD7B0)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x176FD7C0)
#define CLASS_1_CB74D8A56DEE68A3_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x176FD7A0)
#define CLASS_1_CB74D8A56DEE68A3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176FD5F0)
#define CLASS_1_CB74D8A56DEE68A3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176FDA90)
#define CLASS_1_CB74D8A56DEE68A3_WRITETO_OFFSET UNITYSDK_OFFSET(0x176FDAF0)
#define CLASS_1_CB74D8A56DEE68A3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176FD610)
#define CLASS_1_CB74D8A56DEE68A3__CTOR_OFFSET UNITYSDK_OFFSET(0x176FD600)

inline static constexpr unsigned int Class_1_CB74D8A56DEE68A3_TypeDefinitionIndex = 25820;

class Class_1_CB74D8A56DEE68A3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_4D5D53619B020DDD* Field_1_10; // 0x18
	::Class_1_E7C4009BCC22497A_75* Field_1_6; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CB74D8A56DEE68A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB74D8A56DEE68A3*))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CB74D8A56DEE68A3* Clone()
	{
		return ((::Class_1_CB74D8A56DEE68A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::Class_1_E7C4009BCC22497A_75* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7C4009BCC22497A_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_75*))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CB74D8A56DEE68A3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CB74D8A56DEE68A3*))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CB74D8A56DEE68A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB74D8A56DEE68A3*))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CB74D8A56DEE68A3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
