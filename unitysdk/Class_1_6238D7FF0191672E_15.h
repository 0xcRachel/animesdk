#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_75;
class Class_1_4CF8088A158DCE25_76;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6238D7FF0191672E_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1798B5D0)
#define CLASS_1_6238D7FF0191672E_15_CLONE_OFFSET UNITYSDK_OFFSET(0x1798B100)
#define CLASS_1_6238D7FF0191672E_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1798B360)
#define CLASS_1_6238D7FF0191672E_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1798B270)
#define CLASS_1_6238D7FF0191672E_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1798B450)
#define CLASS_1_6238D7FF0191672E_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1798B800)
#define CLASS_1_6238D7FF0191672E_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1798B6D0)
#define CLASS_1_6238D7FF0191672E_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1798B210)
#define CLASS_1_6238D7FF0191672E_15_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1798B250)
#define CLASS_1_6238D7FF0191672E_15_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1798B230)
#define CLASS_1_6238D7FF0191672E_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1798B220)
#define CLASS_1_6238D7FF0191672E_15_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1798B260)
#define CLASS_1_6238D7FF0191672E_15_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1798B240)
#define CLASS_1_6238D7FF0191672E_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1798AFE0)
#define CLASS_1_6238D7FF0191672E_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1798B4D0)
#define CLASS_1_6238D7FF0191672E_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1798B530)
#define CLASS_1_6238D7FF0191672E_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1798B000)
#define CLASS_1_6238D7FF0191672E_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1798AFF0)

inline static constexpr unsigned int Class_1_6238D7FF0191672E_15_TypeDefinitionIndex = 26093;

class Class_1_6238D7FF0191672E_15 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Class_1_4CF8088A158DCE25_76* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_4CF8088A158DCE25_75* Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6238D7FF0191672E_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_15*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6238D7FF0191672E_15* Clone()
	{
		return ((::Class_1_6238D7FF0191672E_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_4CF8088A158DCE25_76* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4CF8088A158DCE25_76*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4CF8088A158DCE25_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_76*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_4CF8088A158DCE25_75* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4CF8088A158DCE25_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4CF8088A158DCE25_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_75*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6238D7FF0191672E_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6238D7FF0191672E_15*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6238D7FF0191672E_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_15*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
