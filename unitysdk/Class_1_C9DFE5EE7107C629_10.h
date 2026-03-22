#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_52.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_63;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174A17A0)
#define CLASS_1_C9DFE5EE7107C629_10_CLONE_OFFSET UNITYSDK_OFFSET(0x174A0AC0)
#define CLASS_1_C9DFE5EE7107C629_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174A0D00)
#define CLASS_1_C9DFE5EE7107C629_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x174A0CD0)
#define CLASS_1_C9DFE5EE7107C629_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174A0F20)
#define CLASS_1_C9DFE5EE7107C629_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174A2060)
#define CLASS_1_C9DFE5EE7107C629_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174A1E80)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x174A0B30)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x174A0B50)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x174A0B90)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x174A0C30)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x174A0C80)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174A0AF0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x174A0B70)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x174A0B20)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x174A0C00)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x174A0BE0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x174A0BC0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x174A0C50)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x174A0CA0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x174A0BB0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x174A0B40)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x174A0B60)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x174A0BA0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x174A0C40)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x174A0C90)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174A0B00)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x174A0BF0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x174A0BD0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x174A0B80)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x174A0B10)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x174A0C70)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x174A0CC0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x174A0C20)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x174A0C60)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x174A0CB0)
#define CLASS_1_C9DFE5EE7107C629_10_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x174A0C10)
#define CLASS_1_C9DFE5EE7107C629_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174A0750)
#define CLASS_1_C9DFE5EE7107C629_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174A1370)
#define CLASS_1_C9DFE5EE7107C629_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x174A13D0)
#define CLASS_1_C9DFE5EE7107C629_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x174A23E0)
#define CLASS_1_C9DFE5EE7107C629_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174A0850)
#define CLASS_1_C9DFE5EE7107C629_10__CTOR_OFFSET UNITYSDK_OFFSET(0x174A0760)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_10_TypeDefinitionIndex = 25398;

class Class_1_C9DFE5EE7107C629_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_28()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_10_TypeDefinitionIndex)->GetStaticField(0x37C00);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_35()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_10_TypeDefinitionIndex)->GetStaticField(0x37C08);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_17()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_10_TypeDefinitionIndex)->GetStaticField(0x37C10);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_14()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_10_TypeDefinitionIndex)->GetStaticField(0x37C18);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x23D; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_27 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x75A; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x6E8; // 0x0
	// static const ::System::Int32 Field_1_34 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_36; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_18; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_15; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_29; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x30
	::Class_1_4CF8088A158DCE25_63* Field_1_10; // 0x38
	::System::Int64 Field_1_20; // 0x40
	::System::UInt32 Field_1_33; // 0x48
	::Enum_3_0A3761FE34514D6C_52 Field_1_4; // 0x4C
	::System::UInt32 Field_1_8; // 0x50
	::System::UInt32 Field_1_2; // 0x54
	::System::UInt32 Field_1_26; // 0x58
	::System::Boolean Field_1_38; // 0x5C
	::System::Boolean Field_1_24; // 0x5D
	::System::Boolean Field_1_31; // 0x5E
	::System::Int64 Field_1_22; // 0x60
	::System::UInt32 Field_1_6; // 0x68
	::System::UInt32 Field_1_12; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_10*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_10* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_52 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_52(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_52 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_52))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Class_1_4CF8088A158DCE25_63* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4CF8088A158DCE25_63*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4CF8088A158DCE25_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_63*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_10*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_10*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
