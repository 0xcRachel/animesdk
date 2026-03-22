#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0CEFC0137E18E4D8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_58C02EFC41D1F04D_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A10060)
#define CLASS_1_58C02EFC41D1F04D_21_CLONE_OFFSET UNITYSDK_OFFSET(0x17A0FC50)
#define CLASS_1_58C02EFC41D1F04D_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A0FE80)
#define CLASS_1_58C02EFC41D1F04D_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A0FDD0)
#define CLASS_1_58C02EFC41D1F04D_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A0FF30)
#define CLASS_1_58C02EFC41D1F04D_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A101A0)
#define CLASS_1_58C02EFC41D1F04D_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A10130)
#define CLASS_1_58C02EFC41D1F04D_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17A0FDB0)
#define CLASS_1_58C02EFC41D1F04D_21_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17A0FD90)
#define CLASS_1_58C02EFC41D1F04D_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17A0FDC0)
#define CLASS_1_58C02EFC41D1F04D_21_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17A0FDA0)
#define CLASS_1_58C02EFC41D1F04D_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A0FB00)
#define CLASS_1_58C02EFC41D1F04D_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A0FF80)
#define CLASS_1_58C02EFC41D1F04D_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A0FFE0)
#define CLASS_1_58C02EFC41D1F04D_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A0FB20)
#define CLASS_1_58C02EFC41D1F04D_21__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0FB10)

inline static constexpr unsigned int Class_1_58C02EFC41D1F04D_21_TypeDefinitionIndex = 25804;

class Class_1_58C02EFC41D1F04D_21 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_0CEFC0137E18E4D8* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_58C02EFC41D1F04D_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_21*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_58C02EFC41D1F04D_21* Clone()
	{
		return ((::Class_1_58C02EFC41D1F04D_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_CLONE_OFFSET))(this);
	}

	::Class_1_0CEFC0137E18E4D8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0CEFC0137E18E4D8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0CEFC0137E18E4D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CEFC0137E18E4D8*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_58C02EFC41D1F04D_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_21*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_58C02EFC41D1F04D_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_21*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
