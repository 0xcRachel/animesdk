#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_23.h"
#include "unitysdk/System/Object.h"

class Class_1_2E81B539DAB8D165_1;
class Class_1_45BB92167AED63A0_25;
class Class_1_D17272E82AE804C2_224;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_60E3B7F7BA004DCE_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9F9E50)
#define CLASS_1_60E3B7F7BA004DCE_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9F9220)
#define CLASS_1_60E3B7F7BA004DCE_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9F9490)
#define CLASS_1_60E3B7F7BA004DCE_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9F9460)
#define CLASS_1_60E3B7F7BA004DCE_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9F9680)
#define CLASS_1_60E3B7F7BA004DCE_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A9FA8E0)
#define CLASS_1_60E3B7F7BA004DCE_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9FA690)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x1A9F93F0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x1A9F9410)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_12_OFFSET UNITYSDK_OFFSET(0x1A9F9440)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A9F92B0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A9F92D0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A9F92F0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A9F9310)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A9F9330)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A9F9350)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1A9F9370)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1A9F9390)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1A9F93D0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A9F9250)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A9F9290)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A9F93C0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A9F9270)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A9F8FB0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A9F9430)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A9F9280)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x1A9F9400)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x1A9F9420)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_12_OFFSET UNITYSDK_OFFSET(0x1A9F9450)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A9F92C0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A9F92E0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A9F9300)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A9F9320)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A9F9340)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A9F9360)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1A9F9380)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1A9F93A0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1A9F93E0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A9F9260)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A9F92A0)
#define CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A9F93B0)
#define CLASS_1_60E3B7F7BA004DCE_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9F8FE0)
#define CLASS_1_60E3B7F7BA004DCE_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9F99E0)
#define CLASS_1_60E3B7F7BA004DCE_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A9F9A40)
#define CLASS_1_60E3B7F7BA004DCE_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9FAC70)
#define CLASS_1_60E3B7F7BA004DCE_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9F9080)
#define CLASS_1_60E3B7F7BA004DCE_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9F8FF0)

inline static constexpr unsigned int Class_1_60E3B7F7BA004DCE_3_TypeDefinitionIndex = 25886;

class Class_1_60E3B7F7BA004DCE_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_224*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_224*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_3_TypeDefinitionIndex)->GetStaticField(0x199B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_3_TypeDefinitionIndex)->GetStaticField(0x199B8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE_3*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_3_TypeDefinitionIndex)->GetStaticField(0x199C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2E81B539DAB8D165_1*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2E81B539DAB8D165_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_3_TypeDefinitionIndex)->GetStaticField(0x199C8);
	}
	// static const ::System::Int32 Field_1_4 = 0x7B2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5D9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x714; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x69; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165_1*>* Field_1_22; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_23; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_24; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_224*>* Field_1_25; // 0x28
	::Class_1_45BB92167AED63A0_25* Field_1_26; // 0x30
	::System::UInt32 Field_1_27; // 0x38
	::System::UInt32 Field_1_28; // 0x3C
	::System::UInt32 Field_1_29; // 0x40
	::System::UInt32 Field_1_30; // 0x44
	::System::UInt32 Field_1_31; // 0x48
	::System::UInt32 Field_1_32; // 0x4C
	::System::UInt32 Field_1_33; // 0x50
	::System::UInt32 Field_1_34; // 0x54
	::System::UInt32 Field_1_35; // 0x58
	::System::UInt32 Field_1_36; // 0x5C
	::System::UInt32 Field_1_37; // 0x60
	::System::UInt32 Field_1_38; // 0x64
	::Enum_3_DB663931210BBC27_23 Field_1_39; // 0x68
	::System::UInt32 Field_1_40; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_60E3B7F7BA004DCE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_3*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_60E3B7F7BA004DCE_3* Clone()
	{
		return ((::Class_1_60E3B7F7BA004DCE_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_224*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_224*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_25* Method_1_24748FC20F375725()
	{
		return ((::Class_1_45BB92167AED63A0_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_45BB92167AED63A0_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_25*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_23 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_23(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_23 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_23))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165_1*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_12()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_02A3D10A9D535169_12_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_12(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_METHOD_1_7786DC814C2FC3BE_12_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_60E3B7F7BA004DCE_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_3*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_60E3B7F7BA004DCE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_3*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
