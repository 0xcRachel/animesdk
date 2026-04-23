#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/Enum_3_DB663931210BBC27_6.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_7;
class Class_1_21DCD4640D389503_8;
class Class_1_21DCD4640D389503_9;
class Class_1_B10FFA91399295A9;
class Class_1_E1B199B3D0FB256E;
class Class_1_FB0633E85BD6CF8E;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3AE7F314F70B83F2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A270470)
#define CLASS_1_3AE7F314F70B83F2_CLONE_OFFSET UNITYSDK_OFFSET(0x1A36B610)
#define CLASS_1_3AE7F314F70B83F2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A26F6F0)
#define CLASS_1_3AE7F314F70B83F2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A26F6C0)
#define CLASS_1_3AE7F314F70B83F2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A26FA00)
#define CLASS_1_3AE7F314F70B83F2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2710E0)
#define CLASS_1_3AE7F314F70B83F2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A270CB0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A26F3F0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A26F410)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A26F4E0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A26F580)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A26F640)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A26F660)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A36B640)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A26F5A0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1A26F680)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x1A26F6A0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A26F430)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24B765795E512402_1_OFFSET UNITYSDK_OFFSET(0x1A26F5D0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24B765795E512402_OFFSET UNITYSDK_OFFSET(0x1A26F470)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_3BDC77F20CA26C81_1_OFFSET UNITYSDK_OFFSET(0x1A26F5C0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1A26F460)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x1A26F560)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A26F540)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A26F500)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A36B2A0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A26F570)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A26F450)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A26F400)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A26F420)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A26F4F0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A26F590)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A26F650)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A26F670)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A26F3E0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A26F5B0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1A26F690)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x1A26F6B0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A26F440)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1A26F550)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A26F530)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A26F520)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A26F510)
#define CLASS_1_3AE7F314F70B83F2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A36B2D0)
#define CLASS_1_3AE7F314F70B83F2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A26FF80)
#define CLASS_1_3AE7F314F70B83F2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A26FFE0)
#define CLASS_1_3AE7F314F70B83F2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A271650)
#define CLASS_1_3AE7F314F70B83F2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A36B3F0)
#define CLASS_1_3AE7F314F70B83F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A36B2E0)

inline static constexpr unsigned int Class_1_3AE7F314F70B83F2_TypeDefinitionIndex = 24171;

class Class_1_3AE7F314F70B83F2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B10FFA91399295A9*>** StaticGet_Field_1_27()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B10FFA91399295A9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AE7F314F70B83F2_TypeDefinitionIndex)->GetStaticField(0x121E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_3AE7F314F70B83F2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3AE7F314F70B83F2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AE7F314F70B83F2_TypeDefinitionIndex)->GetStaticField(0x121E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_18()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AE7F314F70B83F2_TypeDefinitionIndex)->GetStaticField(0x121F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_7*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AE7F314F70B83F2_TypeDefinitionIndex)->GetStaticField(0x121F8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_26 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_29 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_31 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_39 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x64; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>* Field_1_12; // 0x10
	::Class_1_E1B199B3D0FB256E* Field_1_40; // 0x18
	::Class_1_FB0633E85BD6CF8E* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10FFA91399295A9*>* Field_1_28; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x30
	::Class_1_21DCD4640D389503_8* Field_1_32; // 0x38
	::Google::Protobuf::ByteString* Field_1_14; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_19; // 0x48
	::Google::Protobuf::ByteString* Field_1_34; // 0x50
	::Class_1_21DCD4640D389503_9* Field_1_42; // 0x58
	::System::UInt32 Field_1_16; // 0x60
	::Enum_3_DB663931210BBC27_6 Field_1_23; // 0x64
	::System::UInt32 Field_1_30; // 0x68
	::System::UInt32 Field_1_3; // 0x6C
	::System::UInt32 Field_1_7; // 0x70
	::System::UInt32 Field_1_38; // 0x74
	::System::UInt32 Field_1_5; // 0x78
	::Enum_3_71AA90D596A09AC8_1 Field_1_25; // 0x7C
	::System::UInt32 Field_1_36; // 0x80
	::System::Boolean Field_1_21; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3AE7F314F70B83F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AE7F314F70B83F2*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3AE7F314F70B83F2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3AE7F314F70B83F2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3AE7F314F70B83F2* Clone()
	{
		return ((::Class_1_3AE7F314F70B83F2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Class_1_FB0633E85BD6CF8E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FB0633E85BD6CF8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FB0633E85BD6CF8E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_24B765795E512402(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_24B765795E512402_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_6 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_6))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_1 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_71AA90D596A09AC8_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_71AA90D596A09AC8_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_1))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10FFA91399295A9*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10FFA91399295A9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_8* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21DCD4640D389503_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21DCD4640D389503_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_8*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81_1()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_3BDC77F20CA26C81_1_OFFSET))(this);
	}

	::System::Void Method_1_24B765795E512402_1(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_24B765795E512402_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Class_1_E1B199B3D0FB256E* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_E1B199B3D0FB256E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_E1B199B3D0FB256E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_9* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_21DCD4640D389503_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_21DCD4640D389503_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_9*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3AE7F314F70B83F2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3AE7F314F70B83F2*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3AE7F314F70B83F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AE7F314F70B83F2*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
