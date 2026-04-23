#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/System/Object.h"

class Class_1_FF03248024BAA97A;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19AB3F00)
#define CLASS_1_C9DFE5EE7107C629_7_CLONE_OFFSET UNITYSDK_OFFSET(0x19AB3370)
#define CLASS_1_C9DFE5EE7107C629_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19AB35F0)
#define CLASS_1_C9DFE5EE7107C629_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19AB3590)
#define CLASS_1_C9DFE5EE7107C629_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19AB37B0)
#define CLASS_1_C9DFE5EE7107C629_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19AB4760)
#define CLASS_1_C9DFE5EE7107C629_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19AB45F0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19AB3400)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19AB3450)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19AB3470)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19AB34B0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19AB34D0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x19AB34F0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x19AB3540)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x19AB3570)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19AB33C0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19AB3120)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x19AB3530)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19AB34A0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19AB3560)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19AB3420)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19AB3510)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19AB3410)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19AB3460)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19AB3480)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19AB34C0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19AB34E0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x19AB3500)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x19AB3550)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x19AB3580)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19AB33D0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x19AB3520)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19AB3490)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x19AB3440)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19AB33F0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19AB3430)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19AB33E0)
#define CLASS_1_C9DFE5EE7107C629_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19AB3180)
#define CLASS_1_C9DFE5EE7107C629_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19AB3AF0)
#define CLASS_1_C9DFE5EE7107C629_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x19AB3B50)
#define CLASS_1_C9DFE5EE7107C629_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AB4A70)
#define CLASS_1_C9DFE5EE7107C629_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AB3270)
#define CLASS_1_C9DFE5EE7107C629_7__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB3190)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex = 27005;

class Class_1_C9DFE5EE7107C629_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_33()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x2EEE0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x2EEE8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FF03248024BAA97A*>** StaticGet_Field_1_26()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FF03248024BAA97A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x2EEF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x2EEF8);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x1ED; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_35 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_34; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF03248024BAA97A*>* Field_1_27; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::System::UInt32 Field_1_7; // 0x30
	::System::UInt32 Field_1_14; // 0x34
	::System::UInt32 Field_1_22; // 0x38
	::System::UInt32 Field_1_16; // 0x3C
	::System::UInt32 Field_1_24; // 0x40
	::System::UInt32 Field_1_31; // 0x44
	::Enum_3_0A3761FE34514D6C_32 Field_1_29; // 0x48
	::System::UInt32 Field_1_3; // 0x4C
	::System::Boolean Field_1_12; // 0x50
	::System::Boolean Field_1_5; // 0x51
	::Enum_3_0A3761FE34514D6C_32 Field_1_18; // 0x54
	::System::UInt32 Field_1_20; // 0x58
	::System::UInt32 Field_1_36; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_7* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_32 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF03248024BAA97A*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF03248024BAA97A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_32 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_0A3761FE34514D6C_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_0A3761FE34514D6C_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
