#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_7.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_2.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_10;
class Class_1_23C1B7E6B450FFB8;
class Class_1_3C6018135E54E36D;
class Class_1_E0BAE492EF64CE43;
class Class_1_EBB10EC01CCC4716_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1D0B4E25DB90BF59_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19E4DCA0)
#define CLASS_1_1D0B4E25DB90BF59_CLONE_OFFSET UNITYSDK_OFFSET(0x19E4C300)
#define CLASS_1_1D0B4E25DB90BF59_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19E4C700)
#define CLASS_1_1D0B4E25DB90BF59_EQUALS_OFFSET UNITYSDK_OFFSET(0x19E4C6D0)
#define CLASS_1_1D0B4E25DB90BF59_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19E4CD10)
#define CLASS_1_1D0B4E25DB90BF59_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19E4EDD0)
#define CLASS_1_1D0B4E25DB90BF59_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19E4E8B0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x19E4C5D0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x19E4C5F0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_12_OFFSET UNITYSDK_OFFSET(0x19E4C640)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_13_OFFSET UNITYSDK_OFFSET(0x19E4C670)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_14_OFFSET UNITYSDK_OFFSET(0x19E4C690)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19E4C350)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19E4C370)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19E4C390)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19E4C3D0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19E4C490)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x19E4C4B0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x19E4C4D0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x19E4C510)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x19E4C590)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19E4C330)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19E4C3B0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x19E4C620)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_2_OFFSET UNITYSDK_OFFSET(0x19E4C6C0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19E4C580)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19E4BFB0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19E4C500)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x19E4C630)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x19E4C660)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19E4C4F0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x19E4C5E0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x19E4C600)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_12_OFFSET UNITYSDK_OFFSET(0x19E4C650)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_13_OFFSET UNITYSDK_OFFSET(0x19E4C680)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_14_OFFSET UNITYSDK_OFFSET(0x19E4C6A0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19E4C360)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19E4C380)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19E4C3A0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19E4C3E0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19E4C4A0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x19E4C4C0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x19E4C4E0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x19E4C520)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x19E4C5A0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19E4C340)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x19E4C420)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_2_OFFSET UNITYSDK_OFFSET(0x19E4C440)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_3_OFFSET UNITYSDK_OFFSET(0x19E4C460)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_4_OFFSET UNITYSDK_OFFSET(0x19E4C480)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_5_OFFSET UNITYSDK_OFFSET(0x19E4C540)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_6_OFFSET UNITYSDK_OFFSET(0x19E4C560)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x19E4C400)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19E4C3C0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x19E4C610)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_2_OFFSET UNITYSDK_OFFSET(0x19E4C6B0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19E4C570)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x19E4C5C0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x19E4C410)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_2_OFFSET UNITYSDK_OFFSET(0x19E4C430)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_3_OFFSET UNITYSDK_OFFSET(0x19E4C450)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_4_OFFSET UNITYSDK_OFFSET(0x19E4C470)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_5_OFFSET UNITYSDK_OFFSET(0x19E4C530)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_6_OFFSET UNITYSDK_OFFSET(0x19E4C550)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x19E4C3F0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19E4C5B0)
#define CLASS_1_1D0B4E25DB90BF59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19E4BFE0)
#define CLASS_1_1D0B4E25DB90BF59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19E4D480)
#define CLASS_1_1D0B4E25DB90BF59_WRITETO_OFFSET UNITYSDK_OFFSET(0x19E4D4E0)
#define CLASS_1_1D0B4E25DB90BF59__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E4F350)
#define CLASS_1_1D0B4E25DB90BF59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E4C090)
#define CLASS_1_1D0B4E25DB90BF59__CTOR_OFFSET UNITYSDK_OFFSET(0x19E4BFF0)

inline static constexpr unsigned int Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex = 24201;

