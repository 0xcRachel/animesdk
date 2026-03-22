#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_3.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1792F2C0)
#define CLASS_1_C9DFE5EE7107C629_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1792E350)
#define CLASS_1_C9DFE5EE7107C629_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1792E630)
#define CLASS_1_C9DFE5EE7107C629_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1792E5D0)
#define CLASS_1_C9DFE5EE7107C629_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1792E8D0)
#define CLASS_1_C9DFE5EE7107C629_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1792FC00)
#define CLASS_1_C9DFE5EE7107C629_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1792FA10)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1792E3F0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1792E430)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1792E460)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1792E480)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1792E4A0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1792E4D0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1792E570)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1792E590)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1792E5B0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1792E3C0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1792E500)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1792E510)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1792E420)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1792E4C0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1792E3E0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1792E450)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1792E410)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1792E400)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1792E440)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1792E470)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1792E490)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1792E4B0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1792E4E0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1792E580)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1792E5A0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1792E5C0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1792E3D0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1792E4F0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1792E540)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1792E560)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1792E3B0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1792E520)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1792E530)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1792E550)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1792E3A0)
#define CLASS_1_C9DFE5EE7107C629_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1792E0A0)
#define CLASS_1_C9DFE5EE7107C629_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1792EDB0)
#define CLASS_1_C9DFE5EE7107C629_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1792EE10)
#define CLASS_1_C9DFE5EE7107C629_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17930010)
#define CLASS_1_C9DFE5EE7107C629_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1792E1F0)
#define CLASS_1_C9DFE5EE7107C629_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1792E0B0)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex = 23833;

class Class_1_C9DFE5EE7107C629_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_6*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x38270);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_28()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x38278);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x38280);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_14()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x38288);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_6*>** StaticGet_Field_1_19()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x38290);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5FA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5D3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x555; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_32 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x3B; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x3E7; // 0x0
	// static const ::System::Int32 Field_1_42 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_44 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_15; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_29; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_6*>* Field_1_12; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_6*>* Field_1_20; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x38
	::System::UInt32 Field_1_43; // 0x40
	::System::UInt32 Field_1_22; // 0x44
	::System::UInt32 Field_1_4; // 0x48
	::System::UInt32 Field_1_45; // 0x4C
	::System::UInt32 Field_1_26; // 0x50
	::System::Single Field_1_35; // 0x54
	::System::UInt32 Field_1_41; // 0x58
	::System::Boolean Field_1_37; // 0x5C
	::System::Boolean Field_1_39; // 0x5D
	::System::Boolean Field_1_2; // 0x5E
	::System::UInt32 Field_1_24; // 0x60
	::System::UInt32 Field_1_31; // 0x64
	::Enum_3_01618AD0437C8486_3 Field_1_33; // 0x68
	::System::UInt32 Field_1_9; // 0x6C
	::System::UInt32 Field_1_17; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_4* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_6*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_6*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_3))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
