#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_55.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_74;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A05E630)
#define CLASS_1_C9DFE5EE7107C629_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1A05D7D0)
#define CLASS_1_C9DFE5EE7107C629_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A05DA90)
#define CLASS_1_C9DFE5EE7107C629_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A05DA60)
#define CLASS_1_C9DFE5EE7107C629_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A05DCE0)
#define CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A05F090)
#define CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A05EE80)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A05D940)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A05D980)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A05D9A0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A05D9C0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A05D9E0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A05DA00)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1A05DA20)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1A05DA40)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A05D880)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A05D830)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A05D930)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1A05D970)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A05D8B0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1A05D8E0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A05D850)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1A05D8F0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A05D800)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A05D440)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A05D950)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A05D990)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A05D9B0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A05D9D0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A05D9F0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A05DA10)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1A05DA30)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1A05DA50)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A05D890)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1A05D960)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A05D8A0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A05D840)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A05D920)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1A05D870)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1A05D8D0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1A05D910)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A05D820)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A05D860)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1A05D8C0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1A05D900)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A05D810)
#define CLASS_1_C9DFE5EE7107C629_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A05D470)
#define CLASS_1_C9DFE5EE7107C629_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A05E120)
#define CLASS_1_C9DFE5EE7107C629_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A05E180)
#define CLASS_1_C9DFE5EE7107C629_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A05F480)
#define CLASS_1_C9DFE5EE7107C629_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A05D580)
#define CLASS_1_C9DFE5EE7107C629_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05D480)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex = 30215;

class Class_1_C9DFE5EE7107C629_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x55170);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_24()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x55178);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x55180);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_21()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x55188);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x55190);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x40B; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x40E; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x2E0; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x7F6; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x30F; // 0x0
	// static const ::System::Int32 Field_1_40 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_42 = 0x4F5; // 0x0
	// static const ::System::Int32 Field_1_44 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_46 = 0x381; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_22; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_25; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x30
	::Class_1_21C7581DFE99F091_74* Field_1_8; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::Boolean Field_1_27; // 0x41
	::System::Boolean Field_1_13; // 0x42
	::System::Boolean Field_1_19; // 0x43
	::System::UInt32 Field_1_35; // 0x44
	::System::UInt32 Field_1_39; // 0x48
	::Enum_3_0A3761FE34514D6C_55 Field_1_29; // 0x4C
	::System::UInt32 Field_1_47; // 0x50
	::System::UInt32 Field_1_31; // 0x54
	::System::UInt32 Field_1_43; // 0x58
	::System::UInt32 Field_1_15; // 0x5C
	::System::UInt32 Field_1_37; // 0x60
	::System::Int64 Field_1_33; // 0x68
	::System::Int64 Field_1_17; // 0x70
	::System::UInt32 Field_1_45; // 0x78
	::System::UInt32 Field_1_41; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_12* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_74* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_74*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_55 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_55(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_55 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_55))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