class Class_1_1D0B4E25DB90BF59 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_10*>** StaticGet_Field_1_34()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x14000);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D*>** StaticGet_Field_1_31()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x14008);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E0BAE492EF64CE43*>** StaticGet_Field_1_55()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E0BAE492EF64CE43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x14010);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_23C1B7E6B450FFB8*>** StaticGet_Field_1_60()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_23C1B7E6B450FFB8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x14018);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_1D0B4E25DB90BF59*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1D0B4E25DB90BF59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x14020);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_26 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_42 = 0x14; // 0x0
	// static const ::System::Int32 Field_1_44 = 0x15; // 0x0
	// static const ::System::Int32 Field_1_46 = 0x16; // 0x0
	// static const ::System::Int32 Field_1_48 = 0x17; // 0x0
	// static const ::System::Int32 Field_1_50 = 0x18; // 0x0
	// static const ::System::Int32 Field_1_52 = 0x19; // 0x0
	// static const ::System::Int32 Field_1_54 = 0x1A; // 0x0
	// static const ::System::Int32 Field_1_57 = 0x1B; // 0x0
	// static const ::System::Int32 Field_1_59 = 0x1C; // 0x0
	// static const ::System::Int32 Field_1_62 = 0x1D; // 0x0
	// static const ::System::Int32 Field_1_64 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_66 = 0x1F; // 0x0
	::Class_1_EBB10EC01CCC4716_2* Field_1_11; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8*>* Field_1_61; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>* Field_1_56; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_10*>* Field_1_35; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>* Field_1_32; // 0x38
	::System::Double Field_1_21; // 0x40
	::System::Double Field_1_19; // 0x48
	::System::Double Field_1_17; // 0x50
	::System::Double Field_1_15; // 0x58
	::System::UInt32 Field_1_9; // 0x60
	::System::UInt32 Field_1_37; // 0x64
	::System::UInt32 Field_1_29; // 0x68
	::Enum_3_ED790DAC948A65A9_3 Field_1_67; // 0x6C
	::Enum_3_ED790DAC948A65A9_2 Field_1_53; // 0x70
	::System::UInt32 Field_1_27; // 0x74
	::System::UInt32 Field_1_3; // 0x78
	::System::UInt32 Field_1_7; // 0x7C
	::Enum_3_DB663931210BBC27_7 Field_1_43; // 0x80
	::System::UInt32 Field_1_63; // 0x84
	::System::UInt32 Field_1_25; // 0x88
	::System::Double Field_1_39; // 0x90
	::System::Double Field_1_41; // 0x98
	::System::UInt32 Field_1_13; // 0xA0
	::System::UInt32 Field_1_5; // 0xA4
	::System::UInt32 Field_1_51; // 0xA8
	::System::UInt32 Field_1_49; // 0xAC
	::System::Int32 Field_1_47; // 0xB0
	::System::UInt32 Field_1_45; // 0xB4
	::System::Double Field_1_23; // 0xB8
	::System::UInt32 Field_1_58; // 0xC0
	::System::UInt32 Field_1_65; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1D0B4E25DB90BF59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D0B4E25DB90BF59*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1D0B4E25DB90BF59*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1D0B4E25DB90BF59*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1D0B4E25DB90BF59* Clone()
	{
		return ((::Class_1_1D0B4E25DB90BF59*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_2*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_2(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_2_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_3()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_3_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_3(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_3_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_4()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_4_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_4(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_10*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_5()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_5_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_5(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_5_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_6_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_6(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_6_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_7 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_7))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_2 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_ED790DAC948A65A9_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_ED790DAC948A65A9_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_2))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_12()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_12_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_12(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_12_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_13()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_13_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_13(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_13_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_14()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_14_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_14(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_14_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_3 Method_1_A96DCA30C6927810_2()
	{
		return ((::Enum_3_ED790DAC948A65A9_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_2_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_2(::Enum_3_ED790DAC948A65A9_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_3))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1D0B4E25DB90BF59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1D0B4E25DB90BF59*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1D0B4E25DB90BF59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D0B4E25DB90BF59*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_MERGEFROM_1_OFFSET))(this, a1);
	}
};
