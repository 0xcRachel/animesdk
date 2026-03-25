#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0CE138302AEB5621_2;
class Class_1_352A8B3482C80E7D_26;
class Class_1_35B19D34B208E77E_8;
class Class_1_6238D7FF0191672E_7;
class Class_1_E7C4009BCC22497A_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B94DDCD70CFEC484_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E11880)
#define CLASS_1_B94DDCD70CFEC484_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17E10AF0)
#define CLASS_1_B94DDCD70CFEC484_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E10E00)
#define CLASS_1_B94DDCD70CFEC484_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E10DD0)
#define CLASS_1_B94DDCD70CFEC484_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E11070)
#define CLASS_1_B94DDCD70CFEC484_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E124C0)
#define CLASS_1_B94DDCD70CFEC484_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E12250)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x17E10CB0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x17E10CE0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_12_OFFSET UNITYSDK_OFFSET(0x17E10D00)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_13_OFFSET UNITYSDK_OFFSET(0x17E10D20)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_14_OFFSET UNITYSDK_OFFSET(0x17E10D70)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_15_OFFSET UNITYSDK_OFFSET(0x17E10D90)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_16_OFFSET UNITYSDK_OFFSET(0x17E10DB0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E10B40)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17E10B60)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17E10B90)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17E10BB0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17E10BF0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17E10C10)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x17E10C30)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x17E10C50)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x17E10C90)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E10B20)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x17E10B80)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17E10D50)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E10C70)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17E10D40)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E10CD0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x17E10CC0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x17E10CF0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_12_OFFSET UNITYSDK_OFFSET(0x17E10D10)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_13_OFFSET UNITYSDK_OFFSET(0x17E10D30)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_14_OFFSET UNITYSDK_OFFSET(0x17E10D80)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_15_OFFSET UNITYSDK_OFFSET(0x17E10DA0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_16_OFFSET UNITYSDK_OFFSET(0x17E10DC0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E10B50)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17E10B70)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17E10BA0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17E10BC0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17E10C00)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17E10C20)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x17E10C40)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x17E10C60)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x17E10CA0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E10B30)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17E10D60)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E10C80)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E10BE0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E10BD0)
#define CLASS_1_B94DDCD70CFEC484_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E108A0)
#define CLASS_1_B94DDCD70CFEC484_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E11330)
#define CLASS_1_B94DDCD70CFEC484_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E11390)
#define CLASS_1_B94DDCD70CFEC484_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E128D0)
#define CLASS_1_B94DDCD70CFEC484_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E10950)
#define CLASS_1_B94DDCD70CFEC484_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E108B0)

inline static constexpr unsigned int Class_1_B94DDCD70CFEC484_1_TypeDefinitionIndex = 24914;

class Class_1_B94DDCD70CFEC484_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_1_TypeDefinitionIndex)->GetStaticField(0x1F2F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_26*>** StaticGet_Field_1_40()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_1_TypeDefinitionIndex)->GetStaticField(0x1F2F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_35B19D34B208E77E_8*>** StaticGet_Field_1_31()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_35B19D34B208E77E_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_1_TypeDefinitionIndex)->GetStaticField(0x1F300);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2C2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x138; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x337; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x56; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x75E; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x389; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_37 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_39 = 0x1A1; // 0x0
	// static const ::System::Int32 Field_1_42 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_44 = 0x36A; // 0x0
	// static const ::System::Int32 Field_1_46 = 0x43E; // 0x0
	// static const ::System::Int32 Field_1_48 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_8*>* Field_1_32; // 0x18
	::Class_1_6238D7FF0191672E_7* Field_1_25; // 0x20
	::Class_1_0CE138302AEB5621_2* Field_1_43; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_26*>* Field_1_41; // 0x30
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>* Field_1_9; // 0x38
	::System::UInt32 Field_1_47; // 0x40
	::System::UInt32 Field_1_45; // 0x44
	::System::UInt32 Field_1_11; // 0x48
	::System::UInt32 Field_1_17; // 0x4C
	::System::UInt32 Field_1_36; // 0x50
	::System::UInt32 Field_1_6; // 0x54
	::System::Boolean Field_1_15; // 0x58
	::System::UInt32 Field_1_19; // 0x5C
	::System::UInt32 Field_1_38; // 0x60
	::System::UInt32 Field_1_4; // 0x64
	::System::UInt32 Field_1_13; // 0x68
	::System::UInt32 Field_1_23; // 0x6C
	::System::UInt32 Field_1_34; // 0x70
	::System::UInt32 Field_1_2; // 0x74
	::System::UInt32 Field_1_21; // 0x78
	::System::UInt32 Field_1_49; // 0x7C
	::System::UInt32 Field_1_27; // 0x80
	::System::UInt32 Field_1_29; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B94DDCD70CFEC484_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B94DDCD70CFEC484_1*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B94DDCD70CFEC484_1* Clone()
	{
		return ((::Class_1_B94DDCD70CFEC484_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Class_1_6238D7FF0191672E_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6238D7FF0191672E_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6238D7FF0191672E_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_7*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_8*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_12()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_12_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_12(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_12_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_13()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_13_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_13(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_13_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_26*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_26*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Class_1_0CE138302AEB5621_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_0CE138302AEB5621_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_0CE138302AEB5621_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CE138302AEB5621_2*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_14()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_14_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_14(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_14_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_15()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_15_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_15(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_15_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_16()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_16_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_16(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_16_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B94DDCD70CFEC484_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B94DDCD70CFEC484_1*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B94DDCD70CFEC484_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B94DDCD70CFEC484_1*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
