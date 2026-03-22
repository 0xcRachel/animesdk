#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9D5608F598A30CAC_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B139B98AF2D803D6_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174A5A90)
#define CLASS_1_B139B98AF2D803D6_21_CLONE_OFFSET UNITYSDK_OFFSET(0x174A5480)
#define CLASS_1_B139B98AF2D803D6_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174A5740)
#define CLASS_1_B139B98AF2D803D6_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x174A5660)
#define CLASS_1_B139B98AF2D803D6_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174A5810)
#define CLASS_1_B139B98AF2D803D6_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174A5ED0)
#define CLASS_1_B139B98AF2D803D6_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174A5DC0)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x174A5580)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x174A55A0)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x174A55E0)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174A5560)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x174A5610)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x174A5600)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x174A55C0)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x174A5590)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x174A55B0)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x174A55F0)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174A5570)
#define CLASS_1_B139B98AF2D803D6_21_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x174A55D0)
#define CLASS_1_B139B98AF2D803D6_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174A5390)
#define CLASS_1_B139B98AF2D803D6_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174A5900)
#define CLASS_1_B139B98AF2D803D6_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x174A5960)
#define CLASS_1_B139B98AF2D803D6_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174A53B0)
#define CLASS_1_B139B98AF2D803D6_21__CTOR_OFFSET UNITYSDK_OFFSET(0x174A53A0)

inline static constexpr unsigned int Class_1_B139B98AF2D803D6_21_TypeDefinitionIndex = 25965;

class Class_1_B139B98AF2D803D6_21 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x9; // 0x0
	::System::String* Field_1_12; // 0x10
	::Class_1_9D5608F598A30CAC_8* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_10; // 0x2C
	::System::UInt32 Field_1_2; // 0x30
	::System::UInt32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B139B98AF2D803D6_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_21*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B139B98AF2D803D6_21* Clone()
	{
		return ((::Class_1_B139B98AF2D803D6_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Class_1_9D5608F598A30CAC_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_9D5608F598A30CAC_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_9D5608F598A30CAC_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_8*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B139B98AF2D803D6_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B139B98AF2D803D6_21*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B139B98AF2D803D6_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_21*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
