#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_21DCD4640D389503_2;
class Class_1_45BB92167AED63A0_43;
class Class_1_45BB92167AED63A0_93;
class Class_1_766E1CF11E204F43_9;
class Class_1_7E1E05C17C895270;
class Class_1_7FCED7C391FCF2F8;
class Class_1_87B6445D24FE4E47;
class Class_1_98A08031F550F4C1_7;
class Class_1_9F9C2AEAEFFE3610_5;
class Class_1_D17272E82AE804C2_493;
class Class_1_D17272E82AE804C2_951;
class Class_1_D17272E82AE804C2_952;
class Class_1_D40936EF3BF54118_86;
class Class_1_E14A0A1A8B1F847C_4;
class Class_1_EBB10EC01CCC4716_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_8332CF178AAAF4CC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19CDFCD0)
#define CLASS_1_8332CF178AAAF4CC_CLONE_OFFSET UNITYSDK_OFFSET(0x19CDE5C0)
#define CLASS_1_8332CF178AAAF4CC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19CDE820)
#define CLASS_1_8332CF178AAAF4CC_EQUALS_OFFSET UNITYSDK_OFFSET(0x19CDE7F0)
#define CLASS_1_8332CF178AAAF4CC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19CDED30)
#define CLASS_1_8332CF178AAAF4CC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19CE0B40)
#define CLASS_1_8332CF178AAAF4CC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19CE02A0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19CDE710)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19CDE640)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x19CDE680)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x19CDE730)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x19CDE750)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_5_OFFSET UNITYSDK_OFFSET(0x19CDE780)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_6_OFFSET UNITYSDK_OFFSET(0x19CDE7A0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_7_OFFSET UNITYSDK_OFFSET(0x19CDE7C0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19CDE5F0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19CDE670)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x19CDE6B0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19CDE620)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19CDDEE0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19CDE700)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19CDE6F0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19CDE630)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x19CDE660)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x19CDE6A0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x19CDE6C0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x19CDE6D0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x19CDE6E0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_7_OFFSET UNITYSDK_OFFSET(0x19CDE770)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_8_OFFSET UNITYSDK_OFFSET(0x19CDE7E0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19CDE610)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19CDE720)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19CDE650)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x19CDE690)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x19CDE740)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_4_OFFSET UNITYSDK_OFFSET(0x19CDE760)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_5_OFFSET UNITYSDK_OFFSET(0x19CDE790)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_6_OFFSET UNITYSDK_OFFSET(0x19CDE7B0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_7_OFFSET UNITYSDK_OFFSET(0x19CDE7D0)
#define CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19CDE600)
#define CLASS_1_8332CF178AAAF4CC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19CDDF10)
#define CLASS_1_8332CF178AAAF4CC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CDF6F0)
#define CLASS_1_8332CF178AAAF4CC_WRITETO_OFFSET UNITYSDK_OFFSET(0x19CDF750)
#define CLASS_1_8332CF178AAAF4CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CE1410)
#define CLASS_1_8332CF178AAAF4CC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CDE140)
#define CLASS_1_8332CF178AAAF4CC__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDDF20)

inline static constexpr unsigned int Class_1_8332CF178AAAF4CC_TypeDefinitionIndex = 32580;

