#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18279620)
#define CLASS_1_EBB10EC01CCC4716_22_CLONE_OFFSET UNITYSDK_OFFSET(0x18278DF0)
#define CLASS_1_EBB10EC01CCC4716_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182790E0)
#define CLASS_1_EBB10EC01CCC4716_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x182790B0)
#define CLASS_1_EBB10EC01CCC4716_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18279200)
#define CLASS_1_EBB10EC01CCC4716_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18279D00)
#define CLASS_1_EBB10EC01CCC4716_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18279BE0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18278F90)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x18278FB0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x18278FD0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x18278FF0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x18279090)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18278EF0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x18278F10)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x18279010)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18278E70)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x18278F20)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_2_OFFSET UNITYSDK_OFFSET(0x18279020)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x18278E80)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18278FA0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18278FC0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x18278FE0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x18279000)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x182790A0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18278F00)
#define CLASS_1_EBB10EC01CCC4716_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18278D40)
#define CLASS_1_EBB10EC01CCC4716_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182793E0)
#define CLASS_1_EBB10EC01CCC4716_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x18279440)
#define CLASS_1_EBB10EC01CCC4716_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18278D80)
#define CLASS_1_EBB10EC01CCC4716_22__CTOR_OFFSET UNITYSDK_OFFSET(0x18278D50)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_22_TypeDefinitionIndex = 25954;

class Class_1_EBB10EC01CCC4716_22 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x3; // 0x0
	::System::String* Field_1_6; // 0x10
	::System::String* Field_1_16; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::UInt32 Field_1_18; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::UInt32 Field_1_10; // 0x38
	::System::UInt32 Field_1_12; // 0x3C
	::System::UInt32 Field_1_14; // 0x40
	::System::UInt32 Field_1_8; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_22*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_22* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_22*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_22*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
