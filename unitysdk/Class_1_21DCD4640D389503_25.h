#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_32.h"
#include "unitysdk/System/Object.h"

class Class_1_4DC6841D62972C54_11;
class Class_1_5CF1DDAFE12F0E87_1;
class Class_1_5FEFAED860528596_36;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1731B720)
#define CLASS_1_21DCD4640D389503_25_CLONE_OFFSET UNITYSDK_OFFSET(0x1731A710)
#define CLASS_1_21DCD4640D389503_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1731AAA0)
#define CLASS_1_21DCD4640D389503_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x1731AA40)
#define CLASS_1_21DCD4640D389503_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1731AD30)
#define CLASS_1_21DCD4640D389503_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1731C3C0)
#define CLASS_1_21DCD4640D389503_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1731C120)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x1731A9E0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x1731AA00)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1731A7A0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1731A7C0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1731A7E0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1731A860)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1731A880)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1731A960)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1731A980)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1731A9A0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1731A9C0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1731A760)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1731A910)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1731A8B0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1731A900)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1731A8A0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1731A840)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1731A800)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1731A830)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1731A790)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1731AA20)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1731A780)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1731AA30)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x1731A9F0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x1731AA10)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1731A7B0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1731A7D0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1731A7F0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1731A870)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1731A890)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1731A970)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1731A990)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1731A9B0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1731A9D0)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1731A770)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1731A850)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1731A810)
#define CLASS_1_21DCD4640D389503_25_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1731A820)
#define CLASS_1_21DCD4640D389503_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1731A3F0)
#define CLASS_1_21DCD4640D389503_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1731B200)
#define CLASS_1_21DCD4640D389503_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x1731B260)
#define CLASS_1_21DCD4640D389503_25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1731C8A0)
#define CLASS_1_21DCD4640D389503_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1731A530)
#define CLASS_1_21DCD4640D389503_25__CTOR_OFFSET UNITYSDK_OFFSET(0x1731A400)

inline static constexpr unsigned int Class_1_21DCD4640D389503_25_TypeDefinitionIndex = 24055;

class Class_1_21DCD4640D389503_25 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5CF1DDAFE12F0E87_1*>** StaticGet_Field_1_45()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5CF1DDAFE12F0E87_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_25_TypeDefinitionIndex)->GetStaticField(0x2DEE0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_25_TypeDefinitionIndex)->GetStaticField(0x2DEE8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_42()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_25_TypeDefinitionIndex)->GetStaticField(0x2DEF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_25_TypeDefinitionIndex)->GetStaticField(0x2DEF8);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x708; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x747; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x214; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x34D; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x4A; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_33 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_37 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_39 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x259; // 0x0
	// static const ::System::Int32 Field_1_44 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_4DC6841D62972C54_11* Field_1_16; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x28
	::System::String* Field_1_26; // 0x30
	::System::String* Field_1_28; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5CF1DDAFE12F0E87_1*>* Field_1_46; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_43; // 0x48
	::Class_1_5FEFAED860528596_36* Field_1_20; // 0x50
	::System::UInt32 Field_1_38; // 0x58
	::System::UInt32 Field_1_34; // 0x5C
	::System::UInt32 Field_1_2; // 0x60
	::System::UInt32 Field_1_10; // 0x64
	::System::UInt32 Field_1_40; // 0x68
	::System::UInt32 Field_1_36; // 0x6C
	::Enum_3_DB663931210BBC27_32 Field_1_18; // 0x70
	::System::UInt32 Field_1_32; // 0x74
	::System::UInt32 Field_1_12; // 0x78
	::System::UInt32 Field_1_30; // 0x7C
	::System::UInt32 Field_1_14; // 0x80
	::System::UInt32 Field_1_24; // 0x84
	::System::UInt32 Field_1_22; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_25*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_25* Clone()
	{
		return ((::Class_1_21DCD4640D389503_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Class_1_4DC6841D62972C54_11* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4DC6841D62972C54_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4DC6841D62972C54_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_11*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_32 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_5FEFAED860528596_36* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_5FEFAED860528596_36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_5FEFAED860528596_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_36*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5CF1DDAFE12F0E87_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5CF1DDAFE12F0E87_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_25*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_25*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
