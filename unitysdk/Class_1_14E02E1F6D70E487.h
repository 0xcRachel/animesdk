#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_2;
class Class_1_727381C54DC8F89E;
class Class_1_735612C94F558EAE_1;
class Class_1_BDBF4167CAB0A166;
class Class_1_D2F71E01735EE2C6;
class Class_1_D8EAED2BCF3F4D39;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_14E02E1F6D70E487_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176EA2E0)
#define CLASS_1_14E02E1F6D70E487_CLONE_OFFSET UNITYSDK_OFFSET(0x176E8CD0)
#define CLASS_1_14E02E1F6D70E487_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176E8FF0)
#define CLASS_1_14E02E1F6D70E487_EQUALS_OFFSET UNITYSDK_OFFSET(0x176E8FC0)
#define CLASS_1_14E02E1F6D70E487_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176E93C0)
#define CLASS_1_14E02E1F6D70E487_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176EB120)
#define CLASS_1_14E02E1F6D70E487_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176EAC20)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x176E8F60)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x176E8FA0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x176E8D20)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x176E8D40)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x176E8DC0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x176E8DE0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x176E8E00)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x176E8E30)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x176E8E50)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x176E8F00)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x176E8F40)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x176E8D00)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x176E8F20)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x176E8D90)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x176E8DB0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x176E8E20)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_3_OFFSET UNITYSDK_OFFSET(0x176E8ED0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_4_OFFSET UNITYSDK_OFFSET(0x176E8F80)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x176E8D80)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x176E8D70)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x176E8EB0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x176E8EC0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x176E8F90)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x176E8D60)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x176E8F70)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x176E8FB0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x176E8D30)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x176E8D50)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x176E8DD0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x176E8DF0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x176E8E10)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x176E8E40)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x176E8E60)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x176E8F10)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x176E8F50)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x176E8D10)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x176E8F30)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x176E8DA0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x176E8EA0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x176E8EF0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x176E8E80)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x176E8E90)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x176E8EE0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x176E8E70)
#define CLASS_1_14E02E1F6D70E487_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176E87C0)
#define CLASS_1_14E02E1F6D70E487_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176E9C50)
#define CLASS_1_14E02E1F6D70E487_WRITETO_OFFSET UNITYSDK_OFFSET(0x176E9CB0)
#define CLASS_1_14E02E1F6D70E487__CCTOR_OFFSET UNITYSDK_OFFSET(0x176EB8F0)
#define CLASS_1_14E02E1F6D70E487__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176E8A00)
#define CLASS_1_14E02E1F6D70E487__CTOR_OFFSET UNITYSDK_OFFSET(0x176E87D0)

inline static constexpr unsigned int Class_1_14E02E1F6D70E487_TypeDefinitionIndex = 22509;

class Class_1_14E02E1F6D70E487 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D2F71E01735EE2C6*>** StaticGet_Field_1_39()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D2F71E01735EE2C6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30630);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_45()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30638);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_2*>** StaticGet_Field_1_61()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30640);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_28()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30648);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_727381C54DC8F89E*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_727381C54DC8F89E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30650);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_58()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30658);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_BDBF4167CAB0A166*>** StaticGet_Field_1_42()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_BDBF4167CAB0A166*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30660);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_727381C54DC8F89E*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_727381C54DC8F89E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30668);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_19()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30670);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_14()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x30678);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_27 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_32 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_34 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_44 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_47 = 0x14; // 0x0
	// static const ::System::Int32 Field_1_49 = 0x15; // 0x0
	// static const ::System::Int32 Field_1_51 = 0x16; // 0x0
	// static const ::System::Int32 Field_1_53 = 0x17; // 0x0
	// static const ::System::Int32 Field_1_55 = 0x18; // 0x0
	// static const ::System::Int32 Field_1_57 = 0x19; // 0x0
	// static const ::System::Int32 Field_1_60 = 0x1A; // 0x0
	// static const ::System::Int32 Field_1_63 = 0x1B; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_727381C54DC8F89E*>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_46; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_2*>* Field_1_62; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_727381C54DC8F89E*>* Field_1_12; // 0x30
	::Class_1_D8EAED2BCF3F4D39* Field_1_52; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_20; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BDBF4167CAB0A166*>* Field_1_43; // 0x48
	::Class_1_735612C94F558EAE_1* Field_1_17; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_29; // 0x58
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_15; // 0x60
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2F71E01735EE2C6*>* Field_1_40; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_59; // 0x70
	::System::UInt32 Field_1_50; // 0x78
	::System::UInt32 Field_1_6; // 0x7C
	::System::UInt32 Field_1_31; // 0x80
	::System::UInt32 Field_1_64; // 0x84
	::System::UInt32 Field_1_56; // 0x88
	::System::UInt32 Field_1_54; // 0x8C
	::System::UInt32 Field_1_33; // 0x90
	::System::UInt32 Field_1_24; // 0x94
	::System::UInt32 Field_1_4; // 0x98
	::System::UInt32 Field_1_2; // 0x9C
	::System::UInt32 Field_1_22; // 0xA0
	::System::UInt32 Field_1_26; // 0xA4
	::System::Boolean Field_1_35; // 0xA8
	::System::Boolean Field_1_37; // 0xA9
	::System::Boolean Field_1_48; // 0xAA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487* Clone()
	{
		return ((::Class_1_14E02E1F6D70E487*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_727381C54DC8F89E*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_727381C54DC8F89E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_727381C54DC8F89E*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_727381C54DC8F89E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_735612C94F558EAE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_735612C94F558EAE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_1*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2F71E01735EE2C6*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2F71E01735EE2C6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BDBF4167CAB0A166*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BDBF4167CAB0A166*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_3_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Class_1_D8EAED2BCF3F4D39* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D8EAED2BCF3F4D39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D8EAED2BCF3F4D39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_2*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_MERGEFROM_1_OFFSET))(this, a1);
	}
};
