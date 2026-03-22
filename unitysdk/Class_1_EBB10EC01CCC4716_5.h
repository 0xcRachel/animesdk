#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17417020)
#define CLASS_1_EBB10EC01CCC4716_5_CLONE_OFFSET UNITYSDK_OFFSET(0x174164F0)
#define CLASS_1_EBB10EC01CCC4716_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174167B0)
#define CLASS_1_EBB10EC01CCC4716_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17416750)
#define CLASS_1_EBB10EC01CCC4716_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17416A70)
#define CLASS_1_EBB10EC01CCC4716_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174175E0)
#define CLASS_1_EBB10EC01CCC4716_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174174C0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17416610)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17416630)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17416650)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17416670)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x174166B0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x174166D0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x17416710)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x17416730)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174165B0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17416620)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17416640)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17416660)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17416680)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x174166C0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x174166E0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x17416720)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x17416740)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174165C0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x17416600)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_8633AE51B23EBDFD_2_OFFSET UNITYSDK_OFFSET(0x174166A0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_8633AE51B23EBDFD_3_OFFSET UNITYSDK_OFFSET(0x17416700)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x174165E0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x174165F0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_C229FF62B898C0B2_2_OFFSET UNITYSDK_OFFSET(0x17416690)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_C229FF62B898C0B2_3_OFFSET UNITYSDK_OFFSET(0x174166F0)
#define CLASS_1_EBB10EC01CCC4716_5_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x174165D0)
#define CLASS_1_EBB10EC01CCC4716_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17416450)
#define CLASS_1_EBB10EC01CCC4716_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17416CE0)
#define CLASS_1_EBB10EC01CCC4716_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17416D40)
#define CLASS_1_EBB10EC01CCC4716_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17416470)
#define CLASS_1_EBB10EC01CCC4716_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17416460)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_5_TypeDefinitionIndex = 22559;

class Class_1_EBB10EC01CCC4716_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Double Field_1_4; // 0x18
	::System::UInt32 Field_1_10; // 0x20
	::System::UInt32 Field_1_14; // 0x24
	::System::Double Field_1_6; // 0x28
	::System::UInt32 Field_1_26; // 0x30
	::System::UInt32 Field_1_24; // 0x34
	::System::Double Field_1_16; // 0x38
	::System::UInt32 Field_1_12; // 0x40
	::System::UInt32 Field_1_2; // 0x44
	::System::UInt32 Field_1_8; // 0x48
	::System::Double Field_1_22; // 0x50
	::System::UInt32 Field_1_18; // 0x58
	::System::UInt32 Field_1_20; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_5*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_5* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_C229FF62B898C0B2_2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_2(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_8633AE51B23EBDFD_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_3()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_C229FF62B898C0B2_3_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_3(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_8633AE51B23EBDFD_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_5*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_5*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
