#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_23.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_23;
class Class_1_D17272E82AE804C2_210;
class Class_1_DB57B006CFFCF00A_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_60E3B7F7BA004DCE_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BFBC30)
#define CLASS_1_60E3B7F7BA004DCE_2_CLONE_OFFSET UNITYSDK_OFFSET(0x19BFB020)
#define CLASS_1_60E3B7F7BA004DCE_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BFB290)
#define CLASS_1_60E3B7F7BA004DCE_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BFB260)
#define CLASS_1_60E3B7F7BA004DCE_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BFB480)
#define CLASS_1_60E3B7F7BA004DCE_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BFC6C0)
#define CLASS_1_60E3B7F7BA004DCE_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BFC460)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x19BFB1C0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x19BFB1E0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_12_OFFSET UNITYSDK_OFFSET(0x19BFB200)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19BFB090)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19BFB0C0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19BFB0E0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19BFB100)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19BFB120)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x19BFB140)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x19BFB160)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x19BFB180)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x19BFB1A0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19BFB070)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19BFB240)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19BFB060)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19BFB0B0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19BFAD90)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19BFB230)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19BFB220)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x19BFB1D0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x19BFB1F0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_12_OFFSET UNITYSDK_OFFSET(0x19BFB210)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19BFB0A0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19BFB0D0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19BFB0F0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19BFB110)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19BFB130)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x19BFB150)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x19BFB170)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x19BFB190)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x19BFB1B0)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19BFB080)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19BFB250)
#define CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19BFB050)
#define CLASS_1_60E3B7F7BA004DCE_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BFADC0)
#define CLASS_1_60E3B7F7BA004DCE_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BFB7C0)
#define CLASS_1_60E3B7F7BA004DCE_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BFB820)
#define CLASS_1_60E3B7F7BA004DCE_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BFCA50)
#define CLASS_1_60E3B7F7BA004DCE_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BFAE70)
#define CLASS_1_60E3B7F7BA004DCE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFADD0)

inline static constexpr unsigned int Class_1_60E3B7F7BA004DCE_2_TypeDefinitionIndex = 25915;

class Class_1_60E3B7F7BA004DCE_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_2_TypeDefinitionIndex)->GetStaticField(0x164E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DB57B006CFFCF00A_1*>** StaticGet_Field_1_34()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DB57B006CFFCF00A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_2_TypeDefinitionIndex)->GetStaticField(0x164E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_2_TypeDefinitionIndex)->GetStaticField(0x164F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_210*>** StaticGet_Field_1_37()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_210*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_2_TypeDefinitionIndex)->GetStaticField(0x164F8);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x27F; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x254; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x543; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x39F; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_33 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_39 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A_1*>* Field_1_35; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>* Field_1_38; // 0x28
	::Class_1_45BB92167AED63A0_23* Field_1_40; // 0x30
	::System::UInt32 Field_1_14; // 0x38
	::System::UInt32 Field_1_5; // 0x3C
	::System::UInt32 Field_1_18; // 0x40
	::System::UInt32 Field_1_28; // 0x44
	::System::UInt32 Field_1_12; // 0x48
	::System::UInt32 Field_1_32; // 0x4C
	::System::UInt32 Field_1_30; // 0x50
	::System::UInt32 Field_1_22; // 0x54
	::System::UInt32 Field_1_24; // 0x58
	::System::UInt32 Field_1_7; // 0x5C
	::System::UInt32 Field_1_20; // 0x60
	::System::UInt32 Field_1_26; // 0x64
	::System::UInt32 Field_1_16; // 0x68
	::Enum_3_DB663931210BBC27_23 Field_1_3; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_60E3B7F7BA004DCE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_2*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_60E3B7F7BA004DCE_2* Clone()
	{
		return ((::Class_1_60E3B7F7BA004DCE_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_23 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_23(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_23 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_23))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_12()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_02A3D10A9D535169_12_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_12(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_7786DC814C2FC3BE_12_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_23* Method_1_24748FC20F375725()
	{
		return ((::Class_1_45BB92167AED63A0_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_45BB92167AED63A0_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_23*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_60E3B7F7BA004DCE_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_2*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_60E3B7F7BA004DCE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_2*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