class Class_1_8332CF178AAAF4CC : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7FCED7C391FCF2F8*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7FCED7C391FCF2F8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4F9F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_27()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4F9F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9F9C2AEAEFFE3610_5*>** StaticGet_Field_1_30()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9F9C2AEAEFFE3610_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA00);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_87B6445D24FE4E47*>** StaticGet_Field_1_47()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_87B6445D24FE4E47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA08);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_493*>** StaticGet_Field_1_56()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_493*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9F9C2AEAEFFE3610_5*>** StaticGet_Field_1_36()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9F9C2AEAEFFE3610_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA18);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_19()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA20);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E14A0A1A8B1F847C_4*>** StaticGet_Field_1_24()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E14A0A1A8B1F847C_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA28);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA30);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_8332CF178AAAF4CC*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8332CF178AAAF4CC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA38);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_11*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA40);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_952*>** StaticGet_Field_1_16()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_952*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA48);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_43*>** StaticGet_Field_1_33()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8332CF178AAAF4CC_TypeDefinitionIndex)->GetStaticField(0x4FA50);
	}
	// static const ::System::Int32 Field_1_2 = 0xDC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x142; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x72C; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x492; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x5C2; // 0x0
	// static const ::System::Int32 Field_1_29 = 0xE7; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x507; // 0x0
	// static const ::System::Int32 Field_1_35 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x45; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x3F5; // 0x0
	// static const ::System::Int32 Field_1_42 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_44 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_46 = 0x22; // 0x0
	// static const ::System::Int32 Field_1_49 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_51 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_53 = 0x537; // 0x0
	// static const ::System::Int32 Field_1_55 = 0x9; // 0x0
	::Class_1_075C34D03AFA1215_7* Field_1_22; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_28; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_20; // 0x28
	::Class_1_766E1CF11E204F43_9* Field_1_14; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_952*>* Field_1_17; // 0x38
	::Class_1_21DCD4640D389503_2* Field_1_43; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_493*>* Field_1_57; // 0x48
	::Class_1_7E1E05C17C895270* Field_1_54; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>* Field_1_12; // 0x58
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_5*>* Field_1_31; // 0x60
	::Class_1_D40936EF3BF54118_86* Field_1_52; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E14A0A1A8B1F847C_4*>* Field_1_25; // 0x70
	::Class_1_45BB92167AED63A0_93* Field_1_3; // 0x78
	::Class_1_D17272E82AE804C2_951* Field_1_50; // 0x80
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_5*>* Field_1_37; // 0x88
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* Field_1_48; // 0x90
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x98
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_43*>* Field_1_34; // 0xA0
	::Proto::ItemList* Field_1_39; // 0xA8
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FCED7C391FCF2F8*>* Field_1_6; // 0xB0
	::Class_1_98A08031F550F4C1_7* Field_1_45; // 0xB8
	::System::UInt32 Field_1_41; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8332CF178AAAF4CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8332CF178AAAF4CC*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8332CF178AAAF4CC*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8332CF178AAAF4CC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8332CF178AAAF4CC* Clone()
	{
		return ((::Class_1_8332CF178AAAF4CC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_CLONE_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_93* Method_1_24748FC20F375725()
	{
		return ((::Class_1_45BB92167AED63A0_93*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_45BB92167AED63A0_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_93*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FCED7C391FCF2F8*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FCED7C391FCF2F8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Class_1_766E1CF11E204F43_9* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_766E1CF11E204F43_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_766E1CF11E204F43_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_9*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_952*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_952*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_7* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E14A0A1A8B1F847C_4*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E14A0A1A8B1F847C_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_5*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_43*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_43*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_5*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_2* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_21DCD4640D389503_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_21DCD4640D389503_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_2*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::Class_1_98A08031F550F4C1_7* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_98A08031F550F4C1_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_4(::Class_1_98A08031F550F4C1_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_7*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* Method_1_6E1EC2DF63D7020F_7()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_7_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_951* Method_1_24748FC20F375725_5()
	{
		return ((::Class_1_D17272E82AE804C2_951*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_5_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_5(::Class_1_D17272E82AE804C2_951* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_951*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_5_OFFSET))(this, a1);
	}

	::Class_1_D40936EF3BF54118_86* Method_1_24748FC20F375725_6()
	{
		return ((::Class_1_D40936EF3BF54118_86*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_6_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_6(::Class_1_D40936EF3BF54118_86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_86*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_6_OFFSET))(this, a1);
	}

	::Class_1_7E1E05C17C895270* Method_1_24748FC20F375725_7()
	{
		return ((::Class_1_7E1E05C17C895270*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_24748FC20F375725_7_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_7(::Class_1_7E1E05C17C895270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E1E05C17C895270*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_8C8625211DA811AE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_493*>* Method_1_6E1EC2DF63D7020F_8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_493*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_METHOD_1_6E1EC2DF63D7020F_8_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8332CF178AAAF4CC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8332CF178AAAF4CC*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8332CF178AAAF4CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8332CF178AAAF4CC*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8332CF178AAAF4CC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
