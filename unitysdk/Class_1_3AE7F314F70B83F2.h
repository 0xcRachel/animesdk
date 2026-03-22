#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/Enum_3_DB663931210BBC27_6.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_7;
class Class_1_21DCD4640D389503_8;
class Class_1_21DCD4640D389503_9;
class Class_1_752172F3794CD86F;
class Class_1_AC707EB222DD7018;
class Class_1_FB0633E85BD6CF8E;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3AE7F314F70B83F2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179243F0)
#define CLASS_1_3AE7F314F70B83F2_CLONE_OFFSET UNITYSDK_OFFSET(0x17923360)
#define CLASS_1_3AE7F314F70B83F2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17923670)
#define CLASS_1_3AE7F314F70B83F2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17923640)
#define CLASS_1_3AE7F314F70B83F2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17923980)
#define CLASS_1_3AE7F314F70B83F2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17925020)
#define CLASS_1_3AE7F314F70B83F2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17924C30)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x179233B0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x179233D0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17923480)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17923520)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x179235C0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x179235E0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17923390)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17923540)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x17923600)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x17923620)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x179233F0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_3BDC77F20CA26C81_1_OFFSET UNITYSDK_OFFSET(0x17923560)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17923420)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x17923500)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x179234E0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x179234A0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17923510)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17923410)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x179233C0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x179233E0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17923490)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17923530)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x179235D0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x179235F0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x179233A0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8380E7BF9C2E481D_1_OFFSET UNITYSDK_OFFSET(0x17923570)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x17923430)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17923550)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x17923610)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x17923630)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17923400)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x179234F0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x179234D0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x179234C0)
#define CLASS_1_3AE7F314F70B83F2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x179234B0)
#define CLASS_1_3AE7F314F70B83F2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17923010)
#define CLASS_1_3AE7F314F70B83F2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17923F00)
#define CLASS_1_3AE7F314F70B83F2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17923F60)
#define CLASS_1_3AE7F314F70B83F2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17925530)
#define CLASS_1_3AE7F314F70B83F2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17923130)
#define CLASS_1_3AE7F314F70B83F2__CTOR_OFFSET UNITYSDK_OFFSET(0x17923020)

inline static constexpr unsigned int Class_1_3AE7F314F70B83F2_TypeDefinitionIndex = 22476;

class Class_1_3AE7F314F70B83F2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_752172F3794CD86F*>** StaticGet_Field_1_26()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_752172F3794CD86F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AE7F314F70B83F2_TypeDefinitionIndex)->GetStaticField(0x37BC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_17()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AE7F314F70B83F2_TypeDefinitionIndex)->GetStaticField(0x37BC8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_7*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AE7F314F70B83F2_TypeDefinitionIndex)->GetStaticField(0x37BD0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x64; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_752172F3794CD86F*>* Field_1_27; // 0x10
	::Google::Protobuf::ByteString* Field_1_33; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>* Field_1_11; // 0x20
	::Class_1_21DCD4640D389503_8* Field_1_31; // 0x28
	::Class_1_FB0633E85BD6CF8E* Field_1_8; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x38
	::Class_1_AC707EB222DD7018* Field_1_39; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_18; // 0x48
	::Google::Protobuf::ByteString* Field_1_13; // 0x50
	::Class_1_21DCD4640D389503_9* Field_1_41; // 0x58
	::Enum_3_71AA90D596A09AC8_1 Field_1_24; // 0x60
	::System::Boolean Field_1_20; // 0x64
	::System::UInt32 Field_1_37; // 0x68
	::System::UInt32 Field_1_4; // 0x6C
	::System::UInt32 Field_1_35; // 0x70
	::System::UInt32 Field_1_6; // 0x74
	::Enum_3_DB663931210BBC27_6 Field_1_22; // 0x78
	::System::UInt32 Field_1_29; // 0x7C
	::System::UInt32 Field_1_15; // 0x80
	::System::UInt32 Field_1_2; // 0x84

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

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
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

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_752172F3794CD86F*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_752172F3794CD86F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
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

	::System::Void Method_1_8380E7BF9C2E481D_1(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_8380E7BF9C2E481D_1_OFFSET))(this, a1);
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

	::Class_1_AC707EB222DD7018* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_AC707EB222DD7018*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_AC707EB222DD7018* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC707EB222DD7018*))((::PBYTE)hIl2Cpp + CLASS_1_3AE7F314F70B83F2_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
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
