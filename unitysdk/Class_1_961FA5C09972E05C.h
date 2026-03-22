#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
#include "unitysdk/System/Object.h"

class Class_1_98648721E1B1456D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_961FA5C09972E05C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17886D50)
#define CLASS_1_961FA5C09972E05C_CLONE_OFFSET UNITYSDK_OFFSET(0x17886830)
#define CLASS_1_961FA5C09972E05C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17886A70)
#define CLASS_1_961FA5C09972E05C_EQUALS_OFFSET UNITYSDK_OFFSET(0x17886980)
#define CLASS_1_961FA5C09972E05C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17886B30)
#define CLASS_1_961FA5C09972E05C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17887000)
#define CLASS_1_961FA5C09972E05C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17886F50)
#define CLASS_1_961FA5C09972E05C_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17886940)
#define CLASS_1_961FA5C09972E05C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17886920)
#define CLASS_1_961FA5C09972E05C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17886960)
#define CLASS_1_961FA5C09972E05C_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17886910)
#define CLASS_1_961FA5C09972E05C_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17886950)
#define CLASS_1_961FA5C09972E05C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17886930)
#define CLASS_1_961FA5C09972E05C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17886970)
#define CLASS_1_961FA5C09972E05C_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17886900)
#define CLASS_1_961FA5C09972E05C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17886780)
#define CLASS_1_961FA5C09972E05C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17886C00)
#define CLASS_1_961FA5C09972E05C_WRITETO_OFFSET UNITYSDK_OFFSET(0x17886C60)
#define CLASS_1_961FA5C09972E05C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178867A0)
#define CLASS_1_961FA5C09972E05C__CTOR_OFFSET UNITYSDK_OFFSET(0x17886790)

inline static constexpr unsigned int Class_1_961FA5C09972E05C_TypeDefinitionIndex = 22428;

class Class_1_961FA5C09972E05C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_98648721E1B1456D* Field_1_8; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::Enum_3_F80BFD5B986D5503_2 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_961FA5C09972E05C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_961FA5C09972E05C*))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_961FA5C09972E05C* Clone()
	{
		return ((::Class_1_961FA5C09972E05C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_CLONE_OFFSET))(this);
	}

	::Enum_3_F80BFD5B986D5503_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_F80BFD5B986D5503_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_F80BFD5B986D5503_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_2))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_98648721E1B1456D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_98648721E1B1456D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_98648721E1B1456D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98648721E1B1456D*))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_961FA5C09972E05C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_961FA5C09972E05C*))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_961FA5C09972E05C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_961FA5C09972E05C*))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_961FA5C09972E05C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
