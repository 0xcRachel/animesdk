#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01FA9B67F39C1E6F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E2E44FDCCFF6FA83_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177A7180)
#define CLASS_1_E2E44FDCCFF6FA83_19_CLONE_OFFSET UNITYSDK_OFFSET(0x177A6E10)
#define CLASS_1_E2E44FDCCFF6FA83_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177A6FA0)
#define CLASS_1_E2E44FDCCFF6FA83_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x177A6EF0)
#define CLASS_1_E2E44FDCCFF6FA83_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177A7050)
#define CLASS_1_E2E44FDCCFF6FA83_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177A72E0)
#define CLASS_1_E2E44FDCCFF6FA83_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177A7250)
#define CLASS_1_E2E44FDCCFF6FA83_19_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x177A6ED0)
#define CLASS_1_E2E44FDCCFF6FA83_19_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x177A6EB0)
#define CLASS_1_E2E44FDCCFF6FA83_19_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x177A6EE0)
#define CLASS_1_E2E44FDCCFF6FA83_19_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x177A6EC0)
#define CLASS_1_E2E44FDCCFF6FA83_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177A6D60)
#define CLASS_1_E2E44FDCCFF6FA83_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177A70A0)
#define CLASS_1_E2E44FDCCFF6FA83_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x177A7100)
#define CLASS_1_E2E44FDCCFF6FA83_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177A6D80)
#define CLASS_1_E2E44FDCCFF6FA83_19__CTOR_OFFSET UNITYSDK_OFFSET(0x177A6D70)

inline static constexpr unsigned int Class_1_E2E44FDCCFF6FA83_19_TypeDefinitionIndex = 25223;

class Class_1_E2E44FDCCFF6FA83_19 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Class_1_01FA9B67F39C1E6F* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E2E44FDCCFF6FA83_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_19*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E2E44FDCCFF6FA83_19* Clone()
	{
		return ((::Class_1_E2E44FDCCFF6FA83_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_CLONE_OFFSET))(this);
	}

	::Class_1_01FA9B67F39C1E6F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_01FA9B67F39C1E6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_01FA9B67F39C1E6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_01FA9B67F39C1E6F*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E2E44FDCCFF6FA83_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_19*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E2E44FDCCFF6FA83_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_19*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
