#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4549397855D7737D;
class Class_1_FA4F4A67B1C04320_554;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7C11C261870F1926_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B2EFB0)
#define CLASS_1_7C11C261870F1926_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17B2DEB0)
#define CLASS_1_7C11C261870F1926_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B2E270)
#define CLASS_1_7C11C261870F1926_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B2E210)
#define CLASS_1_7C11C261870F1926_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B2E4F0)
#define CLASS_1_7C11C261870F1926_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B2FCA0)
#define CLASS_1_7C11C261870F1926_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B2F970)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17B2E080)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17B2E0E0)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17B2E100)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17B2E120)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17B2E160)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B2E040)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17B2DFA0)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x17B2E190)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17B2DF00)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17B2DFB0)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_1D3C8F680A3EDA34_2_OFFSET UNITYSDK_OFFSET(0x17B2E1A0)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17B2DF10)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x17B2E070)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_3163C288F3AE2966_2_OFFSET UNITYSDK_OFFSET(0x17B2E0D0)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17B2DF90)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17B2E030)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x17B2E140)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x17B2E150)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x17B2E180)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B2E020)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17B2E090)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17B2E0F0)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17B2E110)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17B2E130)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17B2E170)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B2E050)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17B2E0B0)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x17B2E060)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_CE81D059476B1F49_2_OFFSET UNITYSDK_OFFSET(0x17B2E0C0)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17B2DF80)
#define CLASS_1_7C11C261870F1926_7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17B2E0A0)
#define CLASS_1_7C11C261870F1926_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B2DC30)
#define CLASS_1_7C11C261870F1926_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B2EAF0)
#define CLASS_1_7C11C261870F1926_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B2EB50)
#define CLASS_1_7C11C261870F1926_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B30190)
#define CLASS_1_7C11C261870F1926_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B2DD40)
#define CLASS_1_7C11C261870F1926_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2DC40)

inline static constexpr unsigned int Class_1_7C11C261870F1926_7_TypeDefinitionIndex = 25523;

class Class_1_7C11C261870F1926_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4549397855D7737D*>** StaticGet_Field_1_33()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4549397855D7737D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C11C261870F1926_7_TypeDefinitionIndex)->GetStaticField(0x39090);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_554*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_554*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C11C261870F1926_7_TypeDefinitionIndex)->GetStaticField(0x39098);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_554*>** StaticGet_Field_1_38()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_554*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C11C261870F1926_7_TypeDefinitionIndex)->GetStaticField(0x390A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_554*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_554*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C11C261870F1926_7_TypeDefinitionIndex)->GetStaticField(0x390A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_554*>** StaticGet_Field_1_30()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_554*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C11C261870F1926_7_TypeDefinitionIndex)->GetStaticField(0x390B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x11D; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x291; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_29 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_32 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x7FC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>* Field_1_31; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>* Field_1_12; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::String* Field_1_41; // 0x30
	::System::String* Field_1_2; // 0x38
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>* Field_1_39; // 0x48
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4549397855D7737D*>* Field_1_34; // 0x50
	::System::UInt64 Field_1_22; // 0x58
	::System::UInt32 Field_1_18; // 0x60
	::System::UInt32 Field_1_36; // 0x64
	::System::Boolean Field_1_20; // 0x68
	::System::UInt32 Field_1_24; // 0x6C
	::System::UInt64 Field_1_4; // 0x70
	::System::UInt32 Field_1_26; // 0x78
	::System::UInt64 Field_1_16; // 0x80
	::System::UInt32 Field_1_14; // 0x88
	::System::UInt32 Field_1_28; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7C11C261870F1926_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_7*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7C11C261870F1926_7* Clone()
	{
		return ((::Class_1_7C11C261870F1926_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_2()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_CE81D059476B1F49_2_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_2(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_3163C288F3AE2966_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4549397855D7737D*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4549397855D7737D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_554*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_METHOD_1_1D3C8F680A3EDA34_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7C11C261870F1926_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C11C261870F1926_7*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7C11C261870F1926_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_7*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
