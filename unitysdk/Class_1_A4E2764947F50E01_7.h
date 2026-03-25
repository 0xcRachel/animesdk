#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_15.h"
#include "unitysdk/System/Object.h"

class Class_1_A6E8044A28978D2E_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A4E2764947F50E01_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C29D60)
#define CLASS_1_A4E2764947F50E01_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17C29980)
#define CLASS_1_A4E2764947F50E01_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C29B70)
#define CLASS_1_A4E2764947F50E01_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C29A90)
#define CLASS_1_A4E2764947F50E01_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C29C20)
#define CLASS_1_A4E2764947F50E01_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C29F00)
#define CLASS_1_A4E2764947F50E01_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C29E70)
#define CLASS_1_A4E2764947F50E01_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C29A50)
#define CLASS_1_A4E2764947F50E01_7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17C29A80)
#define CLASS_1_A4E2764947F50E01_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C29A60)
#define CLASS_1_A4E2764947F50E01_7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17C29A70)
#define CLASS_1_A4E2764947F50E01_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C298D0)
#define CLASS_1_A4E2764947F50E01_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C29C70)
#define CLASS_1_A4E2764947F50E01_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C29CD0)
#define CLASS_1_A4E2764947F50E01_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C298F0)
#define CLASS_1_A4E2764947F50E01_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17C298E0)

inline static constexpr unsigned int Class_1_A4E2764947F50E01_7_TypeDefinitionIndex = 27251;

class Class_1_A4E2764947F50E01_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Class_1_A6E8044A28978D2E_1* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_F80BFD5B986D5503_15 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A4E2764947F50E01_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_7*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A4E2764947F50E01_7* Clone()
	{
		return ((::Class_1_A4E2764947F50E01_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_CLONE_OFFSET))(this);
	}

	::Class_1_A6E8044A28978D2E_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A6E8044A28978D2E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A6E8044A28978D2E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6E8044A28978D2E_1*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_F80BFD5B986D5503_15 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_F80BFD5B986D5503_15(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_F80BFD5B986D5503_15 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_15))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A4E2764947F50E01_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A4E2764947F50E01_7*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A4E2764947F50E01_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_7*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
