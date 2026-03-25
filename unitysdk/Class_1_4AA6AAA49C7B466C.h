#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_4;
class Class_1_A0360CE19DA90CEC_9;
class Class_1_A16A135FC5A0DDB9_1;
class Class_1_BD570EF86E624FB1_3;
class Class_1_CEB0D1FB248C9C52_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class String; }

#define CLASS_1_4AA6AAA49C7B466C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EB56E0)
#define CLASS_1_4AA6AAA49C7B466C_CLONE_OFFSET UNITYSDK_OFFSET(0x17EB44D0)
#define CLASS_1_4AA6AAA49C7B466C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EB4980)
#define CLASS_1_4AA6AAA49C7B466C_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EB4920)
#define CLASS_1_4AA6AAA49C7B466C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EB4CD0)
#define CLASS_1_4AA6AAA49C7B466C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EB6580)
#define CLASS_1_4AA6AAA49C7B466C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EB60C0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17EB4610)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17EB4630)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17EB4750)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17EB4770)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17EB4790)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17EB4860)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EB45F0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17EB46B0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x17EB47C0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x17EB48A0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17EB4570)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17EB46C0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_2_OFFSET UNITYSDK_OFFSET(0x17EB47D0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_3_OFFSET UNITYSDK_OFFSET(0x17EB48B0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17EB4580)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17EB4650)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x17EB4670)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x17EB4690)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x17EB4730)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17EB4530)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17EB4560)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17EB4620)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17EB4640)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17EB4760)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17EB4780)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17EB47A0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17EB4870)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EB4600)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17EB4660)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x17EB4680)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x17EB46A0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_4_OFFSET UNITYSDK_OFFSET(0x17EB4740)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17EB4540)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17EB4550)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17EB4890)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17EB4850)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_CF8C379558248BF8_1_OFFSET UNITYSDK_OFFSET(0x17EB47B0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_CF8C379558248BF8_OFFSET UNITYSDK_OFFSET(0x17EB4520)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17EB4880)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17EB4840)
#define CLASS_1_4AA6AAA49C7B466C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EB4120)
#define CLASS_1_4AA6AAA49C7B466C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EB51A0)
#define CLASS_1_4AA6AAA49C7B466C_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EB5200)
#define CLASS_1_4AA6AAA49C7B466C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EB6B90)
#define CLASS_1_4AA6AAA49C7B466C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EB41D0)
#define CLASS_1_4AA6AAA49C7B466C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB4130)

inline static constexpr unsigned int Class_1_4AA6AAA49C7B466C_TypeDefinitionIndex = 24597;

class Class_1_4AA6AAA49C7B466C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AA6AAA49C7B466C_TypeDefinitionIndex)->GetStaticField(0x34900);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_33()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AA6AAA49C7B466C_TypeDefinitionIndex)->GetStaticField(0x34908);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x36E; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7CB; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x213; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x2FC; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x6B2; // 0x0
	// static const ::System::Int32 Field_1_26 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x6B5; // 0x0
	// static const ::System::Int32 Field_1_35 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_39 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_43 = 0x9; // 0x0
	::Class_1_6E708EAB438EC183_4* Field_1_25; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_34; // 0x18
	::System::String* Field_1_23; // 0x20
	::Class_1_CEB0D1FB248C9C52_2* Field_1_21; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_3; // 0x30
	::System::String* Field_1_9; // 0x38
	::Class_1_BD570EF86E624FB1_3* Field_1_5; // 0x40
	::System::String* Field_1_36; // 0x48
	::Class_1_A0360CE19DA90CEC_9* Field_1_19; // 0x50
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x58
	::System::String* Field_1_44; // 0x60
	::Class_1_A16A135FC5A0DDB9_1* Field_1_17; // 0x68
	::System::Boolean Field_1_42; // 0x70
	::System::Boolean Field_1_38; // 0x71
	::Enum_3_7D0231C413D78CFA Field_1_7; // 0x74
	::System::UInt32 Field_1_29; // 0x78
	::System::UInt32 Field_1_13; // 0x7C
	::System::UInt32 Field_1_27; // 0x80
	::System::UInt32 Field_1_40; // 0x84
	::System::UInt32 Field_1_11; // 0x88
	::System::UInt32 Field_1_15; // 0x8C
	::System::UInt32 Field_1_31; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4AA6AAA49C7B466C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4AA6AAA49C7B466C* Clone()
	{
		return ((::Class_1_4AA6AAA49C7B466C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_CF8C379558248BF8_OFFSET))(this);
	}

	::Class_1_BD570EF86E624FB1_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BD570EF86E624FB1_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BD570EF86E624FB1_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_7D0231C413D78CFA Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_7D0231C413D78CFA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Class_1_A16A135FC5A0DDB9_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_A16A135FC5A0DDB9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_A16A135FC5A0DDB9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_A0360CE19DA90CEC_9* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_A0360CE19DA90CEC_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_A0360CE19DA90CEC_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_9*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Class_1_CEB0D1FB248C9C52_2* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_CEB0D1FB248C9C52_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_CEB0D1FB248C9C52_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_2*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::Class_1_6E708EAB438EC183_4* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_6E708EAB438EC183_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_4(::Class_1_6E708EAB438EC183_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_4*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_CF8C379558248BF8_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4AA6AAA49C7B466C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4AA6AAA49C7B466C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
