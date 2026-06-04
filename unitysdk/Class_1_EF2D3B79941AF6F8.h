#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_103;
class Class_1_2E57B88467AF63C8_8;
class Class_1_455008579EB95638_97;
class Class_1_69EEE63CE134E1EF;
class Class_1_83178EB088CAD885_8;
class Class_1_973F1F5DEEACFA6C_3;
class Class_1_D17272E82AE804C2_923;
class Class_1_F64CEA2EBA77404D;
class Class_1_F91AD0C5A85E4AFA_33;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class String; }

#define CLASS_1_EF2D3B79941AF6F8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB228B0)
#define CLASS_1_EF2D3B79941AF6F8_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB215F0)
#define CLASS_1_EF2D3B79941AF6F8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB218B0)
#define CLASS_1_EF2D3B79941AF6F8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB21880)
#define CLASS_1_EF2D3B79941AF6F8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB21C70)
#define CLASS_1_EF2D3B79941AF6F8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB236D0)
#define CLASS_1_EF2D3B79941AF6F8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB23260)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1AB21650)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1AB21670)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1AB216F0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1AB21750)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1AB217B0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1AB217D0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1AB217F0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1AB21820)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1AB21840)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AB21620)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1AB21870)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1AB216C0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1AB21770)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1AB216A0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1AB21730)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1AB217A0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AB21640)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AB21110)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1AB216E0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1AB21740)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1AB21810)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x1AB21860)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AB21690)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1AB21660)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1AB21680)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1AB21700)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1AB21760)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1AB217C0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1AB217E0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1AB21800)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1AB21830)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1AB21850)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AB21630)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1AB216D0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1AB21780)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1AB216B0)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1AB21720)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_D7B5771D20F18855_OFFSET UNITYSDK_OFFSET(0x1AB21710)
#define CLASS_1_EF2D3B79941AF6F8_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x1AB21790)
#define CLASS_1_EF2D3B79941AF6F8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB21140)
#define CLASS_1_EF2D3B79941AF6F8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB222C0)
#define CLASS_1_EF2D3B79941AF6F8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB22320)
#define CLASS_1_EF2D3B79941AF6F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB23D80)
#define CLASS_1_EF2D3B79941AF6F8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB21300)
#define CLASS_1_EF2D3B79941AF6F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB21150)

inline static constexpr unsigned int Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex = 32157;

class Class_1_EF2D3B79941AF6F8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_455008579EB95638_97*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_455008579EB95638_97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F610);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F618);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F620);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2E57B88467AF63C8_8*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2E57B88467AF63C8_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F628);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_33*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_33*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F630);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D17272E82AE804C2_923*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D17272E82AE804C2_923*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F638);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F64CEA2EBA77404D*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F64CEA2EBA77404D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F640);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_EF2D3B79941AF6F8*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EF2D3B79941AF6F8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F648);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F650);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F658);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_103*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_103*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF2D3B79941AF6F8_TypeDefinitionIndex)->GetStaticField(0x4F660);
	}
	// static const ::System::Int32 Field_1_11 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x47E; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x6F1; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x47A; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x505; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x2AD; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x38D; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x585; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x324; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x4DD; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x13E; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x2CB; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_33 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455008579EB95638_97*>* Field_1_35; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>* Field_1_36; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_37; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_38; // 0x28
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Field_1_39; // 0x30
	::Class_1_69EEE63CE134E1EF* Field_1_40; // 0x38
	::Class_1_83178EB088CAD885_8* Field_1_41; // 0x40
	::Google::Protobuf::UnknownFieldSet* Field_1_42; // 0x48
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F64CEA2EBA77404D*>* Field_1_43; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Field_1_44; // 0x58
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_923*>* Field_1_45; // 0x60
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_103*>* Field_1_46; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E57B88467AF63C8_8*>* Field_1_47; // 0x70
	::Class_1_973F1F5DEEACFA6C_3* Field_1_48; // 0x78
	::System::UInt64 Field_1_49; // 0x80
	::System::UInt32 Field_1_50; // 0x88
	::System::UInt32 Field_1_51; // 0x8C
	::System::UInt32 Field_1_52; // 0x90
	::System::UInt32 Field_1_53; // 0x94
	::System::UInt32 Field_1_54; // 0x98
	::System::UInt32 Field_1_55; // 0x9C
	::System::UInt32 Field_1_56; // 0xA0
	::System::UInt32 Field_1_57; // 0xA4
	::System::UInt32 Field_1_58; // 0xA8
	::System::UInt32 Field_1_59; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EF2D3B79941AF6F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EF2D3B79941AF6F8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EF2D3B79941AF6F8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EF2D3B79941AF6F8* Clone()
	{
		return ((::Class_1_EF2D3B79941AF6F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F64CEA2EBA77404D*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F64CEA2EBA77404D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_69EEE63CE134E1EF* Method_1_24748FC20F375725()
	{
		return ((::Class_1_69EEE63CE134E1EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_69EEE63CE134E1EF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69EEE63CE134E1EF*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_83178EB088CAD885_8* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_83178EB088CAD885_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_83178EB088CAD885_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83178EB088CAD885_8*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_103*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_103*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Method_1_D7B5771D20F18855()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_D7B5771D20F18855_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Class_1_973F1F5DEEACFA6C_3* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_973F1F5DEEACFA6C_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_973F1F5DEEACFA6C_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_3*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E57B88467AF63C8_8*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E57B88467AF63C8_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455008579EB95638_97*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455008579EB95638_97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_923*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_923*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EF2D3B79941AF6F8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EF2D3B79941AF6F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF2D3B79941AF6F8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
