#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9D5608F598A30CAC_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x178D13B0)
#define CLASS_1_9D5608F598A30CAC_7_CLONE_OFFSET UNITYSDK_OFFSET(0x178D1070)
#define CLASS_1_9D5608F598A30CAC_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178D11E0)
#define CLASS_1_9D5608F598A30CAC_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x178D1130)
#define CLASS_1_9D5608F598A30CAC_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178D1290)
#define CLASS_1_9D5608F598A30CAC_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178D1500)
#define CLASS_1_9D5608F598A30CAC_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178D1480)
#define CLASS_1_9D5608F598A30CAC_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x178D10F0)
#define CLASS_1_9D5608F598A30CAC_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x178D1110)
#define CLASS_1_9D5608F598A30CAC_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x178D1100)
#define CLASS_1_9D5608F598A30CAC_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x178D1120)
#define CLASS_1_9D5608F598A30CAC_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178D0FE0)
#define CLASS_1_9D5608F598A30CAC_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178D12D0)
#define CLASS_1_9D5608F598A30CAC_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x178D1330)
#define CLASS_1_9D5608F598A30CAC_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178D1000)
#define CLASS_1_9D5608F598A30CAC_7__CTOR_OFFSET UNITYSDK_OFFSET(0x178D0FF0)

inline static constexpr unsigned int Class_1_9D5608F598A30CAC_7_TypeDefinitionIndex = 23065;

class Class_1_9D5608F598A30CAC_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Class_1_14E02E1F6D70E487_1* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9D5608F598A30CAC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_7*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9D5608F598A30CAC_7* Clone()
	{
		return ((::Class_1_9D5608F598A30CAC_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9D5608F598A30CAC_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9D5608F598A30CAC_7*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9D5608F598A30CAC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_7*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
